// Fill out your copyright notice in the Description page of Project Settings.


#include "FloorNode.h"

// Sets default values
AFloorNode::AFloorNode()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
}

void AFloorNode::SetWalkableDirections(short aWalkabledirections)
{
	switch (aWalkabledirections)
	{
		case Up:
			m_WalkableDirections.Add(Up);
		break;

		case Down:
			m_WalkableDirections.Add(Down);
		break;

		case Left:
			m_WalkableDirections.Add(Left);
		break;

		case Right:
			m_WalkableDirections.Add(Right);
		break;

		case AllSidesOpen:
           m_WalkableDirections.Add(Up);
           m_WalkableDirections.Add(Down);
           m_WalkableDirections.Add(Right);
           m_WalkableDirections.Add(Left);
        break;

		case UpDown:
			m_WalkableDirections.Add(Up);
			m_WalkableDirections.Add(Down);
		break;

		case UpLeft:
			m_WalkableDirections.Add(Up);
			m_WalkableDirections.Add(Left);
		break;

		case Upright:
			m_WalkableDirections.Add(Up);
			m_WalkableDirections.Add(Right);
		break;

		case LeftDown:
			m_WalkableDirections.Add(Down);
			m_WalkableDirections.Add(Left);
		break;

		case RightDown:
			m_WalkableDirections.Add(Down);
			m_WalkableDirections.Add(Right);
		break;

		case LeftRight:
			m_WalkableDirections.Add(Right);
			m_WalkableDirections.Add(Left);
		break;

		case UpLeftRight:
			m_WalkableDirections.Add(Up);
			m_WalkableDirections.Add(Right);
			m_WalkableDirections.Add(Left);
		break;

		case UpLeftDown:
			m_WalkableDirections.Add(Up);
			m_WalkableDirections.Add(Down);
			m_WalkableDirections.Add(Left);
		break;
       
		case UpRightDown:
			m_WalkableDirections.Add(Up);
			m_WalkableDirections.Add(Down);
			m_WalkableDirections.Add(Right);
		break;

		case DownLeftRight:
			m_WalkableDirections.Add(Down);
			m_WalkableDirections.Add(Right);
			m_WalkableDirections.Add(Left);
		break;

	}
	
	SetLevelNode(m_WalkableDirections);
}

void AFloorNode::SetLevelNode(TArray<CardinalNodeDirections> aWalkableDirections)
{
	for(int i = 1 ; i < NodeWalls.Num();i++)
	{
		NodeWalls[i]->SetVisibility(true);
	}
	
	m_WalkableDirections = aWalkableDirections;

	for (CardinalNodeDirections node : m_WalkableDirections)
	{
		NodeWalls[(int)node]->SetVisibility(false);
	}

}

void AFloorNode::SetPositionInGrid(FVector2D aPosition)
{
	m_PositionInGrid = aPosition;
}

// Called when the game starts or when spawned
void AFloorNode::BeginPlay()
{
	Super::BeginPlay();


	GetComponents<UStaticMeshComponent>(NodeWalls);
	//NodeWalls[4]->SetVisibility(false);

	SetWalkableDirections(0);
	
}

