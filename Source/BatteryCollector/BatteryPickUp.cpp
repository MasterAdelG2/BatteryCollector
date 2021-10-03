// Fill out your copyright notice in the Description page of Project Settings.


#include "BatteryPickUp.h"
#include "BatteryCollector.h"

//Set default values
ABatteryPickUp::ABatteryPickUp()
{
	GetMesh()->SetSimulatePhysics(true);

	//the base power level of the battery
	BatteryPower = 150.f;
}


void ABatteryPickUp::WasCollected_Implementation()
{
	// Use the base pickup behavior
	Super::WasCollected_Implementation();
	// Destroy the battery
	Destroy();
}

// report the power level of the battery
float ABatteryPickUp::GetPower()
{
	return BatteryPower;
}