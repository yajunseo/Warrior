// Fill out your copyright notice in the Description page of Project Settings.


#include "W_GameplayWidget.h"
#include "Components/Button.h"
#include "W_PlayerController.h"

void UW_GameplayWidget::NativeConstruct()
{
	Super::NativeConstruct();

	ResumeButton = Cast<UButton>(GetWidgetFromName(TEXT("btnResume")));
	if (nullptr != ResumeButton)
	{
		ResumeButton->OnClicked.AddDynamic(this, &UW_GameplayWidget::OnResumeClicked);
	}

	ReturnToTitleButton = Cast<UButton>(GetWidgetFromName(TEXT("btnReturnToTitle")));
	if (nullptr != ReturnToTitleButton)
	{
		ReturnToTitleButton->OnClicked.AddDynamic(this, &UW_GameplayWidget::OnReturnToTitleClicked);
	}

	RetryGameButton = Cast<UButton>(GetWidgetFromName(TEXT("btnRetryGame")));
	if (nullptr != RetryGameButton)
	{
		RetryGameButton->OnClicked.AddDynamic(this, &UW_GameplayWidget::OnRetryGameClicked);
	}
}

void UW_GameplayWidget::OnResumeClicked()
{
	auto ABPlayerController = Cast<AW_PlayerController>(GetOwningPlayer());

	RemoveFromParent();
	ABPlayerController->ChangeInputMode(true);
	ABPlayerController->SetPause(false);
}

void UW_GameplayWidget::OnReturnToTitleClicked()
{
	UGameplayStatics::OpenLevel(GetWorld(), TEXT("Title"));
}

void UW_GameplayWidget::OnRetryGameClicked()
{
	auto ABPlayerController = Cast<AW_PlayerController>(GetOwningPlayer());
	ABPlayerController->RestartLevel();
}
