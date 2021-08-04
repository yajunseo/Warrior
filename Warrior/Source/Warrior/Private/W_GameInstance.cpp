// Fill out your copyright notice in the Description page of Project Settings.


#include "W_GameInstance.h"

UW_GameInstance::UW_GameInstance()
{
	FString CharacterDataPath = TEXT("/Game/GameData/W_CharacterData.W_CharacterData");
	static ConstructorHelpers::FObjectFinder<UDataTable> DT_WCHARACTER(*CharacterDataPath);

	if (DT_WCHARACTER.Succeeded())
	{
		W_CharacterTable = DT_WCHARACTER.Object;
	}
}

void UW_GameInstance::Init()
{
	Super::Init();

}

FW_CharacterData* UW_GameInstance::GetCharacterData(int32 Level)
{
	return W_CharacterTable->FindRow<FW_CharacterData>(*FString::FromInt(Level), TEXT(""));
}