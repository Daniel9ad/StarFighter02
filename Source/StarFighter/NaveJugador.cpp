// Fill out your copyright notice in the Description page of Project Settings.

#include "NaveJugador.h"
#include "Capsula.h"
#include "InventoryComponent.h"
#include "Proyectil.h"
#include "Bala.h"
#include "Misil.h"
#include "Bomba.h"

#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "Components/InputComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"

#define print(text) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 6.f, FColor::Green, text)

// Nombres estáticos para enlaces de eje
const FName ANaveJugador::MoveVertical("MoveVertical");
const FName ANaveJugador::MoveHorizontal("MoveHorizontal");

ANaveJugador::ANaveJugador()
{
	// Referencias a malla y material
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/Mesh/TwinStick.TwinStickUFO'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("Material'/Game/Materials/M_BlockBase.M_BlockBase'"));

	GetMeshComponent()->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	GetMeshComponent()->SetStaticMesh(MeshAsset.Object);
	GetMeshComponent()->SetMaterial(0, MaterialAsset.Object);
	GetMeshComponent()->SetMobility(EComponentMobility::Movable);
	SetActorEnableCollision(true);

	// Crea una camara
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent); // Asocia la camara con la malla
	CameraBoom->SetUsingAbsoluteRotation(true); // La camara no girara cuando lo haga la nave
	CameraBoom->TargetArmLength = 1000.f; // Distancia de la camara a la nave
	CameraBoom->SetRelativeRotation(FRotator(-80.f, 0.f, 0.f)); // Establecer la rotación del componente
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	// Crea un brazo que sujete la camara
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	CameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Asocia el brazo a la camara
	CameraComponent->bUsePawnControlRotation = false;	// La cámara no gira en relación con el brazo

	// Propiedades Nave
	Velocidad = 1000.0f;
	Energia = 100.0f;
	NumVidas = 3;
	ResEstructura = 100.0f;
	Disparo = false;

	// Inventario
	InventarioJugador = CreateDefaultSubobject<UInventoryComponent>("MyInventory");

	// Armamento
	GunOffset = FVector(90.f, 0.f, 0.f);
	FireRate = 0.1f;
	x = 1.0f;
	y = 0.0f;
}

// Called when the game starts or when spawned
void ANaveJugador::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ANaveJugador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Obtengo los valores de entrada por teclado
	const float VerticalValue = GetInputAxisValue(MoveVertical);
	const float HorizontalValue = GetInputAxisValue(MoveHorizontal);

	// Creo la direccion y el vector movimiento
	const FVector MoveDirection = FVector(VerticalValue, HorizontalValue, 0.f).GetClampedToMaxSize(1.0f);
	const FVector Movement = MoveDirection * Velocidad * DeltaTime;
	const FRotator Rotation = Movement.Rotation();
	FHitResult Hit(1.f);
	// Mueve la malla
	RootComponent->MoveComponent(Movement, Rotation, true, &Hit);

	// Para que el disparo se realise de acuerdo al movimiento de la nave
	if (VerticalValue != 0.0f || HorizontalValue != 0.0f) {
		
		if (VerticalValue != x) {
			x = VerticalValue;
		}

		if (HorizontalValue != y) {
			y = HorizontalValue;
		}
	}
}

// Called to bind functionality to input
void ANaveJugador::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	check(PlayerInputComponent);

	// Indica que el InputComponent está interesado en conocer el valor del Eje
	PlayerInputComponent->BindAxis(MoveVertical);
	PlayerInputComponent->BindAxis(MoveHorizontal);

	// Vincula una función a una Acción definida en la configuración del proyecto
	PlayerInputComponent->BindAction(TEXT("VerEstado"), IE_Pressed, this, &ANaveJugador::Estado);
	PlayerInputComponent->BindAction(TEXT("DropItem"), IE_Pressed, this, &ANaveJugador::DropItem);
	PlayerInputComponent->BindAction(TEXT("FireBala"), IE_Pressed, this, &ANaveJugador::FireBala);
	PlayerInputComponent->BindAction(TEXT("FireMisil"), IE_Pressed, this, &ANaveJugador::FireMisil);
	PlayerInputComponent->BindAction(TEXT("FireBomba"), IE_Pressed, this, &ANaveJugador::FireBomba);
	PlayerInputComponent->BindAction(TEXT("ConsumirCapsula"), IE_Pressed, this, &ANaveJugador::ConsumirCapsula);
}

