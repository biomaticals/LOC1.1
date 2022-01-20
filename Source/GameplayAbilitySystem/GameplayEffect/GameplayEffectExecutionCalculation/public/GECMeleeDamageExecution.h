// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"
#include "GECMeleeDamageExecution.generated.h"

/**
 *  근접공격 데미지를 계산합니다. Strength, Endurance, Weapon Damage를 통해 계산하고 Health_Current에 적용합니다.
 */
UCLASS()
class LOC_API UGECMeleeDamageExecution : public UGameplayEffectExecutionCalculation
{
	GENERATED_BODY()
public:

	UGECMeleeDamageExecution();

	// 이 함수에서 계산을 실시합니다.
	virtual void Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams, OUT FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const override;

};
