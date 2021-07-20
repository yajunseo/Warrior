// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Warrior.h"
#include "Blueprint/UserWidget.h"
#include "W_WarriorWidget.generated.h"

/**
 * 
 */
UCLASS()
class WARRIOR_API UW_WarriorWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	void BindCharacterStat(class UW_CharacterStatComponent* NewCharacterStat);

protected:

	virtual void NativeConstruct() override;
	void UpdateHPWidget();

private:
	TWeakObjectPtr<class UW_CharacterStatComponent> CurrentCharacterStat;

	UPROPERTY()
		class UProgressBar* HPProgressBar;
};
