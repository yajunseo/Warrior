// Fill out your copyright notice in the Description page of Project Settings.


#include "W_Character.h"
#include "W_AnimInstance.h"
#include "W_Weapon.h"
#include "W_CharacterStatComponent.h"
#include "Components/WidgetComponent.h"
#include "Components/ProgressBar.h"
#include "W_WarriorWidget.h"
#include "W_AIController.h"
#include "W_CharacterSetting.h"
#include "W_GameInstance.h"
#include "W_PlayerController.h"
#include "W_PlayerState.h"
#include "W_HUDWidget.h"
#include "W_GameMode.h"

// Sets default values
AW_Character::AW_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SPRINGARM"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));
	HPBarWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("HPBARWIDGET"));
	CharacterStat = CreateDefaultSubobject<UW_CharacterStatComponent>(TEXT("CHARACTERSTAT"));

	SpringArm->SetupAttachment(GetCapsuleComponent());
	Camera->SetupAttachment(SpringArm);
	HPBarWidget->SetupAttachment(GetMesh());

	GetCapsuleComponent()->SetCapsuleHalfHeight(95);
	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -97.0f), FRotator(0.0f, -90.0f, 0.0f));

	SpringArm->TargetArmLength = 400.0f;
	SpringArm->SetRelativeRotation(FRotator(-15.0f, 0.0f, 0.0f));

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_KWANG(TEXT("/Game/InfinityBladeWarriors/Character/CompleteCharacters/sk_CharM_Base.sk_CharM_Base"));
	if (SK_KWANG.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(SK_KWANG.Object);
	}

	GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);

	static ConstructorHelpers::FClassFinder<UAnimInstance> WARRIOR_ANIM(TEXT("/Game/InfinityBladeWarriors/Animation/WarriorAnimBp.WarriorAnimBp_C"));
	if (WARRIOR_ANIM.Succeeded())
	{
		GetMesh()->SetAnimInstanceClass(WARRIOR_ANIM.Class);
	}

	HPBarWidget->SetRelativeLocation(FVector(0.0f, 0.0f, 180.0f));
	HPBarWidget->SetWidgetSpace(EWidgetSpace::Screen);
	static ConstructorHelpers::FClassFinder<UUserWidget> UI_HUD(TEXT("/Game/UI/UI_HPBar.UI_HPBar_C"));
	if (UI_HUD.Succeeded())
	{
		HPBarWidget->SetWidgetClass(UI_HUD.Class);
		HPBarWidget->SetDrawSize(FVector2D(150.0f, 50.0f));
	}

	SetViewMode(EViewMode::THIRD_PERSON_VIEW1);

	ArmLengthSpeed = 3.0f;
	ArmRotationSpeed = 10.0f;
	GetCharacterMovement()->JumpZVelocity = 400.0f;

	IsAttacking = false;
	MaxCombo = 4;
	AttackRange = 80.0f;
	AttackRadius = 50.0f;
	AttackEndComboState();

	GetCapsuleComponent()->SetCollisionProfileName(TEXT("W_Character"));


	AIControllerClass = AW_AIController::StaticClass();
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

	/*UE_LOG(LogTemp, Warning, TEXT("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"));
	auto DefaultSetting = GetDefault<UW_CharacterSetting>();
	if (DefaultSetting->CharacterAssets.Num() > 0)
	{
		for (auto c : DefaultSetting->CharacterAssets)
		{
			UE_LOG(LogTemp, Warning, TEXT("%s"), *c.ToString());
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb"));
	}*/

	SetActorHiddenInGame(true);
	HPBarWidget->SetHiddenInGame(true);
	SetCanBeDamaged(false);

	DeadTimer = 5.0f;
}

// Called when the game starts or when spawned
void AW_Character::BeginPlay()
{
	Super::BeginPlay();

	bIsPlayer = IsPlayerControlled();
	if (bIsPlayer)
	{
		W_PlayerController = Cast<AW_PlayerController>(GetController());
	}
	else
	{
		W_AIController = Cast<AW_AIController>(GetController());
	}

	if (!IsPlayerControlled())
	{
		auto DefaultSetting = GetDefault<UW_CharacterSetting>();
		int32 RandIndex = FMath::RandRange(0, DefaultSetting->CharacterAssets.Num() - 1);
		//CharacterAssetToLoad = DefaultSetting->CharacterAssets[RandIndex];

		//auto ABGameInstance = Cast<UW_GameInstance>(GetGameInstance());
		//if (nullptr != ABGameInstance)
		//{
		//	AssetStreamingHandle = ABGameInstance->StreamableManager.RequestAsyncLoad(CharacterAssetToLoad, FStreamableDelegate::CreateUObject(this, &AW_Character::OnAssetLoadCompleted));
		//	//AssetStreamingHandle = UAssetManager::GetStreamableManager().RequestAsyncLoad(CharacterAssetToLoad, FStreamableDelegate::CreateUObject(this, &AABCharacter::OnAssetLoadCompleted));
		//}
	}

	UW_WarriorWidget* CharacterWIdget = Cast<UW_WarriorWidget>(HPBarWidget->GetUserWidgetObject());
	if (CharacterWIdget != nullptr)
	{
		CharacterWIdget->BindCharacterStat(CharacterStat);
	}


	SetCharacterState(ECharacterState::LOADING);
}

