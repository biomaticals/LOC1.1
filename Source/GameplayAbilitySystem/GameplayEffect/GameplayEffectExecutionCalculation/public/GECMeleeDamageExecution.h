// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"
#include "GECMeleeDamageExecution.generated.h"

/**
 *  �������� �������� ����մϴ�. Strength, Endurance, Weapon Damage�� ���� ����ϰ� Health_Current�� �����մϴ�.
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