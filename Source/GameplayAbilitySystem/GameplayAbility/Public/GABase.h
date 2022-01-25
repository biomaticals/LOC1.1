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

/**
 * GameplayAbility의 기초 클래스
 */
UCLASS()
class LOC_API UGABase : public UGameplayAbility
{
	GENERATED_BODY()
	
protected:

	// 소유 캐릭터 정보를 얻어옵니다. GetOwningActorFromActorInfo() 대신 이 함수를 사용하세요.
	UFUNCTION()
		ALOCCharacter* GetCharacterInfo();
	
};
