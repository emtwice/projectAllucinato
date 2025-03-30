// Fill out your copyright notice in the Description page of Project Settings.


#include "ChangeGravity.h"
#include "GameFramework/WorldSettings.h"
#include "Engine/World.h"



float UChangeGravity::SetGlobalGravity(AActor* WorldActorRef, float GlobalGravity)
{

	AWorldSettings* WorldSettings = WorldActorRef->GetWorld()->GetWorldSettings();
	WorldSettings->bGlobalGravitySet = true;
	WorldSettings->GlobalGravityZ = GlobalGravity;

	return WorldSettings->GlobalGravityZ;
}