// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ResourceData.generated.h"

UENUM()
enum class EResource : uint8 {
	NONE,
	IRON,
	COAL,
	LUMBER,
	STEEL_BEAM,
	SEWING_MACHINE
};

USTRUCT(BlueprintType)
struct CHALLENGE01_FACTORY_API FResourceData
{

public:
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EResource ResourceType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int MaxCapacity = 3;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int CurCapacity = 0;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UTexture2D* ResIcon;

	FResourceData();
	~FResourceData();
};