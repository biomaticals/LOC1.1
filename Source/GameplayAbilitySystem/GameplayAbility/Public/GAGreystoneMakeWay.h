#pragma once

#include "CoreMinimal.h"
#include "GameplayAbilitySystem/GameplayAbility/Public/GASelfCastBase.h"
#include "Abilities/Tasks/AbilityTask_WaitGameplayEvent.h"
#include "GAGreystoneMakeWay.generated.h"
/**
 *
 */
UCLASS()
class LOC_API UGAGreystoneMakeWay : public UGASelfCastBase
{
	GENERATED_BODY()

public:
	UGAGreystoneMakeWay();

	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;

//	UFUNCTION()
//		void ScanEnemies();
//	
		
	UFUNCTION()
		void OnCancelled();

	UFUNCTION()
		void OnHitStart(const FGameplayEventData Payload);

//	UFUNCTION()
//		void OnHit(const FGameplayEventData Payload);

public:
	UPROPERTY(BlueprintReadWrite, Category = "Default")
		int32 CurrentHitCount;

	UPROPERTY(EditAnywhere, Category = "Default")
		int32 TotalHitCount;

	UPROPERTY(EditAnywhere, Category = "Default")
		float SecondsForHit;

	UPROPERTY(VisibleDefaultsOnly, Category = "Default")
		UAnimMontage* SkillMontage;

	UPROPERTY(EditAnywhere, Category = "Default")
		UGameplayEffect* GEforTarget;

	UPROPERTY(EditAnywhere, Category = "Default")
		float GELevelforTaget;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Default")
		TArray<AActor*> ActorsToIgnore;
};
