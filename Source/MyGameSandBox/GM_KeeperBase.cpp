#include "GM_KeeperBase.h"

#include "Components/CrystalSpawner.h"

AGM_KeeperBase::AGM_KeeperBase()
{
	CrystalSpawner = CreateDefaultSubobject<UCrystalSpawner>(TEXT("CrystalSpawner"));	
}
