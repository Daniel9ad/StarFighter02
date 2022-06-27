// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Nave.h"
#include "NaveJugador.generated.h"

UCLASS()
class STARFIGHTER_API ANaveJugador : public ANave
{
	GENERATED_BODY()
public:
	ANaveJugador();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	//La camara
	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* CameraComponent;

	//Algo que coloca la camara sobre el personaje
	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* CameraBoom;

	UPROPERTY()
		class UInventoryComponent* InventarioJugador;

public:
	// Devuelve el subobjeto CameraComponent
	FORCEINLINE class UCameraComponent* GetCameraComponent() const { return CameraComponent; }
	// Devuelve el subobjeto CameraBoom 
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	// Nombres estáticos para enlaces
	static const FName MoveVertical;
	static const FName MoveHorizontal;

protected:
	//Llama al comienzo del juego
	virtual void BeginPlay() override;

	UFUNCTION()
		void DropItem();
	UFUNCTION()
		void TakeItem(ACapsula* InventoryItem);

	UFUNCTION()
		virtual void NotifyHit(class UPrimitiveComponent* MyComp,
			AActor* Other, class UPrimitiveComponent* OtherComp, bool
			bSelfMoved, FVector HitLocation, FVector HitNormal, FVector
			NormalImpulse, const FHitResult& Hit) override;

	UFUNCTION()
		void Estado();

	// Disparo
	void FireBala();
	void FireBomba();
	void FireMisil();
	
	//Consumir capsula
	void ConsumirCapsula();

	// Para el disparo
	int x;
	int y;
};
