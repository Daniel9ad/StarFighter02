// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulaArma.h"

ACapsulaArma::ACapsulaArma()
{
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("MaterialInstanceConstant'/Game/Materials/M_BrickBlue.M_BrickBlue'"));
	GetStaticMeshComponent()->SetMaterial(0, MaterialAsset.Object);
}

void ACapsulaArma::BeginPlay()
{
	Super::BeginPlay();
	Velocidad = 1;
	Vidas = 0;
	Armamento = 2;
}
