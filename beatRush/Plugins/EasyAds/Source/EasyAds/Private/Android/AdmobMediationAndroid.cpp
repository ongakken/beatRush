/*
* EasyAds - unreal engine 4 ads plugin
*
* Copyright (C) 2019 feixuwu <feixuwu@outlook.com> All Rights Reserved.
*/

#include "AdmobMediation.h"
#include "Android/AndroidJNI.h"
#include "Android/AndroidApplication.h"
#include "Async/TaskGraphInterfaces.h"
#include "EasyAds.h"

DEFINE_LOG_CATEGORY_STATIC(EasyAds, Log, All);

AdmobMediation::AdmobMediation()
{
}

void AdmobMediation::init()
{

}

AdmobMediation::~AdmobMediation()
{
}


void AdmobMediation::ShowBanner(bool isBottom)
{
	if (JNIEnv* Env = FAndroidApplication::GetJavaEnv())
	{
		const bool bIsOptional = false;
		static jmethodID ShowBannerMethod = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "AndroidThunkJava_AdMob_ShowBanner", "(Z)V", bIsOptional);
		if (ShowBannerMethod == nullptr)
		{
			UE_LOG(EasyAds, Error, TEXT("AndroidThunkJava_AdMob_ShowBanner not found"));
			return;
		}

		FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, ShowBannerMethod, isBottom);
	}
}


void AdmobMediation::HideBanner()
{
	if (JNIEnv* Env = FAndroidApplication::GetJavaEnv())
	{
		const bool bIsOptional = false;
		static jmethodID HideBannerMethod = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "AndroidThunkJava_AdMob_HideBanner", "()V", bIsOptional);

		if (HideBannerMethod == nullptr)
		{
			UE_LOG(EasyAds, Error, TEXT("AndroidThunkJava_AdMob_HideBanner not found"));
			return;
		}

		FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, HideBannerMethod);
	}
}

bool AdmobMediation::IsBannerReady()
{
	if (JNIEnv* Env = FAndroidApplication::GetJavaEnv())
	{
		const bool bIsOptional = false;
		static jmethodID JniMethod = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "AndroidThunkJava_AdMob_BannerReady", "()Z", bIsOptional);
		if (JniMethod == nullptr)
		{
			UE_LOG(EasyAds, Error, TEXT("AndroidThunkJava_AdMob_BannerReady not found"));
			return false;
		}

		// Convert scope array into java fields
		return FJavaWrapper::CallBooleanMethod(Env, FJavaWrapper::GameActivityThis, JniMethod);
	}

	return false;
}

void AdmobMediation::LaunchTestSuite()
{
	if (JNIEnv* Env = FAndroidApplication::GetJavaEnv())
	{
		const bool bIsOptional = false;
		static jmethodID LaunchTestSuiteMethod = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "AndroidThunkJava_AdMob_LaunchTestSuite", "()V", bIsOptional);
		//CHECK_JNI_METHOD(ShowInterstitialMethod);
		if (LaunchTestSuiteMethod == nullptr)
		{
			UE_LOG(EasyAds, Error, TEXT("AndroidThunkJava_AdMob_LaunchTestSuite not found, please first enable testuite, which require minSdkVersion 16"));
			return;
		}

		FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, LaunchTestSuiteMethod);
	}
}


void AdmobMediation::ShowInterstitial()
{
	if (JNIEnv* Env = FAndroidApplication::GetJavaEnv())
	{
		const bool bIsOptional = false;
		static jmethodID ShowInterstitialMethod = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "AndroidThunkJava_AdMob_ShowInterstitialAd", "()V", bIsOptional);
		//CHECK_JNI_METHOD(ShowInterstitialMethod);
		if (ShowInterstitialMethod == nullptr)
		{
			UE_LOG(EasyAds, Error, TEXT("AndroidThunkJava_AdMob_ShowInterstitialAd not found"));
			return;
		}

		// Convert scope array into java fields
		//jstring AdUnitIDArg = Env->NewStringUTF(TCHAR_TO_UTF8(*adUnit));
		FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, ShowInterstitialMethod);
	}
}


bool AdmobMediation::IsInterstitalReady()
{
	if (JNIEnv* Env = FAndroidApplication::GetJavaEnv())
	{
		const bool bIsOptional = false;
		static jmethodID JniMethod = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "AndroidThunkJava_AdMob_InterstitialReady", "()Z", bIsOptional);
		if (JniMethod == nullptr)
		{
			UE_LOG(EasyAds, Error, TEXT("AndroidThunkJava_AdMob_InterstitialReady not found"));
			return false;
		}

		// Convert scope array into java fields
		return FJavaWrapper::CallBooleanMethod(Env, FJavaWrapper::GameActivityThis, JniMethod);
	}

	return false;
}


