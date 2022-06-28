// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Spawner.h"
#include "GameLogic.generated.h"

UCLASS()
class LOGICGAMEGEOM_API AGameLogic : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGameLogic();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	//Функция генерации случайной колоды
	//UFUNCTION(BlueprintCallable)
	//	static void GenerateDeck(int Cards, TArray<int32>& Deck);
	//
	////Функция возврата всех карт на руках
	//UFUNCTION(BlueprintCallable)
	//	static void GetCardsPlayer(int Player, UPARAM(ref)TArray<int32>& Array, TArray<int32>& PlayerDeck);

	////Фильтр нормализации значений карт(Порядковый номер в начальную стоимость)
	//UFUNCTION(BlueprintCallable)
	//	static void Normalization(UPARAM(ref)TArray<int32>& Array, TArray<int32>& GeomsPlayerPow);

	//// в какой колонке  карта
	//UFUNCTION(BlueprintCallable)
	//	static void GetCardColumn(int Card, int& result);

	////Функция возврата координат UV по порядковому номеру(IDcard)
	//UFUNCTION(BlueprintCallable)
	//	static void GetCoordsUV(int IDcard, float& Ucoords, float& Vcoords);

	////Функция отдачи максимальной ставки(торговля)
	//UFUNCTION(BlueprintCallable)
	//	static void SortSuitsAndValues(int Player, UPARAM(ref)TArray<int32>& Array, TArray<int32>& PlayerHandCards, int& result);

	////Функция отдачи "силы руки"
	//UFUNCTION(BlueprintCallable)
	//	static void GetPowerHands(UPARAM(ref)TArray<int32>& Array, float& result);

	UFUNCTION(BlueprintCallable)
		static FString GetDebugSuitsAndValues(UPARAM(ref)TArray<int32>& Array);
	//Функция разрешенности хода
	
	UFUNCTION(BlueprintCallable)
		static bool ValidateMove(int Card, int CardOnTable, TArray<ASpawner*> PlayerHandCards, int TrampSuit = -1);
};
