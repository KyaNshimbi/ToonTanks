// Fill out your copyright notice in the Description page of Project Settings.


#include "BasePawn.h"

#include "Components/CapsuleComponent.h"

// Sets default values
ABasePawn::ABasePawn()
	: CapsuleComp(CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule Collider"))), 
		BaseMesh(CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Base Mesh"))),
		TurretMesh(CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Turret Mesh"))),
		ProjectileSpawnPoint(CreateDefaultSubobject<USceneComponent>(TEXT("Spawn Point")))
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	
	RootComponent = CapsuleComp;
	BaseMesh->SetupAttachment(CapsuleComp);
	TurretMesh->SetupAttachment(BaseMesh);
	ProjectileSpawnPoint->SetupAttachment(TurretMesh);
}

// Called when the game starts or when spawned
void ABasePawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABasePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}