void AdmobMediation::PlayRewardedVideo()
{
	if (JNIEnv* Env = FAndroidApplication::GetJavaEnv())
	{
		const bool bIsOptional = false;
		static jmethodID PlayRewardVideoMethod = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "AndroidThunkJava_AdMob_PlayRewardedVideo", "()V", bIsOptional);
		//CHECK_JNI_METHOD(PlayRewardVideoMethod);

		if (PlayRewardVideoMethod == nullptr)
		{
			UE_LOG(EasyAds, Error, TEXT("AndroidThunkJava_AdMob_PlayRewardedVideo not found"));
			return;
		}

		FJavaWrapper::CallVoidMethod(Env, FJavaWrapper::GameActivityThis, PlayRewardVideoMethod);
	}
}


bool AdmobMediation::IsRewardedVideoReady()
{
	if (JNIEnv* Env = FAndroidApplication::GetJavaEnv())
	{
		const bool bIsOptional = false;
		static jmethodID JniMethod = FJavaWrapper::FindMethod(Env, FJavaWrapper::GameActivityClassID, "AndroidThunkJava_AdMob_RewardedVideoReady", "()Z", bIsOptional);
		if (JniMethod == nullptr)
		{
			UE_LOG(EasyAds, Error, TEXT("AndroidThunkJava_AdMob_RewardedVideoReady not found"));
			return false;
		}

		// Convert scope array into java fields
		return FJavaWrapper::CallBooleanMethod(Env, FJavaWrapper::GameActivityThis, JniMethod);
	}

	return false;
}

__attribute__((visibility("default"))) extern "C" void Java_com_ads_util_AdMob_nativeInterstitialClick(JNIEnv* jenv, jobject thiz)
{
	DECLARE_CYCLE_STAT(TEXT("FSimpleDelegateGraphTask.Java_com_ads_util_AdMob_nativeInterstitialClick"), STAT_FSimpleDelegateGraphTask_Java_com_ads_util_AdMob_nativeInterstitialClick, STATGROUP_TaskGraphTasks);
	FSimpleDelegateGraphTask::CreateAndDispatchWhenReady(
		FSimpleDelegateGraphTask::FDelegate::CreateLambda([=]()
			{
				FPlatformMisc::LowLevelOutputDebugStringf(TEXT("nativeInterstitialClick\n"));
				FEasyAdsModule* pModule = FModuleManager::Get().LoadModulePtr<FEasyAdsModule>(TEXT("EasyAds"));
				if (pModule == nullptr)
				{
					return;
				}

				AdmobMediation& mediation = pModule->GetAdmobMediation();
				mediation.TriggerInterstitialClickDelegates();
			}),
		GET_STATID(STAT_FSimpleDelegateGraphTask_Java_com_ads_util_AdMob_nativeInterstitialClick),
				nullptr,
				ENamedThreads::GameThread
				);
}

__attribute__((visibility("default"))) extern "C" void Java_com_ads_util_AdMob_nativeInterstitialShow(JNIEnv* jenv, jobject thiz)
{
	DECLARE_CYCLE_STAT(TEXT("FSimpleDelegateGraphTask.Java_com_ads_util_AdMob_nativeInterstitialShow"), STAT_FSimpleDelegateGraphTask_Java_com_ads_util_AdMob_nativeInterstitialShow, STATGROUP_TaskGraphTasks);
	FSimpleDelegateGraphTask::CreateAndDispatchWhenReady(
		FSimpleDelegateGraphTask::FDelegate::CreateLambda([=]()
			{
				FPlatformMisc::LowLevelOutputDebugStringf(TEXT("nativeInterstitialShow\n"));
				FEasyAdsModule* pModule = FModuleManager::Get().LoadModulePtr<FEasyAdsModule>(TEXT("EasyAds"));
				if (pModule == nullptr)
				{
					return;
				}

				AdmobMediation& mediation = pModule->GetAdmobMediation();
				mediation.TriggerInterstitialShowDelegates();
			}),
		GET_STATID(STAT_FSimpleDelegateGraphTask_Java_com_ads_util_AdMob_nativeInterstitialShow),
				nullptr,
				ENamedThreads::GameThread
				);
}

