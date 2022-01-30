#pragma once

#include "CRW_CommonLibrary.generated.h"

UENUM(BlueprintType, meta = (BitFlags))
enum class EBotState :uint8
{
	//None = 0 UMETA(Hidden),
	IsShowTargetDebug ,// = 0x01, now = 0
	IsChasing ,// = 0x02, now = 1
	IsAttacking  ,// = 0x04, now = 2
	IsDied  // = 0x08, now = 3
};
ENUM_CLASS_FLAGS(EBotState);

UCLASS()
class CROWD_API UCRW_CommonLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool BotStateCheckByEnum(UPARAM(meta=(Bitmask, BitmaskEnum = "EBotState")) int32 inCheck, EBotState Rule);
	UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool BotStateCheckByByte(UPARAM(meta=(Bitmask, BitmaskEnum = "EBotState")) int32 inCheck, UPARAM(meta=(Bitmask, BitmaskEnum = "EBotState")) int32 inRule);
	UFUNCTION(BlueprintCallable)
	static void SetFlagBotStateByByte(UPARAM(meta=(Bitmask, BitmaskEnum = "EBotState"), ref) int32 &inFlag, UPARAM(meta=(Bitmask, BitmaskEnum = "EBotState")) int32 onFlag, bool newValue);
};