// Copyright Epic Games, Inc. All Rights Reserved.

#include "WarriorCharacter.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"

//////////////////////////////////////////////////////////////////////////
// AWarriorCharacter

AWarriorCharacter::AWarriorCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->SetRelativeRotation(FRotator(-15.0f, 0.0f, 0.0f));

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	//FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)

	// ºä ¼³Á¤
	SetViewMode(EViewMode::THIRD_PERSON1);
}

void AWarriorCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	CameraBoom->TargetArmLength = FMath::FInterpTo(CameraBoom->TargetArmLength, ArmLengthTo, DeltaTime,ArmLengthSpeed);

	switch (CurrentViewMode)
	{
	case EViewMode::THIRD_PERSON2:
		if (DirectionToMove.SizeSquared() > 0.0f)
		{
			CameraBoom->GetRelativeRotation() = FMath::RInterpTo(CameraBoom->GetRelativeRotation(), ArmRotationTo, DeltaTime, ArmRotationSpeed);
			AddMovementInput(DirectionToMove);
		}
		break;
	}
}

//////////////////////////////////////////////////////////////////////////
// Input

void AWarriorCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &AWarriorCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AWarriorCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &AWarriorCharacter::Turn);
	PlayerInputComponent->BindAxis("TurnRate", this, &AWarriorCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &AWarriorCharacter::LookUp);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AWarriorCharacter::LookUpAtRate);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &AWarriorCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &AWarriorCharacter::TouchStopped);

	// VR headset functionality
	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &AWarriorCharacter::OnResetVR);
	PlayerInputComponent->BindAction("ViewChange", IE_Pressed, this, &AWarriorCharacter::ViewChange);
}


void AWarriorCharacter::SetViewMode(EViewMode viewMode)
{
	CurrentViewMode = viewMode;

	switch (CurrentViewMode)
	{
	case EViewMode::THIRD_PERSON1:
		ArmLengthTo = 500.f;
		CameraBoom->bUsePawnControlRotation = true;
		CameraBoom->bInheritPitch = true;
		CameraBoom->bInheritRoll = true;
		CameraBoom->bInheritYaw = true;
		CameraBoom->bDoCollisionTest = true;
		bUseControllerRotationYaw = false;
		GetCharacterMovement()->bOrientRotationToMovement = true;
		GetCharacterMovement()->bUseControllerDesiredRotation = false;
		GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f);

		break;
	case EViewMode::THIRD_PERSON2:
		ArmLengthTo = 500.f;
		ArmRotationTo = FRotator(-45.0f, 0.0f, 0.0f);
		CameraBoom->bUsePawnControlRotation = false;
		CameraBoom->bInheritPitch = false;
		CameraBoom->bInheritRoll = false;
		CameraBoom->bInheritYaw = false;
		CameraBoom->bDoCollisionTest = false;
		bUseControllerRotationYaw = false;
		GetCharacterMovement()->bUseControllerDesiredRotation = false;
		GetCharacterMovement()->bOrientRotationToMovement = true;
		GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f);
		break;
	}
}

void AWarriorCharacter::OnResetVR()
{
	// If Warrior is added to a project via 'Add Feature' in the Unreal Editor the dependency on HeadMountedDisplay in Warrior.Build.cs is not automatically propagated
	// and a linker error will result.
	// You will need to either:
	//		Add "HeadMountedDisplay" to [YourProject].Build.cs PublicDependencyModuleNames in order to build successfully (appropriate if supporting VR).
	// or:
	//		Comment or delete the call to ResetOrientationAndPosition below (appropriate if not supporting VR)
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void AWarriorCharacter::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
		Jump();
}

void AWarriorCharacter::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
		StopJumping();
}

void AWarriorCharacter::ViewChange()
{
	switch (CurrentViewMode)
	{
	case EViewMode::THIRD_PERSON1:
		GetController()->SetControlRotation(GetActorRotation());
		SetViewMode(EViewMode::THIRD_PERSON2);
		break;
	case EViewMode::THIRD_PERSON2:
		GetController()->SetControlRotation(CameraBoom->GetRelativeRotation());
		SetViewMode(EViewMode::THIRD_PERSON1);
		break;
	}
}

void AWarriorCharacter::Turn(float Value)
{
	switch (CurrentViewMode)
	{
	case EViewMode::THIRD_PERSON1:
		AddControllerYawInput(Value);
		break;
	}
}

void AWarriorCharacter::LookUp(float Value)
{
	switch (CurrentViewMode)
	{
	case EViewMode::THIRD_PERSON1:
		AddControllerPitchInput(Value);
		break;
	}
}

void AWarriorCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AWarriorCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void AWarriorCharacter::MoveForward(float Value)
{
	//if ((Controller != nullptr) && (Value != 0.0f))
	//{
	//	// find out which way is forward
	//	const FRotator Rotation = Controller->GetControlRotation();
	//	const FRotator YawRotation(0, Rotation.Yaw, 0);

	//	// get forward vector
	//	const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	//	AddMovementInput(Direction, Value);
	//}
	switch (CurrentViewMode)
	{
	case EViewMode::THIRD_PERSON1:
		AddMovementInput(FRotationMatrix(GetControlRotation()).GetUnitAxis(EAxis::X), Value);
		break;
	case EViewMode::THIRD_PERSON2:
		DirectionToMove.X = Value;
		break;
	}
}

void AWarriorCharacter::MoveRight(float Value)
{
	/*if ( (Controller != nullptr) && (Value != 0.0f) )
	{*/
	//// find out which way is right
	//const FRotator Rotation = Controller->GetControlRotation();
	//const FRotator YawRotation(0, Rotation.Yaw, 0);

	//// get right vector 
	//const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
	//// add movement in that direction
	//AddMovementInput(Direction, Value);
	//}
	switch (CurrentViewMode)
	{
	case EViewMode::THIRD_PERSON1:
		AddMovementInput(FRotationMatrix(GetControlRotation()).GetUnitAxis(EAxis::Y), Value);
		break;
	case EViewMode::THIRD_PERSON2:
		DirectionToMove.Y = Value;
		break;
	}
}
