// Fill out your copyright notice in the Description page of Project Settings.


#include "W_CharacterStatComponent.h"
#include "W_GameInstance.h"

// Sets default values for this component's properties
UW_CharacterStatComponent::UW_CharacterStatComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
	bWantsInitializeComponent = true;
	
	Level = 1;
}


// Called when the game starts
void UW_CharacterStatComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UW_CharacterStatComponent::InitializeComponent()
{
	Super::InitializeComponent();

	SetNewLevel(Level);
}

void UW_CharacterStatComponent::SetNewLevel(int32 NewLevel)
{
	auto WGameInstance = Cast<UW_GameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));

	CurrentStatData = WGameInstance->GetCharacterData(NewLevel);
	if (CurrentStatData != nullptr)
	{
		Level = NewLevel;
		SetHP(CurrentStatData->MaxHP);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("1111"));
	}
}


void UW_CharacterStatComponent::SetDamage(float NewDamage)
{
	SetHP(FMath::Clamp<float>(CurrentHP - NewDamage, 0.0f, CurrentStatData->MaxHP));
}

void UW_CharacterStatComponent::SetHP(float NewHP)
{
	CurrentHP = NewHP;
	OnHPChanged.Broadcast();
	if (CurrentHP < KINDA_SMALL_NUMBER)
	{
		CurrentHP = 0.0f;
		OnHPIsZero.Broadcast();
	}
}

float UW_CharacterStatComponent::GetAttack()
{
	return CurrentStatData->Attack;
}

float UW_CharacterStatComponent::GetHPRatio()
{
	return (CurrentStatData->MaxHP < KINDA_SMALL_NUMBER) ? 0.0f : (CurrentHP / CurrentStatData->MaxHP);
}