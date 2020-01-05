// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEasyAds_init() {}
	EASYADS_API UFunction* Z_Construct_UDelegateFunction_EasyAds_DynamicEasyAdsDebugMessageDelegate__DelegateSignature();
	EASYADS_API UFunction* Z_Construct_UDelegateFunction_EasyAds_PlayRewardedDelegate__DelegateSignature();
	EASYADS_API UFunction* Z_Construct_UDelegateFunction_EasyAds_DynamicRewardedClosedDelegate__DelegateSignature();
	EASYADS_API UFunction* Z_Construct_UDelegateFunction_EasyAds_DynamicInterstitialShowDelegate__DelegateSignature();
	EASYADS_API UFunction* Z_Construct_UDelegateFunction_EasyAds_DynamicInterstitialClickDelegate__DelegateSignature();
	EASYADS_API UFunction* Z_Construct_UDelegateFunction_EasyAds_DynamicInterstitialCloseDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_EasyAds()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_EasyAds_DynamicEasyAdsDebugMessageDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_EasyAds_PlayRewardedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_EasyAds_DynamicRewardedClosedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_EasyAds_DynamicInterstitialShowDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_EasyAds_DynamicInterstitialClickDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_EasyAds_DynamicInterstitialCloseDelegate__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/EasyAds",
				SingletonFuncArray,
				ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xCFEDA278,
				0x080F0722,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
