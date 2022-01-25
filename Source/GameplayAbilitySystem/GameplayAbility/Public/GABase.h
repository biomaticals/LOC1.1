#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "Character/Public/LOCCharacter.h"
#include "GABase.generated.h"

#ifndef GET_FIELD_CHECKED
#define GET_FIELD_CHECKED(Class, Field) FindFieldChecked<FProperty>(Class::StaticClass(), GET_MEMBER_NAME_CHECKED(Class, Field))
#endif

#ifndef CONSTRUCT_CLASS
#define CONSTRUCT_CLASS(Class, Name) Class* Name = NewObject<Class>(GetTransientPackage(), FName(TEXT(#Name)))
#endif

UCLASS()
class LOC_API UGABase : public UGameplayAbility
{
	GENERATED_BODY()
	
protected:
	UFUNCTION()
		ALOCCharacter* GetCharacterInfo();
	
};
