// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyCPPLogic.generated.h"

UCLASS()
class LOGICGAMEGEOM_API AMyCPPLogic : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyCPPLogic();
 
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintCallable)
		void testFunctionAB(int a, int b, int& result);

		
	UFUNCTION(BlueprintCallable)
		void GetLowPower(int Round, int Trump, int NumberOfGeoms,bool isRightOfFirst,int & result);
	//'Ќачальный игровой массив 
	UFUNCTION(BlueprintCallable) 
		void MainArray(int row,int column, int & result);
	


	//‘ильтр нормализации значений карт
	UFUNCTION(BlueprintCallable) 
		void Normalization(UPARAM(ref)TArray<int32>& Array,TArray<int32>& GeomsPlayerPow);
	
	//в какой колонке находитс€ козырь(1 до 4)
		 UFUNCTION(BlueprintCallable)
			 void GetTrumpColumn(int Trump,int & result);
    // в какой колонке активна€ карта
		 UFUNCTION(BlueprintCallable) 
			 void GetActiveCardColumn(int ActiveCard, int & result);
		 
		

private:
	TArray<int32> MyArray;


		

};
