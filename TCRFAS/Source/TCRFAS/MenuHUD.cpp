// Fill out your copyright notice in the Description page of Project Settings.


#include "MenuHUD.h"
#include "SMainMenuWidget.h"
#include "Widgets/SWeakWidget.h"
#include "Engine/Engine.h"
#include "GameFramework/PlayerController.h"



#define LOCTEXT_NAMESPACE "MenuHud"

void AMenuHUD::BeginPlay()
{
    Super::BeginPlay();

    ShowMenu();
}

void AMenuHUD::ShowMenu()
{
    if(GEngine && GEngine->GameViewport)
    {
        MenuWidget =  SNew(SMainMenuWidget);
        MenuWidget->SetOwningHUD(this);

        FText testo = LOCTEXT("TitleText", "Eatttt Asss");
        MenuWidget->SetTitleText(testo);
        GEngine->GameViewport->AddViewportWidgetContent(SAssignNew(MenuWidgetContainer, SWeakWidget).PossiblyNullContent(MenuWidget.ToSharedRef()));

        if(PlayerOwner)
        {
            PlayerOwner->bShowMouseCursor = true;
            PlayerOwner->SetInputMode(FInputModeUIOnly());
        }
        
    }
}

void AMenuHUD::RemoveMenu()
{
    if(GEngine && GEngine->GameViewport && MenuWidget.IsValid() && MenuWidgetContainer.IsValid())
    {
        GEngine->GameViewport->RemoveViewportWidgetContent(MenuWidgetContainer.ToSharedRef());
    }


    if(PlayerOwner)
    {
        PlayerOwner->bShowMouseCursor = false;
        PlayerOwner->SetInputMode(FInputModeGameAndUI());
    }
}



//Example of how you would call the menu back up

//if(AMenuHUD* MenuHUD = Case<AMenuHUD>(GetHUD()))
//{
//    MenuHUD->ShowMenu();
//}
#undef LOCTEXT_NAMESPACE