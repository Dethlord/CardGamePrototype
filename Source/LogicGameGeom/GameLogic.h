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
	UFUNCTION(BlueprintCallable)
	static TArray<int32> GenerateDeck(int Cards);
	
	

	//Функция возврата всех карт на руках
	UFUNCTION(BlueprintCallable)
		static TArray<int32> GetCardsPlayer(int Player, UPARAM(ref)TArray<int32>& Array);

	//Фильтр нормализации значений карт(Порядковый номер в начальную стоимость)
	UFUNCTION(BlueprintCallable)
		static TArray<int32> Normalization(UPARAM(ref)TArray<int32>& Array);

	// в какой колонке  карта	
	UFUNCTION(BlueprintCallable)
		static int GetCardColumn(int Card);

	//Функция возврата координат UV по порядковому номеру(IDcard)
	UFUNCTION(BlueprintCallable)
		static void GetCoordsUV(int IDcard, float& Ucoords, float& Vcoords);

	//Функция сортировки карт по масти и по значению
	UFUNCTION(BlueprintCallable)
		static void SortSuitsAndValues(int Player, UPARAM(ref)TArray<int32>& PlayersDeck, TArray<int32>& PlayerHandCards);

	//Функция отдачи "силы руки"(общая оценка всей "руки" требуемая для торговли)
	UFUNCTION(BlueprintCallable)
		static float GetPowerHands(UPARAM(ref)TArray<int32>& Array);
	//Функция для логирования значений и мастей в консоль
	UFUNCTION(BlueprintCallable)
		static FString GetDebugSuitsAndValues(UPARAM(ref)TArray<int32>& Array);

	//Функция разрешенности хода
	UFUNCTION(BlueprintCallable)
		static bool ValidateMove(int Card, int CardOnTable, TArray<ASpawner*> PlayerHandCards, int TrumpSuit = -1);

	UFUNCTION(BlueprintCallable)
		static bool IsEqualColumns(int Card, int CardOnTable);

	//Функция поиска наилучшего хода
	UFUNCTION(BlueprintCallable)
		static int FindMove(TArray<ASpawner*> PlayerHandCards, TArray<ASpawner*> CardTableArray);
	//Функция отдачи силы карты( зависит от масти или от бескозырного режима)
	UFUNCTION(BlueprintCallable)
	static int GetPowerCard(int Card, int TrumpSuit);

	UFUNCTION(BlueprintCallable)
		static int GetRoundWinner(TArray<ASpawner*> CardTableArray, int FirstMovePlayer);
private:
	//Функция нормализации значения карты(Порядковый номер в начальную стоимость)
	static int NormCard(int Card);


};
