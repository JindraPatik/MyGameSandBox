#include "Unit_Base.h"

#include "Components/BoxComponent.h"
#include "GameFramework/FloatingPawnMovement.h"

AUnit_Base::AUnit_Base()
{
	PrimaryActorTick.bCanEverTick = true;

	BodyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("BodyRoot"));
	SetRootComponent(BodyRoot);

	SM_Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM_Body"));
	SM_Body->SetupAttachment(RootComponent);

	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	BoxComponent->SetupAttachment(RootComponent);
	
	FloatingPawnMovement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("FloatingPawnMovement"));
	FloatingPawnMovement->Velocity.X = 50.f;
	}

void AUnit_Base::BeginPlay()
{
	Super::BeginPlay();
	
}

void AUnit_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (FloatingPawnMovement)
	{
		FloatingPawnMovement->Velocity = MovementDirection * MovementSpeed;
	}

}

