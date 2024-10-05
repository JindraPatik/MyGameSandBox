

#include "General.h"

#include "Camera/CameraComponent.h"
#include "EnhancedInputComponent.h"
#include "Engine/LocalPlayer.h"
#include "EnhancedInputSubsystems.h"

AGeneral::AGeneral()
{
	PrimaryActorTick.bCanEverTick = true;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	RootComponent = Camera;

}

void AGeneral::BeginPlay()
{
	Super::BeginPlay();
	
}


void AGeneral::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGeneral::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if(UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(IMC_Gameplay, 0);
		}
	}
	

	UEnhancedInputComponent* Input = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	if (Input)
	{
		Input->BindAction(IA_Trigger, ETriggerEvent::Started, this, &AGeneral::Action);
	}

}

void AGeneral::Action()
{
	if(GEngine)
	{
		GEngine->AddOnScreenDebugMessage(0, 5.f, FColor::Green, FString::Printf(TEXT("Triggered")));
	}
}
