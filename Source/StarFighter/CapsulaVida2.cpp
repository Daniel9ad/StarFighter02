// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulaVida2.h"

ACapsulaVida2::ACapsulaVida2()
{
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("MaterialInstanceConstant'/Game/Materials/M_BrickRed.M_BrickRed'"));
	GetStaticMeshComponent()->SetMaterial(0, MaterialAsset.Object);
}

void ACapsulaVida2::BeginPlay()
{
	Super::BeginPlay();
	Velocidad = 0;
	Vidas = -1;
	Armamento = 0;
}
