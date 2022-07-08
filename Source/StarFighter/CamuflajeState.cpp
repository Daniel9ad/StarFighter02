// Fill out your copyright notice in the Description page of Project Settings.


#include "CamuflajeState.h"
#include "NaveJugador.h"

// Sets default values
ACamuflajeState::ACamuflajeState()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	auto material = ConstructorHelpers::FObjectFinder<UMaterialInterface>(TEXT("Material'/Game/Materials/M_Ball.M_Ball'"));
	MaterialAsset = material.Object;
}

// Called when the game starts or when spawned
void ACamuflajeState::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACamuflajeState::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACamuflajeState::setNaveJugador(ANaveJugador* nave)
{
	naveJugador = nave;
}

void ACamuflajeState::fireBala(int x, int y)
{
}

void ACamuflajeState::fireBomba(int x, int y)
{
}

void ACamuflajeState::fireMisil(int x, int y)
{
}

void ACamuflajeState::activarCamuflaje()
{
	naveJugador->GetMeshComponent()->SetMaterial(0, MaterialAsset);
}

