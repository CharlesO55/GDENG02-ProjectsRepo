// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Door.generated.h"

UCLASS(Blueprintable)
class CHALLENGE01_ANNO_API ADoor : public AActor
{
	GENERATED_BODY()
	
public:	
	ADoor();

protected:
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	/*UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneComponent* _anchor;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* _mesh;*/

	UFUNCTION(BlueprintImplementableEvent)
	void Open();
	UFUNCTION(BlueprintImplementableEvent)
	void Close();

	UPROPERTY(BlueprintReadWrite)
	bool IsOpen = false;
};
