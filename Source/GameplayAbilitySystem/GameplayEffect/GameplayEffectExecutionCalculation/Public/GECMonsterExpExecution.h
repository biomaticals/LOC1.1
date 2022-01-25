#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"
#include "GECMonsterExpExecution.generated.h"

/**
 * ���� ��� �� ��� ����ġ ���� Ŭ����
 */
UCLASS()
class LOC_API UGECMonsterExpExecution : public UGameplayEffectExecutionCalculation
{
	GENERATED_BODY()
public:

	UGECMonsterExpExecution();

	// �� �Լ����� ����� �ǽ��մϴ�.
	virtual void Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams, OUT FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const override;

};