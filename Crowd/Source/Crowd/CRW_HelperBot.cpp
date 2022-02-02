// Fill out your copyright notice in the Description page of Project Settings.


#include "CRW_HelperBot.h"

// Sets default values for this component's properties
UCRW_HelperBot::UCRW_HelperBot()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCRW_HelperBot::BeginPlay()
{
	Super::BeginPlay();

	// ...
}


// Called every frame
void UCRW_HelperBot::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

AActor* UCRW_HelperBot::GetCurrentTarget() const
{
	return AICurrentTarget;
}

void UCRW_HelperBot::SetCurrentTarget(AActor* newTarget)
{
	AICurrentTarget = newTarget;
}

void UCRW_HelperBot::SetCommonInfo(const FText& NewInfo, int32 newIndex)
{
	Info = NewInfo;
	CurrentHelperIndex = newIndex;

	UpdateCommonInfo();
}

