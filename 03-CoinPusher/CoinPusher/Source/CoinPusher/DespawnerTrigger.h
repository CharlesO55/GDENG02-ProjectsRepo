// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "DespawnerTrigger.generated.h"

UCLASS()
class COINPUSHER_API ADespawnerTrigger : public ATriggerBox
{
	GENERATED_BODY()
	

private:
	virtual void BeginPlay() override;
	
	UFUNCTION() void CheckEnteredObj(AActor* OverlappingActor, AActor* Other);
};