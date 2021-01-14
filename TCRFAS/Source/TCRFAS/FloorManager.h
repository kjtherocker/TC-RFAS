// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Floor_Base.h"
#include "FloorNode.h"
#include "GameFramework/Actor.h"
#include "FloorManager.generated.h"

UCLASS()
class TCRFAS_API AFloorManager : public AActor
{
	GENERATED_BODY()
	
public:	
        // Sets default values for this actor's properties
    AFloorManager();
	void CreateGrid(UFloor_Base* aFloor);
	void SpawnFloorNode(int aRow, int aColumn,int aIndex);

	UPROPERTY()
    TArray<UFloor_Base*> m_Floors;
	UPROPERTY()
    TArray<AFloorNode*> m_FloorNodes;
	
	UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> FloorNodeReference;

	
protected:
        // Called when the game starts or when spawned
        virtual void BeginPlay() override;

};