void AW_Character::SetCharacterState(ECharacterState NewState)
{
	CurrentState = NewState;

	switch (CurrentState)
	{
		case ECharacterState::LOADING:
		{
			if (bIsPlayer)
			{
				DisableInput(W_PlayerController);

				W_PlayerController->GetHUDWidget()->BindCharacterStat(CharacterStat);

				auto W_PlayerState = Cast<AW_PlayerState>(GetPlayerState());
				CharacterStat->SetNewLevel(W_PlayerState->GetCharacterLevel());
			}
			
			else
			{
				auto ABGameMode = Cast<AW_GameMode>(GetWorld()->GetAuthGameMode());
				int32 TargetLevel = FMath::CeilToInt(((float)ABGameMode->GetScore() * 0.8f));
				int32 FinalLevel = FMath::Clamp<int32>(TargetLevel, 1, 20);
				CharacterStat->SetNewLevel(FinalLevel);
			}

			SetActorHiddenInGame(true);
			HPBarWidget->SetHiddenInGame(true);
			SetCanBeDamaged(false);

			// ?????? ?????? ???? ????
			SetCharacterState(ECharacterState::READY);
			break;
		}
		case ECharacterState::READY:
		{
			SetActorHiddenInGame(false);
			HPBarWidget->SetHiddenInGame(false);
			SetCanBeDamaged(true);

			CharacterStat->OnHPIsZero.AddLambda([this]() -> void {
				SetCharacterState(ECharacterState::DEAD);
			});
			auto CharacterWidget = Cast<UW_WarriorWidget>(HPBarWidget->GetUserWidgetObject());
			CharacterWidget->BindCharacterStat(CharacterStat);

			if (bIsPlayer)
			{
				SetViewMode(EViewMode::THIRD_PERSON_VIEW1);
				GetCharacterMovement()->MaxWalkSpeed = 600.0f;
				EnableInput(W_PlayerController);
			}
			else
			{
				SetViewMode(EViewMode::NPC);
				GetCharacterMovement()->MaxWalkSpeed = 400.0f;
				W_AIController->RunAI();
			}
			break;
		}
		case ECharacterState::DEAD:
		{
			SetActorEnableCollision(false);
			SetActorHiddenInGame(false);
			HPBarWidget->SetHiddenInGame(true);
			AW_Anim->SetDeadAnim();
			SetCanBeDamaged(false);

			if (bIsPlayer)
			{
				DisableInput(W_PlayerController);
			}
			else
			{
				W_AIController->StopAI();
			}

			GetWorld()->GetTimerManager().SetTimer(DeadTimerHandle, FTimerDelegate::CreateLambda([this]() -> void {
				if (bIsPlayer)
				{
					W_PlayerController->ShowResultUI();
				}
				else
				{
					Destroy();
				}
			}), DeadTimer, false);
			break;
		}
	}
}

ECharacterState AW_Character::GetCharacterState() const
{
	return CurrentState;
}

int32 AW_Character::GetExp() const
{
	return CharacterStat->GetDropExp();
}

void AW_Character::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	AW_Anim = Cast<UW_AnimInstance>(GetMesh()->GetAnimInstance());

	AW_Anim->OnMontageEnded.AddDynamic(this, &AW_Character::OnAttackMontageEnded);

	AW_Anim->OnNextAttackCheck.AddLambda([this]() -> void {
		CanNextCombo = false;

		if (IsComboInputOn)
		{
			AttackStartComboState();
			AW_Anim->JumpToAttackMontageSection(CurrentCombo);
		}
	});

	AW_Anim->OnAttackHitCheck.AddUObject(this, &AW_Character::AttackCheck);

	CharacterStat->OnHPIsZero.AddLambda([this]() -> void {
		AW_Anim->SetDeadAnim();
		SetActorEnableCollision(false);
	});
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
	case EViewMode::NPC:
		bUseControllerRotationYaw = false;
		GetCharacterMovement()->bOrientRotationToMovement = false;
		GetCharacterMovement()->bUseControllerDesiredRotation = true;
		GetCharacterMovement()->RotationRate = FRotator(0.0f, 480.0f, 0.0f);
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
	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction(TEXT("Attack"), EInputEvent::IE_Pressed, this, &AW_Character::Attack);
}

