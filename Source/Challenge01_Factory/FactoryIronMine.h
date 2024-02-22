// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FactoryBase.h"
#include "FactoryIronMine.generated.h"

/**
 * 
 */
UCLASS(Config=Game)
class CHALLENGE01_FACTORY_API AFactoryIronMine : public AFactoryBase
{
	GENERATED_BODY()
	UPROPERTY(Config)
	float IRON_PRODUCTION_TIME;


	void SetProductionTime() override;
};
