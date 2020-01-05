// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyAds/Public/ShowInterstitialProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShowInterstitialProxy() {}
// Cross Module References
	EASYADS_API UClass* Z_Construct_UClass_UShowInterstitialProxy_NoRegister();
	EASYADS_API UClass* Z_Construct_UClass_UShowInterstitialProxy();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_EasyAds();
	EASYADS_API UFunction* Z_Construct_UFunction_UShowInterstitialProxy_ShowInterstitial();
	EASYADS_API UFunction* Z_Construct_UDelegateFunction_EasyAds_DynamicInterstitialCloseDelegate__DelegateSignature();
	EASYADS_API UFunction* Z_Construct_UDelegateFunction_EasyAds_DynamicInterstitialClickDelegate__DelegateSignature();
	EASYADS_API UFunction* Z_Construct_UDelegateFunction_EasyAds_DynamicInterstitialShowDelegate__DelegateSignature();
// End Cross Module References
	void UShowInterstitialProxy::StaticRegisterNativesUShowInterstitialProxy()
	{
		UClass* Class = UShowInterstitialProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ShowInterstitial", &UShowInterstitialProxy::execShowInterstitial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UShowInterstitialProxy_ShowInterstitial_Statics
	{
		struct ShowInterstitialProxy_eventShowInterstitial_Parms
		{
			UShowInterstitialProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UShowInterstitialProxy_ShowInterstitial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShowInterstitialProxy_eventShowInterstitial_Parms, ReturnValue), Z_Construct_UClass_UShowInterstitialProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShowInterstitialProxy_ShowInterstitial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShowInterstitialProxy_ShowInterstitial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShowInterstitialProxy_ShowInterstitial_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EasyAds" },
		{ "DisplayName", "ShowInterstitial" },
		{ "ModuleRelativePath", "Public/ShowInterstitialProxy.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UShowInterstitialProxy_ShowInterstitial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShowInterstitialProxy, nullptr, "ShowInterstitial", sizeof(ShowInterstitialProxy_eventShowInterstitial_Parms), Z_Construct_UFunction_UShowInterstitialProxy_ShowInterstitial_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UShowInterstitialProxy_ShowInterstitial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShowInterstitialProxy_ShowInterstitial_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UShowInterstitialProxy_ShowInterstitial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShowInterstitialProxy_ShowInterstitial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UShowInterstitialProxy_ShowInterstitial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UShowInterstitialProxy_NoRegister()
	{
		return UShowInterstitialProxy::StaticClass();
	}
	struct Z_Construct_UClass_UShowInterstitialProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnClose_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnClick_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnShow_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnShow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShowInterstitialProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyAds,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UShowInterstitialProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UShowInterstitialProxy_ShowInterstitial, "ShowInterstitial" }, // 1577820642
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShowInterstitialProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ShowInterstitialProxy.h" },
		{ "ModuleRelativePath", "Public/ShowInterstitialProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShowInterstitialProxy_Statics::NewProp_OnClose_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShowInterstitialProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UShowInterstitialProxy_Statics::NewProp_OnClose = { "OnClose", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShowInterstitialProxy, OnClose), Z_Construct_UDelegateFunction_EasyAds_DynamicInterstitialCloseDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UShowInterstitialProxy_Statics::NewProp_OnClose_MetaData, ARRAY_COUNT(Z_Construct_UClass_UShowInterstitialProxy_Statics::NewProp_OnClose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShowInterstitialProxy_Statics::NewProp_OnClick_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShowInterstitialProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UShowInterstitialProxy_Statics::NewProp_OnClick = { "OnClick", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShowInterstitialProxy, OnClick), Z_Construct_UDelegateFunction_EasyAds_DynamicInterstitialClickDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UShowInterstitialProxy_Statics::NewProp_OnClick_MetaData, ARRAY_COUNT(Z_Construct_UClass_UShowInterstitialProxy_Statics::NewProp_OnClick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShowInterstitialProxy_Statics::NewProp_OnShow_MetaData[] = {
		{ "ModuleRelativePath", "Public/ShowInterstitialProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UShowInterstitialProxy_Statics::NewProp_OnShow = { "OnShow", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShowInterstitialProxy, OnShow), Z_Construct_UDelegateFunction_EasyAds_DynamicInterstitialShowDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UShowInterstitialProxy_Statics::NewProp_OnShow_MetaData, ARRAY_COUNT(Z_Construct_UClass_UShowInterstitialProxy_Statics::NewProp_OnShow_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShowInterstitialProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShowInterstitialProxy_Statics::NewProp_OnClose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShowInterstitialProxy_Statics::NewProp_OnClick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShowInterstitialProxy_Statics::NewProp_OnShow,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShowInterstitialProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShowInterstitialProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShowInterstitialProxy_Statics::ClassParams = {
		&UShowInterstitialProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UShowInterstitialProxy_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UShowInterstitialProxy_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UShowInterstitialProxy_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UShowInterstitialProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShowInterstitialProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShowInterstitialProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShowInterstitialProxy, 1732182853);
	template<> EASYADS_API UClass* StaticClass<UShowInterstitialProxy>()
	{
		return UShowInterstitialProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShowInterstitialProxy(Z_Construct_UClass_UShowInterstitialProxy, &UShowInterstitialProxy::StaticClass, TEXT("/Script/EasyAds"), TEXT("UShowInterstitialProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShowInterstitialProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
