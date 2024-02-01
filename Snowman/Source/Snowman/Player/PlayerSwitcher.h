// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Camera/CameraActor.h"

#include "PlayerSwitcher.generated.h"

UCLASS()
class SNOWMAN_API APlayerSwitcher : public AActor
{
	GENERATED_BODY()
	
public:	
	APlayerSwitcher();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable) void SwitchPawn(APawn* sender);

private:
	UPROPERTY(VisibleAnywhere) int m_PawnIndex = 0;
	
	UPROPERTY(EditAnywhere) TArray<APawn*> m_Pawns;
	UPROPERTY(EditAnywhere) ACameraActor* m_MainCam;
	UPROPERTY(EditAnywhere) FVector m_CamOffset = FVector(0, -500, 500);


	AController* m_PlayerController;

public:
	static APlayerSwitcher* INSTANCE;
};

APlayerSwitcher* APlayerSwitcher::INSTANCE = NULL;