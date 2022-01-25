#include "GameplayAbilitySystem/GameplayAbility/Public/GASelfCastBase.h"

UGASelfCastBase::UGASelfCastBase()
{
	AbilityTags.AddTag(FGameplayTag::RequestGameplayTag(FName("Ability.Skill.Casting.Self")));
	BlockAbilitiesWithTag.AddTag(FGameplayTag::RequestGameplayTag(FName("Ability.Die")));
	ActivationBlockedTags.AddTag(FGameplayTag::RequestGameplayTag(FName("Ability.Skill")));
}