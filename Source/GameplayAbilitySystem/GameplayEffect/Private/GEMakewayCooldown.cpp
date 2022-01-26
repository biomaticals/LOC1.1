#include "GameplayAbilitySystem/GameplayEffect/Public/GEMakewayCooldown.h"
#include "GameplayAbilitySystem/AttributeSet/Public/LOCAttributeSet.h"

UGEMakewayCooldown::UGEMakewayCooldown()
{
	DurationPolicy = EGameplayEffectDurationType::HasDuration;
	int32 Idx = Modifiers.Num();
	Modifiers.SetNum(Idx + 1);
	FGameplayModifierInfo& Info = Modifiers[Idx];
	Info.ModifierMagnitude = FScalableFloat(10);
}