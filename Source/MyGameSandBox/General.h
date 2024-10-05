// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "InputAction.h"
#include "InputMappingContext.h"
#include "General.generated.h"

class UCameraComponent;

UCLASS()
class MYGAMESANDBOX_API AGeneral : public APawn
{
	GENERATED_BODY()

public:
	AGeneral();
	

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputMappingContext* IMC_Gameplay;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputAction* IA_Trigger;
	
	UCameraComponent* Camera;

		
	void Action();
	

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
