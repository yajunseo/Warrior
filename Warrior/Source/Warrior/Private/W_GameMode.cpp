// Fill out your copyright notice in the Description page of Project Settings.


#include "W_GameMode.h"
#include "W_Character.h"
#include "W_PlayerController.h"
#include "W_PlayerState.h"
#include "W_GameState.h"

AW_GameMode::AW_GameMode()
{
	DefaultPawnClass = AW_Character::StaticClass();
	PlayerControllerClass = AW_PlayerController::StaticClass();
	PlayerStateClass = AW_PlayerState::StaticClass();
	GameStateClass = AW_GameState::StaticClass();
	ScoreToClear = 2;
}

void AW_GameMode::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	W_GameState = Cast<AW_GameState>(GameState);
}

void AW_GameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	auto W_PlayerState = Cast<AW_PlayerState>(NewPlayer->PlayerState);
	W_PlayerState->InitPlayerData();
}

void AW_GameMode::AddScore(AW_PlayerController* ScoredPlayer)
{
	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		const auto ABPlayerController = Cast<AW_PlayerController>(It->Get());
		if ((nullptr != ABPlayerController) && (ScoredPlayer == ABPlayerController))
		{
			ABPlayerController->AddGameScore();
			break;
		}
	}

	W_GameState->AddGameScore();

	if (GetScore() >= ScoreToClear)
	{
		W_GameState->SetGameCleared();

		for (FConstPawnIterator It = GetWorld()->GetPawnIterator(); It; ++It)
		{
			(*It)->TurnOff();
		}

		for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
		{
			const auto ABPlayerController = Cast<AW_PlayerController>(It->Get());
			if (nullptr != ABPlayerController)
			{
				ABPlayerController->ShowResultUI();
			}
		}
	}
}

int32 AW_GameMode::GetScore() const
{
	return W_GameState->GetTotalGameScore();
}