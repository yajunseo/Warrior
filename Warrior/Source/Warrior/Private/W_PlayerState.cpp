// Fill out your copyright notice in the Description page of Project Settings.


#include "W_PlayerState.h"
#include "W_GameInstance.h"

AW_PlayerState::AW_PlayerState()
{
	CharacterLevel = 1;
	GameScore = 0;
	Exp = 0;
}

int32 AW_PlayerState::GetGameScore() const
{
	return GameScore;
}

int32 AW_PlayerState::GetCharacterLevel() const
{
	return CharacterLevel;
}

void AW_PlayerState::InitPlayerData()
{
	SetPlayerName("Warrior");
	SetCharacterLevel(5);
	GameScore = 0;
	Exp = 0;
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
	return DidLevelUp;
}

void AW_PlayerState::AddGameScore()
{
	GameScore++;
	OnPlayerStateChanged.Broadcast();
}

void AW_PlayerState::SetCharacterLevel(int32 NewCharacterLevel)
{
	auto WGameInstance = Cast<UW_GameInstance>(GetGameInstance());

	CurrentStatData = WGameInstance->GetCharacterData(NewCharacterLevel);

	CharacterLevel = NewCharacterLevel;
}
