// Fill out your copyright notice in the Description page of Project Settings.

#include "BuilderMain.h"
#include "ConstructorNaves.h"
#include "NaveEnemigoCaza.h"
#include "NaveEnemiga.h"
#include "NaveEnemigoBombardero.h"
#include "EscuadronNaveCaza.h"

// Sets default values
ABuilderMain::ABuilderMain()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ABuilderMain::BeginPlay()
{
	Super::BeginPlay();
	
	cnaves = GetWorld()->SpawnActor<AConstructorNaves>(AConstructorNaves::StaticClass());
	naveCaza = GetWorld()->SpawnActor<ANaveEnemigoCaza>(ANaveEnemigoCaza::StaticClass());
	naveBombardero = GetWorld()->SpawnActor<ANaveEnemigoBombardero>(ANaveEnemigoBombardero::StaticClass());

	cnaves->setBuilder(naveCaza);
	cnaves->ConstruirNave(200.f,400.f);

	cnaves->setBuilder(naveBombardero);
	cnaves->ConstruirNave(200.f, 600.f);

	//escuadronCaza = GetWorld()->SpawnActor<AEscuadronNaveCaza>(AEscuadronNaveCaza::StaticClass());

	//cnaves->setBuilderEscuadron(escuadronCaza);
	//cnaves->ConstruirEscuadron(600.f,400.f);
}

// Called every frame
void ABuilderMain::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

