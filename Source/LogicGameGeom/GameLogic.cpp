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

TArray<int32> AGameLogic::GenerateDeck(int Cards)
{
	int32 debug(true);
	TArray<int32> Deck;
		
		for (int32 card = 1; card <= Cards; card++) { Deck.Add(card); }
		
		if (debug) {
			for (int32 element : Deck)	{
				//UE_LOG(test3, Warning, TEXT("elem %i"), element);
				
			}
		}

	return Deck;
}

TArray<int32> AGameLogic::GetCardsPlayer(int Player, UPARAM(ref)TArray<int32>& Array)

{
	int32 debug(false);
	TArray<int32> PlayerDeck;
		
	for (int32 card = Player; card < Array.Num(); card+=4){
		 PlayerDeck.Add(Array[card]);
	}
	
	if (debug){
		for (int32 element : PlayerDeck)
		{
			UE_LOG(LogTemp, Warning, TEXT("elem %i"), element);
		}
	}
	return PlayerDeck;
}

TArray<int32> AGameLogic::Normalization(UPARAM(ref)TArray<int32>& Array)
{
	int32 debug(false);
	TArray<int32> PlayerPow;
	for (int32 element : Array) {
		
		PlayerPow.Add(NormCard(element));
		//if (element >= 49) { PlayerPow.Add(14); }//Туз
		//else if (element >= 45) {PlayerPow.Add(13); }//Король
		//else if (element >= 41) { PlayerPow.Add(12); }//Дама
		//else if (element >= 37) { PlayerPow.Add(11); }//Валет
		//else if (element >= 33) { PlayerPow.Add(10); }
		//else if (element >= 29) { PlayerPow.Add(9); }
		//else if (element >= 25) { PlayerPow.Add(8); }
		//else if (element >= 21) { PlayerPow.Add(7); }
		//else if (element >= 17) { PlayerPow.Add(6); }
		//else if (element >= 13) { PlayerPow.Add(5); }
		//else if (element >= 9) { PlayerPow.Add(4); }
		//else if (element >= 5) { PlayerPow.Add(3); }
		//else if (element <= 4) { PlayerPow.Add(2); }
	}

	if (debug) {
		for (int32 element : PlayerPow) {
			UE_LOG(LogTemp, Warning, TEXT("elem %i"), element);
		}
	}
	
	return PlayerPow;
}

int AGameLogic::GetCardColumn(int Card)
{
	int result;
	result = Card % 4;
      if (result == 0) { result = 4; }
	return  result - 1;
	
}

void AGameLogic::GetCoordsUV(int IDcard, float& Ucoords, float& Vcoords)
{
		int32 debug(false);
		const int MaxRows(4);
		IDcard--;
		Ucoords = IDcard / MaxRows;
		Vcoords = IDcard % MaxRows;
		if (debug) {UE_LOG(LogTemp, Warning, TEXT("UV: %f,%f"), Ucoords, Vcoords); }

}

void AGameLogic::SortSuitsAndValues(int Player, UPARAM(ref)TArray<int32>& PlayersDeck, TArray<int32>& PlayerHandCards)
{
	//0-Чирвы 1-Пики 2-Крести 3-Бубны
	int32 Temp;
	TArray<int32> TempArray;

	for (int Suits = 0; Suits <= 3; Suits++)
	{
		TempArray.Empty();
		for (int32 element : PlayersDeck)
		{
			Temp = (element-1) % 4;// todo
			
			if (Temp == Suits) TempArray.Add(element);
		}
		TempArray.Sort();
		Algo::Reverse(TempArray);
		PlayerHandCards += TempArray;
	}
}

