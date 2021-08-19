#// Fill out your copyright notice in the Description page of Project Settings.


#include "W_PlayerController.h"
#include "W_HUDWidget.h"
#include "W_PlayerState.h"
#include "W_Character.h"

AW_PlayerController::AW_PlayerController()
{
	static ConstructorHelpers::FClassFinder<UW_HUDWidget> UI_HUD_C(TEXT("/Game/UI/UI_HUD.UI_HUD_C"));
	if (UI_HUD_C.Succeeded())
	{
		HUDWidgetClass = UI_HUD_C.Class;
	}
}

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

	HUDWidget = CreateWidget<UW_HUDWidget>(this, HUDWidgetClass);	
	HUDWidget->AddToViewport();

	W_PlayerState = Cast<AW_PlayerState>(PlayerState);
	HUDWidget->BindPlayerState(W_PlayerState);
	W_PlayerState->OnPlayerStateChanged.Broadcast();
}

void AW_PlayerController::NPCKill(class AW_Character* KilledNPC) const
{
	W_PlayerState->AddExp(KilledNPC->GetExp());
}

UW_HUDWidget* AW_PlayerController::GetHUDWidget() const
{
	return HUDWidget;
}
