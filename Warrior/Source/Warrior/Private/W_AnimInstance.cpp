// Fill out your copyright notice in the Description page of Project Settings.


#include "W_AnimInstance.h"
#include "W_Character.h"

UW_AnimInstance::UW_AnimInstance()
{
	CurrentPawnSpeed = 0.0f;
	IsInAir = false;
	IsAttack = false;
	IsDead = false;

	static ConstructorHelpers::FObjectFinder<UAnimMontage> ATTACK_MONTAGE(TEXT("/Game/InfinityBladeWarriors/Animation/WeaponAttackMontage.WeaponAttackMontage"));
	if (ATTACK_MONTAGE.Succeeded())
	{
		//UE_LOG(LogTemp, Warning, TEXT("111"));
		AttackMontage = ATTACK_MONTAGE.Object;
	}
}

void UW_AnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	auto Pawn = TryGetPawnOwner();
	if (!::IsValid(Pawn))
		return;

	if (!IsDead)
	{
		CurrentPawnSpeed = Pawn->GetVelocity().Size();
		auto Character = Cast<ACharacter>(Pawn);
		IsInAir = Character->GetCharacterMovement()->IsFalling();

		auto Character2 = Cast<AW_Character>(Character);
		IsAttack = Character2->GetAttackState();
	}
}

void UW_AnimInstance::PlayAttackMontage()
{
	Montage_Play(AttackMontage, 1.0f);
}

void UW_AnimInstance::JumpToAttackMontageSection(int32 NewSection)
{
	Montage_JumpToSection(GetAttackMontageSectionName(NewSection), AttackMontage);
}

void UW_AnimInstance::AnimNotify_AttackHitCheck()
{
	OnAttackHitCheck.Broadcast();
}

void UW_AnimInstance::AnimNotify_NextAttackCheck()
{
	OnNextAttackCheck.Broadcast();
}

FName UW_AnimInstance::GetAttackMontageSectionName(int32 Section)
{
	return FName(*FString::Printf(TEXT("Attack%d"), Section));
}
