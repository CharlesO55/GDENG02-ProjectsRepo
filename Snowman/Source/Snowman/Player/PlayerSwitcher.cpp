// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerSwitcher.h"

// Sets default values
APlayerSwitcher::APlayerSwitcher()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	//RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	//this->m_PlayerController = CreateDefaultSubobject<AController>(TEXT("PlayerController"));
}

// Called when the game starts or when spawned
void APlayerSwitcher::BeginPlay()
{
	Super::BeginPlay();
	
	if (APlayerSwitcher::INSTANCE != NULL) {
		APlayerSwitcher::INSTANCE = NULL;
	}
	APlayerSwitcher::INSTANCE = this;


	//if (APlayerSwitcher::INSTANCE == NULL) {
	//	APlayerSwitcher::INSTANCE->Destroy();
	//}
	//else {
	//	UE_LOG(LogTemp, Warning, TEXT("Player switcher already exists in scene"));
	//	//Destroy();
	//}
	//APlayerSwitcher::INSTANCE = this;


	
	for (auto pawn : m_Pawns) {
		UE_LOG(LogTemp, Display, TEXT("Pawns in Scene: %s"), *(pawn->GetName()));
	}
	UE_LOG(LogTemp, Display, TEXT("Player Switcher Created..."));
}

// Called every frame
void APlayerSwitcher::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
	this->m_MainCam->SetActorLocation(this->m_Pawns[m_PawnIndex]->GetTransform().GetLocation() + m_CamOffset);
}

void APlayerSwitcher::SwitchPawn(APawn* sender)
{
	UE_LOG(LogTemp, Display, TEXT("[Unpossessing]: %s"), *(sender->GetName()));

	sender->AutoPossessPlayer = EAutoReceiveInput::Disabled;
	if (this->m_PlayerController == NULL) {
		this->m_PlayerController = sender->Controller;
	}



	this->m_PawnIndex++;
	if (m_PawnIndex >= m_Pawns.Num()) {
		m_PawnIndex = 0;
	}
	//m_Cams[m_PawnIndex]->Activate();



	APawn* targetPawn = m_Pawns[m_PawnIndex];

	if (m_PlayerController != NULL) {
		UE_LOG(LogTemp, Display, TEXT("[Possessing]: %d %s"), m_PawnIndex, *(targetPawn->GetName()));
		targetPawn->AutoPossessPlayer = EAutoReceiveInput::Player0;

		this->m_PlayerController->Possess(targetPawn);
		
		UE_LOG(LogTemp, Display, TEXT("[Possessed]: %d %s"), m_PawnIndex, *(targetPawn->GetName()));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("[No controller in]: %s"), *(targetPawn->GetName()));
	}
}