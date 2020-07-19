// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Creature_Base.h"
#include "Sigma.generated.h"

UCLASS()
class TCRFAS_API ASigma : public ACreature_Base
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASigma();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void SetCreature() override;

};
