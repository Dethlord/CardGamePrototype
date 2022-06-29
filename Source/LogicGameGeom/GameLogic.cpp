// Fill out your copyright notice in the Description page of Project Settings.


#include "GameLogic.h"

// Sets default values
AGameLogic::AGameLogic()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGameLogic::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGameLogic::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGameLogic::GenerateDeck(int Cards, TArray<int32>& Deck)
{
}

void AGameLogic::GetCardsPlayer(int Player, UPARAM(ref)TArray<int32>& Array, TArray<int32>& PlayerDeck)
{
}

void AGameLogic::Normalization(UPARAM(ref)TArray<int32>& Array, TArray<int32>& GeomsPlayerPow)
{
}

int AGameLogic::GetCardColumn(int Card)
{
	return 0;
}

void AGameLogic::GetCoordsUV(int IDcard, float& Ucoords, float& Vcoords)
{
}

void AGameLogic::SortSuitsAndValues(int Player, UPARAM(ref)TArray<int32>& PlayersDeck, TArray<int32>& PlayerHandCards)
{
	//0-Пики 1-Крести 2-Бубны 3-Чирвы
	int32 Temp;
	TArray<int32> TempArray;

	for (int Suits = 0; Suits <= 3; Suits++)
	{
		TempArray.Empty();
		for (int32 element : PlayersDeck)
		{
			Temp = element % 4;
			//if (temp == 0) temp = 4;
			if (Temp == Suits) TempArray.Add(element);
		}
		TempArray.Sort();
		Algo::Reverse(TempArray);
		PlayerHandCards += TempArray;
	}
}

float AGameLogic::GetPowerHands(UPARAM(ref)TArray<int32>& Array)
{
	return 0.0f;
}

FString AGameLogic::GetDebugSuitsAndValues(UPARAM(ref)TArray<int32>& Array)
{
	FString value;
	FString Suit;
	FString Result;

	for (const int32 element : Array) {
		if (element >= 49) { value = TEXT("T"); }     //Туз
		else if (element >= 45) { value = TEXT("K"); }//Король
		else if (element >= 41) { value = TEXT("Q"); }//Дама
		else if (element >= 37) { value = TEXT("B"); }//Валет
		else if (element >= 33) { value = TEXT("10"); }
		else if (element >= 29) { value = TEXT("9"); }
		else if (element >= 25) { value = TEXT("8"); }
		else if (element >= 21) { value = TEXT("7"); }
		else if (element >= 17) { value = TEXT("6"); }
		else if (element >= 13) { value = TEXT("5"); }
		else if (element >= 9) { value = TEXT("4"); }
		else if (element >= 5) { value = TEXT("3"); }
		else if (element <= 4) { value = TEXT("2"); }

		Result += value;

		switch (element % 4) {
		case 0:Suit = TEXT("♥"); break;
		case 1:Suit = TEXT("♠"); break;
		case 2:Suit = TEXT("♣"); break;
		case 3:Suit = TEXT("♦"); break;
		default:Result = "999"; break;
		}

		Result += Suit;
	}
	UE_LOG(LogTemp, Warning, TEXT(" : %s"), *Result);
	return Result;
}

bool AGameLogic::ValidateMove(int Card, int CardOnTable, TArray<ASpawner*> PlayerHandCards, int TrampSuit)
{
	for (ASpawner* Actor : PlayerHandCards) {
		UE_LOG(LogTemp, Warning, TEXT("elem %i"), Actor->IDcard);
	}
		return false;
}

