// Fill out your copyright notice in the Description page of Project Settings.


#include "W_Character.h"

// Sets default values
AW_Character::AW_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SPRINGARM"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));

	SpringArm->SetupAttachment(GetCapsuleComponent());
	Camera->SetupAttachment(SpringArm);

	GetCapsuleComponent()->SetCapsuleHalfHeight(95);
	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -97.0f), FRotator(0.0f, -90.0f, 0.0f));

	SpringArm->TargetArmLength = 400.0f;
	SpringArm->SetRelativeRotation(FRotator(-15.0f, 0.0f, 0.0f));

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_KWANG(TEXT("/Game/ParagonKwang/Characters/Heroes/Kwang/Meshes/Kwang_GDC.Kwang_GDC"));

	if (SK_KWANG.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(SK_KWANG.Object);
	}

	//GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);

	/*static ConstructorHelpers::FClassFinder<UAnimInstance> WARRIOR_ANIM(TEXT("/Game/Book/Animations/WarriorAnimBlueprint.WarriorAnimBlueprint_C"));

	if (WARRIOR_ANIM.Succeeded())
	{
		GetMesh()->SetAnimInstanceClass(WARRIOR_ANIM.Class);
	}*/

	SetViewMode(EViewMode::THIRD_PERSON_VIEW1);

	ArmLengthSpeed = 3.0f;
	ArmRotationSpeed = 10.0f;
}

// Called when the game starts or when spawned
void AW_Character::BeginPlay()
{
	Super::BeginPlay();

}

void AW_Character::SetViewMode(EViewMode NewControlMode)
{
	CurrentControlMode = NewControlMode;

	switch (CurrentControlMode)
	{
	case EViewMode::THIRD_PERSON_VIEW1:
		//SpringArm->TargetArmLength = 450.0f;
		//SpringArm->SetRelativeRotation(FRotator::ZeroRotator);
		ArmLengthTo = 450.0f;
		ArmRotationTo = FRotator(-45.0f, 0.0f, 0.0f);
		SpringArm->bUsePawnControlRotation = true;
		SpringArm->bInheritPitch = true;
		SpringArm->bInheritRoll = true;
		SpringArm->bInheritYaw = true;
		SpringArm->bDoCollisionTest = true;
		bUseControllerRotationYaw = false;
		GetCharacterMovement()->bOrientRotationToMovement = true;
		GetCharacterMovement()->bUseControllerDesiredRotation = false;
		GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f);
		break;
	case EViewMode::THIRD_PERSON_VIEW2:
		//SpringArm->TargetArmLength = 800.0f;
		//SpringArm->SetRelativeRotation(FRotator(-45.0f, 0.0f, 0.0f));
		ArmLengthTo = 800.0f;
		ArmRotationTo = FRotator(-45.0f, 0.0f, 0.0f);
		SpringArm->bUsePawnControlRotation = false;
		SpringArm->bInheritPitch = false;
		SpringArm->bInheritRoll = false;
		SpringArm->bInheritYaw = false;
		SpringArm->bDoCollisionTest = false;
		bUseControllerRotationYaw = false;
		GetCharacterMovement()->bOrientRotationToMovement = false;
		GetCharacterMovement()->bUseControllerDesiredRotation = true;
		GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f);
		break;
	}
}

// Called every frame
void AW_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	SpringArm->TargetArmLength = FMath::FInterpTo(SpringArm->TargetArmLength, ArmLengthTo, DeltaTime, ArmLengthSpeed);

	switch (CurrentControlMode)
	{
	case EViewMode::THIRD_PERSON_VIEW1:
		FRotator TmpRo = FMath::RInterpTo(SpringArm->GetRelativeRotation(), ArmRotationTo, DeltaTime, ArmRotationSpeed);
		SpringArm->SetRelativeRotation(TmpRo);
		break;
	}

	switch (CurrentControlMode)
	{
	case EViewMode::THIRD_PERSON_VIEW2:
		if (DirectionToMove.SizeSquared() > 0.0f)
		{
			GetController()->SetControlRotation(FRotationMatrix::MakeFromX(DirectionToMove).Rotator());
			AddMovementInput(DirectionToMove);
		}
		break;
	}
}

// Called to bind functionality to input
void AW_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &AW_Character::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &AW_Character::MoveRight);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &AW_Character::LookUp);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &AW_Character::Turn);

	PlayerInputComponent->BindAction(TEXT("ViewChange"), EInputEvent::IE_Pressed, this, &AW_Character::ViewChange);
}

void AW_Character::MoveForward(float NewAxisValue)
{
	switch (CurrentControlMode)
	{
	case EViewMode::THIRD_PERSON_VIEW1:
		AddMovementInput(FRotationMatrix(FRotator(0.0f, GetControlRotation().Yaw, 0.0f)).GetUnitAxis(EAxis::X), NewAxisValue);
		break;
	case EViewMode::THIRD_PERSON_VIEW2:
		DirectionToMove.X = NewAxisValue;
		break;
	}
}

void AW_Character::MoveRight(float NewAxisValue)
{
	switch (CurrentControlMode)
	{
	case EViewMode::THIRD_PERSON_VIEW1:
		AddMovementInput(FRotationMatrix(FRotator(0.0f, GetControlRotation().Yaw, 0.0f)).GetUnitAxis(EAxis::Y), NewAxisValue);
		break;
	case EViewMode::THIRD_PERSON_VIEW2:
		DirectionToMove.Y = NewAxisValue;
		break;
	}
}

void AW_Character::LookUp(float NewAxisValue)
{
	switch (CurrentControlMode)
	{
	case EViewMode::THIRD_PERSON_VIEW1:
		AddControllerPitchInput(NewAxisValue);
		break;
	}
}

void AW_Character::Turn(float NewAxisValue)
{
	switch (CurrentControlMode)
	{
	case EViewMode::THIRD_PERSON_VIEW1:
		AddControllerYawInput(NewAxisValue);
		break;
	}
}

void AW_Character::ViewChange()
{
	switch (CurrentControlMode)
	{
	case EViewMode::THIRD_PERSON_VIEW1:
		GetController()->SetControlRotation(GetActorRotation());
		SetViewMode(EViewMode::THIRD_PERSON_VIEW2);
		break;
	case EViewMode::THIRD_PERSON_VIEW2:
		GetController()->SetControlRotation(SpringArm->GetRelativeRotation());
		SetViewMode(EViewMode::THIRD_PERSON_VIEW1);
		break;
	}
}
