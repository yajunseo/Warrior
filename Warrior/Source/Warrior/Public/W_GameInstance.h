// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Warrior.h"
#include "Engine/DataTable.h"
#include "Engine/GameInstance.h"
#include "Engine/StreamableManager.h"
#include "W_GameInstance.generated.h"

USTRUCT(BlueprintType)
struct FW_CharacterData : public FTableRowBase
{
	GENERATED_BODY()

public:
	FW_CharacterData() : Level(1), MaxHP(100.0f), Attack(10.0f), DropExp(10), NextExp(30) {}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 Level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		float MaxHP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		float Attack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 DropExp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
		int32 NextExp;
};

/**
 * 
 */
UCLASS()
class WARRIOR_API UW_GameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	UW_GameInstance();

	virtual void Init() override;
	FW_CharacterData* GetCharacterData(int32 Level);

	FStreamableManager StreamableManager;

private:
	UPROPERTY()
		class UDataTable* W_CharacterTable;
};