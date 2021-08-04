// Fill out your copyright notice in the Description page of Project Settings.


#include "W_WarriorWidget.h"
#include "W_CharacterStatComponent.h"
#include "Components/ProgressBar.h"

void UW_WarriorWidget::BindCharacterStat(UW_CharacterStatComponent* NewCharacterStat)
{
	CurrentCharacterStat = NewCharacterStat;
	NewCharacterStat->OnHPChanged.AddUObject(this, &UW_WarriorWidget::UpdateHPWidget);
}

void UW_WarriorWidget::NativeConstruct()
{
	Super::NativeConstruct();

	HPProgressBar = Cast<UProgressBar>(GetWidgetFromName(TEXT("PB_HPBar")));
	UpdateHPWidget();
}

void UW_WarriorWidget::UpdateHPWidget()
{
	if (CurrentCharacterStat.IsValid())
	{
		if (HPProgressBar != nullptr)
		{
			HPProgressBar->SetPercent(CurrentCharacterStat->GetHPRatio());
		}
	}
}
