// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
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

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
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

	void CalculateMoveInput(float Value);
	
	
	
	

};
