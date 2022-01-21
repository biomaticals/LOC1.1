#include "GameplayAbilitySystem/GameplayAbility/Public/GABase.h"

ALOCCharacter* UGABase::GetCharacterInfo()
{
	AActor* Owner = GetOwningActorFromActorInfo();
	ALOCCharacter* OwnerCharacter = Cast< ALOCCharacter>(Owner);
	return OwnerCharacter;
}