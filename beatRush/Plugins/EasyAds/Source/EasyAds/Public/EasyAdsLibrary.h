/*
* EasyAds - unreal engine 4 ads plugin
*
* Copyright (C) 2019 feixuwu <feixuwu@outlook.com> All Rights Reserved.
*/

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EasyAdsLibrary.generated.h"

/**
 * 
 */
UCLASS()
class EASYADS_API UEasyAdsLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()


public:

	/**
	* Show  banner
	* @param	isOnBottom		if the banner show on the bottom of the screen
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "ShowBanner", Keywords = "EasyAds Show Banner"), Category = "EasyAds")
		static void ShowBanner(bool isOnBottom);

	/**
	* hide  banner
	* @param	adType			the  ads type
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "HideBanner", Keywords = "EasyAds Hide Banner"), Category = "EasyAds")
		static void HideBanner();

	/**
	* show interstitial ads
	* @param	adType			the  ads type
	*/
	//UFUNCTION(BlueprintCallable, meta = (DisplayName = "ShowInterstitial", Keywords = "AdCollection Show Interstitial Ads"), Category = "AdCollection")
	//static void ShowInterstitial();

	/**
	* check is the banner is load finish
	* @param	adType			the  ads type
	*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "IsBannerAdsReady", Keywords = "EasyAds Check Banner Ads Ready"), Category = "EasyAds")
		static bool IsBannerReady();

	/**
	* check is the interstitial is load finish
	* @param	adType			the  ads type
	*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "IsInterstitialAdsReady", Keywords = "EasyAds Check Interstital Ads Ready"), Category = "EasyAds")
		static bool IsInterstitialReady();

	/**
	* check is the rewardedvideo ads load finish
	* @param	adType			the  ads type
	*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "IsRewardedVideoAdsReady", Keywords = "EasyAds Check RewardedVideo Ads Ready"), Category = "EasyAds")
		static bool IsRewardedVideoReady();


	UFUNCTION(BlueprintCallable, meta = (DisplayName = "LaunchMediationTestSuite", Keywords = "EasyAds Launch Mediation TestSuite"), Category = "EasyAds")
	static void LaunchMediationTestSuite();
	
};
