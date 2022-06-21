// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"

#include <array>

#include "Math/UnrealMathUtility.h"
#include "Kismet/KismetArrayLibrary.h"
#include "Algo/Reverse.h"

DEFINE_LOG_CATEGORY(test3);// Определение кастомной категории
int Sub(TArray<int32> Array)
{
	for (int32 element : Array)	{

		UE_LOG(LogTemp, Warning, TEXT("elem %i"), element);
	}
	return 1;
}



void UMyBlueprintFunctionLibrary::GenerateDeck(int Cards, TArray<int32>& Deck)
{
int32 debug(true);
	/*int32 rand,temp;*/
	
	for (int32 card = 1; card <= Cards; card++) { Deck.Add(card); }
	
	if (debug) {
		for (int32 element : Deck)	{
			UE_LOG(test3, Warning, TEXT("elem %i"), element);
			
		}
	}
}

void UMyBlueprintFunctionLibrary::GetCardsPlayer(int Player, UPARAM(ref)TArray<int32>& Array, TArray<int32>& PlayerDeck)
{
	//int32 result;
	int32 debug(false);
	//int32 temp;
		
	for (int32 card = Player; card < Array.Num(); card+=4){
		 PlayerDeck.Add(Array[card]);
	}
	
	if (debug){
		for (int32 element : PlayerDeck)
		{
			UE_LOG(LogTemp, Warning, TEXT("elem %i"), element);
		}
	}
}

/// <summary>
/// Нормализация значений карт
/// </summary>
/// <param name="Array"></param>
/// <param name="GeomsPlayerPow"></param>
void UMyBlueprintFunctionLibrary::Normalization(UPARAM(ref)TArray<int32>& Array, TArray<int32>& GeomsPlayerPow)
{
	int32 debug(false);
	
	for (int32 element : Array)	{

		if          (element >= 49) { GeomsPlayerPow.Add(14); }//Туз
			else if (element >= 45) { GeomsPlayerPow.Add(13); }//Король
			else if (element >= 41) { GeomsPlayerPow.Add(12); }//Дама
			else if (element >= 37) { GeomsPlayerPow.Add(11); }//Валет
			else if (element >= 33) { GeomsPlayerPow.Add(10); }
			else if (element >= 29) { GeomsPlayerPow.Add(9); }
			else if (element >= 25) { GeomsPlayerPow.Add(8); }
			else if (element >= 21) { GeomsPlayerPow.Add(7); }
			else if (element >= 17) { GeomsPlayerPow.Add(6); }
			else if (element >= 13) { GeomsPlayerPow.Add(5); }
			else if (element >= 9) { GeomsPlayerPow.Add(4); }
			else if (element >= 5) { GeomsPlayerPow.Add(3); }
			else if (element <= 4) { GeomsPlayerPow.Add(2); }
	}

	if (debug){
		for (int32 element : GeomsPlayerPow){
			UE_LOG(LogTemp, Warning, TEXT("elem %i"), element);
		}
	}
}

void UMyBlueprintFunctionLibrary::GetCardColumn(int Card, int& result)
{
	result = Card % 4;
	if (result == 0) { result = 4; }
}
/// <summary>
	/// //Функция возврата координат UV по порядковому номеру(IDcard)
	/// </summary>
	/// <param name="IDcard"> ID карты от 1 до n</param>
	/// <param name="Ucoords"></param>
	/// <param name="Vcoords"></param>
void UMyBlueprintFunctionLibrary::GetCoordsUV(int IDcard, float& Ucoords, float& Vcoords)
{
	int32 debug(false);
	const int MaxRows(4);
	IDcard--;
	Ucoords = IDcard / MaxRows;
	Vcoords = IDcard % MaxRows;
	if (debug) {UE_LOG(LogTemp, Warning, TEXT("UV: %f,%f"), Ucoords, Vcoords); }
	}

