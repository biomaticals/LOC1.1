#include "GameplayAbilitySystem/GameplayAbility\Public\GAGreystoneMakeway.h"
#include "GameplayAbilitySystem/AttributeSet\Public\LOCAttributeSet.h"
#include "Abilities/Tasks/AbilityTask_WaitGameplayEvent.h"
#include "Abilities/Tasks/AbilityTask_PlayMontageAndWait.h"
#include "Abilities/Tasks/AbilityTask_WaitDelay.h"
#include "Character\Public\LOCCharacter.h"
#include "UObject\ConstructorHelpers.h"
#include "Kismet/KismetSystemLibrary.h"

UGAGreystoneMakeway::UGAGreystoneMakeway()
	: TotalHitCount   { 10 }
	, SecondsForHit	  { 1.0f }
	, DamageRange	  { 300.0f }
	, GELevelforTarget { 1.f}
	, TimerHandle	  {}
{
	ConstructorHelpers::FObjectFinder<UAnimMontage> SkillMontageFinder(TEXT("/Game/ParagonGreystone/Characters/Heroes/Greystone/Animations/AM_MakeWay.AM_MakeWay"));
	SkillMontage = SkillMontageFinder.Object;
}

void UGAGreystoneMakeway::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	if (bHasBlueprintActivate)
	{
		K2_ActivateAbility();
	}
	else if (bHasBlueprintActivateFromEvent)
	{
		if (TriggerEventData)
		{
			K2_ActivateAbilityFromEvent(*TriggerEventData);
		}
		else
		{
			bool bReplicateEndAbility = false;
			bool bWasCancelled		  = true;
			EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
			return;
		}
	}
	else
	{
		if (CommitAbility(Handle, ActorInfo, ActivationInfo))
		{	
			UAbilitySystemComponent*		SourceComponent	 = GetAbilitySystemComponentFromActorInfo();
			UGameplayAbility*				SourceAbility	 = SourceComponent->GetAnimatingAbility();
			USkeletalMeshComponent*			SourceMesh		 = GetCharacterInfo()->GetMesh();
			FGameplayTag					HitTag			 = FGameplayTag::RequestGameplayTag(TEXT("Ability.Skill.Casting.Self.MakeWay"));;
						
			UAbilityTask_PlayMontageAndWait* MontageTask = UAbilityTask_PlayMontageAndWait::CreatePlayMontageAndWaitProxy(this, "none", SkillMontage, 1, "none", false);		
			MontageTask->OnCancelled.AddDynamic(this,&UGAGreystoneMakeway::OnCancelled);
			MontageTask->ReadyForActivation();
			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("MontageTask"));

			UAbilityTask_WaitGameplayEvent* WaitEventTask = UAbilityTask_WaitGameplayEvent::WaitGameplayEvent(this, HitTag);
			WaitEventTask->EventReceived.AddDynamic(this, &UGAGreystoneMakeway::OnHitStart);
			WaitEventTask->ReadyForActivation();
			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("WaitEventTask"));
		}
	}
}

void UGAGreystoneMakeway::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
	GetAbilitySystemComponentFromActorInfo()->RemoveGameplayCue(OwnerCueTag);
}

void UGAGreystoneMakeway::OnCancelled()
{

}

void UGAGreystoneMakeway::OnHitStart(const FGameplayEventData Payload)
{	
	OwnerCueTag = FGameplayTag::RequestGameplayTag(TEXT("Ability.Skill.Casting.Self.MakeWay"));
	FGameplayEffectContextHandle EffectContextHandle	= GetAbilitySystemComponentFromActorInfo()->MakeEffectContext();

	GetAbilitySystemComponentFromActorInfo()->ExecuteGameplayCue(OwnerCueTag, EffectContextHandle);
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("ExecuteGameplayCue"));
	
	GetWorld()->GetTimerManager().SetTimer(TimerHandle,this, &UGAGreystoneMakeway::TimerFunction,SecondsForHit, true);
}

void UGAGreystoneMakeway::TimerFunction()
{
	
	if (CurrentHitCount == TotalHitCount)
	{	
		GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
		K2_EndAbility();
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Clear&end"));
	}
	else
	{
		OnHit();
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Hit"));
	}
	CurrentHitCount++;
}

void UGAGreystoneMakeway::OnHit()
{	
	UObject*							   World = GetWorld();
	FVector								   SpherePos = GetCharacterInfo()->GetActorLocation();
	TArray<TEnumAsByte< EObjectTypeQuery>> TargetObjectType;	
	TArray<AActor*>						   ActorsToIgnore;	
	TArray<AActor*>						   OverlappedActors;
	TargetObjectType.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_Pawn));
	ActorsToIgnore.Add_GetRef(GetCharacterInfo());
	UKismetSystemLibrary::SphereOverlapActors(World, SpherePos, DamageRange, TargetObjectType, nullptr, ActorsToIgnore, OverlappedActors);
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("SphereOverlapActors"));		

	for (AActor* Actor : OverlappedActors)
	{
		ALOCCharacter* TargetActor = Cast<ALOCCharacter>(Actor);
		UAbilitySystemComponent* TargetComponent = TargetActor->GetAbilitySystemComponent();
		
		GetAbilitySystemComponentFromActorInfo()->ApplyGameplayEffectToTarget(GEforTarget.GetDefaultObject(), TargetComponent, GELevelforTarget);
		//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("AsOverlappedActors"));
	}
}

