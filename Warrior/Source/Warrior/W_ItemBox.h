// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Warrior.h"
#include "GameFramework/Actor.h"
#include "W_ItemBox.generated.h"

UCLASS()
class WARRIOR_API AW_ItemBox : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AW_ItemBox();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void PostInitializeComponents() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	bool CanSetWeapon();
	void SetWeapon(class AW_Weapon* NewWeapon);

public:
	UPROPERTY(VisibleAnywhere, Category = Box)
		UBoxComponent* Trigger;

	UPROPERTY(VisibleAnywhere, Category = Box)
		UStaticMeshComponent* Box;

	UPROPERTY(EditInstanceOnly, Category = Box)
		TSubclassOf<class AW_Weapon> WeaponItemClass;

	UPROPERTY(VisibleAnywhere, Category = Effect)
		UParticleSystemComponent* Effect;

private:
	UFUNCTION()
		void OnCharacterOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		void OnEffectFinished(class UParticleSystemComponent* PSystem);
};