void UMyBlueprintFunctionLibrary::SortSuitsAndValues(int Player, UPARAM(ref)TArray<int32>& Array, TArray<int32>& PlayerHandCards, int& result)
{
	//0-Пики 1-Крести 2-Бубны 3-Чирвы
	int32 temp;
	TArray<int32> tempArray;
		
	for (int suits  = 0; suits <= 3; suits++)
	{
		tempArray.Empty();
		for (int32 element : Array)
		{
		temp = element % 4;
		//if (temp == 0) temp = 4;
		if (temp== suits) tempArray.Add(element);
		}
	tempArray.Sort();
	Algo::Reverse(tempArray);
	PlayerHandCards+=tempArray;
	}
}
	/// <summary>
	/// Функция отдачи "силы" руки
	/// </summary>
	/// <param name="Array">Входной массив упорядоченных по мастям картам</param>
	/// <param name="result">Результат</param>
void UMyBlueprintFunctionLibrary::GetPowerHands(UPARAM(ref)TArray<int32>& Array, float& result)
{
	TArray<int32> tempArray;
	TArray<int32> tempMainArray;
	int sum(0);
	int maxsuits(0);
	float maxresult(0);
	bool isBreak=false;
	for (int suits = 0; suits <= 3; suits++){
		tempMainArray.Empty(); sum = 0;// с новой масти обнуляем массив и сумму элементов
		tempArray.Empty(); isBreak = false;
		for (int32 element : Array){
			if (element % 4 == suits) tempMainArray.Add(element);
		}

		Normalization(tempMainArray, tempArray);//Приводим все позиции к ценности(52 карта->14 вес)

		for (int32 element : tempArray) {//Обход фосок(не представляющих интерес)
			if (element > 9) sum += element;
		}

		//UE_LOG(LogTemp, Warning, TEXT("SUM %i"), sum)
			// Добавить KQB10 TQB10 QB109
			switch (sum){
			case 50:result = 4.f; break;//TKQB
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
			case 37:result = 2.5; break;//TQB перепроверить константу
			default:result = 0; break;
			}
		
		//Разрешение конфликтов(TQB конфликтует с TK10)
		if (tempArray.Num() > 1) {// для не допушения Assertion failed: (Index >= 0) & (Index < ArrayNum)
			if (tempArray[0] == 14 && tempArray[1] == 13) {
				if (tempArray.Num() > 2){
					if (tempArray[2] == 10) result = 2;
				}
			
			}
		}
		
		//Проверка на секвенции
    	if (tempArray.Num() > 4 && sum > 50) {
			//if (tempArray[0] == 14 || tempArray[1] == 13){//только с туза или короля
              result++;
				for (int index = 0; index < tempArray.Num()-1; index++) {
					if (!isBreak){
						if (tempArray[index] - tempArray[index + 1] == 1) {
						result++;
						
						}
						else {
						isBreak = true;
						break;
						}
					}
				}
		
			//}
		}
		if (maxresult <= result) { maxresult = result; maxsuits = suits;}

		switch (suits){
		case 0:UE_LOG(LogTemp, Warning, TEXT("♠ : %f,SUM %i"), result, sum); break;// Пики
		case 1:UE_LOG(LogTemp, Warning, TEXT("♣ : %f,SUM %i"), result, sum); break;// Крести
		case 2:UE_LOG(LogTemp, Warning, TEXT("♦ : %f,SUM %i"), result, sum); break;// Бубны
		case 3:UE_LOG(LogTemp, Warning, TEXT("♥ : %f,SUM %i"), result, sum); break;// Чирвы	
		default:result = 9999; break;
		}
		

	}
	UE_LOG(LogTemp, Warning, TEXT("maxsuit  : %i,maxresult : %f"), maxsuits,maxresult);
}
/// <summary>
/// Функция вывода значений и мастей в консоль
/// </summary>
/// <param name="Array">Требуется не нормализированный массив</param>
/// <param name="result"></param>
void UMyBlueprintFunctionLibrary::GetDebugSuitsAndValues(UPARAM(ref)TArray<int32>& Array, FString& result)
{
	FString value;
	//int32 temp;
	FString suit;
	for (int32 element : Array) {
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
		
		result += value;

		switch (element % 4) {
		case 0:suit = TEXT("♠"); break;
		case 1:suit = TEXT("♣"); break;
		case 2:suit = TEXT("♦"); break;
		case 3:suit = TEXT("♥"); break;
		default:result = "999"; break;
		}
		result += suit;
		
	}
	UE_LOG(LogTemp, Warning, TEXT(" : %s"), *result );
	result.Empty();
}










