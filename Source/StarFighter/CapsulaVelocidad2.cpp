// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulaVelocidad2.h"

ACapsulaVelocidad2::ACapsulaVelocidad2()
{
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("MaterialInstanceConstant'/Game/Materials/M_BrickGreen.M_BrickGreen'"));
	GetStaticMeshComponent()->SetMaterial(0, MaterialAsset.Object);
}

void ACapsulaVelocidad2::BeginPlay()
{
	Super::BeginPlay();
	Velocidad = 0.5f;
	Vidas = 0;
	Armamento = 0;
}
