// Fill out your copyright notice in the Description page of Project Settings.


#include "GameManager.h"

// Sets default values
AGameManager::AGameManager()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}
/*
void AGameManager::addToBuildingQueue(ABuilding* building)
{
	UE_LOG(LogTemp, Warning, TEXT(" %i "), (building == nullptr));
	//buildingQueue.Enqueue(building);
}

ABuilding* AGameManager::getFromBuildingQueue()
{
	/*
	if (!buildingQueue.IsEmpty())
	{
		ABuilding* temp = *buildingQueue.Peek();
		buildingQueue.Pop();
		return temp;
	}
	return nullptr;
	
}
*/