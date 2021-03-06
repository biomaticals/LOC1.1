#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"
#include "GECMonsterExpExecution.generated.h"

/**
 * 몬스터 사냥 시 얻는 경험치 계산식 클래스
 */
UCLASS()
class LOC_API UGECMonsterExpExecution : public UGameplayEffectExecutionCalculation
{
	GENERATED_BODY()
public:

	UGECMonsterExpExecution();

	// 이 함수에서 계산을 실시합니다.
	virtual void Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams, OUT FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const override;

};
