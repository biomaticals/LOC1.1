// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "NavMesh/NavMeshBoundsVolume.h"
#include "GameplayTagContainer.h"
#include "Zone.generated.h"

UENUM(BlueprintType)
enum class EZone : uint8
{
	Zone = 0 UMETA(DisplayName = "Zone"),
	DangerZone = 1 UMETA(DisplayName = "DangerZone"),
	ProhibitedZone = 2 UMETA(DisplayName = "ProhibitedZone"),
	SafetyZone = 3 UMETA(DisplayName = "SafetyZone")
};

UCLASS()
class LOC_API AZone : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AZone();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	virtual	void OnActorBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Zone)
		EZone ZoneType;

	UPROPERTY(VisibleAnywhere)
		class UBoxComponent* CollisionMesh;

	UPROPERTY(VisibleAnywhere)
		FGameplayTagContainer TagContainer;

	UFUNCTION()
		void SetZoneNameTag();
	
};
