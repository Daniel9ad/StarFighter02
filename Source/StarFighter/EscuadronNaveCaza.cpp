// Fill out your copyright notice in the Description page of Project Settings.


#include "EscuadronNaveCaza.h"
#include "NaveEnemiga.h"
#include "Builder.h"
#include "NaveEnemigoCaza.h"
#include "ConstructorNaves.h"
#include "EscuadronNave.h"

// Sets default values
AEscuadronNaveCaza::AEscuadronNaveCaza()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEscuadronNaveCaza::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AEscuadronNaveCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	escuadron = GetWorld()->SpawnActor<AEscuadronNave>(AEscuadronNave::StaticClass());
}

void AEscuadronNaveCaza::buildEscuadronNaves(float x, float y)
{
	cnaves = GetWorld()->SpawnActor<AConstructorNaves>(AConstructorNaves::StaticClass());
	ANaveEnemigoCaza* naveCaza1 = GetWorld()->SpawnActor<ANaveEnemigoCaza>(ANaveEnemigoCaza::StaticClass());
	ANaveEnemigoCaza* naveCaza2 = GetWorld()->SpawnActor<ANaveEnemigoCaza>(ANaveEnemigoCaza::StaticClass());
	float a = 100.f;

	cnaves->setBuilder(naveCaza1);
	cnaves->ConstruirNave(x,y+a);
	//escuadron->nave1 = cnaves->getNave();
	a = a + 100;

	cnaves->setBuilder(naveCaza2);
	cnaves->ConstruirNave(x, y+a);
	//escuadron->nave2 = cnaves->getNave();
	a = a + 1;
	/*
	ANaveEnemigoCaza* na2 = escuadron->naveCaza2;
	cnaves->setBuilder(na2);
	cnaves->ConstruirNave(x * a, y * a);
	a = a + 1;

	ANaveEnemigoCaza* na3 = escuadron->naveCaza3;
	cnaves->setBuilder(na3);
	cnaves->ConstruirNave(x * a, y * a);
	a = a + 1;

	ANaveEnemigoCaza* na4 = escuadron->naveCaza4;
	cnaves->setBuilder(na4);
	cnaves->ConstruirNave(x * a, y * a);
	a = a + 1;
	*/
}

