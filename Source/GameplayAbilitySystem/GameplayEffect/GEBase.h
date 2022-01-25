#pragma once

#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "GEBase.generated.h"

#ifndef GET_FIELD_CHECKED
#define GET_FIELD_CHECKED(Class, Field) FindFieldChecked<FProperty>(Class::StaticClass(), GET_MEMBER_NAME_CHECKED(Class, Field))
#endif

#ifndef CONSTRUCT_CLASS
#define CONSTRUCT_CLASS(Class, Name) Class* Name = NewObject<Class>(GetTransientPackage(), FName(TEXT(#Name)))
#endif

UCLASS()
class LOC_API UGEBase : public UGameplayEffect
{
	GENERATED_BODY()
	
};
