// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Warrior.h"
#include "GameFramework/GameStateBase.h"
#include "W_GameState.generated.h"

/**
 * 
 */
UCLASS()
class WARRIOR_API AW_GameState : public AGameStateBase
{
	GENERATED_BODY()
	
public:
	AW_GameState();

public:
	int32 GetTotalGameScore() const;
	void AddGameScore();
	void SetGameCleared();
	bool IsGameCleared() const;

private:
	UPROPERTY(Transient)
		int32 TotalGameScore;

	UPROPERTY(Transient)
		bool bGameCleared;
};
