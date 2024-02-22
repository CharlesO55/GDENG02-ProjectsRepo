// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FactoryBase.h"
#include "FactoryLumeberjackHut.generated.h"

/**
 * 
 */
UCLASS(Config=Game)
class CHALLENGE01_FACTORY_API AFactoryLumeberjackHut : public AFactoryBase
{
	GENERATED_BODY()
	UPROPERTY(Config)
	float LUMBER_PRODUCTION_TIME;


	void SetProductionTime() override;
};