float AW_Character::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	float FinalDamage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);

	CharacterStat->SetDamage(FinalDamage);
	if (CurrentState == ECharacterState::DEAD)
	{
		if (EventInstigator->IsPlayerController())
		{
			auto WPlayerController = Cast<AW_PlayerController>(EventInstigator);
			WPlayerController->NPCKill(this);
			auto WPlayerState = Cast<AW_PlayerState>(WPlayerController->PlayerState);
			WPlayerState->AddGameScore();
		}
	}
	return FinalDamage;
}

void AW_Character::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	if (IsPlayerControlled())
	{
		SetViewMode(EViewMode::THIRD_PERSON_VIEW1);
		GetCharacterMovement()->MaxWalkSpeed = 600.0f;
	}

	else
	{
		SetViewMode(EViewMode::NPC);
		GetCharacterMovement()->MaxWalkSpeed = 300.0f;
	}
}

float AW_Character::GetFinalAttackange() const
{
	return (CurrentWeapon != nullptr) ? CurrentWeapon->GetAttackRange() : AttackRange;
}

float AW_Character::GetFinalAttackDamage() const
{
	float AttackDamage = (nullptr != CurrentWeapon) ? (CharacterStat->GetAttack() + CurrentWeapon->GetAttackDamage()) : CharacterStat->GetAttack();
	float AttackModifier = (nullptr != CurrentWeapon) ? CurrentWeapon->GetAttackModifier() : 1.0f;
	UE_LOG(LogTemp, Warning, TEXT("%f"), AttackDamage * AttackModifier)
	return AttackDamage * AttackModifier;
}


bool AW_Character::CanSetWeapon()
{
	return true;
}

void AW_Character::SetWeapon(class AW_Weapon* NewWeapon)
{
	if (CurrentWeapon != nullptr)
	{
		CurrentWeapon->DetachAllSceneComponents(this->GetMesh(), FDetachmentTransformRules::KeepRelativeTransform);
		CurrentWeapon->Destroy();
		CurrentWeapon = nullptr;
	}

	FName WeaponSocket(TEXT("hand_rSocket"));
	if (NewWeapon != nullptr)
	{
		NewWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, WeaponSocket);
		NewWeapon->SetOwner(this);
		CurrentWeapon = NewWeapon;
	}
}

void AW_Character::MoveForward(float NewAxisValue)
{
	if (!IsAttacking)
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
}

void AW_Character::MoveRight(float NewAxisValue)
{
	if (!IsAttacking)
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

void AW_Character::Attack()
{
	if (IsAttacking)
	{
		if (CanNextCombo)
			IsComboInputOn = true;
	}

	else
	{
		AttackStartComboState();
		AW_Anim->PlayAttackMontage();
		AW_Anim->JumpToAttackMontageSection(CurrentCombo);
		IsAttacking = true;
	}
}

void AW_Character::OnAttackMontageEnded(UAnimMontage* Montage, bool bInterrupted)
{
	IsAttacking = false;
	AttackEndComboState();
	OnAttackEnd.Broadcast();
}

void AW_Character::AttackStartComboState()
{
	CanNextCombo = true;
	IsComboInputOn = false;
	CurrentCombo = FMath::Clamp<int32>(CurrentCombo + 1, 1, MaxCombo);
}

void AW_Character::AttackEndComboState()
{
	CanNextCombo = false;
	IsComboInputOn = false;
	CurrentCombo = 0;
}

void AW_Character::AttackCheck()
{
	float FinalAttackRange = GetFinalAttackange();

	FHitResult HitResult;
	FCollisionQueryParams Params(NAME_None, false, this);
	bool bResult = GetWorld()->SweepSingleByChannel(
		HitResult,
		GetActorLocation(),
		GetActorLocation() + GetActorForwardVector() * FinalAttackRange,
		FQuat::Identity,
		ECollisionChannel::ECC_GameTraceChannel2,
		FCollisionShape::MakeSphere(50.0f),
		Params
	);
	if (bResult)
	{
		if (HitResult.Actor.IsValid())
		{
			FDamageEvent DamageEvent;
			HitResult.Actor->TakeDamage(GetFinalAttackDamage(), DamageEvent, GetController(), this);
		}
	}
}

void AW_Character::OnAssetLoadCompleted()
{
	USkeletalMesh* AssetLoaded = Cast<USkeletalMesh>(AssetStreamingHandle->GetLoadedAsset());
	AssetStreamingHandle.Reset();
	if (nullptr != AssetLoaded)
	{
		GetMesh()->SetSkeletalMesh(AssetLoaded);
	}
}
