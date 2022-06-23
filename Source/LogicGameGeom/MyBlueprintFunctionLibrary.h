// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyBlueprintFunctionLibrary.generated.h"
//DECLARE_LOG_CATEGORY_EXTERN(test3, Warning, All);//Обьявление кастомной категории
/**
 * 
 */

UCLASS()





class LOGICGAMEGEOM_API UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		


//Функция генерации случайной колоды
	UFUNCTION(BlueprintCallable)
		static void GenerateDeck(int Cards, TArray<int32>& Deck);
	//Функция разрешенности хода
	UFUNCTION(BlueprintCallable)
		static void ValidateMove(int Card, UPARAM(ref)TArray<AActor*>& PlayerHandCards,bool& result,int TrampSuit = -1 );


	//Функция возврата всех карт на руках
	UFUNCTION(BlueprintCallable)
		static void GetCardsPlayer(int Player, UPARAM(ref)TArray<int32>& Array, TArray<int32>& PlayerDeck);

	//Фильтр нормализации значений карт(Порядковый номер в начальную стоимость)
	UFUNCTION(BlueprintCallable)
		static void Normalization(UPARAM(ref)TArray<int32>& Array, TArray<int32>& GeomsPlayerPow);
	
	// в какой колонке  карта
	UFUNCTION(BlueprintCallable)
		static void GetCardColumn(int Card, int& result);

	//Функция возврата координат UV по порядковому номеру(IDcard)
	UFUNCTION(BlueprintCallable)
		static void GetCoordsUV(int IDcard, float& Ucoords, float& Vcoords);

	//Функция отдачи максимальной ставки(торговля)
	UFUNCTION(BlueprintCallable)
		static void SortSuitsAndValues(int Player,UPARAM(ref)TArray<int32>& Array, TArray<int32>& PlayerHandCards, int& result);
	
	//Функция отдачи "силы руки"
	UFUNCTION(BlueprintCallable)
		static void GetPowerHands(UPARAM(ref)TArray<int32>& Array, float& result);
	
	UFUNCTION(BlueprintCallable)
		static void GetDebugSuitsAndValues(UPARAM(ref)TArray<int32>& Array, FString& result);


	
};
