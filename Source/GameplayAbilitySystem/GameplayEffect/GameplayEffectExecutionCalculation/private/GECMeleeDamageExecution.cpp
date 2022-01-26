#include "GameplayAbilitySystem/GameplayEffect/GameplayEffectExecutionCalculation/Public/GECMeleeDamageExecution.h"
#include "GameplayAbilitySystem\AttributeSet\Public\LOCAttributeSet.h"
#include "AbilitySystemComponent.h"

// 계산식에 사용될 스탯을 담은 구조체
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

	// 최소 방어력은 1
	if (Endurance <= 1.0f)
	{
		Endurance = 1.0f;
	}

	float Strength = 0.f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(MeleeDamageStatics().StrengthDef, EvaluationParameters, Strength);

	// 데미지 공식 = 기본공격력 + ( Source의 힘 / 방어력 )
	float DamageDone = BaseDamage + (Strength / Endurance);
	
	// 최소 데미지는 1
	if (DamageDone <= 0.f)
	{
		DamageDone = 1.0f;
	}

	OutExecutionOutput.AddOutputModifier(FGameplayModifierEvaluatedData(MeleeDamageStatics().HealthProperty, EGameplayModOp::Additive, -DamageDone));
}

