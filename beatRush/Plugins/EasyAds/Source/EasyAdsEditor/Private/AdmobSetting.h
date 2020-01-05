/*
* EasyAds - unreal engine 4 ads plugin
*
* Copyright (C) 2019 feixuwu <feixuwu@outlook.com> All Rights Reserved.
*/

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AdmobSetting.generated.h"

/**
 * 
 */
UCLASS(transient, config = Engine)
class UAdmobSetting : public UObject
{
	GENERATED_BODY()
	

	UPROPERTY(Config, EditAnywhere, Category = Android, Meta = (DisplayName = "Android AppID"))
	FString AndroidAppId;

	UPROPERTY(Config, EditAnywhere, Category = Android, Meta = (DisplayName = "Android Banner AdUnit"))
	FString AndroidBannerUnit;

	UPROPERTY(Config, EditAnywhere, Category = Android, Meta = (DisplayName = "Android Interstitial AdUnit"))
	FString AndroidInterstitialUnit;

	UPROPERTY(Config, EditAnywhere, Category = Android, Meta = (DisplayName = "Android RewardVideo AdUnit"))
	FString AndroidRewardedVideoAdUnit;

	UPROPERTY(Config, EditAnywhere, Category = Android, Meta = (DisplayName = "Android TestDevice"))
	FString AndroidTestDevice;

	UPROPERTY(Config, EditAnywhere, Category = Android, Meta = (DisplayName = "Enable Mediation TestSute", ToolTip = "this require minSdkVersion 16, else will package fail"))
	bool EnableAndroidTestSuite;

	UPROPERTY(Config, EditAnywhere, Category = Android, Meta = (DisplayName = "Disable Unity"))
	bool DisableAndroidUnity;

	UPROPERTY(Config, EditAnywhere, Category = Android, Meta = (DisplayName = "Disable Vungle"))
	bool DisableAndroidVungle;

	UPROPERTY(Config, EditAnywhere, Category = Android, Meta = (DisplayName = "Disable Chartboost"))
	bool DisableAndroidChartboost;



	UPROPERTY(Config, EditAnywhere, Category = IOS, Meta = (DisplayName = "IOS AppID"))
	FString IOSAppId;

	UPROPERTY(Config, EditAnywhere, Category = IOS, Meta = (DisplayName = "IOS Banner AdUnit"))
	FString IOSBannerUnit;

	UPROPERTY(Config, EditAnywhere, Category = IOS, Meta = (DisplayName = "IOS Interstitial AdUnit"))
	FString IOSInterstitialUnit;

	UPROPERTY(Config, EditAnywhere, Category = IOS, Meta = (DisplayName = "IOS RewardVideo AdUnit"))
	FString IOSRewardedVideoAdUnit;

	UPROPERTY(Config, EditAnywhere, Category = IOS, Meta = (DisplayName = "IOS TestDevice"))
	FString IOSTestDevice;

#if WITH_EDITOR
	// UObject interface
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
};
