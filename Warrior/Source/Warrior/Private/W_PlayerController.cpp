#// Fill out your copyright notice in the Description page of Project Settings.


#include "W_PlayerController.h"

void AW_PlayerController::PostInitializeComponents()
{
	Super::PostInitializeComponents();
}

void AW_PlayerController::OnPossess(APawn* aPawn)
{
	Super::OnPossess(aPawn);
}

void AW_PlayerController::BeginPlay()
{
	Super::BeginPlay();

	FInputModeGameOnly InputMode;
	SetInputMode(InputMode);
}
