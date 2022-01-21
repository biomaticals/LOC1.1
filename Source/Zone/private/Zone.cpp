// Fill out your copyright notice in the Description page of Project Settings.


#include "..\public\Zone.h"

// Sets default values
AZone::AZone()
	: TagContainer{}
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionMesh = CreateDefaultSubobject<UBoxComponent>(FName("CollisionMesh"));
	SetRootComponent(CollisionMesh);
	CollisionMesh->SetGenerateOverlapEvents(true);
}

// Called when the game starts or when spawned
void AZone::BeginPlay()
{
	Super::BeginPlay();
	SetZoneNameTag();
	CollisionMesh->OnComponentBeginOverlap.AddDynamic(this, &AZone::OnActorBeginOverlap);
}

// Called every frame
void AZone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AZone::OnActorBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("%d"), AZone::ZoneType));
}


void AZone::SetZoneNameTag()
{	
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red,this->GetName());
}

