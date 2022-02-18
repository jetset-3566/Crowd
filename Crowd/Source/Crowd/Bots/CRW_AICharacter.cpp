// Fill out your copyright notice in the Description page of Project Settings.


#include "CRW_AICharacter.h"

int32 ACRW_AICharacter::s_HelperIndex_AICharacter = 0;

ACRW_AICharacter::ACRW_AICharacter(const FObjectInitializer &ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = true;
}

void ACRW_AICharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACRW_AICharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACRW_AICharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

AActor* ACRW_AICharacter::GetOwnerForInterface()
{
	AActor* result =  Cast<AActor>(this);
	
	return result;
}

void ACRW_AICharacter::IncrementHelperIndex()
{
	s_HelperIndex_AICharacter++;
}

void ACRW_AICharacter::ResetHelperIndex()
{
	s_HelperIndex_AICharacter = 0;
}

int32 ACRW_AICharacter::GetHelperIndex()
{
	return s_HelperIndex_AICharacter;
}

