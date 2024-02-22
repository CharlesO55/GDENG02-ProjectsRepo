// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FactoryBase.h"
#include "FactorySewingMachine.generated.h"

/**
 * 
 */
UCLASS(Config=Game)
class CHALLENGE01_FACTORY_API AFactorySewingMachine : public AFactoryBase
{
	GENERATED_BODY()
	
	UPROPERTY(Config)
	float SEWING_MACHINE_PRODUCTION_TIME;


	void SetProductionTime() override;
};
