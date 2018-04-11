// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Dev_TemplateGameMode.generated.h"

UCLASS(minimalapi)
class ADev_TemplateGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ADev_TemplateGameMode();

	virtual void BeginPlay() override;

protected:

	//Widget class to use for the HUD screen
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "CustomWidget", meta = (BlueprintProtected = "true"))
	TSubclassOf<class UUserWidget> HUDWidgetClass;

	//The instance of the HUD
	UPROPERTY()
		class UUserWidget* CurrentWidget;
};



