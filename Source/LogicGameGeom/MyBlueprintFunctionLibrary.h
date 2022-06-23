// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyBlueprintFunctionLibrary.generated.h"
//DECLARE_LOG_CATEGORY_EXTERN(test3, Warning, All);//���������� ��������� ���������
/**
 * 
 */

UCLASS()





class LOGICGAMEGEOM_API UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		


//������� ��������� ��������� ������
	UFUNCTION(BlueprintCallable)
		static void GenerateDeck(int Cards, TArray<int32>& Deck);
	//������� ������������� ����
	UFUNCTION(BlueprintCallable)
		static void ValidateMove(int Card, UPARAM(ref)TArray<AActor*>& PlayerHandCards,bool& result,int TrampSuit = -1 );


	//������� �������� ���� ���� �� �����
	UFUNCTION(BlueprintCallable)
		static void GetCardsPlayer(int Player, UPARAM(ref)TArray<int32>& Array, TArray<int32>& PlayerDeck);

	//������ ������������ �������� ����(���������� ����� � ��������� ���������)
	UFUNCTION(BlueprintCallable)
		static void Normalization(UPARAM(ref)TArray<int32>& Array, TArray<int32>& GeomsPlayerPow);
	
	// � ����� �������  �����
	UFUNCTION(BlueprintCallable)
		static void GetCardColumn(int Card, int& result);

	//������� �������� ��������� UV �� ����������� ������(IDcard)
	UFUNCTION(BlueprintCallable)
		static void GetCoordsUV(int IDcard, float& Ucoords, float& Vcoords);

	//������� ������ ������������ ������(��������)
	UFUNCTION(BlueprintCallable)
		static void SortSuitsAndValues(int Player,UPARAM(ref)TArray<int32>& Array, TArray<int32>& PlayerHandCards, int& result);
	
	//������� ������ "���� ����"
	UFUNCTION(BlueprintCallable)
		static void GetPowerHands(UPARAM(ref)TArray<int32>& Array, float& result);
	
	UFUNCTION(BlueprintCallable)
		static void GetDebugSuitsAndValues(UPARAM(ref)TArray<int32>& Array, FString& result);


	
};
