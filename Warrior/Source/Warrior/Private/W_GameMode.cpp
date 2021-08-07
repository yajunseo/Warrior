// Fill out your copyright notice in the Description page of Project Settings.


#include "W_GameMode.h"
#include "W_Character.h"
#include "W_PlayerController.h"
#include "W_PlayerState.h"

AW_GameMode::AW_GameMode()
{
	DefaultPawnClass = AW_Character::StaticClass();
	PlayerControllerClass = AW_PlayerController::StaticClass();
	PlayerStateClass = AW_PlayerState::StaticClass();
}

void AW_GameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	auto W_PlayerState = Cast<AW_PlayerState>(NewPlayer->PlayerState);
	W_PlayerState->InitPlayerData();
}
