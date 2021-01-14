// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FloorNode.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/SpringArmComponent.h"
#include "PlayerControllerPawn.generated.h"

class UCapsuleComponent;
class UCameraComponent;
UCLASS()
class TCRFAS_API APlayerControllerPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayerControllerPawn();
	void CalculateMoveInput(float Value);
	void SetPlayerFloorNode(AFloorNode* aFloorNode);
	void PlayerGetMovementInput(float aMovement);
	void PlayerRotation(float aRotation);
	void MoveTowards();
	APlayerController* PlayerController;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = true))
    USpringArmComponent* SpringArm;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = true))
    UCameraComponent*  Camera;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = true))
    UStaticMeshComponent* PlayerMesh;

	float test;
	FVector MoveDirection;
	FQuat RotationDirection;

	UPROPERTY(EditAnywhere)
    float MoveSpeed = 100.0f;
	
	UPROPERTY(EditAnywhere)
    float RotateSpeed = 100.0f;

	UPROPERTY()
	AFloorNode* m_CurrentFloorNode;	

	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	TMap<AFloorNode::CardinalNodeDirections, FVector> m_DirectionRotations;
	AFloorNode::CardinalNodeDirections m_CurrenDirection;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	


	
	
	

};






