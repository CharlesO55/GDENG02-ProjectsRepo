// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Engine/StaticMeshActor.h"
#include "ActorPoolable.generated.h"

UCLASS()
class COINPUSHER_API AActorPoolable : public AStaticMeshActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AActorPoolable();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	//void OnInitialize();
	void OnRelease();
	void OnActivate();

	void SetIndex(int index);
	int GetIndex();

private:
	int m_Index = -1;

};
