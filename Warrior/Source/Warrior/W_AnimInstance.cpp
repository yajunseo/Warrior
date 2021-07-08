// Fill out your copyright notice in the Description page of Project Settings.


#include "W_AnimInstance.h"

UW_AnimInstance::UW_AnimInstance()
{
	CurrentPawnSpeed = 0.0f;
	IsInAir = false;
}

void UW_AnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	auto Pawn = TryGetPawnOwner();
	if (::IsValid(Pawn))
	{
		CurrentPawnSpeed = Pawn->GetVelocity().Size();
		auto Character = Cast<ACharacter>(Pawn);
		IsInAir = Character->GetCharacterMovement()->IsFalling();
	}
}
