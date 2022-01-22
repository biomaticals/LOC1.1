#include "GameplayAbilitySystem/GameplayAbility/Public/GAGreystoneMakeWay.h"
#include "Abilities/Tasks/AbilityTask_WaitGameplayEvent.h"

UGAGreystoneMakeWay::UGAGreystoneMakeWay()
	:CurrentHitCount{}
	, TotalHitCount{}
	, SkillMontage{}
	, GEforTaget{}
	, GELevelforTaget{}
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
			bool bWasCancelled = true;
			EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
		}
	}
	else
	{
		if (CommitAbility(Handle, ActorInfo, ActivationInfo))
		{			
			UAbilitySystemComponent* AbilitySystemComponent = GetAbilitySystemComponentFromActorInfo();
			UGameplayAbility* GameplayAbility = AbilitySystemComponent->GetAnimatingAbility();
			USkeletalMeshComponent* Mesh = GetCharacterInfo()->GetMesh();
			FGameplayTag HitTag = FGameplayTag::RequestGameplayTag(TEXT("Ability.Skill.Casting.Self.MakeWay"));;
		
			UAbilityTask_WaitGameplayEvent* HitTask = UAbilityTask_WaitGameplayEvent::WaitGameplayEvent(this, HitTag);
			HitTask->EventReceived.AddDynamic(this, &UGAGreystoneMakeWay::OnHit);
			//HitTask->ReadyForActivation();
			AbilitySystemComponent->PlayMontage(GameplayAbility, ActivationInfo, SkillMontage, 1.0, "none", 0.0);
			//UAbilityTask_WaitGameplayEvent::WaitGameplayEvent(GameplayAbility, Tag, nullptr, true, true);
			K2_EndAbility();
		}
	}
	//ALOCCharacter* Owner = GetCharacterInfo();
	//FGameplayAbilityActivationInfo a;
	//Owner->AbilitySystemComponent->PlayMontage(nullptr,a,SkillMontage,1.0,"none",0.0);
	//PlayMontageAndWait(ActorInfo)
	//if (GEngine)
	//	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Some debug message!"));
}

void UGAGreystoneMakeWay::OnHit(const FGameplayEventData Payload)
{

}