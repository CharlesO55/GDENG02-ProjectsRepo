// Fill out your copyright notice in the Description page of Project Settings.


#include "TankController.h"

#define out

void ATankController::BeginPlay()
{
	Super::BeginPlay();

	UInputComponent* input = this->FindComponentByClass<UInputComponent>();
	input->BindAction("Shoot", EInputEvent::IE_Pressed, this, &ATankController::OnFire);

	//HIDE BASE PROJECTILE
	this->_projectileCopy->SetActorHiddenInGame(true);
}

void ATankController::Tick(float deltaTime)
{
	Super::Tick(deltaTime);
}

bool ATankController::GetRayHitLocation()
{
	return (
		this->DeprojectScreenPositionToWorld(
			this->_crosshairScreenLoc.X,
			this->_crosshairScreenLoc.Y,
			out this->_latestCameraLoc,
			out this->_latestWorldDirection
		)
	);
}

bool ATankController::GetWorldPoint()
{
	FHitResult hit;
	FVector startLoc = this->_latestCameraLoc;
	FVector endLoc = startLoc + (this->_latestWorldDirection * 10000000);

	bool result = this->GetWorld()->LineTraceSingleByChannel(out hit, startLoc, endLoc, ECollisionChannel::ECC_Visibility);
	//DrawDebugLine(GetWorld(), startLoc, endLoc, FColor::Blue, false, 2, 0, 2);

	this->_latestWorldPoint = hit.Location;
	this->_latestWorldPoint.Z += 100.0f; //SLIGHTLY ABOVE

	return result;
}

void ATankController::OnFire()
{
	bool hasHit = this->GetRayHitLocation();

	if (hasHit) {
		UE_LOG(LogTemp, Display, TEXT("Crosshair screen location: %s"), *this->_crosshairScreenLoc.ToString());

		if (this->GetWorldPoint()) {
			UE_LOG(LogTemp, Display, TEXT("Firing on: %s"), *this->_latestWorldPoint.ToString());

			this->SpawnProjectile();
		}
	}

	else {
		UE_LOG(LogTemp, Display, TEXT("No object hit"));
	}
}

void ATankController::SpawnProjectile()
{
	if (_projectileCopy != nullptr) {
		FActorSpawnParameters spawnParams;
		spawnParams.Template = this->_projectileCopy;
		spawnParams.Owner = this->GetOwner();

		AActor* newProj = this->GetWorld()->SpawnActor<AActor>(this->_projectileCopy->GetClass(), spawnParams);
		newProj->AttachToActor(this->GetOwner(), FAttachmentTransformRules::KeepRelativeTransform);
		newProj->SetActorHiddenInGame(false);
		newProj->SetActorLocation(this->_latestWorldPoint);
		newProj->SetActorRotation(this->_projectileCopy->GetActorRotation());
	}
}
