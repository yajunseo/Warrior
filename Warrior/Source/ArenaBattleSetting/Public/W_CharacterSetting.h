// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "W_CharacterSetting.generated.h"

/**
 * 
 */
UCLASS(config=ArenaBattle)
class ARENABATTLESETTING_API UW_CharacterSetting : public UObject
{
	GENERATED_BODY()
	
public:
	UW_CharacterSetting();

	UPROPERTY(config)
		TArray<FSoftObjectPath> CharacterAssets;
};
