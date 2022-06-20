// Fill out your copyright notice in the Description page of Project Settings.


#include "GeneradorCapsulasArma.h"
#include "CapsulaArma.h"
#include "CapsulaArma2.h"

ACapsula* AGeneradorCapsulasArma::FabricarCapsula(FString TipoCapsula, FVector u)
{
    if (TipoCapsula.Equals("Arma1"))
        return GetWorld()->SpawnActor<ACapsulaArma>(u, FRotator(0.f, 0.f, 0.f));
    else if (TipoCapsula.Equals("Arma2"))
        return GetWorld()->SpawnActor<ACapsulaArma2>(u, FRotator(0.f, 0.f, 0.f));
    else
        return nullptr;
}
