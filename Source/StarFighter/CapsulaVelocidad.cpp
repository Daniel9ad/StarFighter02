// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulaVelocidad.h"

ACapsulaVelocidad::ACapsulaVelocidad()
{
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("MaterialInstanceConstant'/Game/Materials/M_BrickGreen.M_BrickGreen'"));
	GetStaticMeshComponent()->SetMaterial(0, MaterialAsset.Object);
}

void ACapsulaVelocidad::BeginPlay()
{
	Super::BeginPlay();
	Velocidad = 2;
	Vidas = 0;
	Armamento = 0;
}