__attribute__((visibility("default"))) extern "C" void Java_com_ads_util_AdMob_nativeInterstitialClose(JNIEnv* jenv, jobject thiz)
{
	DECLARE_CYCLE_STAT(TEXT("FSimpleDelegateGraphTask.Java_com_ads_util_AdMob_nativeInterstitialClose"), STAT_FSimpleDelegateGraphTask_Java_com_ads_util_AdMob_nativeInterstitialClose, STATGROUP_TaskGraphTasks);
	FSimpleDelegateGraphTask::CreateAndDispatchWhenReady(
		FSimpleDelegateGraphTask::FDelegate::CreateLambda([=]()
			{
				FPlatformMisc::LowLevelOutputDebugStringf(TEXT("nativeInterstitialClose\n"));
				FEasyAdsModule* pModule = FModuleManager::Get().LoadModulePtr<FEasyAdsModule>(TEXT("EasyAds"));
				if (pModule == nullptr)
				{
					return;
				}

				AdmobMediation& mediation = pModule->GetAdmobMediation();
				mediation.TriggerInterstitialClosedDelegates();
			}),
		GET_STATID(STAT_FSimpleDelegateGraphTask_Java_com_ads_util_AdMob_nativeInterstitialClose),
				nullptr,
				ENamedThreads::GameThread
				);
}

__attribute__((visibility("default"))) extern "C" void Java_com_ads_util_AdMob_nativePlayRewardedClose(JNIEnv* jenv, jobject thiz)
{
	DECLARE_CYCLE_STAT(TEXT("FSimpleDelegateGraphTask.Java_com_ads_util_AdMob_nativePlayRewardedClose"), STAT_FSimpleDelegateGraphTask_Java_com_ads_util_AdMob_nativePlayRewardedClose, STATGROUP_TaskGraphTasks);
	FSimpleDelegateGraphTask::CreateAndDispatchWhenReady(
		FSimpleDelegateGraphTask::FDelegate::CreateLambda([=]()
			{
				FPlatformMisc::LowLevelOutputDebugStringf(TEXT("nativePlayRewardedClose\n"));
				FEasyAdsModule* pModule = FModuleManager::Get().LoadModulePtr<FEasyAdsModule>(TEXT("EasyAds"));
				if (pModule == nullptr)
				{
					return;
				}

				AdmobMediation& mediation = pModule->GetAdmobMediation();
				mediation.TriggerPlayRewardClosedDelegates();
			}),
		GET_STATID(STAT_FSimpleDelegateGraphTask_Java_com_ads_util_AdMob_nativePlayRewardedClose),
				nullptr,
				ENamedThreads::GameThread
				);
}


__attribute__((visibility("default"))) extern "C" void Java_com_ads_util_AdMob_nativePlayRewardedComplete(JNIEnv* jenv, jobject thiz, jstring type, jint amount)
{
	const char* charsType = jenv->GetStringUTFChars(type, 0);
	FString strHoldType = FString(UTF8_TO_TCHAR(charsType));

	DECLARE_CYCLE_STAT(TEXT("FSimpleDelegateGraphTask.nativePlayRewardedComplete"), STAT_FSimpleDelegateGraphTask_nativePlayRewardedComplete, STATGROUP_TaskGraphTasks);
	FSimpleDelegateGraphTask::CreateAndDispatchWhenReady(
		FSimpleDelegateGraphTask::FDelegate::CreateLambda([=]()
			{
				//FModuleManager
				FEasyAdsModule* pModule = FModuleManager::Get().LoadModulePtr<FEasyAdsModule>(TEXT("EasyAds"));
				if (pModule == nullptr) return;


				AdmobMediation& mediation = pModule->GetAdmobMediation();
				
				mediation.TriggerPlayRewardCompleteDelegates(strHoldType, (int32)amount);
			}),
		GET_STATID(STAT_FSimpleDelegateGraphTask_nativePlayRewardedComplete),
				nullptr,
				ENamedThreads::GameThread
				);
}


__attribute__((visibility("default"))) extern "C" void Java_com_ads_util_AdMob_nativeDebugMessage(JNIEnv* jenv, jobject thiz, jstring debugMessage)
{
	const char* pDebugMessage = jenv->GetStringUTFChars(debugMessage, 0);
	FString strDebugMessage = FString(UTF8_TO_TCHAR(pDebugMessage));

	DECLARE_CYCLE_STAT(TEXT("FSimpleDelegateGraphTask.nativeDebugMessage"), STAT_FSimpleDelegateGraphTask_nativeDebugMessage, STATGROUP_TaskGraphTasks);
	FSimpleDelegateGraphTask::CreateAndDispatchWhenReady(
		FSimpleDelegateGraphTask::FDelegate::CreateLambda([=]()
			{
				//FModuleManager
				FEasyAdsModule* pModule = FModuleManager::Get().LoadModulePtr<FEasyAdsModule>(TEXT("EasyAds"));
				if (pModule == nullptr) return;


				AdmobMediation& mediation = pModule->GetAdmobMediation();

				mediation.TriggerEasyAdsDebugMessageDelegates(strDebugMessage);
			}),
		GET_STATID(STAT_FSimpleDelegateGraphTask_nativeDebugMessage),
				nullptr,
				ENamedThreads::GameThread
				);
}