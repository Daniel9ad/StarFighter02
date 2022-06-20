// Fill out your copyright notice in the Description page of Project Settings.


#include "Misil.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/StaticMesh.h"

AMisil::AMisil()
{
	// Static reference to the mesh to use for the projectile
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProyectilMeshAsset(TEXT("StaticMesh'/Game/Mesh/SM_Paddle.SM_Paddle'"));
	//Establece la malla del proyectil
	GetProyectilMesh()->SetStaticMesh(ProyectilMeshAsset.Object);
	GetProyectilMovement()->UpdatedComponent = GetProyectilMesh();
	// Tiempo de vida del proyectil
	InitialLifeSpan = 3.0f;
}