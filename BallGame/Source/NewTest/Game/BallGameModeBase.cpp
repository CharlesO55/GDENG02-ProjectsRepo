// Fill out your copyright notice in the Description page of Project Settings.


#include "BallGameModeBase.h"

#include "Kismet/GameplayStatics.h"
#include "NewTest/Items/ItemBase.h"
#include "NewTest/Game/ScoreUserWidget.h"

void ABallGameModeBase::BeginPlay()
{
	TArray<AActor*> Items;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AItemBase::StaticClass(), Items);
	ItemsInLevel = Items.Num();


	// WIDGET
	if (this->WidgetClass) {
		this->ScoreWidget = Cast<UScoreUserWidget>(CreateWidget(GetWorld(), this->WidgetClass));

		if (this->ScoreWidget) {
			ScoreWidget->AddToViewport();
			UpdateItemText();
		}
	}

}

void ABallGameModeBase::UpdateItemText()
{
	ScoreWidget->SetItemText(this->ItemsCollected, this->ItemsInLevel);

}

void ABallGameModeBase::ItemCollected()
{
	this->ItemsCollected++;

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, FString::Printf(TEXT("Current Items: %d"), this->ItemsCollected));
	
	UpdateItemText();
}
