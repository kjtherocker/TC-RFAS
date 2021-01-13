// Fill out your copyright notice in the Description page of Project Settings.


#include "SMainMenuWidget.h"

#include "MenuHUD.h"


#define LOCTEXT_NAMESPACE "MainMenu"

void SMainMenuWidget::Construct(const FArguments& InArgs)
{

    bCanSupportFocus = true;
    
    const FMargin ContentPadding = FMargin(500.0f, 300.f);
    const FMargin ButtonPadding = FMargin(10.f);

    const FText PlayText = LOCTEXT("PlayGame", "Play");
    const FText SettingsText = LOCTEXT("Settings", "Settings");
    const FText QuitText = LOCTEXT("QuitGame", "Quit Game");

    FSlateFontInfo ButtonTextStyle = FCoreStyle::Get().GetFontStyle("EmbossedText");
    ButtonTextStyle.Size = 40.f;

    FSlateFontInfo TileTextStyle = ButtonTextStyle;
    TileTextStyle.Size = 60.f;
    
    
     ChildSlot
     [
        SNew(SOverlay)
        + SOverlay::Slot()
        .HAlign(HAlign_Fill)
        .VAlign(VAlign_Fill)
        [
            SNew(SImage).ColorAndOpacity(FColor::Black)
        ]
        + SOverlay::Slot()
        .HAlign(HAlign_Fill)
        .VAlign(VAlign_Fill)
        .Padding(ContentPadding)
        [
           SNew(SVerticalBox)

           //TitleText
           + SVerticalBox::Slot()
           [
               SNew(STextBlock)
               .Text(TitleText)
               .Font(TileTextStyle)
               .Justification(ETextJustify::Center)
           ]

           //PlayButton
           + SVerticalBox::Slot()
           .Padding(ButtonPadding)
           [
               SNew(SButton)
               .OnClicked(this, &SMainMenuWidget::OnPlayClicked)
               [
                 SNew(STextBlock)
                 .Text(PlayText)
                 .Font(TileTextStyle)
                 .Justification(ETextJustify::Center)
               ]
           ]

           //settings Button
          + SVerticalBox::Slot()
          .Padding(ButtonPadding)
          [
              SNew(SButton)
              [
                SNew(STextBlock)
                .Text(SettingsText)
                .Font(TileTextStyle)
                .Justification(ETextJustify::Center)
              ]
          ]

          //quit Button
          + SVerticalBox::Slot()
          .Padding(ButtonPadding)
          [
              SNew(SButton)
              .OnClicked(this, &SMainMenuWidget::OnQuitClicked)
              [
                SNew(STextBlock)
                .Text(QuitText)
                .Font(TileTextStyle)
                .Justification(ETextJustify::Center)
              ]
          ]
        ]
        
        
     ];
    
}

FReply SMainMenuWidget::OnPlayClicked() const
{
    if(OwningHUD.IsValid())
    {
        OwningHUD->RemoveMenu();
    }
    return FReply::Handled();
}

FReply SMainMenuWidget::OnQuitClicked() const
{
    if(OwningHUD.IsValid())
    {
        if(APlayerController* PC = OwningHUD->PlayerOwner)
        {
            PC->ConsoleCommand("quit");
        }
        
    }

    return FReply::Handled();
}

void SMainMenuWidget::SetOwningHUD(TWeakObjectPtr<class AMenuHUD> aHud)
{
    OwningHUD = aHud;
    
}

void SMainMenuWidget::SetTitleText(FText aText)
{
    TitleText = aText;
}


#undef LOCTEXT_NAMESPACE
