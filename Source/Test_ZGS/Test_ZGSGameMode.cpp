// Copyright Epic Games, Inc. All Rights Reserved.

#include "Test_ZGSGameMode.h"
#include "Test_ZGSPawn.h"
#include "Test_ZGSHud.h"

ATest_ZGSGameMode::ATest_ZGSGameMode()
{
	DefaultPawnClass = ATest_ZGSPawn::StaticClass();
	HUDClass = ATest_ZGSHud::StaticClass();
}
