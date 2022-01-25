#pragma once

#include "CoreMinimal.h"
#include "GameplayAbilitySystem/GameplayAbility/Public/GASelfCastBase.h"
#include "GameplayAbilitySystem/GameplayEffect/Public/GEMakeWay.h"
#include "Abilities/Tasks/AbilityTask_WaitGameplayEvent.h"
#include "GAGreystoneMakeWay.generated.h"

/**
 *
 */
UCLASS()
class LOC_API UGAGreystoneMakeWay : public UGASelfCastBase
{
	GENERATED_BODY()

protected:
	UGAGreystoneMakeWay();

	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;
		
	UFUNCTION()
		void OnCancelled();

	UFUNCTION()
		void OnHitStart(const FGameplayEventData Payload);

	UFUNCTION()
		void OnHit();
	
public:
	UPROPERTY(EditDefaultsOnly, Category = "Default")
		int32 TotalHitCount;

	UPROPERTY(EditDefaultsOnly, Category = "Default")
		float SecondsForHit;

	UPROPERTY(EditDefaultsOnly, Category = "Default")
		float DamageRange;

	UPROPERTY(EditDefaultsOnly, Category = "Default")
		UAnimMontage* SkillMontage;

	UPROPERTY(EditDefaultsOnly, Category = "Default")
		TSubclassOf<UGEMakeWay> GEforTarget;

	UPROPERTY(EditDefaultsOnly, Category = "Default")
		float GELevelforTaget;
};
