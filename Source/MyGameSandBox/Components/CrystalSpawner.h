#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CrystalSpawner.generated.h"


class ACrystal;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYGAMESANDBOX_API UCrystalSpawner : public UActorComponent
{
	GENERATED_BODY()

public:	
	UCrystalSpawner();
	void StartSpawningCrystal();
	void ServerSpawnCrystal();
	

protected:
	virtual void BeginPlay() override;

private:
	FTimerHandle CrystalSpawnTimerHandle;
	
	UPROPERTY(EditAnywhere, Category = "Spawning")
	FVector SpawnLocation;

	UPROPERTY(EditAnywhere, Category = "Spawning")
	float SpawnRate;
	
	UPROPERTY(EditAnywhere, Category = "Crystal")
	TSubclassOf<ACrystal> Crystal;

	UPROPERTY(VisibleAnywhere, Category = "Crystal")
	ACrystal* CrystalInstance; 

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
