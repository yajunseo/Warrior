// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Warrior.h"
#include "Blueprint/UserWidget.h"
#include "W_CharacterSelectWidget.generated.h"

/**
 * 
 */
UCLASS()
class WARRIOR_API UW_CharacterSelectWidget : public UUserWidget
{
	GENERATED_BODY()
	
protected:

	virtual void NativeConstruct() override;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Character)
		int32 CurrentIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Character)
		int32 MaxIndex;

	TWeakObjectPtr<USkeletalMeshComponent> TargetComponent;


	UPROPERTY()
		class UEditableTextBox* TextBox;

	UPROPERTY()
		class UButton* ConfirmButton;

private:

	UFUNCTION()
		void OnConfirmClicked();
};
