// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Resource.generated.h"

class UBoxComponent;

UCLASS()
class MYGAMESANDBOX_API AResource : public AActor
{
	GENERATED_BODY()
	
public:	
	AResource();

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditDefaultsOnly, Category = "Body")
	USceneComponent* RootComp;
	
	UPROPERTY(EditAnywhere, Category = "Body")
	TObjectPtr<UStaticMeshComponent> SM_Body;

	UPROPERTY(EditDefaultsOnly, Category = "Collision")
	TObjectPtr<UBoxComponent> CollisionBox;

public:	
	virtual void Tick(float DeltaTime) override;

};
