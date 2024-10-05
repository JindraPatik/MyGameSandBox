

#include "Resource.h"

#include "Components/BoxComponent.h"

AResource::AResource()
{
	bReplicates = true;
	
	PrimaryActorTick.bCanEverTick = true;

	RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(RootComp);
	
	SM_Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM_Body"));
	SM_Body->SetupAttachment(RootComp);
	
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	CollisionBox->SetupAttachment(SM_Body);
}

void AResource::BeginPlay()
{
	Super::BeginPlay();
	
}

void AResource::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

