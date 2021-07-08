// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Warrior.h"
#include "GameFramework/Character.h"
#include "W_Character.generated.h"

UCLASS()
class WARRIOR_API AW_Character : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AW_Character();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	enum class EViewMode
	{
		THIRD_PERSON_VIEW1,
		THIRD_PERSON_VIEW2,
	};

	void SetViewMode(EViewMode NewControlMode);
	EViewMode CurrentControlMode = EViewMode::THIRD_PERSON_VIEW1;
	FVector DirectionToMove = FVector::ZeroVector;

	float ArmLengthTo = 0.0f;
	FRotator ArmRotationTo = FRotator::ZeroRotator;
	float ArmLengthSpeed = 0.0f;
	float ArmRotationSpeed = 0.0f;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, Category = Camera)
		USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere, Category = Camera)
		UCameraComponent* Camera;

private:
	void MoveForward(float NewAxisValue);
	void MoveRight(float NewAxisValue);
	void LookUp(float NewAxisValue);
	void Turn(float NewAxisValue);

	void ViewChange();
};