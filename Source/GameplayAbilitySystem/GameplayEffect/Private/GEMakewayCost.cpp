#include "GameplayAbilitySystem/GameplayEffect/Public/GEMakewayCost.h"
#include "GameplayAbilitySystem/AttributeSet/Public/LOCAttributeSet.h"

UGEMakewayCost::UGEMakewayCost()
{
	DurationPolicy = EGameplayEffectDurationType::Instant;
	int32 Idx = Modifiers.Num();
	Modifiers.SetNum(Idx + 1);
	FGameplayModifierInfo& Info = Modifiers[Idx];
	Info.ModifierMagnitude = FScalableFloat(-25);
	Info.ModifierOp = EGameplayModOp::Additive;
	Info.Attribute.SetUProperty(GET_FIELD_CHECKED(ULOCAttributeSet, Mana));
}