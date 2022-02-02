// Fill out your copyright notice in the Description page of Project Settings.


#include "CRW_AICharacter.h"

int32 ACRW_AICharacter::s_HelperIndex_AICharacter = 0;

// Sets default values
ACRW_AICharacter::ACRW_AICharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ACRW_AICharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACRW_AICharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
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

