/*
* EasyAds - unreal engine 4 ads plugin
*
* Copyright (C) 2019 feixuwu <feixuwu@outlook.com> All Rights Reserved.
*/
#include "AdmobMediation.h"
#include "EasyAds.h"
#include "IOSAppDelegate.h"
#include "Misc/ConfigCacheIni.h"
#include "Async/TaskGraphInterfaces.h"
#import "admobutil/AdsUtil.h"


DEFINE_LOG_CATEGORY_STATIC(EasyAds, Log, All);

AdmobMediation::AdmobMediation()
{
}

static void IOS_AdMobRcvDebugMessage(NSString* debugMessage)
{
	DECLARE_CYCLE_STAT(TEXT("FSimpleDelegateGraphTask.nativeRcvDebugMessage"), STAT_FSimpleDelegateGraphTask_nativeRcvDebugMessage, STATGROUP_TaskGraphTasks);
	FString strDebugMessage = UTF8_TO_TCHAR([debugMessage cStringUsingEncoding : NSUTF8StringEncoding]);
	FSimpleDelegateGraphTask::CreateAndDispatchWhenReady(
		FSimpleDelegateGraphTask::FDelegate::CreateLambda([=]()
			{
				FEasyAdsModule* pEasyModule = FModuleManager::Get().LoadModulePtr<FEasyAdsModule>(TEXT("EasyAds"));
				if (pEasyModule == nullptr) return;

				AdmobMediation& mediation = pEasyModule->GetAdmobMediation();
				mediation.TriggerEasyAdsDebugMessageDelegates(strDebugMessage);
			}),
		GET_STATID(STAT_FSimpleDelegateGraphTask_nativeRcvDebugMessage),
				nullptr,
				ENamedThreads::GameThread
				);
}

static void IOS_AdMobPlayComplete(NSString* type, int amount)
{
	DECLARE_CYCLE_STAT(TEXT("FSimpleDelegateGraphTask.nativePlayRewardedComplete"), STAT_FSimpleDelegateGraphTask_nativePlayRewardedComplete, STATGROUP_TaskGraphTasks);
	FString strType = UTF8_TO_TCHAR([type cStringUsingEncoding : NSUTF8StringEncoding]);
	FSimpleDelegateGraphTask::CreateAndDispatchWhenReady(
		FSimpleDelegateGraphTask::FDelegate::CreateLambda([=]()
			{
				FEasyAdsModule* pEasyModule = FModuleManager::Get().LoadModulePtr<FEasyAdsModule>(TEXT("EasyAds"));
				if (pEasyModule == nullptr) return;

				AdmobMediation& mediation = pEasyModule->GetAdmobMediation();
				mediation.TriggerPlayRewardCompleteDelegates(strType, (int32)amount);
			}),
		GET_STATID(STAT_FSimpleDelegateGraphTask_nativePlayRewardedComplete),
				nullptr,
				ENamedThreads::GameThread
				);
}

static void IOS_AdmobRewardClose()
{
	DECLARE_CYCLE_STAT(TEXT("FSimpleDelegateGraphTask.nativeRewardClose"), STAT_FSimpleDelegateGraphTask_nativeRewardClose, STATGROUP_TaskGraphTasks);
	FSimpleDelegateGraphTask::CreateAndDispatchWhenReady(
		FSimpleDelegateGraphTask::FDelegate::CreateLambda([=]()
			{
				FEasyAdsModule* pEasyModule = FModuleManager::Get().LoadModulePtr<FEasyAdsModule>(TEXT("EasyAds"));
				if (pEasyModule == nullptr) return;

				AdmobMediation& mediation = pEasyModule->GetAdmobMediation();
				mediation.TriggerPlayRewardClosedDelegates();
			}),
		GET_STATID(STAT_FSimpleDelegateGraphTask_nativeRewardClose),
				nullptr,
				ENamedThreads::GameThread
				);
}

static void IOS_AdmobInterstitialShow()
{
	DECLARE_CYCLE_STAT(TEXT("FSimpleDelegateGraphTask.interstitialShow"), STAT_FSimpleDelegateGraphTask_interstitialShow, STATGROUP_TaskGraphTasks);
	FSimpleDelegateGraphTask::CreateAndDispatchWhenReady(
		FSimpleDelegateGraphTask::FDelegate::CreateLambda([=]()
			{
				FEasyAdsModule* pEasyModule = FModuleManager::Get().LoadModulePtr<FEasyAdsModule>(TEXT("EasyAds"));
				if (pEasyModule == nullptr) return;

				AdmobMediation& mediation = pEasyModule->GetAdmobMediation();
				mediation.TriggerInterstitialShowDelegates();
			}),
		GET_STATID(STAT_FSimpleDelegateGraphTask_interstitialShow),
				nullptr,
				ENamedThreads::GameThread
				);
}
static void IOS_AdmobInterstitialClick()
{
	DECLARE_CYCLE_STAT(TEXT("FSimpleDelegateGraphTask.interstitialClick"), STAT_FSimpleDelegateGraphTask_interstitialClick, STATGROUP_TaskGraphTasks);
	FSimpleDelegateGraphTask::CreateAndDispatchWhenReady(
		FSimpleDelegateGraphTask::FDelegate::CreateLambda([=]()
			{
				FEasyAdsModule* pEasyModule = FModuleManager::Get().LoadModulePtr<FEasyAdsModule>(TEXT("EasyAds"));
				if (pEasyModule == nullptr) return;

				AdmobMediation& mediation = pEasyModule->GetAdmobMediation();
				mediation.TriggerInterstitialClickDelegates();
			}),
		GET_STATID(STAT_FSimpleDelegateGraphTask_interstitialClick),
				nullptr,
				ENamedThreads::GameThread
				);
}

