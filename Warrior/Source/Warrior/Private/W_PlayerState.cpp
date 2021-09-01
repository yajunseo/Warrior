// Fill out your copyright notice in the Description page of Project Settings.


#include "W_PlayerState.h"
#include "W_GameInstance.h"
#include "W_SaveGame.h"

AW_PlayerState::AW_PlayerState()
{
	CharacterLevel = 1;
	GameScore = 0;
	GameHighScore = 0;
	Exp = 0;
	SaveSlotName = TEXT("Player1");
}

int32 AW_PlayerState::GetGameScore() const
{
	return GameScore;
}

int32 AW_PlayerState::GetGameHighScore() const
{
	return GameHighScore;
}

int32 AW_PlayerState::GetCharacterLevel() const
{
	return CharacterLevel;
}

void AW_PlayerState::InitPlayerData()
{
	auto WSaveGame = Cast<UW_SaveGame>(UGameplayStatics::LoadGameFromSlot(SaveSlotName, 0));
	if (WSaveGame == nullptr)
	{
		WSaveGame = GetMutableDefault<UW_SaveGame>();
	}

	SetPlayerName(WSaveGame->PlayerName);
	SetCharacterLevel(WSaveGame->Level);
	GameScore = 0;
	GameHighScore = WSaveGame->HighScore;
	Exp = WSaveGame->Exp;
	SavePlayerData();
}

void AW_PlayerState::SavePlayerData()
{
	UW_SaveGame* NewPlayerData = NewObject<UW_SaveGame>();
	NewPlayerData->PlayerName = GetPlayerName();
	NewPlayerData->Level = CharacterLevel;
	NewPlayerData->Exp = Exp;
	NewPlayerData->HighScore = GameHighScore;

	UGameplayStatics::SaveGameToSlot(NewPlayerData, SaveSlotName, 0);
}

void AW_PlayerState::SetGameCleared()
{
	bGameCleared = true;
}

bool AW_PlayerState::IsGameCleared() const
{
	return bGameCleared;
}


float AW_PlayerState::GetExpRatio() const
{
	if (CurrentStatData->NextExp <= KINDA_SMALL_NUMBER)
		return 0.0f;

	float Result = (float)Exp / (float)CurrentStatData->NextExp;
	return Result;
}

bool AW_PlayerState::AddExp(int32 IncomeExp)
{
	if (CurrentStatData->NextExp == -1)
		return false;

	bool DidLevelUp = false;
	Exp = Exp + IncomeExp;
	if (Exp >= CurrentStatData->NextExp)
	{
		Exp -= CurrentStatData->NextExp;
		SetCharacterLevel(CharacterLevel + 1);
		DidLevelUp = true;
	}

	OnPlayerStateChanged.Broadcast();
	SavePlayerData();
	return DidLevelUp;
}

void AW_PlayerState::AddGameScore()
{
	GameScore++;
	if (GameScore >= GameHighScore)
	{
		GameHighScore = GameScore;
	}

	OnPlayerStateChanged.Broadcast();
	SavePlayerData();
}

void AW_PlayerState::SetCharacterLevel(int32 NewCharacterLevel)
{
	auto WGameInstance = Cast<UW_GameInstance>(GetGameInstance());

	CurrentStatData = WGameInstance->GetCharacterData(NewCharacterLevel);

	CharacterLevel = NewCharacterLevel;
}
