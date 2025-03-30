// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ChangeGravity.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTALLUCINATO_API UChangeGravity : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable)
	static float SetGlobalGravity(AActor* WorldActorRef, float GlobalGravity);
	
};
