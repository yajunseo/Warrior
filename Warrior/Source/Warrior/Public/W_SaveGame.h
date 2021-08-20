// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Warrior.h"
#include "GameFramework/SaveGame.h"
#include "W_SaveGame.generated.h"

/**
 * 
 */
UCLASS()
class WARRIOR_API UW_SaveGame : public USaveGame
{
	GENERATED_BODY()
	
public:
	UW_SaveGame();

	UPROPERTY()
		int32 Level;

	UPROPERTY()
		int32 Exp;

	UPROPERTY()
		FString PlayerName;

	UPROPERTY()
		int32 HighScore;
};
