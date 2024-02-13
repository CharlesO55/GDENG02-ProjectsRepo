// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CoinWidget.generated.h"

/**
 * 
 */
UCLASS()
class SPAWNING_API UCoinWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent)
	void SetItemText(int32 collected);
	UFUNCTION(BlueprintImplementableEvent)
	void SetPusherSpeedText(float speed);

	UFUNCTION(BlueprintImplementableEvent) void SetCoinSpawnText(int nAmount);
};
