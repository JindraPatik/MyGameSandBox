
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MilitaryBase.generated.h"

class UArrowComponent;

UCLASS()
class MYGAMESANDBOX_API AMilitaryBase : public AActor
{
	GENERATED_BODY()
	
public:	
	AMilitaryBase();

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleDefaultsOnly, Category = "SM", DisplayName = "RootComp")
	USceneComponent* BaseRoot;
	
	UPROPERTY(EditAnywhere, Category = "SM", DisplayName = "Gate")
	UStaticMeshComponent* SM_Gate;

	UPROPERTY(EditAnywhere, Category = "Spawn", DisplayName = "SpawnPoint")
	UArrowComponent* GroundSpawnPoint;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
