#pragma once

#include "CoreMinimal.h"
#include "GameplayAbilitySystem/GameplayAbility/Public/GASelfCastBase.h"
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

	virtual void K2_ActivateAbility();

public:
	UPROPERTY(BlueprintReadWrite, Category = "Default")
		int32 CurrentHitCount;

	UPROPERTY(EditAnywhere, Category = "Default")
		int32 TotalHitCount;

	UPROPERTY(VisibleDefaultsOnly, Category = "Default")
		UAnimMontage* SkillMontage;

	UPROPERTY(EditAnywhere, Category = "Default")
		UGameplayEffect* GEforTaget;

	UPROPERTY(EditAnywhere, Category = "Default")
		float GELevelforTaget;


};
