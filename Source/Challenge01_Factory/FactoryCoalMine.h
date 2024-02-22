// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FactoryBase.h"
#include "FactoryCoalMine.generated.h"

/**
 * 
 */
UCLASS(Config=Game)
class CHALLENGE01_FACTORY_API AFactoryCoalMine : public AFactoryBase
{
	GENERATED_BODY()
	
private:
	UPROPERTY(Config)
	float COAL_PRODUCTION_TIME;
	
	void SetProductionTime() override;
};