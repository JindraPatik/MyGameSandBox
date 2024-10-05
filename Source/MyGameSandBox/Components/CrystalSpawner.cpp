#include "CrystalSpawner.h"
#include "MyGameSandBox/Resources/Crystal.h"

UCrystalSpawner::UCrystalSpawner()
{
	PrimaryComponentTick.bCanEverTick = true;
	SetIsReplicated(true);
}


void UCrystalSpawner::BeginPlay()
{
	Super::BeginPlay();

	StartSpawningCrystal();
}

void UCrystalSpawner::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UCrystalSpawner::StartSpawningCrystal()
{
	GetWorld()->GetTimerManager().SetTimer(
		CrystalSpawnTimerHandle,
		this,
		&UCrystalSpawner::ServerSpawnCrystal,
		SpawnRate,
		true);
}

void UCrystalSpawner::ServerSpawnCrystal()
{
	if (Crystal)
	{
		CrystalInstance = GetWorld()->SpawnActor<ACrystal>(Crystal, SpawnLocation, FRotator::ZeroRotator);
	}
}




