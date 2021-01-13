// Fill out your copyright notice in the Description page of Project Settings.


#include "Floor_Base.h"

void UFloor_Base::Initialize()
{
    GridDimensionX = 10;
    GridDimensionY = 10;

 //   FloorRevealed[GridDimensionX * GridDimensionY];

    for (int i = GridDimensionX * GridDimensionY - 1; i >= 0; i--)
    {
        FloorRevealed[i] = false;
    }


     short tableinit[] =
     {
        4, 15,  9,  0,  0,  0,  0,  0,  0,  0,
        2,  8, 13,  0,  0,  0,  0,  0,  0,  0,
        8,  9,  6,  0,  0,  0,  0,  0,  0,  0,
        0,  6,  6,  0,  0,  0,  0,  0,  0,  0,
        0,  8,  5, 15, 15,  9,  0,  0,  0,  0,
        0,  0,  8, 12, 12,  7,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0
     };
    
    FloorBlueprint.Append(tableinit, ARRAY_COUNT(tableinit));

        
    
}

int UFloor_Base::GetIndex(int aRow, int aColumn)
{
    return aRow * GridDimensionX + aColumn;
}

