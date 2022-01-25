#pragma once

#include "CoreMinimal.h"
#include "GABase.h"
#include "GASelfCastBase.generated.h"

/**
 * 자신에게 시전하는 GameplayAbility의 기초 클래스 
 */
UCLASS()
class LOC_API UGASelfCastBase : public UGABase
{
	GENERATED_BODY()

public:
	UGASelfCastBase();
};
