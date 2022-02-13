#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MeleeHitboxData.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FMeleeHitSphereDefinition
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
		FName Nickname;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
		FVector Offset;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
		float Radius;
};

UCLASS(BlueprintType)
class LOC_API UMeleeHitboxData : public UDataAsset
{
	GENERATED_BODY()
	
public:

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
		TArray<FMeleeHitSphereDefinition> MeleeHitSpheres;

	UFUNCTION(BlueprintPure)
		TArray<FMeleeHitSphereDefinition> GetMeleeHitSpheres(TArray<int> indexes);
};
