// Fill out your copyright notice in the Description page of Project Settings.

#pragma once



#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "UiScreen_Base.h"
#include "UiScreen_Commandboard.h"

#include "UIManager.generated.h"

UENUM()
enum Screen
{
	CommandBoard = 0,
    SkillBoard,
    ArenaMenu,
    DomainBoard,
    DomainClash,
    Memoria,
    PartyMenu,
    TurnIndicator,
    EndCombatMenu,
    Notifcation,
    PartyStats,
    Dialogue,


    _NumberOfScreens
};

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

	virtual void Initialize();

	UPROPERTY()
	UStaticMesh* EmptyMesh;
	
	AUiScreen_Commandboard* CommandboardRef;

	TMap<Screen, AUiScreen_Base*> DynamicScreens;
	Screen Testo;
	
	
};
