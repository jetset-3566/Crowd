// Fill out your copyright notice in the Description page of Project Settings.


#include "CRW_CommonLibrary.h"

bool UCRW_CommonLibrary::BotStateCheckByEnum(int32 inCheck, EBotState Rule)
{
	return inCheck & (int)(FMath::Pow(2, (uint32)Rule));
}

bool UCRW_CommonLibrary::BotStateCheckByByte(int32 inCheck, int32 inRule)
{
	return inCheck & inRule;
}

void UCRW_CommonLibrary::SetFlagBotStateByByte(int32 &inFlag, int32 onFlag,  bool newValue)
{
	if (newValue)
		inFlag = inFlag | onFlag;
	else
		inFlag = inFlag & ~onFlag;
}
