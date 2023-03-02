// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Building.h"
#include "GameManager.generated.h"

UCLASS()
class ANNO1800_API AGameManager : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	AGameManager();

private:
	
	UPROPERTY(EditAnywhere) ABuilding* Locations[5];

	//TQueue<ABuilding*> Locations
};
