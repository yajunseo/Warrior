// Fill out your copyright notice in the Description page of Project Settings.


#include "W_AnimInstance.h"

UW_AnimInstance::UW_AnimInstance()
{
	CurrentPawnSpeed = 0.0f;
}

void UW_AnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	auto Pawn = TryGetPawnOwner();
	if (::IsValid(Pawn))
	{
		UE_LOG(LogTemp, Warning, TEXT("1"));
		CurrentPawnSpeed = Pawn->GetVelocity().Size();
	}
}
