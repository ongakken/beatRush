// © 2020 - 2021 Ongakken s. r. o. - All rights reserved.

#pragma once

/*#pragma warning(push)
#pragma warning(disable:4996)
#pragma warning(disable:4828)
#pragma warning(disable:4265)
#pragma push_macro("ARRAY_COUNT")
#undef ARRAY_COUNT
#pragma pop_macro("ARRAY_COUNT")
#pragma warning(pop)
*/
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "steamCustomCalls.generated.h"


UCLASS()
class BEATRUSH_API UsteamCustomCalls : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, META = (DisplayName = "Is DLC Installed", CompactNodeTitle = "Is DLC Installed", Category = "Steam Custom Calls"))
		static bool bIsDlcInstalled(int32 AppID);

	UFUNCTION(BlueprintCallable, META = (DisplayName = "Is Game Installed", CompactNodeTitle = "Is Game Installed", Category = "Steam Custom Calls"))
		static bool bIsAppInstalled(int32 AppID);

	UFUNCTION(BlueprintCallable, META = (DisplayName = "Open Steam Store", CompactNodeTitle = "Open Steam Store", Category = "Steam Custom Calls"))
		static void openStore(int32 DLC_AppID);

	UFUNCTION(BlueprintCallable, META = (DisplayName = "Set Rich Presence", CompactNodeTitle = "Set Rich Presence", Category = "Steam Custom Calls"))
		static bool setRichPresence(FString pchKey, FString pchValue);

};