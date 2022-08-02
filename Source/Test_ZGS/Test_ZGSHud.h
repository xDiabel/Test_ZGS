// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/HUD.h"
#include "Test_ZGSHud.generated.h"


UCLASS(config = Game)
class ATest_ZGSHud : public AHUD
{
	GENERATED_BODY()

public:
	ATest_ZGSHud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface
};
