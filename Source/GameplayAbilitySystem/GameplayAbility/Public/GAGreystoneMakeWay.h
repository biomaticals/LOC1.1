#pragma once

#include "CoreMinimal.h"
#include "GameplayAbilitySystem/GameplayAbility/Public/GASelfCastBase.h"
#include "GameplayAbilitySystem/GameplayEffect/Public/GEMakeway.h"
#include "Abilities/Tasks/AbilityTask_WaitGameplayEvent.h"
#include "GAGreystoneMakeWay.generated.h"

/**
 * Greystone�� Makeway ��ų 
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

	// �� Ÿ�� Ƚ��
	UPROPERTY(EditDefaultsOnly, Category = Ability)
		int32 TotalHitCount;

	// �ѹ��� Ÿ�ݿ� �ɸ��� �ð�
	UPROPERTY(EditDefaultsOnly, Category = Ability)
		float SecondsForHit;

	// ��ų Ÿ�� ����
	UPROPERTY(EditDefaultsOnly, Category = Ability)
		float DamageRange;

	// ��ų ��Ÿ��
	UPROPERTY(EditDefaultsOnly, Category = Ability)
		UAnimMontage* SkillMontage;
	
	// Ÿ�� ��� ����� GameplayEffect
	UPROPERTY(EditDefaultsOnly, Category = Skill)
		TSubclassOf<class UGEMakeway> GEforTarget;

	// Ÿ�� ��� ����� GameplayEffect�� ����
	UPROPERTY(EditDefaultsOnly, Category = Skill)
		float GELevelforTarget;

protected:
	
	UPROPERTY()
		FTimerHandle TimerHandle;

};
