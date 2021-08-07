// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "W_PlayerState.generated.h"

/**
 * 
 */
UCLASS()
class WARRIOR_API AW_PlayerState : public APlayerState
{
	GENERATED_BODY()
	
public:
	AW_PlayerState();

	int32 GetGameScore() const;
	int32 GetCharacterLevel() const;

	void InitPlayerData();

protected:
	UPROPERTY(Transient)
		int32 GameScore;

	UPROPERTY(Transient)
		int32 CharacterLevel;
};
