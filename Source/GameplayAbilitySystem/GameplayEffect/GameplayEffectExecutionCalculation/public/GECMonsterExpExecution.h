// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"
#include "GECMonsterExpExecution.generated.h"

/**
 * 
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
