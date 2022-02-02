// Fill out your copyright notice in the Description page of Project Settings.


#include "CRW_AIActor.h"

int32 ACRW_AIActor::s_HelperIndex_AIActor = 0;

// Sets default values
ACRW_AIActor::ACRW_AIActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ACRW_AIActor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ACRW_AIActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

AActor* ACRW_AIActor::GetOwnerForInterface()
{
	AActor* result =  Cast<AActor>(this);
	
	return result;
}

void ACRW_AIActor::IncrementHelperIndex()
{
	s_HelperIndex_AIActor++;
}

void ACRW_AIActor::ResetHelperIndex()
{
	s_HelperIndex_AIActor = 0;
}

int32 ACRW_AIActor::GetHelperIndex()
{
	return s_HelperIndex_AIActor;
}



