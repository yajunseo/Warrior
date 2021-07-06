// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Warrior.h"
#include "GameFramework/GameModeBase.h"
#include "W_GameMode.generated.h"

/**
 * 
 */
UCLASS()
class WARRIOR_API AW_GameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	AW_GameMode();

	virtual void PostLogin(APlayerController* NewPlayer) override;
};
