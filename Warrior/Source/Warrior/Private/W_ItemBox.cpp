// Fill out your copyright notice in the Description page of Project Settings.


#include "W_ItemBox.h"
#include "W_Weapon.h"
#include "W_Character.h"

// Sets default values
AW_ItemBox::AW_ItemBox()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Trigger = CreateDefaultSubobject<UBoxComponent>(TEXT("TRIGER"));
	Box = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Box"));
	Effect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("EFFECT"));

	RootComponent = Trigger;
	Box->SetupAttachment(RootComponent);
	Effect->SetupAttachment(RootComponent);

	Trigger->SetBoxExtent(FVector(40.0f, 42.0f, 30.0f));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_BOX(TEXT("/Game/InfinityBladeGrassLands/Environments/Breakables/StaticMesh/Box/SM_Env_Breakables_Box1.SM_Env_Breakables_Box1"));
	if (SM_BOX.Succeeded())
	{
		Box->SetStaticMesh(SM_BOX.Object);
	}

	static ConstructorHelpers::FObjectFinder<UParticleSystem> P_CHESTOPEN(TEXT("/Game/InfinityBladeGrassLands/Effects/FX_Treasure/Chest/P_TreasureChest_Open_Mesh.P_TreasureChest_Open_Mesh"));
	if (P_CHESTOPEN.Succeeded())
	{
		Effect->SetTemplate(P_CHESTOPEN.Object);
		Effect->bAutoActivate = false;
		FVector temp = Effect->GetRelativeLocation();
		Effect->SetRelativeLocation(FVector(temp.X, temp.Y - 30.5f, temp.Z - 60.0f));
	}

	Box->SetRelativeLocation(FVector(0.0f, -3.5f, -30.0f));

	Trigger->SetCollisionProfileName(TEXT("W_ItemBox"));
	Box->SetCollisionProfileName(TEXT("NoCollision"));

	WeaponItemClass = AW_Weapon::StaticClass();
}

// Called when the game starts or when spawned
void AW_ItemBox::BeginPlay()
{
	Super::BeginPlay();
	
}

void AW_ItemBox::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	
	Trigger->OnComponentBeginOverlap.AddDynamic(this, &AW_ItemBox::OnCharacterOverlap);
}

// Called every frame
void AW_ItemBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AW_ItemBox::OnCharacterOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	auto WCharacter = Cast<AW_Character>(OtherActor);

	if (WCharacter != nullptr && WeaponItemClass != nullptr)
	{
	/*	if (WCharacter->CanSetWeapon())
		{*/
			auto NewWeapon = GetWorld()->SpawnActor<AW_Weapon>(WeaponItemClass, FVector::ZeroVector, FRotator::ZeroRotator);
			WCharacter->SetWeapon(NewWeapon);

			Effect->Activate(true);
			//Box->SetHiddenInGame(true, true);
			//SetActorEnableCollision(false);
			//Effect->OnSystemFinished.AddDynamic(this, &AW_ItemBox::OnEffectFinished);
	/*	}*/
	}
}

void AW_ItemBox::OnEffectFinished(UParticleSystemComponent* PSystem)
{
	//Destroy();
}

