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
	UFUNCTION(BlueprintCallable)
	static TArray<int32> GenerateDeck(int Cards);
	
	

	//������� �������� ���� ���� �� �����
	UFUNCTION(BlueprintCallable)
		static TArray<int32> GetCardsPlayer(int Player, UPARAM(ref)TArray<int32>& Array);

	//������ ������������ �������� ����(���������� ����� � ��������� ���������)
	UFUNCTION(BlueprintCallable)
		static TArray<int32> Normalization(UPARAM(ref)TArray<int32>& Array);

	// � ����� �������  �����	
	UFUNCTION(BlueprintCallable)
		static int GetCardColumn(int Card);

	//������� �������� ��������� UV �� ����������� ������(IDcard)
	UFUNCTION(BlueprintCallable)
		static void GetCoordsUV(int IDcard, float& Ucoords, float& Vcoords);

	//������� ���������� ���� �� ����� � �� ��������
	UFUNCTION(BlueprintCallable)
		static void SortSuitsAndValues(int Player, UPARAM(ref)TArray<int32>& PlayersDeck, TArray<int32>& PlayerHandCards);

	//������� ������ "���� ����"(����� ������ ���� "����" ��������� ��� ��������)
	UFUNCTION(BlueprintCallable)
		static float GetPowerHands(UPARAM(ref)TArray<int32>& Array);
	//������� ��� ����������� �������� � ������ � �������
	UFUNCTION(BlueprintCallable)
		static FString GetDebugSuitsAndValues(UPARAM(ref)TArray<int32>& Array);

	//������� ������������� ����
	UFUNCTION(BlueprintCallable)
		static bool ValidateMove(int Card, int CardOnTable, TArray<ASpawner*> PlayerHandCards, int TrumpSuit = -1);

	UFUNCTION(BlueprintCallable)
		static bool IsEqualColumns(int Card, int CardOnTable);

	//������� ������ ���������� ����
	UFUNCTION(BlueprintCallable)
		static int FindMove(TArray<ASpawner*> PlayerHandCards, TArray<ASpawner*> CardTableArray);
	//������� ������ ���� �����( ������� �� ����� ��� �� ������������ ������)
	UFUNCTION(BlueprintCallable)
	static int GetPowerCard(int Card, int TrumpSuit);

	UFUNCTION(BlueprintCallable)
		static int GetRoundWinner(TArray<ASpawner*> CardTableArray, int FirstMovePlayer);
private:
	//������� ������������ �������� �����(���������� ����� � ��������� ���������)
	static int NormCard(int Card);


};
