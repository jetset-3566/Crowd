// Fill out your copyright notice in the Description page of Project Settings.


#include "CRW_AICharacter_BA.h"
#include "SkeletalMeshComponentBudgeted.h"

// Sets default values
ACRW_AICharacter_BA::ACRW_AICharacter_BA(const class FObjectInitializer& ObjectInitializer) :
Super(ObjectInitializer.SetDefaultSubobjectClass<USkeletalMeshComponentBudgeted>(ACRW_AICharacter::MeshComponentName))
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ACRW_AICharacter_BA::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACRW_AICharacter_BA::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ACRW_AICharacter_BA::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

