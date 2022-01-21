#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"

#include "Character/Public/LOCCharacter.h"

#include "GABase.generated.h"

/**
 * 
 */
UCLASS()
class LOC_API UGABase : public UGameplayAbility
{
	GENERATED_BODY()
	
protected:
	UFUNCTION()
		ALOCCharacter* GetCharacterInfo();
	
};
