// Fill out your copyright notice in the Description page of Project Settings.


#include "GeneradorCapsulasVelocidad.h"
#include "CapsulaVelocidad.h"
#include "CapsulaVelocidad2.h"

ACapsula* AGeneradorCapsulasVelocidad::FabricarCapsula(FString TipoCapsula, FVector u)
{
    if (TipoCapsula.Equals("Velocidad1"))
        return GetWorld()->SpawnActor<ACapsulaVelocidad>(u, FRotator(0.f, 0.f, 0.f));
    else if (TipoCapsula.Equals("Velocidad2"))
        return GetWorld()->SpawnActor<ACapsulaVelocidad2>(u, FRotator(0.f, 0.f, 0.f));
    else
        return nullptr;
}
