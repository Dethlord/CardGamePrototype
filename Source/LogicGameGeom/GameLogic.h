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
	//������� ��������� ��������� ������
	//UFUNCTION(BlueprintCallable)
	//	static void GenerateDeck(int Cards, TArray<int32>& Deck);
	//
	////������� �������� ���� ���� �� �����
	//UFUNCTION(BlueprintCallable)
	//	static void GetCardsPlayer(int Player, UPARAM(ref)TArray<int32>& Array, TArray<int32>& PlayerDeck);

	////������ ������������ �������� ����(���������� ����� � ��������� ���������)
	//UFUNCTION(BlueprintCallable)
	//	static void Normalization(UPARAM(ref)TArray<int32>& Array, TArray<int32>& GeomsPlayerPow);

	//// � ����� �������  �����
	//UFUNCTION(BlueprintCallable)
	//	static void GetCardColumn(int Card, int& result);

	////������� �������� ��������� UV �� ����������� ������(IDcard)
	//UFUNCTION(BlueprintCallable)
	//	static void GetCoordsUV(int IDcard, float& Ucoords, float& Vcoords);

	////������� ������ ������������ ������(��������)
	//UFUNCTION(BlueprintCallable)
	//	static void SortSuitsAndValues(int Player, UPARAM(ref)TArray<int32>& Array, TArray<int32>& PlayerHandCards, int& result);

	////������� ������ "���� ����"
	//UFUNCTION(BlueprintCallable)
	//	static void GetPowerHands(UPARAM(ref)TArray<int32>& Array, float& result);

	UFUNCTION(BlueprintCallable)
		static FString GetDebugSuitsAndValues(UPARAM(ref)TArray<int32>& Array);
	//������� ������������� ����
	
	UFUNCTION(BlueprintCallable)
		static bool ValidateMove(int Card, int CardOnTable, TArray<ASpawner*> PlayerHandCards, int TrampSuit = -1);
};
