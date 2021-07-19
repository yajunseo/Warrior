// Fill out your copyright notice in the Description page of Project Settings.


#include "W_WarriorWidget.h"
#include "Components/ProgressBar.h"
#include "W_Character.h"

void UW_WarriorWidget::NativeConstruct()
{
	Super::NativeConstruct();

	HPProgressBar = Cast<UProgressBar>(GetWidgetFromName(TEXT("PB_HPBAR")));

	TotalHP = 100;
	CurrentHP = 100;
	//UpdateHPWidget(CurrentHP, TotalHP);
}

void UW_WarriorWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
	//UpdateHPWidget(CurrentHP, TotalHP);
}

void UW_WarriorWidget::UpdateHPWidget(float currentHP, float totalHP)
{
	UE_LOG(LogTemp, Warning, TEXT("%f"), currentHP);
	CurrentHP = currentHP;
	TotalHP = totalHP;
	if(HPProgressBar != nullptr)
		HPProgressBar->SetPercent(CurrentHP / TotalHP);
}
