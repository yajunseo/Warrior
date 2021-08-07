// Fill out your copyright notice in the Description page of Project Settings.


#include "W_PlayerState.h"

AW_PlayerState::AW_PlayerState()
{
	CharacterLevel = 1;
	GameScore = 0;
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
	CharacterLevel = 5;
	GameScore = 0;
}