// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InterfaceSLMB.h"
#include "GameFramework/Actor.h"
#include "SLMBAdapter.generated.h"

UCLASS()
class STARFIGHTER_API ASLMBAdapter : public AActor, public IInterfaceSLMB
{
	GENERATED_BODY()

	class ASLMisilBalistico* slmb;
public:	
	// Sets default values for this actor's properties
	ASLMBAdapter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Disparo() override;
};
