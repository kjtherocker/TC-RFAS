// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "UIManager.generated.h"

UCLASS()
class TCRFAS_API AUIManager : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AUIManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every fra
	virtual void Tick(float DeltaTime) override;

	

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
