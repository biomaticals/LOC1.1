#pragma once

#include "CoreMinimal.h"
#include "GameplayAbilitySystem/GameplayAbility/Public/GASelfCastBase.h"
#include "GameplayAbilitySystem/GameplayEffect/Public/GEMakewayTargetEffect.h"
#include "Abilities/Tasks/AbilityTask_WaitGameplayEvent.h"
#include "GAGreystoneMakeWay.generated.h"

/**
 * Greystone의 Makeway 스킬 
 */
UCLASS()
class LOC_API UGAGreystoneMakeway : public UGASelfCastBase
{

	GENERATED_BODY()

protected:

	UGAGreystoneMakeway();

	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;
		
	UFUNCTION()
		void OnCancelled();

	UFUNCTION()
		void OnHitStart(const FGameplayEventData Payload);

	UFUNCTION()
		void TimerFunction();

	UFUNCTION()
		void OnHit();
	
public:

	// 총 타격 횟수
	UPROPERTY(EditDefaultsOnly, Category = Ability)
		int32 TotalHitCount;

	// 한번의 타격에 걸리는 시간
	UPROPERTY(EditDefaultsOnly, Category = Ability)
		float SecondsForHit;

	// 스킬 타격 범위
	UPROPERTY(EditDefaultsOnly, Category = Ability)
		float DamageRange;

	// 스킬 몽타주
	UPROPERTY(EditDefaultsOnly, Category = Ability)
		UAnimMontage* SkillMontage;
	
	// 타격 대상에 적용될 GameplayEffect
	UPROPERTY(EditDefaultsOnly, Category = Skill)
		TSubclassOf<class UGEMakewayTargetEffect> GEforTarget;

	// 타격 대상에 적용될 GameplayEffect의 레벨
	UPROPERTY(EditDefaultsOnly, Category = Skill)
		float GELevelforTarget;

protected:
	
	UPROPERTY()
		FTimerHandle TimerHandle;
	
	UPROPERTY()
		int32 CurrentHitCount;

	UPROPERTY()
		FGameplayTag OwnerCueTag;
};
