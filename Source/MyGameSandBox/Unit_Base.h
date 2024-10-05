#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Unit_Base.generated.h"

class UBoxComponent;
class UFloatingPawnMovement;

UCLASS()
class MYGAMESANDBOX_API AUnit_Base : public APawn
{
	GENERATED_BODY()
	
public:	
	AUnit_Base();

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleDefaultsOnly, Category = "Body")
	USceneComponent* BodyRoot;
	
	UPROPERTY(EditAnywhere, Category = "Body")
	UBoxComponent* BoxComponent;
	
	UPROPERTY(EditAnywhere, Category = "Body")
	UStaticMeshComponent* SM_Body;

	UPROPERTY(VisibleDefaultsOnly, Category = "Movement")
	UFloatingPawnMovement* FloatingPawnMovement;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float MovementSpeed = 500.f;

	UPROPERTY(EditAnywhere, Category = "Movement")
	FVector MovementDirection = FVector(1,0,0);

public:	
	virtual void Tick(float DeltaTime) override;

};
