#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "GM_KeeperBase.generated.h"


class UCrystalSpawner;

UCLASS()
class MYGAMESANDBOX_API AGM_KeeperBase : public AGameMode
{
	GENERATED_BODY()

public:
	AGM_KeeperBase();
	
protected:

private:
	UPROPERTY(VisibleDefaultsOnly, Category = "Resources")
	UCrystalSpawner* CrystalSpawner;
};
