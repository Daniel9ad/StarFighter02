// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemiga.h"
#include "Misil.h"
#include "Bomba.h"

ANaveEnemiga::ANaveEnemiga()
{

}

void ANaveEnemiga::BeginPlay()
{
	Super::BeginPlay();
}

void ANaveEnemiga::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (a % 30 == 0)
		DisparoNave();

	a++;
}

void ANaveEnemiga::DisparoNave()
{
	if (Disparo)
	{
		// Create fire direction vector
		const FVector FireDirection = FVector(x, y, 0.f).GetClampedToMaxSize(1.0f);
		const FRotator FireRotation = FireDirection.Rotation();

		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			switch (TipoDisparo)
			{
			case 1: {
				World->SpawnActor<AMisil>(GetActorLocation() + FireRotation.RotateVector(FVector(90.f, -40.f, 0.f)), FRotator(0.f, 0.f, 0.f));
				World->SpawnActor<AMisil>(GetActorLocation() + FireRotation.RotateVector(FVector(90.f, 40.f, 0.f)), FRotator(0.f, 0.f, 0.f));
				break;
			}
			case 2: {
				World->SpawnActor<ABomba>(GetActorLocation() + FireRotation.RotateVector(FVector(90.f, 0.f, 0.f)), FRotator(0.f, 0.f, 0.f));
				break;
			}
			default:

				break;
			}
		}
	}
}

