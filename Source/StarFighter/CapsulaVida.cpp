// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulaVida.h"

ACapsulaVida::ACapsulaVida()
{
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("MaterialInstanceConstant'/Game/Materials/M_BrickRed.M_BrickRed'"));
	GetStaticMeshComponent()->SetMaterial(0, MaterialAsset.Object);
}