void ANaveJugador::NotifyHit(class UPrimitiveComponent*
	MyComp, AActor* Other, class UPrimitiveComponent* OtherComp, bool
	bSelfMoved, FVector HitLocation, FVector HitNormal, FVector
	NormalImpulse, const FHitResult& Hit)
{
	ACapsula* Item = Cast<ACapsula>(Other);
	if (Item != nullptr)
	{	
		// Cuando ocurra una colision llama a la funcion que agrega al inventario
		TakeItem(Item);
	}
}

void ANaveJugador::Estado()
{
	GEngine->AddOnScreenDebugMessage(-1, 6.f, FColor::Green, FString("Velocidad: ") + FString::SanitizeFloat(Velocidad));
	GEngine->AddOnScreenDebugMessage(-1, 6.f, FColor::Green, FString::Printf(TEXT("Vidas: %d"), NumVidas));
	GEngine->AddOnScreenDebugMessage(-1, 6.f, FColor::Green, FString::Printf(TEXT("Armamento: %d"), Disparo));
}

void ANaveJugador::TakeItem(ACapsula* InventoryItem)
{
	InventoryItem->PickUp();
	InventarioJugador->AddToInventory(InventoryItem);
}

void ANaveJugador::DropItem()
{
	if (InventarioJugador->InventoryCapsulas.Num() == 0) {
		return;
	}
	ACapsula* Item = InventarioJugador->InventoryCapsulas.Last();
	InventarioJugador->RemoveFromInventory(Item);
	FVector ItemOrigin;
	FVector ItemBounds;
	Item->GetActorBounds(false, ItemOrigin, ItemBounds);
	FTransform PutDownLocation = GetTransform() + FTransform(RootComponent->GetForwardVector() * ItemBounds.GetMax());
	Item->PutDown(PutDownLocation);
}

void ANaveJugador::FireBala()
{
	if (Disparo) {
		// Create fire direction vector
		const FVector FireDirection = FVector(x, y, 0.f).GetClampedToMaxSize(1.0f);
		const FRotator FireRotation = FireDirection.Rotation();
		const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			World->SpawnActor<ABala>(SpawnLocation, FireRotation);
			NumProyectiles++;
		}

		World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, FireRate, true);
	}
}

void ANaveJugador::FireMisil()
{
	if (Disparo) {
		// Create fire direction vector
		const FVector FireDirection = FVector(x, y, 0.f).GetClampedToMaxSize(1.0f);
		const FRotator FireRotation = FireDirection.Rotation();
		const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			World->SpawnActor<AMisil>(SpawnLocation, FireRotation);
			NumProyectiles++;
		}

		World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, FireRate, true);
	}
}

void ANaveJugador::FireBomba()
{
	if (Disparo) {
		// Create fire direction vector
		const FVector FireDirection = FVector(x, y, 0.f).GetClampedToMaxSize(1.0f);
		const FRotator FireRotation = FireDirection.Rotation();
		const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			World->SpawnActor<ABomba>(SpawnLocation, FireRotation);
			NumProyectiles++;
		}

		World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, FireRate, true);
	}
}

void ANaveJugador::ConsumirCapsula()
{
	if (InventarioJugador->InventoryCapsulas.Num() != 0) {

		ACapsula* a = InventarioJugador->InventoryCapsulas.Pop();
		Velocidad *= a->Velocidad;
		NumVidas += a->Vidas;
		if (a->Armamento == 2)
			Disparo = true;
		else if (a->Armamento == 1)
			Disparo = false;
		InventarioJugador->RemoveFromInventory(a);
		a->Destroy();
	}
}