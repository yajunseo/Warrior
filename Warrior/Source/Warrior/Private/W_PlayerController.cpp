#// Fill out your copyright notice in the Description page of Project Settings.


#include "W_PlayerController.h"
#include "W_HUDWidget.h"
#include "W_PlayerState.h"
#include "W_Character.h"
#include "W_GameState.h"

AW_PlayerController::AW_PlayerController()
{
	static ConstructorHelpers::FClassFinder<UW_HUDWidget> UI_HUD_C(TEXT("/Game/UI/UI_HUD.UI_HUD_C"));
	if (UI_HUD_C.Succeeded())
	{
		HUDWidgetClass = UI_HUD_C.Class;
	}

	/*static ConstructorHelpers::FClassFinder<UABGameplayWidget> UI_MENU_C(TEXT("/Game/Book/UI/UI_Menu.UI_Menu_C"));
	if (UI_MENU_C.Succeeded())
	{
		MenuWidgetClass = UI_MENU_C.Class;
	}

	static ConstructorHelpers::FClassFinder<UABGameplayResultWidget> UI_RESULT_C(TEXT("/Game/Book/UI/UI_Result.UI_Result_C"));
	if (UI_RESULT_C.Succeeded())
	{
		ResultWidgetClass = UI_RESULT_C.Class;
	}*/
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

	ChangeInputMode(true);

	FInputModeGameOnly InputMode;
	SetInputMode(InputMode);

	HUDWidget = CreateWidget<UW_HUDWidget>(this, HUDWidgetClass);	
	HUDWidget->AddToViewport();

	//ResultWidget = CreateWidget<UW_GameplayResultWidget>(this, ResultWidgetClass);

	W_PlayerState = Cast<AW_PlayerState>(PlayerState);
	HUDWidget->BindPlayerState(W_PlayerState);
	W_PlayerState->OnPlayerStateChanged.Broadcast();
}

void AW_PlayerController::NPCKill(class AW_Character* KilledNPC) const
{
	W_PlayerState->AddExp(KilledNPC->GetExp());
}

void AW_PlayerController::AddGameScore() const
{
	W_PlayerState->AddGameScore();
}

UW_HUDWidget* AW_PlayerController::GetHUDWidget() const
{
	return HUDWidget;
}

void AW_PlayerController::ChangeInputMode(bool bGameMode)
{
	if (bGameMode)
	{
		SetInputMode(GameInputMode);
		bShowMouseCursor = false;
	}
	else
	{
		SetInputMode(UIInputMode);
		bShowMouseCursor = true;
	}
}
void AW_PlayerController::ShowResultUI()
{
	/*auto W_GameState = Cast<AW_GameState>(UGameplayStatics::GetGameState(this));
	ResultWidget->BindGameState(W_GameState);

	ResultWidget->AddToViewport();
	ChangeInputMode(false);*/
}

void AW_PlayerController::OnGamePause()
{
	/*MenuWidget = CreateWidget<UABGameplayWidget>(this, MenuWidgetClass);
	ABCHECK(nullptr != MenuWidget);
	MenuWidget->AddToViewport(3);

	SetPause(true);
	ChangeInputMode(false);*/
}