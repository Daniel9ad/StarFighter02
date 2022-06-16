// Fill out your copyright notice in the Description page of Project Settings.


#include "ConstructorNaves.h"
#include "NaveEnemiga.h"
#include "Builder.h"
#include "BuilderEscuadron.h"
#include "NaveEnemigoCaza.h"


// Sets default values
AConstructorNaves::AConstructorNaves()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AConstructorNaves::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AConstructorNaves::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AConstructorNaves::setBuilder(AActor* newbuilder)
{
	builder = Cast<IBuilder>(newbuilder);
}

//ANaveEnemiga* AConstructorNaves::getNave()
//{
//	return builder->getNaveG();
//}

void AConstructorNaves::ConstruirNave(float x, float y)
{
	builder->buildNave(x, y);
}

void AConstructorNaves::setBuilderEscuadron(AActor* newbuilder)
{
	builderEscuadron = Cast<IBuilderEscuadron>(newbuilder);
}

void AConstructorNaves::ConstruirEscuadron(float x, float y)
{	
	builderEscuadron->buildEscuadronNaves(x,y);
}



