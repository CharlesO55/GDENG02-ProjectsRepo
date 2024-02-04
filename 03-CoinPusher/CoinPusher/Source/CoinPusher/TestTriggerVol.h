// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "TestTriggerVol.generated.h"


UCLASS()
class COINPUSHER_API ATestTriggerVol : public ATriggerVolume
{
	GENERATED_BODY()

public:
	ATestTriggerVol();

protected:
	virtual void BeginPlay() override;

private:
	UFUNCTION() void BeginOverlap(AActor* OverlapActor, AActor* OtherActor);
};
