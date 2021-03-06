// Fill out your copyright notice in the Description page of Project Settings.


#include "CRW_SpawnPoint.h"
#include "Interface/CRW_IBot.h"

ACRW_SpawnPoint::ACRW_SpawnPoint()
{
	PrimaryActorTick.bCanEverTick = true;
}

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

void ACRW_SpawnPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

