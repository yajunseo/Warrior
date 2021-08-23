// Fill out your copyright notice in the Description page of Project Settings.


#include "W_Weapon.h"

// Sets default values
AW_Weapon::AW_Weapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WEAPON"));
	RootComponent = Weapon;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_WEAPON(TEXT("/Game/Weapon_Pack/Skeletal_Mesh/SK_Dagger_1.SK_Dagger_1"));
	if (SK_WEAPON.Succeeded())
	{
		Weapon->SetSkeletalMesh(SK_WEAPON.Object);
	}
	Weapon->SetCollisionProfileName("NoCollision");

	AttackRange = 150.0f;
	AttackDamageMin = -2.5f;
	AttackDamageMax = 10.0f;
	AttackModifierMin = 0.85f;
	AttackModifierMax = 1.25f;
}

float AW_Weapon::GetAttackRange() const
{
	return AttackRange;
}

float AW_Weapon::GetAttackDamage() const
{
	return AttackDamage;
}

float AW_Weapon::GetAttackModifier() const
{
	return AttackModifier;
}

// Called when the game starts or when spawned
void AW_Weapon::BeginPlay()
{
	Super::BeginPlay();
	
	AttackDamage = FMath::RandRange(AttackDamageMin, AttackDamageMax);
	AttackModifier = FMath::RandRange(AttackModifierMin, AttackModifierMax);
}

// Called every frame
void AW_Weapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

