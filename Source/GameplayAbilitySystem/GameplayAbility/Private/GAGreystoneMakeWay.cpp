#include "..\Public\GAGreystoneMakeWay.h"
#include "..\..\AttributeSet\public\LOCAttributeSet.h"
#include "GameplayAbilitySystem/GameplayAbility/Public/GAGreystoneMakeWay.h"
#include "Abilities/Tasks/AbilityTask_WaitGameplayEvent.h"
#include "Kismet/KismetSystemLibrary.h"


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
			bool bWasCancelled = true;
			EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
			return;
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
			CurrentHitCount = 0;
			TotalHitCount = 5;

			UAbilityTask_WaitGameplayEvent* HitTask = UAbilityTask_WaitGameplayEvent::WaitGameplayEvent(this, HitTag);
			HitTask->EventReceived.AddDynamic(this, &UGAGreystoneMakeWay::OnHit);
			HitTask->ReadyForActivation();
			AbilitySystemComponent->PlayMontage(GameplayAbility, ActivationInfo, SkillMontage, 1.0, "none", 0.0);
			CommitAbility(Handle, ActorInfo, ActivationInfo, nullptr);
			for (; CurrentHitCount >= TotalHitCount; CurrentHitCount++)
			{

			}

			K2_EndAbility();
		}
	}
}

void UGAGreystoneMakeWay::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

void UGAGreystoneMakeWay::OnHit(const FGameplayEventData Payload)
{
	UAbilitySystemComponent* AbilitySystemComponent = GetAbilitySystemComponentFromActorInfo();
	FGameplayTag OwnerTag = FGameplayTag::RequestGameplayTag(TEXT("Ability.Skill.Casting.Self.MakeWay"));
	FGameplayEffectContextHandle EffectContextHandle = AbilitySystemComponent->MakeEffectContext();

	AbilitySystemComponent->ExecuteGameplayCue(OwnerTag, EffectContextHandle);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("This is an on screen message!"));
	//AbilitySystemComponent->ExecuteGameplayCue();
}

void UGAGreystoneMakeWay::ScanEnemies()
{
	UObject* World = GetWorld();
	FVector SpherePos = GetCharacterInfo()->GetActorLocation();
	const float SphereRadius = 300;
	TArray<TEnumAsByte< EObjectTypeQuery>> TargetObjectType;
	TargetObjectType.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_Pawn));
	TArray<AActor*> OverlappedActors;
	UKismetSystemLibrary::SphereOverlapActors(World, SpherePos, SphereRadius, TargetObjectType, nullptr, ActorsToIgnore, OverlappedActors);

	//DotInitializer.
	//UGameplayEffect* DOT;
	//UGameplayEffect* Dot;
	GEforTarget->DurationPolicy = EGameplayEffectDurationType::Instant;
	FGameplayModifierInfo ModifierInfo;
	
	//ModifierInfo.Attribute = TEXT("LOCAttributeSet.Health");
	GetAbilitySystemComponentFromActorInfo()->GetSet<ULOCAttributeSet>()->Health;
	
	//ModifierInfo.ModifierOp.Add(EGameplayModOp::Additive);
	ModifierInfo.ModifierMagnitude = FGameplayEffectModifierMagnitude(-1);
	GEforTarget->Modifiers.Add(ModifierInfo);
	for (AActor* Actor : OverlappedActors)
	{

		//ApplyGameplayEffectToTarget();
	}
}
