// Fill out your copyright notice in the Description page of Project Settings.


#include "FloorNode.h"

// Sets default values
AFloorNode::AFloorNode()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
}

AFloorNode::~AFloorNode()
{
}

void AFloorNode::SetWalkableDirections(short aWalkabledirections)
{
	switch (aWalkabledirections)
	{
		case  CardinalNodeDirections::Up:
			m_WalkableDirections.Add( CardinalNodeDirections::Up);
		break;

		case CardinalNodeDirections::Down:
			m_WalkableDirections.Add( CardinalNodeDirections::Down);
		break;

		case  CardinalNodeDirections::Left:
			m_WalkableDirections.Add( CardinalNodeDirections::Left);
		break;

		case  CardinalNodeDirections::Right:
			m_WalkableDirections.Add( CardinalNodeDirections::Right);
		break;

		case  CardinalNodeDirections::AllSidesOpen:
           m_WalkableDirections.Add( CardinalNodeDirections::Up);
           m_WalkableDirections.Add( CardinalNodeDirections::Down);
           m_WalkableDirections.Add( CardinalNodeDirections::Right);
           m_WalkableDirections.Add( CardinalNodeDirections::Left);
        break;

		case  CardinalNodeDirections::UpDown:
			m_WalkableDirections.Add( CardinalNodeDirections::Up);
			m_WalkableDirections.Add( CardinalNodeDirections::Down);
		break;

		case  CardinalNodeDirections::UpLeft:
			m_WalkableDirections.Add( CardinalNodeDirections::Up);
			m_WalkableDirections.Add( CardinalNodeDirections::Left);
		break;

		case  CardinalNodeDirections::Upright:
			m_WalkableDirections.Add( CardinalNodeDirections::Up);
			m_WalkableDirections.Add( CardinalNodeDirections::Right);
		break;

		case  CardinalNodeDirections::LeftDown:
			m_WalkableDirections.Add( CardinalNodeDirections::Down);
			m_WalkableDirections.Add( CardinalNodeDirections::Left);
		break;

		case  CardinalNodeDirections::RightDown:
			m_WalkableDirections.Add( CardinalNodeDirections::Down);
			m_WalkableDirections.Add( CardinalNodeDirections::Right);
		break;

		case  CardinalNodeDirections::LeftRight:
			m_WalkableDirections.Add( CardinalNodeDirections::Right);
			m_WalkableDirections.Add( CardinalNodeDirections::Left);
		break;

		case  CardinalNodeDirections::UpLeftRight:
			m_WalkableDirections.Add( CardinalNodeDirections::Up);
			m_WalkableDirections.Add( CardinalNodeDirections::Right);
			m_WalkableDirections.Add( CardinalNodeDirections::Left);
		break;

		case  CardinalNodeDirections::UpLeftDown:
			m_WalkableDirections.Add( CardinalNodeDirections::Up);
			m_WalkableDirections.Add( CardinalNodeDirections::Down);
			m_WalkableDirections.Add( CardinalNodeDirections::Left);
		break;
       
		case CardinalNodeDirections::UpRightDown:
			m_WalkableDirections.Add( CardinalNodeDirections::Up);
			m_WalkableDirections.Add( CardinalNodeDirections::Down);
			m_WalkableDirections.Add( CardinalNodeDirections::Right);
		break;

		case  CardinalNodeDirections::DownLeftRight:
			m_WalkableDirections.Add( CardinalNodeDirections::Down);
			m_WalkableDirections.Add( CardinalNodeDirections::Right);
			m_WalkableDirections.Add( CardinalNodeDirections::Left);
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

bool AFloorNode::IsDirectionWalkable(CardinalNodeDirections aDirection)
{
	for (int i = 0; i < m_WalkableDirections.Num(); i++)
	{
		if (m_WalkableDirections[i] == aDirection)
		{
			return true;
		}
	}

	return false;
}

// Called when the game starts or when spawned
void AFloorNode::BeginPlay()
{
	Super::BeginPlay();


	GetComponents<UStaticMeshComponent>(NodeWalls);
	//NodeWalls[4]->SetVisibility(false);

	SetWalkableDirections(0);
	
}

