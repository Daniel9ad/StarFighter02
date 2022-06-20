// Fill out your copyright notice in the Description page of Project Settings.


#include "GeneradorCapsulasVida.h"
#include "CapsulaVida.h"
#include "CapsulaVida2.h"

ACapsula* AGeneradorCapsulasVida::FabricarCapsula(FString TipoCapsula, FVector u)
{
    if (TipoCapsula.Equals("Vida1"))
        return GetWorld()->SpawnActor<ACapsulaVida>(u, FRotator(0.f, 0.f, 0.f));
    else if (TipoCapsula.Equals("Vida2"))
        return GetWorld()->SpawnActor<ACapsulaVida2>(u, FRotator(0.f, 0.f, 0.f));
    else
        return nullptr;
}