float AGameLogic::GetPowerHands(UPARAM(ref)TArray<int32>& Array)
{
	TArray<int32> tempArray;
	TArray<int32> tempMainArray;
	int sum(0); 
	int maxsuits(0);
	float maxresult(0);
	float result;
	bool bIsBreak(false);
	for (int suits = 0; suits <= 3; suits++) {
		tempMainArray.Empty(); sum = 0;// с новой масти обнуляем массив и сумму элементов
		tempArray.Empty(); bIsBreak = false;
		for (int32 element : Array) {
			if ((element-1) % 4 == suits) tempMainArray.Add(element);//todo
		}

		tempArray = Normalization(tempMainArray);//Приводим все позиции к ценности(52 карта->14 вес)

		for (int32 element : tempArray) {//Обход фосок(не представляющих интерес)
			if (element > 9) sum += element;
		}

		//UE_LOG(LogTemp, Warning, TEXT("SUM %i"), sum)
			// Добавить KQB10 TQB10 QB109
		switch (sum) {
		case 50:result = 4.f; break;//TKQB
		case 46:result = 3.f; break;//KQB10/Перерепроверить константу
		case 39:result = 3.f; break;//TKQ
		case 38:result = 2.5; break;//TKB
		case 27:result = 2;  break;	//TKx
		case 26:result = 1.5; break;//TQx
		case 25:result = 1.f; break;//KQx
		case 24:result = 1.f; break;//T10x также срабатывает и на KBx
		case 23:result = 0.5; break;//K10 так же срабатывает на QB
		case 13:result = 0.5; break;//Kxx
		case 14:result = 1.f; break;//Txx
		case 33:result = 1.f; break;//QB10
		case 34:result = 1.f; break;//KB10
		case 35:result = 2.f; break;//KQ10 также срабатывает на TB10
		case 36:result = 2.f; break;//KQB также срабатывает на TQ10
		case 37:result = 2.5; break;//TQB перепроверить константу(по инфе было 2.5)
		default:result = 0; break;
		}

		//Разрешение конфликтов(TQB конфликтует с TK10)
		if (tempArray.Num() > 1) {// для не допушения Assertion failed: (Index >= 0) & (Index < ArrayNum)
			if (tempArray[0] == 14 && tempArray[1] == 13) {
				if (tempArray.Num() > 2) {
					if (tempArray[2] == 10) result = 2;
				}

			}
		}

		//Проверка на секвенции
		if (tempArray.Num() > 4 && sum > 50) {
		
			result++;
			
			for (int index = 0; index < tempArray.Num() - 1; index++) {
				if (!bIsBreak) {
					if (tempArray[index] - tempArray[index + 1] == 1) {
						result++;

					}
					else {
						bIsBreak = true;
						break;
					}
				}
			}
						
		}
		if (maxresult <= result) { maxresult = result; maxsuits = suits; }

		switch (suits) {
		case 0:UE_LOG(LogTemp, Warning, TEXT("♠ : %f,SUM %i"), result, sum); break;// Пики
		case 1:UE_LOG(LogTemp, Warning, TEXT("♣ : %f,SUM %i"), result, sum); break;// Крести
		case 2:UE_LOG(LogTemp, Warning, TEXT("♦ : %f,SUM %i"), result, sum); break;// Бубны
		case 3:UE_LOG(LogTemp, Warning, TEXT("♥ : %f,SUM %i"), result, sum); break;// Чирвы	
		default:result = 9999; break;
		}
	}
	UE_LOG(LogTemp, Warning, TEXT("maxsuit  : %i,maxresult : %f"), maxsuits, maxresult);
	return result;
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

		switch ((element-1) % 4) {
		case 0:Suit = TEXT("♠"); break;
		case 1:Suit = TEXT("♣"); break;
		case 2:Suit = TEXT("♦"); break;
		case 3:Suit = TEXT("♥"); break;
		default:Result = "999"; break;
		}

		Result += Suit;
	}
	UE_LOG(LogTemp, Warning, TEXT(" : %s"), *Result);
	return Result;
}

bool AGameLogic::ValidateMove(int Card, int CardOnTable, TArray<ASpawner*> PlayerHandCards, int TrumpSuit)
{
	bool debug(false);
	bool Result(false);
	bool Bin(false);
	int cardCol;
	int cardOnTableCol;
	int CurIDonHands;
	cardCol = GetCardColumn(Card);

	cardOnTableCol = GetCardColumn(CardOnTable);

	for (ASpawner* Actor : PlayerHandCards) {
		if (IsValid(Actor)){
			CurIDonHands = Actor->IDcard;
		   if (GetCardColumn(CurIDonHands) == cardOnTableCol){
		   	Bin = true;
			 break;
		   }
		if (Bin == true) break;
	    }
    }
	if (Bin == false) Result = true;
	
	if (GetCardColumn(Card) == GetCardColumn(CardOnTable)) Result = true;

	if (debug){
		for (ASpawner* Actor : PlayerHandCards) {
			if (IsValid(Actor))	{
			    UE_LOG(LogTemp, Warning, TEXT("elem %i "), Actor->IDcard);
			}
		}
    }
	return Result;
}

int AGameLogic::FindMove(TArray<ASpawner*> PlayerHandCards, TArray<ASpawner*> CardTableArray)
{
	return 0;
}

int AGameLogic::GetPowerCard(int Card, int TrumpSuit)
{
	bool debug(true);
	int CardNormalize(0);
	int Power(0);
	CardNormalize = NormCard(Card);
	if (GetCardColumn(Card) == TrumpSuit)
	 {
	    Power = CardNormalize + 100;	
	 }
	else
	 {
		Power = CardNormalize;
	 }
	if (debug) UE_LOG(LogTemp, Warning, TEXT("elem %i "), Power);
	
	return Power;
}



//int AGameLogic::GetPowerCard(i, int TrumpSuit)
//{
//	UE_LOG(LogTemp, Warning, TEXT("elem %i "), PlayerHandCards[0]->IDcard); 
//	//for (ASpawner* Actor : PlayerHandCards) {
//	//	
//	//	if (IsValid(Actor)) {
//
//	//		//	CurIDonHands = Actor->IDcard;
//
//
//	//		return 0;
//	//	}
//
//	//}
//	return 0;
//}

int AGameLogic::NormCard(int Card)
{
			if (Card >= 49) { return 14; }//Туз
		else if (Card >= 45) { return 13; }//Король
		else if (Card >= 41) { return 12; }//Дама
		else if (Card >= 37) { return 11; }//Валет
		else if (Card >= 33) { return 10; }
		else if (Card >= 29) { return 9; }
		else if (Card >= 25) { return 8; }
		else if (Card >= 21) { return 7; }
		else if (Card >= 17) { return 6; }
		else if (Card >= 13) { return 5; }
		else if (Card >= 9) { return 4; }
		else if (Card >= 5) { return 3; }
		else if (Card <= 4) { return 2; }
		return 0;

}

		