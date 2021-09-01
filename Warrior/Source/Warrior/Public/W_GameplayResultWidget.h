// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Warrior.h"
#include "W_GameplayWidget.h"
#include "W_GameplayResultWidget.generated.h"

/**
 * 
 */
UCLASS()
class WARRIOR_API UW_GameplayResultWidget : public UW_GameplayWidget
{
	GENERATED_BODY()
	
public:
	void BindGameState(class AW_GameState* GameState);

protected:
	virtual void NativeConstruct() override;

private:
	TWeakObjectPtr<class AW_GameState> CurrentGameState;
};
