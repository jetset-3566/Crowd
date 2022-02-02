// Fill out your copyright notice in the Description page of Project Settings.


#include "CRW_SpawnPoint.h"

#include "Bots/CRW_AIActor.h"
#include "Interface/CRW_IBot.h"

// Sets default values
ACRW_SpawnPoint::ACRW_SpawnPoint()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ACRW_SpawnPoint::BeginPlay()
{
	Super::BeginPlay();
	
	if (SpawnSetting.Class)
	{
		AActor* myDefaultActor = SpawnSetting.Class.GetDefaultObject();
		if (myDefaultActor)
		{
			ICRW_IBot* myInterface = Cast<ICRW_IBot>(myDefaultActor);
			if (myInterface)
			{
				myInterface->IncrementHelperIndex();
				CurrentHelperIndex = myInterface->GetHelperIndex();
			}
		}	
	}
}

void ACRW_SpawnPoint::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	
	if (SpawnSetting.Class)
	{
		AActor* myDefaultActor = SpawnSetting.Class.GetDefaultObject();
		if (myDefaultActor)
		{
			ICRW_IBot* myInterface = Cast<ICRW_IBot>(myDefaultActor);
			if (myInterface)
				myInterface->ResetHelperIndex();
		}	
	}
}

// Called every frame
void ACRW_SpawnPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

