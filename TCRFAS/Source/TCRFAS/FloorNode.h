// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Floor_Base.h"
#include "EnumConstants.h"
#include "FloorNode.generated.h"

UCLASS()
class TCRFAS_API AFloorNode : public AActor
{
	GENERATED_BODY()



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
	~AFloorNode();

	virtual void SetWalkableDirections(short aWalkabledirections);
	virtual void SetLevelNode(TArray<CardinalNodeDirections> aWalkableDirections);
	virtual void SetPositionInGrid(FVector2D aPosition);
    bool IsDirectionWalkable(CardinalNodeDirections aDirection);

	WalkOntopTriggerTypes m_WalkOnTopTriggerTypes;
	TArray<CardinalNodeDirections> m_WalkableDirections;
	FVector2D m_PositionInGrid;
	
	//UPROPERTY(EditAnywhere)
    TArray<UStaticMeshComponent*> NodeWalls;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};


