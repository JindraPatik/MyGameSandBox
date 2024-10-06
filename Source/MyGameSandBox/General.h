// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "InputAction.h"
#include "InputMappingContext.h"
#include "General.generated.h"

class ATargetPoint;
class UCameraComponent;

UCLASS()
class MYGAMESANDBOX_API AGeneral : public APawn
{
	GENERATED_BODY()

public:
	AGeneral();
	
	UPROPERTY(EditAnywhere, Category = "Military Base")
	ATargetPoint* Base_SpawnPoint;

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputMappingContext* IMC_Gameplay;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputAction* IA_Trigger;

	UPROPERTY(EditAnywhere, Category = "Military Base")
	TSubclassOf<AActor> MilitaryBase;

	UPROPERTY()
	AActor* MilitaryBaseInstance;

	
	
	UCameraComponent* Camera;

		
	void Action();
	

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
