#include "GameplayAbilitySystem/GameplayEffect/Public/GEMakeWay.h"
#include "GameplayAbilitySystem/AttributeSet/Public/LOCAttributeSet.h"

UGEMakeWay::UGEMakeWay()
{
	DurationPolicy = EGameplayEffectDurationType::Instant;
	int32 Idx = Modifiers.Num();
	Modifiers.SetNum(Idx + 1);
	FGameplayModifierInfo& Info = Modifiers[Idx];
	Info.ModifierMagnitude = FScalableFloat(-5);
	Info.ModifierOp = EGameplayModOp::Additive;
	Info.Attribute.SetUProperty(GET_FIELD_CHECKED(ULOCAttributeSet, Health));
}