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
	AW_PlayerController();

	virtual void PostInitializeComponents() override;
	virtual void OnPossess(APawn* aPawn) override;
	void AddGameScore() const;
	class UW_HUDWidget* GetHUDWidget() const;
	void NPCKill(class AW_Character* KilledNPC) const;
	void ChangeInputMode(bool bGameMode = true);
	void ShowResultUI();

protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = UI)
		TSubclassOf<class UW_HUDWidget> HUDWidgetClass;

	/*UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = UI)
		TSubclassOf<class UABGameplayWidget> MenuWidgetClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = UI)
		TSubclassOf<class UABGameplayResultWidget> ResultWidgetClass;*/

private:
	void OnGamePause();

	UPROPERTY()
		class UW_HUDWidget* HUDWidget;

	UPROPERTY()
		class AW_PlayerState* W_PlayerState;

	/*UPROPERTY()
		class UABGameplayWidget* MenuWidget;

	UPROPERTY()
		class UABGameplayResultWidget* ResultWidget;*/

	FInputModeGameOnly GameInputMode;
	FInputModeUIOnly UIInputMode;
};
