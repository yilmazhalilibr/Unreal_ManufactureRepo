// Fill out your copyright notice in the Description page of Project Settings.


#include "FunctionTestActor.h"

// Sets default values
AFunctionTestActor::AFunctionTestActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFunctionTestActor::BeginPlay()
{
	Super::BeginPlay();

}

void AFunctionTestActor::CalculateExample()
{
	MephistoClass.CalculateAllCounts(1, 2, 3, ResultValue);

}

// Called every frame
void AFunctionTestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
