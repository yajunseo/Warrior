// Fill out your copyright notice in the Description page of Project Settings.


#include "W_AIController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BlackboardComponent.h"

const FName AW_AIController::HomePosKey(TEXT("HomePos"));
const FName AW_AIController::PatrolPosKey(TEXT("PatrolPos"));
const FName AW_AIController::TargetKey(TEXT("Target"));

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
		BTAsset = BTObject.Object;
	}
}

void AW_AIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
}

void AW_AIController::RunAI()
{
	if (UseBlackboard(BBAsset, Blackboard))
	{
		Blackboard->SetValueAsVector(HomePosKey, GetPawn()->GetActorLocation());
		RunBehaviorTree(BTAsset);
		if (!RunBehaviorTree(BTAsset))
		{
			UE_LOG(LogTemp, Warning, TEXT("AIController couldn't run behavior tree!"));
		}
	}
}

void AW_AIController::StopAI()
{
	auto BehaviorTreeComponent = Cast<UBehaviorTreeComponent>(BrainComponent);
	if (BehaviorTreeComponent != nullptr)
	{
		BehaviorTreeComponent->StopTree(EBTStopMode::Safe);
	}
}
