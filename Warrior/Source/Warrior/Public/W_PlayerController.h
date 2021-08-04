// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Warrior.h"
#include "GameFramework/PlayerController.h"
#include "W_PlayerController.generated.h"

/**
 * 
 */
UCLASS()
class WARRIOR_API AW_PlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	virtual void PostInitializeComponents() override;
	virtual void OnPossess(APawn* aPawn) override;

protected:
	virtual void BeginPlay() override;
};
