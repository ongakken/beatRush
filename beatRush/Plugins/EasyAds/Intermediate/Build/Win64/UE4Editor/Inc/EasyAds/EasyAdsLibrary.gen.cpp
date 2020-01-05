// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyAds/Public/EasyAdsLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEasyAdsLibrary() {}
// Cross Module References
	EASYADS_API UClass* Z_Construct_UClass_UEasyAdsLibrary_NoRegister();
	EASYADS_API UClass* Z_Construct_UClass_UEasyAdsLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_EasyAds();
	EASYADS_API UFunction* Z_Construct_UFunction_UEasyAdsLibrary_HideBanner();
	EASYADS_API UFunction* Z_Construct_UFunction_UEasyAdsLibrary_IsBannerReady();
	EASYADS_API UFunction* Z_Construct_UFunction_UEasyAdsLibrary_IsInterstitialReady();
	EASYADS_API UFunction* Z_Construct_UFunction_UEasyAdsLibrary_IsRewardedVideoReady();
	EASYADS_API UFunction* Z_Construct_UFunction_UEasyAdsLibrary_LaunchMediationTestSuite();
	EASYADS_API UFunction* Z_Construct_UFunction_UEasyAdsLibrary_ShowBanner();
// End Cross Module References
	void UEasyAdsLibrary::StaticRegisterNativesUEasyAdsLibrary()
	{
		UClass* Class = UEasyAdsLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HideBanner", &UEasyAdsLibrary::execHideBanner },
			{ "IsBannerReady", &UEasyAdsLibrary::execIsBannerReady },
			{ "IsInterstitialReady", &UEasyAdsLibrary::execIsInterstitialReady },
			{ "IsRewardedVideoReady", &UEasyAdsLibrary::execIsRewardedVideoReady },
			{ "LaunchMediationTestSuite", &UEasyAdsLibrary::execLaunchMediationTestSuite },
			{ "ShowBanner", &UEasyAdsLibrary::execShowBanner },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEasyAdsLibrary_HideBanner_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEasyAdsLibrary_HideBanner_Statics::Function_MetaDataParams[] = {
		{ "Category", "EasyAds" },
		{ "DisplayName", "HideBanner" },
		{ "Keywords", "EasyAds Hide Banner" },
		{ "ModuleRelativePath", "Public/EasyAdsLibrary.h" },
		{ "ToolTip", "hide  banner\n@param        adType                  the  ads type" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyAdsLibrary_HideBanner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyAdsLibrary, nullptr, "HideBanner", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEasyAdsLibrary_HideBanner_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEasyAdsLibrary_HideBanner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEasyAdsLibrary_HideBanner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEasyAdsLibrary_HideBanner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEasyAdsLibrary_IsBannerReady_Statics
	{
		struct EasyAdsLibrary_eventIsBannerReady_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEasyAdsLibrary_IsBannerReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EasyAdsLibrary_eventIsBannerReady_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEasyAdsLibrary_IsBannerReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EasyAdsLibrary_eventIsBannerReady_Parms), &Z_Construct_UFunction_UEasyAdsLibrary_IsBannerReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyAdsLibrary_IsBannerReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyAdsLibrary_IsBannerReady_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEasyAdsLibrary_IsBannerReady_Statics::Function_MetaDataParams[] = {
		{ "Category", "EasyAds" },
		{ "DisplayName", "IsBannerAdsReady" },
		{ "Keywords", "EasyAds Check Banner Ads Ready" },
		{ "ModuleRelativePath", "Public/EasyAdsLibrary.h" },
		{ "ToolTip", "check is the banner is load finish\n@param        adType                  the  ads type" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyAdsLibrary_IsBannerReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyAdsLibrary, nullptr, "IsBannerReady", sizeof(EasyAdsLibrary_eventIsBannerReady_Parms), Z_Construct_UFunction_UEasyAdsLibrary_IsBannerReady_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEasyAdsLibrary_IsBannerReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEasyAdsLibrary_IsBannerReady_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEasyAdsLibrary_IsBannerReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEasyAdsLibrary_IsBannerReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEasyAdsLibrary_IsBannerReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEasyAdsLibrary_IsInterstitialReady_Statics
	{
		struct EasyAdsLibrary_eventIsInterstitialReady_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEasyAdsLibrary_IsInterstitialReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EasyAdsLibrary_eventIsInterstitialReady_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEasyAdsLibrary_IsInterstitialReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EasyAdsLibrary_eventIsInterstitialReady_Parms), &Z_Construct_UFunction_UEasyAdsLibrary_IsInterstitialReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyAdsLibrary_IsInterstitialReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyAdsLibrary_IsInterstitialReady_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEasyAdsLibrary_IsInterstitialReady_Statics::Function_MetaDataParams[] = {
		{ "Category", "EasyAds" },
		{ "DisplayName", "IsInterstitialAdsReady" },
		{ "Keywords", "EasyAds Check Interstital Ads Ready" },
		{ "ModuleRelativePath", "Public/EasyAdsLibrary.h" },
		{ "ToolTip", "check is the interstitial is load finish\n@param        adType                  the  ads type" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyAdsLibrary_IsInterstitialReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyAdsLibrary, nullptr, "IsInterstitialReady", sizeof(EasyAdsLibrary_eventIsInterstitialReady_Parms), Z_Construct_UFunction_UEasyAdsLibrary_IsInterstitialReady_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEasyAdsLibrary_IsInterstitialReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEasyAdsLibrary_IsInterstitialReady_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEasyAdsLibrary_IsInterstitialReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEasyAdsLibrary_IsInterstitialReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEasyAdsLibrary_IsInterstitialReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEasyAdsLibrary_IsRewardedVideoReady_Statics
	{
		struct EasyAdsLibrary_eventIsRewardedVideoReady_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEasyAdsLibrary_IsRewardedVideoReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EasyAdsLibrary_eventIsRewardedVideoReady_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEasyAdsLibrary_IsRewardedVideoReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EasyAdsLibrary_eventIsRewardedVideoReady_Parms), &Z_Construct_UFunction_UEasyAdsLibrary_IsRewardedVideoReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyAdsLibrary_IsRewardedVideoReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyAdsLibrary_IsRewardedVideoReady_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEasyAdsLibrary_IsRewardedVideoReady_Statics::Function_MetaDataParams[] = {
		{ "Category", "EasyAds" },
		{ "DisplayName", "IsRewardedVideoAdsReady" },
		{ "Keywords", "EasyAds Check RewardedVideo Ads Ready" },
		{ "ModuleRelativePath", "Public/EasyAdsLibrary.h" },
		{ "ToolTip", "check is the rewardedvideo ads load finish\n@param        adType                  the  ads type" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyAdsLibrary_IsRewardedVideoReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyAdsLibrary, nullptr, "IsRewardedVideoReady", sizeof(EasyAdsLibrary_eventIsRewardedVideoReady_Parms), Z_Construct_UFunction_UEasyAdsLibrary_IsRewardedVideoReady_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEasyAdsLibrary_IsRewardedVideoReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEasyAdsLibrary_IsRewardedVideoReady_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEasyAdsLibrary_IsRewardedVideoReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEasyAdsLibrary_IsRewardedVideoReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEasyAdsLibrary_IsRewardedVideoReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEasyAdsLibrary_LaunchMediationTestSuite_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEasyAdsLibrary_LaunchMediationTestSuite_Statics::Function_MetaDataParams[] = {
		{ "Category", "EasyAds" },
		{ "DisplayName", "LaunchMediationTestSuite" },
		{ "Keywords", "EasyAds Launch Mediation TestSuite" },
		{ "ModuleRelativePath", "Public/EasyAdsLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyAdsLibrary_LaunchMediationTestSuite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyAdsLibrary, nullptr, "LaunchMediationTestSuite", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEasyAdsLibrary_LaunchMediationTestSuite_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEasyAdsLibrary_LaunchMediationTestSuite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEasyAdsLibrary_LaunchMediationTestSuite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEasyAdsLibrary_LaunchMediationTestSuite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEasyAdsLibrary_ShowBanner_Statics
	{
		struct EasyAdsLibrary_eventShowBanner_Parms
		{
			bool isOnBottom;
		};
		static void NewProp_isOnBottom_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isOnBottom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEasyAdsLibrary_ShowBanner_Statics::NewProp_isOnBottom_SetBit(void* Obj)
	{
		((EasyAdsLibrary_eventShowBanner_Parms*)Obj)->isOnBottom = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEasyAdsLibrary_ShowBanner_Statics::NewProp_isOnBottom = { "isOnBottom", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EasyAdsLibrary_eventShowBanner_Parms), &Z_Construct_UFunction_UEasyAdsLibrary_ShowBanner_Statics::NewProp_isOnBottom_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyAdsLibrary_ShowBanner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyAdsLibrary_ShowBanner_Statics::NewProp_isOnBottom,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEasyAdsLibrary_ShowBanner_Statics::Function_MetaDataParams[] = {
		{ "Category", "EasyAds" },
		{ "DisplayName", "ShowBanner" },
		{ "Keywords", "EasyAds Show Banner" },
		{ "ModuleRelativePath", "Public/EasyAdsLibrary.h" },
		{ "ToolTip", "Show  banner\n@param        isOnBottom              if the banner show on the bottom of the screen" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyAdsLibrary_ShowBanner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyAdsLibrary, nullptr, "ShowBanner", sizeof(EasyAdsLibrary_eventShowBanner_Parms), Z_Construct_UFunction_UEasyAdsLibrary_ShowBanner_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEasyAdsLibrary_ShowBanner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEasyAdsLibrary_ShowBanner_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEasyAdsLibrary_ShowBanner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEasyAdsLibrary_ShowBanner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEasyAdsLibrary_ShowBanner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEasyAdsLibrary_NoRegister()
	{
		return UEasyAdsLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UEasyAdsLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEasyAdsLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyAds,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEasyAdsLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEasyAdsLibrary_HideBanner, "HideBanner" }, // 365483164
		{ &Z_Construct_UFunction_UEasyAdsLibrary_IsBannerReady, "IsBannerReady" }, // 1910202784
		{ &Z_Construct_UFunction_UEasyAdsLibrary_IsInterstitialReady, "IsInterstitialReady" }, // 3200817655
		{ &Z_Construct_UFunction_UEasyAdsLibrary_IsRewardedVideoReady, "IsRewardedVideoReady" }, // 3564448410
		{ &Z_Construct_UFunction_UEasyAdsLibrary_LaunchMediationTestSuite, "LaunchMediationTestSuite" }, // 1157859658
		{ &Z_Construct_UFunction_UEasyAdsLibrary_ShowBanner, "ShowBanner" }, // 159382053
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEasyAdsLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EasyAdsLibrary.h" },
		{ "ModuleRelativePath", "Public/EasyAdsLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEasyAdsLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEasyAdsLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEasyAdsLibrary_Statics::ClassParams = {
		&UEasyAdsLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEasyAdsLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEasyAdsLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEasyAdsLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEasyAdsLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEasyAdsLibrary, 2090960849);
	template<> EASYADS_API UClass* StaticClass<UEasyAdsLibrary>()
	{
		return UEasyAdsLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEasyAdsLibrary(Z_Construct_UClass_UEasyAdsLibrary, &UEasyAdsLibrary::StaticClass, TEXT("/Script/EasyAds"), TEXT("UEasyAdsLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEasyAdsLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
