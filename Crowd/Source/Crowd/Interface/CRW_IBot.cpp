// Fill out your copyright notice in the Description page of Project Settings.


#include "CRW_IBot.h"

void ICRW_IBot::SetCommonInfo_Implementation(const FText& newInfo, const int32 CurrentHelperIndex)
{
	UCRW_HelperBot* myHelperBot = GetHelperBotFromOwner();
	if (myHelperBot)
		myHelperBot->SetCommonInfo(newInfo, CurrentHelperIndex);
}

void ICRW_IBot::ShowDebugInfo_Implementation(bool bIsShow)
{
	UCRW_HelperBot* myHelperBot = GetHelperBotFromOwner();
	if (myHelperBot)
		myHelperBot->ShowDebugInfo(bIsShow);
}

void ICRW_IBot::ShowTargetPoint_Implementation(bool bIsShow)
{
	UCRW_HelperBot* myHelperBot = GetHelperBotFromOwner();
	if (myHelperBot)
		myHelperBot->ShowTargetPoint(bIsShow);
}

void ICRW_IBot::SetChaseTarget_Implementation(AActor* Target)
{
	if (GetHelperBotFromOwner())
		GetHelperBotFromOwner()->SetCurrentTarget(Target);
}

void ICRW_IBot::TryStartChaseCurrentTarget_Implementation()
{
	if (GetHelperBotFromOwner())
		GetHelperBotFromOwner()->StartChaseCurrentTarget();
}

AActor* ICRW_IBot::GetTarget_Implementation()
{
	AActor* myTarget = nullptr;
	UCRW_HelperBot* myHelperBot = GetHelperBotFromOwner();
	if (myHelperBot)
		myTarget = myHelperBot->GetCurrentTarget();

	return myTarget;
}

AActor* ICRW_IBot::GetOwnerForInterface()
{
	return nullptr;
}

UCRW_HelperBot* ICRW_IBot::GetHelperBotFromOwner()
{
	UCRW_HelperBot* myHelperBot = nullptr;
	AActor* myActor = GetOwnerForInterface();
	if (myActor)
	{
		myHelperBot = myActor->FindComponentByClass<UCRW_HelperBot>();
	}
	return myHelperBot;
}
