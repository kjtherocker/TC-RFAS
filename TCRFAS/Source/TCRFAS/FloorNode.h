// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Floor_Base.h"
#include "FloorNode.generated.h"


UCLASS()
class TCRFAS_API AFloorNode : public AActor
{
	GENERATED_BODY()


	enum CardinalNodeDirections
	{
		Empty = 0,
        Up = 1,
        Down = 2,
        Left = 3,
        Right = 4,
        AllSidesOpen = 5,
        UpDown = 6,
        UpLeft = 7,
        Upright = 8,
        LeftDown = 9,
        RightDown = 10,
        LeftRight = 11,
        UpLeftRight = 12,
        UpLeftDown = 13,
        UpRightDown = 14,
        DownLeftRight = 15,
    };

	 enum WalkOntopTriggerTypes
	{
		None,
        RelicTower,
        DialoguePrompt,
        Items,
        Memoria,
        Enemy
        
    };
    

	
public:	
	// Sets default values for this actor's properties
	AFloorNode();

	virtual void SetWalkableDirections(short aWalkabledirections);
	virtual void SetLevelNode(TArray<CardinalNodeDirections> aWalkableDirections);
	virtual void SetPositionInGrid(FVector2D aPosition);
	
	WalkOntopTriggerTypes m_WalkOnTopTriggerTypes;
	TArray<CardinalNodeDirections> m_WalkableDirections;
	FVector2D m_PositionInGrid;
	UPROPERTY(EditAnywhere)
    TArray<UStaticMeshComponent*> NodeWalls;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
