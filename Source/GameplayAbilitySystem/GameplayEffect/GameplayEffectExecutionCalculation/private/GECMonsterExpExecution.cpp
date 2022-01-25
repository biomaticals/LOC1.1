#include "GameplayAbilitySystem/GameplayEffect/GameplayEffectExecutionCalculation/Public/GECMonsterExpExecution.h"
#include "GameplayAbilitySystem/AttributeSet/Public/LOCAttributeSet.h"
#include "AbilitySystemComponent.h"

// 계산식에 사용될 스탯을 담은 구조체
struct FMonsterExpStatics
{

	DECLARE_ATTRIBUTE_CAPTUREDEF(Level);
	DECLARE_ATTRIBUTE_CAPTUREDEF(Experience);
	DECLARE_ATTRIBUTE_CAPTUREDEF(MaxExperience);
	 
	FMonsterExpStatics()
	{
		DEFINE_ATTRIBUTE_CAPTUREDEF(ULOCAttributeSet, Level, Target, true);
		DEFINE_ATTRIBUTE_CAPTUREDEF(ULOCAttributeSet, Experience, Target, true);
		DEFINE_ATTRIBUTE_CAPTUREDEF(ULOCAttributeSet, MaxExperience, Target, true);
	}

};

static const FMonsterExpStatics& MonsterExpStatics()
{
	static FMonsterExpStatics ExpStatics;
	return ExpStatics;
}

UGECMonsterExpExecution::UGECMonsterExpExecution()
{
	RelevantAttributesToCapture.Add(MonsterExpStatics().LevelDef);
	RelevantAttributesToCapture.Add(MonsterExpStatics().ExperienceDef);
	RelevantAttributesToCapture.Add(MonsterExpStatics().MaxExperienceDef);
}

void UGECMonsterExpExecution::Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams, OUT FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const
{
	UAbilitySystemComponent*	TargetABSC	= ExecutionParams.GetTargetAbilitySystemComponent();
	AActor*						TargetActor = TargetABSC ? TargetABSC->GetAvatarActor() : nullptr;
	UAbilitySystemComponent*	SourceABSC  = ExecutionParams.GetSourceAbilitySystemComponent();
	AActor*						SourceActor = SourceABSC ? SourceABSC->GetAvatarActor() : nullptr;

	const FGameplayEffectSpec&   Spec		= ExecutionParams.GetOwningSpec();
	const FGameplayTagContainer* SourceTags = Spec.CapturedSourceTags.GetAggregatedTags();
	const FGameplayTagContainer* TargetTags = Spec.CapturedTargetTags.GetAggregatedTags();

	FAggregatorEvaluateParameters EvaluationParameters;
	EvaluationParameters.SourceTags = SourceTags;
	EvaluationParameters.TargetTags = TargetTags;

	float TargetLevel = 0.f;
	float TargetExperience = 0.f;
	float TargetMaxExperience = 0.f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(MonsterExpStatics().LevelDef, EvaluationParameters, TargetLevel);	
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(MonsterExpStatics().ExperienceDef, EvaluationParameters, TargetExperience);
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(MonsterExpStatics().MaxExperienceDef, EvaluationParameters, TargetMaxExperience);

	// 기본 경험치는 50
	float BaseExp = 50.f;
	float ExpRemain = 0.f;
	float NewTargetMaxExperience = 0.f;

	// 획득 경험치 공식 ; Exp = 50 / DifferOfLevel 
	BaseExp = 50 / TargetLevel;	

	if (TargetExperience + BaseExp >= TargetMaxExperience)
	{
		ExpRemain = TargetExperience + BaseExp - TargetMaxExperience;

		// 캐릭터 최대 경험치 공식 ; MaxExp = exp2(Level - 1 ) * 100
		NewTargetMaxExperience = TargetMaxExperience * 2;

		OutExecutionOutput.AddOutputModifier(FGameplayModifierEvaluatedData(MonsterExpStatics().LevelProperty, EGameplayModOp::Additive, 1));
		OutExecutionOutput.AddOutputModifier(FGameplayModifierEvaluatedData(MonsterExpStatics().ExperienceProperty, EGameplayModOp::Override, ExpRemain));
		OutExecutionOutput.AddOutputModifier(FGameplayModifierEvaluatedData(MonsterExpStatics().MaxExperienceProperty, EGameplayModOp::Override, NewTargetMaxExperience));

	}
	else if (TargetExperience + BaseExp < TargetMaxExperience)
	{
		OutExecutionOutput.AddOutputModifier(FGameplayModifierEvaluatedData(MonsterExpStatics().ExperienceProperty, EGameplayModOp::Additive, BaseExp));
	}


}