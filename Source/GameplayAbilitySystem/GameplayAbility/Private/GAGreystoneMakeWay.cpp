#include "..\Public\GAGreystoneMakeWay.h"
#include "..\..\AttributeSet\public\LOCAttributeSet.h"
#include "GameplayAbilitySystem/GameplayAbility/Public/GAGreystoneMakeWay.h"
#include "Abilities/Tasks/AbilityTask_WaitGameplayEvent.h"
#include "Abilities/Tasks/AbilityTask_PlayMontageAndWait.h"
#include "Abilities/Tasks/AbilityTask_WaitDelay.h"
#include "UObject\ConstructorHelpers.h"
#include "Kismet/KismetSystemLibrary.h"
#include "..\..\..\Character\Public\LOCCharacter.h"

UGAGreystoneMakeWay::UGAGreystoneMakeWay()
	: TotalHitCount   { 10 }
	, SecondsForHit	  { 1.0f }
	, DamageRange	  { 300.0f }
	, GELevelforTaget { 1.f}
{
	ConstructorHelpers::FObjectFinder<UAnimMontage> SkillMontageFinder(TEXT("/Game/ParagonGreystone/Characters/Heroes/Greystone/Animations/AM_MakeWay.AM_MakeWay"));
	SkillMontage = SkillMontageFinder.Object;
}

void UGAGreystoneMakeWay::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
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
			MontageTask->OnCancelled.AddDynamic(this,&UGAGreystoneMakeWay::OnCancelled);
			MontageTask->ReadyForActivation();
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("MontageTask"));

			UAbilityTask_WaitGameplayEvent* WaitEventTask = UAbilityTask_WaitGameplayEvent::WaitGameplayEvent(this, HitTag);
			WaitEventTask->EventReceived.AddDynamic(this, &UGAGreystoneMakeWay::OnHitStart);
			WaitEventTask->ReadyForActivation();
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("WaitEventTask"));
		}
	}
}

void UGAGreystoneMakeWay::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

void UGAGreystoneMakeWay::OnCancelled()
{

}

void UGAGreystoneMakeWay::OnHitStart(const FGameplayEventData Payload)
{	
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("OnHitStart"));

	UAbilitySystemComponent*	 AbilitySystemComponent = GetAbilitySystemComponentFromActorInfo();
	FGameplayTag				 OwnerTag				= FGameplayTag::RequestGameplayTag(TEXT("Ability.Skill.Casting.Self.MakeWay"));
	FGameplayEffectContextHandle EffectContextHandle	= AbilitySystemComponent->MakeEffectContext();

	AbilitySystemComponent->ExecuteGameplayCue(OwnerTag, EffectContextHandle);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("ExecuteGameplayCue"));
	
	GetWorld()->GetTimerManager().SetTimer(TimerHandle,this, &UGAGreystoneMakeWay::TimerFunction,SecondsForHit, true);
}

void UGAGreystoneMakeWay::TimerFunction()
{
	
	if (TotalHitCount == 0.0f)
	{	
		GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
		K2_EndAbility();
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Clear"));
	}
	else
	{
		OnHit();
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Hit"));
	}
	TotalHitCount--;
}

void UGAGreystoneMakeWay::OnHit()
{	
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("ScanEnemies"));
	UObject* World = GetWorld();
	FVector SpherePos = GetCharacterInfo()->GetActorLocation();
	DamageRange = 300;

	TArray<TEnumAsByte< EObjectTypeQuery>> TargetObjectType;
	TargetObjectType.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_Pawn));
	TArray<AActor*> ActorsToIgnore;
	ActorsToIgnore.Add_GetRef(GetCharacterInfo());
	TArray<AActor*> OverlappedActors;
	UKismetSystemLibrary::SphereOverlapActors(World, SpherePos, DamageRange, TargetObjectType, nullptr, ActorsToIgnore, OverlappedActors);
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("SphereOverlapActors"));		

	for (AActor* Actor : OverlappedActors)
	{
		ALOCCharacter* TargetActor = Cast<ALOCCharacter>(Actor);
		UAbilitySystemComponent* TargetComponent = TargetActor->GetAbilitySystemComponent();
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("AsOverlappedActors"));
		GetAbilitySystemComponentFromActorInfo()->ApplyGameplayEffectToTarget(GEforTarget.GetDefaultObject(), TargetComponent, GELevelforTaget);
	}
}

