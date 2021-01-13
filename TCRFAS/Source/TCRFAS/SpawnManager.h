// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Floor_Base.h"
#include "FloorNode.h"
#include "GameFramework/Actor.h"
#include "SpawnManager.generated.h"

UCLASS()
class TCRFAS_API ASpawnManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnManager();
	void CreateGrid(UFloor_Base* aFloor);
	void SpawnFloorNode(int aRow, int aColumn,int aIndex);

	TArray<UFloor_Base*> Floor;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> FloorNodeReference;

	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
