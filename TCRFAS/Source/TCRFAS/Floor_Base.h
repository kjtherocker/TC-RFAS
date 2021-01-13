// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <PhysX3/PxShared/src/foundation/include/PsArray.h>

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Floor_Base.generated.h"

/**
 * 
 */
UCLASS()
class TCRFAS_API UFloor_Base : public UObject
{
	GENERATED_BODY()

public:

     short GridDimensionX = 10;
     short GridDimensionY = 10;
    TArray<short> FloorBlueprint;
    bool FloorRevealed[20];


    
     float EnemySpawnRate;

     FVector2D m_DefaultSpawnPosition;

    void Initialize();
    int GetIndex(int aRow, int aColumn);

    
};
