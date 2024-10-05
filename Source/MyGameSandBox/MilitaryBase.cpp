// Fill out your copyright notice in the Description page of Project Settings.


#include "MilitaryBase.h"
#include "Components/ArrowComponent.h"

AMilitaryBase::AMilitaryBase()
{
	PrimaryActorTick.bCanEverTick = true;

	BaseRoot = CreateDefaultSubobject<USceneComponent>(TEXT("BaseRoot"));
	SetRootComponent(BaseRoot);

	SM_Gate = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Gate"));
	SM_Gate->SetupAttachment(BaseRoot);

	GroundSpawnPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("GroundSpawnPoint"));
	GroundSpawnPoint->SetupAttachment(BaseRoot);

}

void AMilitaryBase::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMilitaryBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

