// Fill out your copyright notice in the Description page of Project Settings.


#include "W_GameState.h"

AW_GameState::AW_GameState()
{
	TotalGameScore = 0;
	bGameCleared = false;
}

int32 AW_GameState::GetTotalGameScore() const
{
	return TotalGameScore;
}

void AW_GameState::AddGameScore()
{
	TotalGameScore++;
}

void AW_GameState::SetGameCleared()
{
	bGameCleared = true;
}

bool AW_GameState::IsGameCleared() const
{
	return bGameCleared;
}
