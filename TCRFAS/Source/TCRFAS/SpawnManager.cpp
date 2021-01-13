// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnManager.h"

// Sets default values
ASpawnManager::ASpawnManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ASpawnManager::CreateGrid(UFloor_Base* aFloor)
{
	UFloor_Base* tempfloor = aFloor;
	
	for (int x = 0; x < tempfloor->GridDimensionX; x++)
	{
		for (int y = 0; y < tempfloor->GridDimensionY; y++)
		{
			int LevelIndex = Floor[0]->GetIndex(x, y);
			//If there is no node then continue
			if (tempfloor->FloorBlueprint[LevelIndex] == 0)
			{
				continue;
			}

			SpawnFloorNode(x , y,LevelIndex );
                
			m_FloorNodes[LevelIndex].Initialize(aLevelBlueprint[LevelIndex]);
		}
	}
	

}


void ASpawnManager::SpawnFloorNode(int aRow, int aColumn, int aIndex)
{
	FVector ActorSpawnPosition = GetActorLocation() + SpawnEnemyPosition;
	FRotator m_Rotator = GetActorRotation();

	AFloorNode* m_EnemyToSpawn;

	m_EnemyToSpawn = Cast<AEnemy_Base>(GetWorld()->SpawnActor<AActor>(WaveList[0], ActorSpawnPosition, m_Rotator));
	
}

// Called when the game starts or when spawned
void ASpawnManager::BeginPlay()
{
	Super::BeginPlay();
	Floor.Add(NewObject<UFloor_Base>());
	Floor[0]->Initialize();
}

// Called every frame
void ASpawnManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

