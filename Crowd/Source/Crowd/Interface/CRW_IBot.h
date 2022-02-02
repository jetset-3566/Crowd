// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <string>

#include "CoreMinimal.h"
#include "Crowd/CRW_HelperBot.h"
#include "UObject/Interface.h"
#include "CRW_IBot.generated.h"

UINTERFACE(MinimalAPI, BlueprintType)

/**
 * 
 */
class UCRW_IBot : public UInterface
{
	GENERATED_BODY()
	
};

class CROWD_API ICRW_IBot
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	FText GetCommonInfo();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void SetCommonInfo(const FText &newInfo, const int32 CurrentHelperIndex);
		void SetCommonInfo_Implementation(const FText &newInfo, const int32 CurrentHelperIndex);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void ShowDebugInfo(bool bIsShow);
		void ShowDebugInfo_Implementation(bool bIsShow);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void ShowTargetPoint(bool bIsShow);
		void ShowTargetPoint_Implementation(bool bIsShow);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void SetChaseTarget(AActor* Target);
		void SetChaseTarget_Implementation(AActor* Target);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void TryStartChaseCurrentTarget();
		void TryStartChaseCurrentTarget_Implementation();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	AActor* GetTarget();
		AActor* GetTarget_Implementation();
	
	virtual AActor* GetOwnerForInterface();

	UCRW_HelperBot* GetHelperBotFromOwner();

	virtual void IncrementHelperIndex(){	}
	virtual void ResetHelperIndex(){	}
	virtual int32 GetHelperIndex(){return -1;}
};
