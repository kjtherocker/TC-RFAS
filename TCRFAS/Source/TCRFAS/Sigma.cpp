// Fill out your copyright notice in the Description page of Project Settings.


#include "Sigma.h"


// Sets default values
ASigma::ASigma()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}


void ASigma::SetCreature()
{
	MaxHealth = 100;
	CurrentHealth = MaxHealth;
	MaxMana = 100;
	CurrentMana = MaxMana;
	Strength = 75;
	Magic = 30;
	Hit = 30;
	Evasion = 30;
	Defence = 30;
	Resistance= 30;

	Name = "Sigma";

    Skills.Add(NewObject<USkills_Base>());
	Skills.Add(NewObject<UFireBall>());
	
	InitializeAllSkills();

}

// Called when the game starts or when spawned
void ASigma::BeginPlay()
{
	Super::BeginPlay();
	SetCreature();
}

// Called every frame
void ASigma::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



