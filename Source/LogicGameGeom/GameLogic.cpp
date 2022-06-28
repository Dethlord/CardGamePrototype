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

FString AGameLogic::GetDebugSuitsAndValues(UPARAM(ref)TArray<int32>& Array)
{
	return FString();
}

bool AGameLogic::ValidateMove(int Card, int CardOnTable, TArray<ASpawner*> PlayerHandCards, int TrampSuit)
{
	for (ASpawner* Actor : PlayerHandCards) {
		UE_LOG(LogTemp, Warning, TEXT("elem %i"), Actor->IDcard);
	}
		return false;
}

