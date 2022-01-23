#include "..\Public\GAGreystoneMakeWay.h"
#include "..\..\AttributeSet\public\LOCAttributeSet.h"
#include "GameplayAbilitySystem/GameplayAbility/Public/GAGreystoneMakeWay.h"
#include "Abilities/Tasks/AbilityTask_WaitGameplayEvent.h"
#include "Abilities/Tasks/AbilityTask_PlayMontageAndWait.h"
#include "Abilities/Tasks/AbilityTask_WaitDelay.h"
#include "Kismet/KismetSystemLibrary.h"
#include "..\..\..\Character\Public\LOCCharacter.h"


UGAGreystoneMakeWay::UGAGreystoneMakeWay()
{
	static ConstructorHelpers::FObjectFinder<UAnimMontage> obj(TEXT("/Game/ParagonGreystone/Characters/Heroes/Greystone/Animations/AM_MakeWay.AM_MakeWay"));
	SkillMontage = obj.Object;
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
			CurrentHitCount									 = 0;
			TotalHitCount									 = 5;

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

			
			CommitAbility(Handle, ActorInfo, ActivationInfo, nullptr);
			
			UAbilityTask_WaitDelay* DelayTask = UAbilityTask_WaitDelay::WaitDelay(this, SecondsForHit);
			//DelayTask->OnFinish.AddDynamic(this, &UGAGreystoneMakeWay::OnHit);
			for (; CurrentHitCount <= TotalHitCount; CurrentHitCount++)
			{
				//DelayTask->ReadyForActivation();
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("DelayTask"));
				//ScanEnemies();
			}

			K2_EndAbility();
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
	UAbilitySystemComponent* AbilitySystemComponent = GetAbilitySystemComponentFromActorInfo();
	FGameplayTag OwnerTag = FGameplayTag::RequestGameplayTag(TEXT("Ability.Skill.Casting.Self.MakeWay"));
	FGameplayEffectContextHandle EffectContextHandle = AbilitySystemComponent->MakeEffectContext();

	AbilitySystemComponent->ExecuteGameplayCue(OwnerTag, EffectContextHandle);
	
}

//void UGAGreystoneMakeWay::OnHit(const FGameplayEventData Payload)
//{
//	
//}

//
//void UGAGreystoneMakeWay::ScanEnemies(const FGameplayEventData Payload)
//{GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("This is an on screen message!4"));
//	UObject* World = GetWorld();
//	FVector SpherePos = GetCharacterInfo()->GetActorLocation();
//	const float SphereRadius = 300;
//
//	TArray<TEnumAsByte< EObjectTypeQuery>> TargetObjectType;
//	TargetObjectType.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_Pawn));
//
//	TArray<AActor*> OverlappedActors;
//	UKismetSystemLibrary::SphereOverlapActors(World, SpherePos, SphereRadius, TargetObjectType, nullptr, ActorsToIgnore, OverlappedActors);
//
//	GEforTarget->DurationPolicy = EGameplayEffectDurationType::Instant;
//	FGameplayModifierInfo ModifierInfo;
//	ModifierInfo.Attribute = ULOCAttributeSet::GetHealthAttribute();
//	ModifierInfo.ModifierMagnitude = FGameplayEffectModifierMagnitude(-1);
//	GEforTarget->Modifiers.Add(ModifierInfo);
//	for (AActor* Actor : OverlappedActors)
//	{
//		ALOCCharacter* TargetActor = Cast<ALOCCharacter>(Actor);
//		UAbilitySystemComponent* TargetComponent = TargetActor->GetAbilitySystemComponent();
//		GetAbilitySystemComponentFromActorInfo()->ApplyGameplayEffectToTarget(GEforTarget, TargetComponent, GELevelforTaget);
//	}
//}
//
