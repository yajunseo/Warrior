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
}

float AW_Weapon::GetAttackRange() const
{
	return AttackRange;
}

// Called when the game starts or when spawned
void AW_Weapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AW_Weapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

