// Fill out your copyright notice in the Description page of Project Settings.


#include "W_AIController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BlackboardComponent.h"

const FName AW_AIController::HomePosKey(TEXT("HomePos"));
const FName AW_AIController::PatrolPosKey(TEXT("PatrolPos"));

AW_AIController::AW_AIController()
{
	static ConstructorHelpers::FObjectFinder<UBlackboardData> BBObject(TEXT("/Game/AI/BB_Warrior.BB_Warrior"));
	if (BBObject.Succeeded())
	{
		BBAsset = BBObject.Object;
	}

	static ConstructorHelpers::FObjectFinder<UBehaviorTree> BTObject(TEXT("/Game/AI/BT_Warrior.BT_Warrior"));
	if (BTObject.Succeeded())
	{
		UE_LOG(LogTemp, Warning, TEXT("11"));
		BTAsset = BTObject.Object;
	}
}

void AW_AIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	if (UseBlackboard(BBAsset, Blackboard))
	{
		UE_LOG(LogTemp, Warning, TEXT("22"));
		Blackboard->SetValueAsVector(HomePosKey, InPawn->GetActorLocation());
		if (!RunBehaviorTree(BTAsset))
		{
			UE_LOG(LogTemp, Warning, TEXT("33"));
		}
	}
}