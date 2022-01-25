#include "..\public\GECMeleeDamageExecution.h"
#include "..\..\..\AttributeSet\public\LOCAttributeSet.h"
#include "AbilitySystemComponent.h"

// ���Ŀ� ���� ������ ���� ����ü
struct FMeleeDamageStatics
{

	DECLARE_ATTRIBUTE_CAPTUREDEF(Strength);
	DECLARE_ATTRIBUTE_CAPTUREDEF(Endurance);
	DECLARE_ATTRIBUTE_CAPTUREDEF(WeaponDamage);
	DECLARE_ATTRIBUTE_CAPTUREDEF(Health);

	FMeleeDamageStatics()
	{
		
		DEFINE_ATTRIBUTE_CAPTUREDEF(ULOCAttributeSet, Strength, Source, true);
		DEFINE_ATTRIBUTE_CAPTUREDEF(ULOCAttributeSet, WeaponDamage, Source, true);

		DEFINE_ATTRIBUTE_CAPTUREDEF(ULOCAttributeSet, Endurance, Target, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(ULOCAttributeSet, Health, Target, false);
	}

};

static const FMeleeDamageStatics& MeleeDamageStatics()
{
	static FMeleeDamageStatics DmgStatics;
	return DmgStatics;
}

UGECMeleeDamageExecution::UGECMeleeDamageExecution()
{
	RelevantAttributesToCapture.Add(MeleeDamageStatics().EnduranceDef);
	RelevantAttributesToCapture.Add(MeleeDamageStatics().StrengthDef);
	RelevantAttributesToCapture.Add(MeleeDamageStatics().WeaponDamageDef);
}

void UGECMeleeDamageExecution::Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams, OUT FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const
{

	UAbilitySystemComponent* TargetASC		= ExecutionParams.GetTargetAbilitySystemComponent();
	AActor*					 TargetActor	= TargetASC ? TargetASC->GetAvatarActor() : nullptr;
	UAbilitySystemComponent* SourceASC		= ExecutionParams.GetSourceAbilitySystemComponent();
	AActor*					 SourceActor	= SourceASC ? SourceASC->GetAvatarActor() : nullptr;

	const FGameplayEffectSpec&   Spec		= ExecutionParams.GetOwningSpec();
	const FGameplayTagContainer* SourceTags = Spec.CapturedSourceTags.GetAggregatedTags();
	const FGameplayTagContainer* TargetTags = Spec.CapturedTargetTags.GetAggregatedTags();

	FAggregatorEvaluateParameters EvaluationParameters;
	EvaluationParameters.SourceTags = SourceTags;
	EvaluationParameters.TargetTags = TargetTags;

	float BaseDamage = 0.f;
	float Endurance = 0.f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(MeleeDamageStatics().WeaponDamageDef, EvaluationParameters, BaseDamage);	
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(MeleeDamageStatics().EnduranceDef, EvaluationParameters, Endurance);

	// �ּ� ������ 1
	if (Endurance <= 1.0f)
	{
		Endurance = 1.0f;
	}

	float Strength = 0.f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(MeleeDamageStatics().StrengthDef, EvaluationParameters, Strength);

	// ������ ���� = �⺻���ݷ� + ( Source�� �� / ���� )
	float DamageDone = BaseDamage + (Strength / Endurance);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("DamageDone is %f"), &DamageDone));

	// �ּ� �������� 1
	if (DamageDone <= 0.f)
	{
		DamageDone = 1.0f;
	}

	OutExecutionOutput.AddOutputModifier(FGameplayModifierEvaluatedData(MeleeDamageStatics().HealthProperty, EGameplayModOp::Additive, -DamageDone));
}

