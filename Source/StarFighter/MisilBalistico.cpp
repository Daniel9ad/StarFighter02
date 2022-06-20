// Fill out your copyright notice in the Description page of Project Settings.


#include "MisilBalistico.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/StaticMesh.h"

AMisilBalistico::AMisilBalistico()
{
	// Static reference to the mesh to use for the projectile
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProyectilMeshAsset(TEXT("StaticMesh'/Game/Mesh/SM_Paddle.SM_Paddle'"));
	//Establece la malla del proyectil
	GetProyectilMesh()->SetStaticMesh(ProyectilMeshAsset.Object);
	GetProyectilMesh()->SetRelativeScale3D_Direct(FVector(3.f, 2.f, 1.f));
	GetProyectilMovement()->ProjectileGravityScale = 9.8f;
	GetProyectilMovement()->UpdatedComponent = GetProyectilMesh();
	GetProyectilMovement()->InitialSpeed = 20000.f;
	// Tiempo de vida del proyectil
	InitialLifeSpan = 20.0f;
}
