// Fill out your copyright notice in the Description page of Project Settings.

#include "PickUp.h"
#include "BatteryCollector.h"

// Sets default values
APickUp::APickUp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// All pickups start active
	bIsActive = true;

	// Create the static mesh component
	PickupMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Pick Up Mesh"));
	RootComponent = PickupMesh;
}

// Called when the game starts or when spawned
void APickUp::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickUp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Returns active state
bool APickUp::IsActive()
{
	return bIsActive;
}

// Changes active state
void APickUp::SetActive(bool NewPickupState)
{
	bIsActive = NewPickupState;
}

void APickUp::WasCollected_Implementation()
{
	// Log a debug message
	FString PickupDebugString = GetName();
	UE_LOG(LogClass, Log, TEXT("You have collected %s"), *PickupDebugString);

}