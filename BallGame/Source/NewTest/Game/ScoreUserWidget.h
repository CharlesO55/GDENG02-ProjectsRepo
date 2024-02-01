// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ScoreUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class NEWTEST_API UScoreUserWidget : public UUserWidget
{
	GENERATED_BODY()


public:
	UFUNCTION(BlueprintImplementableEvent)
	void SetItemText(int32 ItemsCollected, int32 ItemsInLevel);
};
