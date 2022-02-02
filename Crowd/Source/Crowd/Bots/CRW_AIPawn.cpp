// Fill out your copyright notice in the Description page of Project Settings.


#include "CRW_AIPawn.h"

int32 ACRW_AIPawn::s_HelperIndex_AIPawn = 0;

// Sets default values
ACRW_AIPawn::ACRW_AIPawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ACRW_AIPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACRW_AIPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ACRW_AIPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

AActor* ACRW_AIPawn::GetOwnerForInterface()
{
	AActor* result =  Cast<AActor>(this);
	
	return result;
}

void ACRW_AIPawn::IncrementHelperIndex()
{
	s_HelperIndex_AIPawn++;
}

void ACRW_AIPawn::ResetHelperIndex()
{
	s_HelperIndex_AIPawn = 0;
}

int32 ACRW_AIPawn::GetHelperIndex()
{
	return s_HelperIndex_AIPawn;
}
