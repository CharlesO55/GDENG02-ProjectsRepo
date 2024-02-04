// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "DespawnerTrigger.generated.h"

UCLASS()
class COINPUSHER_API ADespawnerTrigger : public ATriggerBox
{
	GENERATED_BODY()
	

public:
	ADespawnerTrigger();

	virtual void BeginPlay() override;
	
private:
	UFUNCTION() void CheckEnteredObj(AActor* OverlappingActor, AActor* Other);
};