// © 2020 SMD Tech s. r. o. - All rights reserved.


#include "steamCustomCalls.h"

#if USING_CODE_ANALYSIS
MSVC_PRAGMA(warning(push))
MSVC_PRAGMA(warning(disable : ALL_CODE_ANALYSIS_WARNINGS))
#endif
#pragma warning(push)
#pragma warning(disable:4996)
#pragma push_macro("ARRAY_COUNT")
#undef ARRAY_COUNT
#include "ThirdParty/Steamworks/Steamv147/sdk/public/steam/steam_api.h"
#pragma pop_macro("ARRAY_COUNT")
#pragma warning(pop)

// Takes AppID of DLC and checks if the user owns the DLC & if the DLC is installed
bool UsteamCustomCalls::bIsDlcInstalled(int32 AppID)
{
	if (SteamUser() != nullptr)
	{
		bool Out = SteamApps()->BIsDlcInstalled(AppID);
		return Out;
	}
	return false;
}

// Returns true if that app is installed (not necessarily owned)
bool UsteamCustomCalls::bIsAppInstalled(int32 AppID)
{
	if (SteamUser() != nullptr)
	{
		bool Out = SteamApps()->BIsAppInstalled(AppID);
		return Out;
	}
	return false;
}

void UsteamCustomCalls::openStore(int32 DLC_AppID)
{
	if (SteamUser() != nullptr)
	{
		// SteamFriends()->ActivateGameOverlayToWebPage("https://store.steampowered.com/");
		SteamFriends()->ActivateGameOverlayToStore(DLC_AppID, k_EOverlayToStoreFlag_None);
	}
}

bool UsteamCustomCalls::setRichPresence(FString pchKey, FString pchValue)
{
	if (SteamUser() != nullptr)
	{
		char* pchKeyChar = TCHAR_TO_ANSI(*pchKey);
		char* pchValueChar = TCHAR_TO_ANSI(*pchValue);
		bool Out = SteamFriends()->SetRichPresence(pchKeyChar, pchValueChar);
		return Out;
	}
	return false;
}