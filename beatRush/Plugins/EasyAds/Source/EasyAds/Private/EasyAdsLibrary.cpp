/*
* EasyAds - unreal engine 4 ads plugin
*
* Copyright (C) 2019 feixuwu <feixuwu@outlook.com> All Rights Reserved.
*/


#include "EasyAdsLibrary.h"
#include "EasyAds.h"
#include "AdmobMediation.h"

void UEasyAdsLibrary::ShowBanner(bool isOnBottom)
{
	FEasyAdsModule* pModule = FModuleManager::Get().LoadModulePtr<FEasyAdsModule>(TEXT("EasyAds"));
	if (pModule == nullptr) return;

	AdmobMediation& mediation = pModule->GetAdmobMediation();
	mediation.ShowBanner(isOnBottom);
}


void UEasyAdsLibrary::HideBanner()
{
	FEasyAdsModule* pModule = FModuleManager::Get().LoadModulePtr<FEasyAdsModule>(TEXT("EasyAds"));
	if (pModule == nullptr) return;

	AdmobMediation& mediation = pModule->GetAdmobMediation();
	mediation.HideBanner();
}

bool UEasyAdsLibrary::IsBannerReady()
{
	FEasyAdsModule* pModule = FModuleManager::Get().LoadModulePtr<FEasyAdsModule>(TEXT("EasyAds"));
	if (pModule == nullptr) return false;

	AdmobMediation& mediation = pModule->GetAdmobMediation();
	return mediation.IsBannerReady();
}

bool UEasyAdsLibrary::IsInterstitialReady()
{
	FEasyAdsModule* pModule = FModuleManager::Get().LoadModulePtr<FEasyAdsModule>(TEXT("EasyAds"));
	if (pModule == nullptr) return false;

	AdmobMediation& mediation = pModule->GetAdmobMediation();
	return mediation.IsInterstitalReady();
}

bool UEasyAdsLibrary::IsRewardedVideoReady()
{
	FEasyAdsModule* pModule = FModuleManager::Get().LoadModulePtr<FEasyAdsModule>(TEXT("EasyAds"));
	if (pModule == nullptr) return false;

	AdmobMediation& mediation = pModule->GetAdmobMediation();
	return mediation.IsRewardedVideoReady();
}

void UEasyAdsLibrary::LaunchMediationTestSuite()
{
	FEasyAdsModule* pModule = FModuleManager::Get().LoadModulePtr<FEasyAdsModule>(TEXT("EasyAds"));
	if (pModule == nullptr) return;

	AdmobMediation& mediation = pModule->GetAdmobMediation();
	return mediation.LaunchTestSuite();
}