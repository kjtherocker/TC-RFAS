// Fill out your copyright notice in the Description page of Project Settings.


#include "FloorManager.h"

// Sets default values
AFloorManager::AFloorManager()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

void AFloorManager::CreateGrid(UFloor_Base* aFloor)
{
	UFloor_Base* tempfloor = aFloor;
	
	for (int x = 0; x < tempfloor->GridDimensionX; x++)
	{
		for (int y = 0; y < tempfloor->GridDimensionY; y++)
		{
			int LevelIndex = m_Floors[0]->GetIndex(x, y);
			//If there is no node then continue
			if (tempfloor->FloorBlueprint[LevelIndex] == 0)
			{
				continue;
			}

			SpawnFloorNode(x , y,LevelIndex );
                
			m_FloorNodes[LevelIndex]->SetWalkableDirections(m_Floors[0]->FloorBlueprint[LevelIndex]);
		}
	}
	

}


void AFloorManager::SpawnFloorNode(int aRow, int aColumn, int aIndex)
{


	//Setting new Poisiton
	FVector PositionOffset;
	PositionOffset.Set(100 * aRow, 100 * aColumn, 0);
	FVector ActorFinalSpawnPoint = GetActorLocation() + PositionOffset ;
	
	FVector2D PositionInGrid;
	PositionInGrid.Set(aRow,aColumn);
	
	//Rotation
	FRotator rotator = GetActorRotation();
	

	//Spawn

	AFloorNode* floorNode;


	floorNode = Cast<AFloorNode>(GetWorld()->SpawnActor<AActor>(FloorNodeReference, ActorFinalSpawnPoint, rotator));
//	floorNode->Rename( *FString(aRow + " " + aColumn));
//	floorNode->SetPositionInGrid(PositionInGrid);

	m_FloorNodes[aIndex] = floorNode;
	
	//m_FloorNodes[aIndex] =  tempFloorNode;

	//m_FloorNodes[aIndex].m_NodeFloorManager = this;
	


	
	
}

// Called when the game starts or when spawned
void AFloorManager::BeginPlay()
{
	Super::BeginPlay();
	

	m_Floors.Add(NewObject<UFloor_Base>());
	m_Floors[0]->Initialize();

	//Spawning a list of floorNodes
	AFloorNode* Object = nullptr;
	int AmountOfFloorNodes = m_Floors[0]->GridDimensionX * m_Floors[0]->GridDimensionY;
	m_FloorNodes.Init(Object,AmountOfFloorNodes);
	
	CreateGrid(m_Floors[0]);
}