static void IOS_AdmobInterstitialClose()
{
	DECLARE_CYCLE_STAT(TEXT("FSimpleDelegateGraphTask.interstitialClose"), STAT_FSimpleDelegateGraphTask_interstitialClose, STATGROUP_TaskGraphTasks);
	FSimpleDelegateGraphTask::CreateAndDispatchWhenReady(
		FSimpleDelegateGraphTask::FDelegate::CreateLambda([=]()
			{
				FEasyAdsModule* pEasyModule = FModuleManager::Get().LoadModulePtr<FEasyAdsModule>(TEXT("EasyAds"));
				if (pEasyModule == nullptr) return;

				AdmobMediation& mediation = pEasyModule->GetAdmobMediation();
				mediation.TriggerInterstitialClosedDelegates();
			}),
		GET_STATID(STAT_FSimpleDelegateGraphTask_interstitialClose),
				nullptr,
				ENamedThreads::GameThread
				);
}

void AdmobMediation::init()
{
	FString appId;
	GConfig->GetString(TEXT("/Script/EasyAdsEditor.AdmobSetting"), TEXT("IOSAppId"), appId, GEngineIni);

	FString bannerUnit;
	GConfig->GetString(TEXT("/Script/EasyAdsEditor.AdmobSetting"), TEXT("IOSBannerUnit"), bannerUnit, GEngineIni);

	FString InterstitalUnit;
	GConfig->GetString(TEXT("/Script/EasyAdsEditor.AdmobSetting"), TEXT("IOSInterstitialUnit"), InterstitalUnit, GEngineIni);

	FString rewardedUnit;
	GConfig->GetString(TEXT("/Script/EasyAdsEditor.AdmobSetting"), TEXT("IOSRewardedVideoAdUnit"), rewardedUnit, GEngineIni);

	FString testDevice;
	GConfig->GetString(TEXT("/Script/EasyAdsEditor.AdmobSetting"), TEXT("IOSTestDevice"), testDevice, GEngineIni);


	UIViewController* curViewController = (UIViewController*)[IOSAppDelegate GetDelegate].IOSController;

	dispatch_async(dispatch_get_main_queue(), ^{
			[[AdMobHelper GetDelegate] InitSDK:curViewController AppID : [NSString stringWithFString : appId] testDevice : [NSString stringWithFString : testDevice] 
			BannerUnit : [NSString stringWithFString : bannerUnit]
			InterstitalUnit : [NSString stringWithFString : InterstitalUnit] RewardedUnit : [NSString stringWithFString : rewardedUnit]
			callback : &IOS_AdMobPlayComplete rewardClose : &IOS_AdmobRewardClose  interstitialShow : &IOS_AdmobInterstitialShow
			interstitialClick : &IOS_AdmobInterstitialClick interstitialClose : IOS_AdmobInterstitialClose rcvDebugMessage :&IOS_AdMobRcvDebugMessage];
		});
}

AdmobMediation::~AdmobMediation()
{
}

void AdmobMediation::ShowBanner(bool isBottom)
{
	UIViewController* curViewController = (UIViewController*)[IOSAppDelegate GetDelegate].IOSController;

	dispatch_async(dispatch_get_main_queue(), ^{
		[[AdMobHelper GetDelegate] ShowBanner:curViewController isBottom : isBottom];
		});
}

void AdmobMediation::HideBanner()
{
	dispatch_async(dispatch_get_main_queue(), ^{
		[[AdMobHelper GetDelegate] HideBanner];
		});
}


bool AdmobMediation::IsBannerReady()
{
	NSMutableDictionary *resultDictionary = [NSMutableDictionary dictionaryWithCapacity : 1];
	[[AdMobHelper GetDelegate] performSelectorOnMainThread:@selector(IsBannerReady : ) withObject:resultDictionary waitUntilDone : YES];

	NSNumber* number = (NSNumber*)[resultDictionary objectForKey : @"RetValue"];
	bool ret = (bool)[number boolValue];

	return ret;
}


void AdmobMediation::ShowInterstitial()
{
	UIViewController* curViewController = (UIViewController*)[IOSAppDelegate GetDelegate].IOSController;

	dispatch_async(dispatch_get_main_queue(), ^{
		[[AdMobHelper GetDelegate] ShowInterstitialAds:curViewController];
		});
}

bool AdmobMediation::IsInterstitalReady()
{
	NSMutableDictionary *resultDictionary = [NSMutableDictionary dictionaryWithCapacity : 1];
	[[AdMobHelper GetDelegate] performSelectorOnMainThread:@selector(IsInterstitalReady : ) withObject:resultDictionary waitUntilDone : YES];

	NSNumber* number = (NSNumber*)[resultDictionary objectForKey : @"RetValue"];
	bool ret = (bool)[number boolValue];

	return ret;
}


void AdmobMediation::PlayRewardedVideo()
{
	UIViewController* curViewController = (UIViewController*)[IOSAppDelegate GetDelegate].IOSController;

	dispatch_async(dispatch_get_main_queue(), ^{
		[[AdMobHelper GetDelegate] Play:curViewController];
		});
}

bool AdmobMediation::IsRewardedVideoReady()
{
	NSMutableDictionary *resultDictionary = [NSMutableDictionary dictionaryWithCapacity : 1];
	[[AdMobHelper GetDelegate] performSelectorOnMainThread:@selector(IsPlayable : ) withObject:resultDictionary waitUntilDone : YES];

	NSNumber* number = (NSNumber*)[resultDictionary objectForKey : @"RetValue"];
	bool ret = (bool)[number boolValue];

	return ret;
}

void AdmobMediation::LaunchTestSuite()
{

}