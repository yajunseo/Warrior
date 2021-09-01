// Fill out your copyright notice in the Description page of Project Settings.


#include "W_CharacterSelectWidget.h"
#include "W_CharacterSetting.h"
#include "W_GameInstance.h"
#include "EngineUtils.h"
#include "Animation/SkeletalMeshActor.h"
#include "Components/Button.h"
#include "Components/EditableTextBox.h"
#include "W_SaveGame.h"
#include "W_PlayerState.h"

void UW_CharacterSelectWidget::NativeConstruct()
{
	Super::NativeConstruct();

	TextBox = Cast<UEditableTextBox>(GetWidgetFromName(TEXT("edtPlayerName")));

	ConfirmButton = Cast<UButton>(GetWidgetFromName(TEXT("btnConfirm")));

	ConfirmButton->OnClicked.AddDynamic(this, &UW_CharacterSelectWidget::OnConfirmClicked);
}

void UW_CharacterSelectWidget::OnConfirmClicked()
{
	FString CharacterName = TextBox->GetText().ToString();
	if (CharacterName.Len() <= 0 || CharacterName.Len() > 10) return;

	UW_SaveGame* NewPlayerData = NewObject<UW_SaveGame>();
	NewPlayerData->PlayerName = CharacterName;
	NewPlayerData->Level = 1;
	NewPlayerData->Exp = 0;
	NewPlayerData->HighScore = 0;
	//NewPlayerData->CharacterIndex = CurrentIndex;

	auto W_PlayerState = GetDefault<AW_PlayerState>();
	if (UGameplayStatics::SaveGameToSlot(NewPlayerData, W_PlayerState->SaveSlotName, 0))
	{
		UE_LOG(LogTemp, Warning, TEXT("11"));
		UGameplayStatics::OpenLevel(GetWorld(), TEXT("GamePlay"));
	}
	UE_LOG(LogTemp, Warning, TEXT("22"));
}
