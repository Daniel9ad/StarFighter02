

#include "NaveEnemigoCaza.h"
#include "NaveEnemiga.h"
#include "Misil.h"
#include <cmath>
#include "NaveJugador.h"
#include "Kismet/GameplayStatics.h"

using namespace std;

// Sets default values
ANaveEnemigoCaza::ANaveEnemigoCaza()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	auto mesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/Mesh/TwinStick.TwinStickUFO'"));
	auto material = ConstructorHelpers::FObjectFinder<UMaterialInterface>(TEXT("MaterialInstanceConstant'/Game/Materials/M_BrickRed.M_BrickRed'"));

	MeshAsset = mesh.Object;
	MaterialAsset = material.Object;

	t = 0.f;
	x1 = cos(t);
	y1 = sin(t);
}

// Called when the game starts or when spawned
void ANaveEnemigoCaza::BeginPlay()
{
	Super::BeginPlay();
	a = 30;
}

// Called every frame
void ANaveEnemigoCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (nave->getDisparo())
	{
		if (a % 30 == 0)
		{
			// Create fire direction vector
			const FVector FireDirection = FVector(1.f, 0.f, 0.f).GetClampedToMaxSize(1.0f);
			const FRotator FireRotation = FireDirection.Rotation();
			GetWorld()->SpawnActor<AMisil>(nave->GetActorLocation() + FireRotation.RotateVector(FVector(90.f, -40.f, 0.f)), FRotator(0.f, 0.f, 0.f));
			GetWorld()->SpawnActor<AMisil>(nave->GetActorLocation() + FireRotation.RotateVector(FVector(90.f, 40.f, 0.f)), FRotator(0.f, 0.f, 0.f));
		}
		a++;
	}

	if (nave->getMovimiento())
	{
		if (!nave->amigo)
		{

			// Creo la direccion y el vector movimiento
			const FVector MoveDirection = FVector(x1, y1, 0.f).GetClampedToMaxSize(1.0f);
				const FVector Movement = MoveDirection * nave->getVelocidad() * DeltaTime;
				const FRotator Rotation = Movement.Rotation();
				FHitResult Hit(1.f);
				// Mueve la malla
				nave->GetMeshComponent()->MoveComponent(Movement, Rotation, true, &Hit);
			t += 0.1f;
			x1 = cos(t);
			y1 = sin(t);
		}
		else
		{
			TArray<AActor*> Nave;
			UGameplayStatics::GetAllActorsOfClass(GetWorld(), ANaveJugador::StaticClass(), Nave);
			FVector d(0.f, 0.f, 0.f);

			for (AActor* actor : Nave)
			{
				ANaveJugador* naveEnemiga = Cast<ANaveJugador>(actor);
				d = naveEnemiga->GetMeshComponent()->GetRelativeLocation();
			}
			d.Z = 0.f;
			d.X = d.X / 4;
			d.Y = d.Y * 2;
			// Creo la direccion y el vector movimiento
			const FVector MoveDirection = d.GetClampedToMaxSize(1.0f);
			const FVector Movement = MoveDirection * 300.0f * DeltaTime;
			const FRotator Rotation = Movement.Rotation();
			FHitResult Hit(1.f);
			// Mueve la malla
			nave->GetMeshComponent()->MoveComponent(Movement, Rotation, true, &Hit);
		}
	}
}

void ANaveEnemigoCaza::buildNave(float x, float y)
{
	nave = GetWorld()->SpawnActor<ANaveEnemiga>(FVector(x, y, 100.0f), FRotator::ZeroRotator);

	nave->GetMeshComponent()->SetStaticMesh(MeshAsset);
	nave->GetMeshComponent()->SetMaterial(0, MaterialAsset);
	nave->GetMeshComponent()->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	nave->GetMeshComponent()->SetMobility(EComponentMobility::Movable);
	nave->SetActorEnableCollision(true);
	
	nave->setVelocidad(500.0f);
	nave->setDisparo(false);
	nave->setMovimiento(false);
	nave->setPropiedades(100.f, 100.f, 1);
	nave->amigo = false;
}

ANaveEnemiga* ANaveEnemigoCaza::getNaveG()
{
	return nave;
}

