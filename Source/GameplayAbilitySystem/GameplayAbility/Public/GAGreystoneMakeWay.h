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

	UPROPERTY(BlueprintReadWrite, Category = "Default")
		int32 CurrentHitCount;

	UPROPERTY(BlueprintReadWrite, Category = "Default")
		int32 TotalHitCount;

	UPROPERTY(BlueprintReadWrite, Category = "Default")
		UGameplayEffect* GEforTaget;

	UPROPERTY(BlueprintReadWrite, Category = "Default")
		float GELevelforTaget;

private:
	UPROPERTY(VisibleAnywhere, Category = "Default")
		UAnimMontage* SkillMontage;
};
