// Fill out your copyright notice in the Description page of Project Settings.


#include "CoinPusherGame.h"

void ACoinPusherGame::BeginPlay()
{
	if (GameWidgetClass)
	{
		this->GameWidget = Cast<UCoinWidget>(CreateWidget(GetWorld(), GameWidgetClass));

		if (GameWidgetClass)
		{
			this->GameWidget->AddToViewport();
			UpdateItemText();
		}
	}
}

void ACoinPusherGame::UpdateItemText()
{
	this->GameWidget->SetItemText(this->coinsCollected);
}

void ACoinPusherGame::AddCoin()
{
	this->coinsCollected++;
	this->UpdateItemText();
}

void ACoinPusherGame::ChangeSpeedText(float speed)
{
	this->GameWidget->SetPusherSpeedText(speed / 100);
}

void ACoinPusherGame::ChangeSpawnText(int amount)
{
	this->GameWidget->SetCoinSpawnText(amount);
}
