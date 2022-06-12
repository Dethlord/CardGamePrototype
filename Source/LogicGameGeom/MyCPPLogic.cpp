// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCPPLogic.h"
	int inc;
	int32 NumberOfCards;
	bool debug(true);
// Sets default values
AMyCPPLogic::AMyCPPLogic()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}



// Called when the game starts or when spawned
void AMyCPPLogic::BeginPlay()
{
	Super::BeginPlay();
	
	
}

// Called every frame
void AMyCPPLogic::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
//
void AMyCPPLogic::testFunctionAB(int a, int b, int & result)
{
	result = a + b;
}

// Функция отдачи нижнего порога ставки
void AMyCPPLogic::GetLowPower(int Round, int Trump, int NumberOfGeoms, bool isRightOfFirst,int & result)
{
	if (isRightOfFirst)	{ 
		if ((Trump == 24) || (Round >= 6) && (Round <= 11))//При боге геомов либо без бога цвета
		{
			switch (NumberOfGeoms)
			{
			case 1: case 2: result = 12; break;
			case 3: result = 10; break; case 4: result = 13; break;
			case 5: case 6: result = 14; break; 
			default:   result = 0 ; break;
			}
		}
		else
		{
			switch (NumberOfGeoms)
			{
			case 1: case 2: case 3: result = 12; break;
			case 4: result = 13; break;
			case 5: result = 14; break;
			default: result = 0; break;
			}
					   			 		  		  		 	   		
		}
    }

	if ((Trump == 24) || (Round >= 6) && (Round <= 11))//При боге геомов либо без бога цвета
	{
		switch (NumberOfGeoms)
		{
		case 1: case 2: result = 12; break;
		case 3: case 4: result = 13; break;
		case 5: case 6: result = 14; break;
		default:   result = 0; break;
		}
	}
	else
	{
		switch (NumberOfGeoms)
		{
		case 1: case 2: case 3: result = 12; break;
		case 4: result = 13; break;
		case 5: result = 14; break;
		default: result = 0; break;
		}
		
	}
}
void AMyCPPLogic::MainArray(int row, int column, int & result)
{
	
	MyArray.Init(0, 41);

	for (int32 j = 1; j <= 36; j++)
		MyArray[j + 4] = j;
		result = MyArray[row * 4 + column];

		//Debag
	//for (int32 element : MyArray)
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("elem %i"), element);
	//	
	//}
	}







void AMyCPPLogic::Normalization(UPARAM(ref)TArray<int32>& Array, TArray<int32>& GeomsPlayerPow)
{
	
	for (int32 element : Array)
	{
	
		if (element == 24)      { GeomsPlayerPow.Add(200); }
		else if (element >= 33) { GeomsPlayerPow.Add(14); }
		else if (element >= 29) { GeomsPlayerPow.Add(13); }
		else if (element >= 25) { GeomsPlayerPow.Add(12); }
		else if (element >= 21) { GeomsPlayerPow.Add(11); }
		else if (element >= 17) { GeomsPlayerPow.Add(10); }
		else if (element >= 13) { GeomsPlayerPow.Add(9); }
		else if (element >= 9 ) { GeomsPlayerPow.Add(8); }
		else if (element >= 5 ) { GeomsPlayerPow.Add(7); }
		else if (element <= 4)  { GeomsPlayerPow.Add(6); }

    }
		if (debug)
		{
			for (int32 element : GeomsPlayerPow)
			{
				UE_LOG(LogTemp, Warning, TEXT("elem %i"), element);
			}
		}
	


}

void AMyCPPLogic::GetTrumpColumn(int Trump, int & result)
{
	result = Trump % 4;
	if (result == 0) { result = 4; }
	
}

void AMyCPPLogic::GetActiveCardColumn(int ActiveCard, int & result)
{
	result = ActiveCard % 4;
	if (result == 0) { result = 4; }
	
}






//'Функция определения в какой колонке находится карта игрока с правом хода(1 до 4)
//For aa As Integer = 1 To 9
//For ff As Integer = 1 To 4
//For k As Integer = 1 To NumberOfCards
//If CardsPlavers(RightOfMove, k) = StartArray(aa, ff) Then
//'если узнали ff(ряд где карта с правом хода) то идем дальше
//Return ff
//Exit Function
//End If
//Next k
//Next ff
//Next aa
//Return 0
//End Function





//void AMyCPPLogic::GetTrumpColumn(UPARAM(ref)TArray<int32>& myArray, int & result)
//{
//
//	for (int32 element : MyArray)
//	{
//		if (element = 30) {
//			result = myArray.Num();
//		}
//
//
//
//	}
//
//}




		

	/*TArray<TArray<int>> MainArray;
	const int32 ColumnNumber = 4;
	const int32 RowNumber = 9; 
	MainArray.AddUninitialized(ColumnNumber);
	for (int32 I = 0; I < MainArray.Num(); I++) {
		MainArray[I].AddUninitialized(RowNumber);
		for (int32 J = 0; J < MainArray[I].Num(); J++) {
			MainArray[I][J]; 
		}
	}
	result = MainArray[row][column];*/



