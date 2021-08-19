// Fill out your copyright notice in the Description page of Project Settings.


#include "W_HUDWidget.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "W_CharacterStatComponent.h"
#include "W_PlayerState.h"

void UW_HUDWidget::BindCharacterStat(UW_CharacterStatComponent* CharacterStat)
{
	CurrentCharacterStat = CharacterStat;
	CharacterStat->OnHPChanged.AddUObject(this, &UW_HUDWidget::UpdateCharacterStat);
}

void UW_HUDWidget::BindPlayerState(AW_PlayerState* PlayerState)
{
	CurrentPlayerState = PlayerState;
	PlayerState->OnPlayerStateChanged.AddUObject(this, &UW_HUDWidget::UpdatePlayerState);
}

void UW_HUDWidget::NativeConstruct()
{
	Super::NativeConstruct();
	HPBar = Cast<UProgressBar>(GetWidgetFromName(TEXT("pbHP")));

	ExpBar = Cast<UProgressBar>(GetWidgetFromName(TEXT("pbExp")));

	PlayerName = Cast<UTextBlock>(GetWidgetFromName(TEXT("txtPlayerName")));

	PlayerLevel = Cast<UTextBlock>(GetWidgetFromName(TEXT("txtLevel")));

	CurrentScore = Cast<UTextBlock>(GetWidgetFromName(TEXT("txtCurrentScore")));

	HighScore = Cast<UTextBlock>(GetWidgetFromName(TEXT("txtHighScore")));
}

void UW_HUDWidget::UpdateCharacterStat()
{
	HPBar->SetPercent(CurrentCharacterStat->GetHPRatio());
}

void UW_HUDWidget::UpdatePlayerState()
{
	ExpBar->SetPercent(CurrentPlayerState->GetExpRatio());
	PlayerName->SetText(FText::FromString(CurrentPlayerState->GetPlayerName()));
	PlayerLevel->SetText(FText::FromString(FString::FromInt(CurrentPlayerState->GetCharacterLevel())));
	CurrentScore->SetText(FText::FromString(FString::FromInt(CurrentPlayerState->GetGameScore())));
}