// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Warrior.h"
#include "AIController.h"
#include "W_AIController.generated.h"

/**
 * 
 */
UCLASS()
class WARRIOR_API AW_AIController : public AAIController
{
	GENERATED_BODY()
	
public:
	AW_AIController();
	virtual void OnPossess(APawn* InPawn) override;

	static const FName HomePosKey;
	static const FName PatrolPosKey;

private:
	UPROPERTY()
		class UBehaviorTree* BTAsset;

	UPROPERTY()
		class UBlackboardData* BBAsset;
};
