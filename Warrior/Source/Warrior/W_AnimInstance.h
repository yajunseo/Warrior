// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Warrior.h"
#include "Animation/AnimInstance.h"
#include "W_AnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class WARRIOR_API UW_AnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	UW_AnimInstance();
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		float CurrentPawnSpeed;
};
