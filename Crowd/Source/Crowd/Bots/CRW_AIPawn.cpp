// Fill out your copyright notice in the Description page of Project Settings.

#include "CRW_AIPawn.h"

int32 ACRW_AIPawn::s_HelperIndex_AIPawn = 0;

ACRW_AIPawn::ACRW_AIPawn()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ACRW_AIPawn::BeginPlay()
{
	Super::BeginPlay();
}

void ACRW_AIPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

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
