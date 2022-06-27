// Fill out your copyright notice in the Description page of Project Settings.


#include "Nave.h"

#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "Components/InputComponent.h"


// Sets default values
ANave::ANave()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//Declara la malla
	NaveMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("NaveMesh"));
	RootComponent = NaveMeshComponent;
}

// Called when the game starts or when spawned
void ANave::BeginPlay()
{
	Super::BeginPlay();
	// Despues de cierto tiempo llama a una funcion que destruye las capsulas si no estan contenidas
	//FTimerHandle TimerHandle;
	//GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &ANave::ProyectilesEn1, 60);
}

// Called every frame
void ANave::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ANave::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

