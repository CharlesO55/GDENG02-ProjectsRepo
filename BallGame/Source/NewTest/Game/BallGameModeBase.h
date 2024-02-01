// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BallGameModeBase.generated.h"


class UScoreUserWidget;

UCLASS()
class NEWTEST_API ABallGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	

protected:
	int32 ItemsCollected = 0;
	int32 ItemsInLevel = 0;

	virtual void BeginPlay() override;

	void UpdateItemText();

	UPROPERTY(EditAnywhere, Category="Widget")
	TSubclassOf<class UUserWidget> WidgetClass;

	UPROPERTY()
	UScoreUserWidget* ScoreWidget;

public:
	void ItemCollected();
};