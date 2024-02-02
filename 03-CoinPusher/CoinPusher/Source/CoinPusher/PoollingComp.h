// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include "ActorPoolable.h"
#include "PoollingComp.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COINPUSHER_API UPoollingComp : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPoollingComp();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	virtual void BeginDestroy() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	void Initialize();
	
	AActorPoolable* RequestPoolable();
	TArray<AActorPoolable*> RequestPoolableBatch(int nRequestAmount);

	void ReleasePoolable(AActorPoolable* releaseActor);
	void ReleasePoolableBatch(TArray<AActorPoolable*> releaseActors);
	void ReleasePoolableBatch(int nAmount);

private:
	int GetMaxPoolSize();
	bool HasObjectAvailable(int nRequestAmount);

private:
	UPROPERTY(EditAnywhere) int m_PoolSize;
	UPROPERTY(EditAnywhere) AActorPoolable* m_PoolableTemplate;
	//UPROPERTY(EditAnywhere) AActor* m_Parent;

	TArray<AActorPoolable*> m_AvailableObjects;
	TArray<AActorPoolable*> m_UsedObjects;
};
