#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"
#include "GECMeleeDamageExecution.generated.h"

/**
 *  ������������ �������� ����ϴ� Ŭ����
 */
UCLASS()
class LOC_API UGECMeleeDamageExecution : public UGameplayEffectExecutionCalculation
{
	GENERATED_BODY()
public:

	UGECMeleeDamageExecution();

	// �� �Լ����� ����� �ǽ��մϴ�.
	virtual void Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams, OUT FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const override;

};
