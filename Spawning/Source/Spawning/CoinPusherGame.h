// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CoinWidget.h"
#include "CoinPusherGame.generated.h"

/**
 * 
 */
UCLASS()
class SPAWNING_API ACoinPusherGame : public AGameModeBase
{
	GENERATED_BODY()

protected:

	int32 coinsCollected = 0;

	UPROPERTY(EditAnywhere, Category = "Widgets")
	TSubclassOf<class UUserWidget> GameWidgetClass;

	UPROPERTY()
	UCoinWidget* GameWidget;

	virtual void BeginPlay() override;

	void UpdateItemText();

public:

	void AddCoin();
	void ChangeSpeedText(float speed);
	void ChangeSpawnText(int amount);
};
