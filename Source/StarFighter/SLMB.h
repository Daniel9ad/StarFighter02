// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InterfaceSLMB.h"
#include "GameFramework/Actor.h"
#include "SLMB.generated.h"

UCLASS()
class STARFIGHTER_API ASLMB : public AActor, public IInterfaceSLMB
{
	GENERATED_BODY()

	class IInterfaceSLMB* islmb;

public:	
	// Sets default values for this actor's properties
	ASLMB();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Disparo() override;

	void SetInterfaceSLMB(AActor* a);
};
