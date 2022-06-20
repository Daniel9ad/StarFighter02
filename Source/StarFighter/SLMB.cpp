// Fill out your copyright notice in the Description page of Project Settings.


#include "SLMB.h"
#include "InterfaceSLMB.h"

// Sets default values
ASLMB::ASLMB()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASLMB::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ASLMB::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ASLMB::Disparo()
{
	islmb->Disparo();
}

void ASLMB::SetInterfaceSLMB(AActor* a)
{
	islmb = Cast<IInterfaceSLMB>(a);
}

