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

protected:

	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

private:

	UPROPERTY()
		class UProgressBar* HPProgressBar;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Actor, Meta = (AllowPrivateAccess = true))
		TSubclassOf<class AW_Character> WarriorActor;

private:
	float CurrentHP;
	float TotalHP;

public:
	void SetTotalHP(float hp) { TotalHP = hp; };
	float GetTotalHP() { return TotalHP; };
	void SetCurrentHP(float hp) { CurrentHP = hp; };
	float GetCurrentHP() { return CurrentHP; };

	void UpdateHPWidget(float currentHP, float totalHP);
};
