// Fill out your copyright notice in the Description page of Project Settings.


#include "Proyectil.h"

#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/StaticMesh.h"

#define print(text) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 6.f, FColor::Green, text)

// Sets default values
AProyectil::AProyectil()
{
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("Material'/Game/Materials/M_Brick.M_Brick'"));

	// Malla proyectil
	ProyectilMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProyectilMesh"));
	ProyectilMesh->SetupAttachment(RootComponent);
	ProyectilMesh->SetMaterial(0, MaterialAsset.Object);
	ProyectilMesh->BodyInstance.SetCollisionProfileName("Proyectile");
	ProyectilMesh->OnComponentHit.AddDynamic(this, &AProyectil::OnHit); //configure una notificación para cuando este componente toque algo
	RootComponent = ProyectilMesh;

	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProyectilMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectilMovement"));
	ProyectilMovement->InitialSpeed = 1000.f;
	ProyectilMovement->MaxSpeed = 2000.f;
	ProyectilMovement->bRotationFollowsVelocity = true;
	ProyectilMovement->bShouldBounce = false;
	ProyectilMovement->ProjectileGravityScale = 0.f; // No gravity

	// Tiempo de vida del proyectil
	InitialLifeSpan = 3.0f;
}

// Es llamado cuando el proyectil coliciona con algun actor
void AProyectil::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Solo agregue impulso y destruya el proyectil si golpea a otro objeto
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 20.0f, GetActorLocation());
	}
	Destroy();
}

