// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyAds/Public/RcvEasyAdsDebugMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRcvEasyAdsDebugMessage() {}
// Cross Module References
	EASYADS_API UClass* Z_Construct_UClass_URcvEasyAdsDebugMessage_NoRegister();
	EASYADS_API UClass* Z_Construct_UClass_URcvEasyAdsDebugMessage();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_EasyAds();
	EASYADS_API UFunction* Z_Construct_UFunction_URcvEasyAdsDebugMessage_RcvEasyAdsDebugMessage();
	EASYADS_API UFunction* Z_Construct_UDelegateFunction_EasyAds_DynamicEasyAdsDebugMessageDelegate__DelegateSignature();
// End Cross Module References
	void URcvEasyAdsDebugMessage::StaticRegisterNativesURcvEasyAdsDebugMessage()
	{
		UClass* Class = URcvEasyAdsDebugMessage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RcvEasyAdsDebugMessage", &URcvEasyAdsDebugMessage::execRcvEasyAdsDebugMessage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URcvEasyAdsDebugMessage_RcvEasyAdsDebugMessage_Statics
	{
		struct RcvEasyAdsDebugMessage_eventRcvEasyAdsDebugMessage_Parms
		{
			URcvEasyAdsDebugMessage* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URcvEasyAdsDebugMessage_RcvEasyAdsDebugMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RcvEasyAdsDebugMessage_eventRcvEasyAdsDebugMessage_Parms, ReturnValue), Z_Construct_UClass_URcvEasyAdsDebugMessage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URcvEasyAdsDebugMessage_RcvEasyAdsDebugMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URcvEasyAdsDebugMessage_RcvEasyAdsDebugMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URcvEasyAdsDebugMessage_RcvEasyAdsDebugMessage_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EasyAds" },
		{ "DisplayName", "RcvEasyAdsDebugMessage" },
		{ "ModuleRelativePath", "Public/RcvEasyAdsDebugMessage.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URcvEasyAdsDebugMessage_RcvEasyAdsDebugMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URcvEasyAdsDebugMessage, nullptr, "RcvEasyAdsDebugMessage", sizeof(RcvEasyAdsDebugMessage_eventRcvEasyAdsDebugMessage_Parms), Z_Construct_UFunction_URcvEasyAdsDebugMessage_RcvEasyAdsDebugMessage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_URcvEasyAdsDebugMessage_RcvEasyAdsDebugMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URcvEasyAdsDebugMessage_RcvEasyAdsDebugMessage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_URcvEasyAdsDebugMessage_RcvEasyAdsDebugMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URcvEasyAdsDebugMessage_RcvEasyAdsDebugMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URcvEasyAdsDebugMessage_RcvEasyAdsDebugMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URcvEasyAdsDebugMessage_NoRegister()
	{
		return URcvEasyAdsDebugMessage::StaticClass();
	}
	struct Z_Construct_UClass_URcvEasyAdsDebugMessage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDebugMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDebugMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URcvEasyAdsDebugMessage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyAds,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URcvEasyAdsDebugMessage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URcvEasyAdsDebugMessage_RcvEasyAdsDebugMessage, "RcvEasyAdsDebugMessage" }, // 2397174006
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URcvEasyAdsDebugMessage_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RcvEasyAdsDebugMessage.h" },
		{ "ModuleRelativePath", "Public/RcvEasyAdsDebugMessage.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URcvEasyAdsDebugMessage_Statics::NewProp_OnDebugMessage_MetaData[] = {
		{ "ModuleRelativePath", "Public/RcvEasyAdsDebugMessage.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URcvEasyAdsDebugMessage_Statics::NewProp_OnDebugMessage = { "OnDebugMessage", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URcvEasyAdsDebugMessage, OnDebugMessage), Z_Construct_UDelegateFunction_EasyAds_DynamicEasyAdsDebugMessageDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URcvEasyAdsDebugMessage_Statics::NewProp_OnDebugMessage_MetaData, ARRAY_COUNT(Z_Construct_UClass_URcvEasyAdsDebugMessage_Statics::NewProp_OnDebugMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URcvEasyAdsDebugMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URcvEasyAdsDebugMessage_Statics::NewProp_OnDebugMessage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URcvEasyAdsDebugMessage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URcvEasyAdsDebugMessage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URcvEasyAdsDebugMessage_Statics::ClassParams = {
		&URcvEasyAdsDebugMessage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URcvEasyAdsDebugMessage_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_URcvEasyAdsDebugMessage_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URcvEasyAdsDebugMessage_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_URcvEasyAdsDebugMessage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URcvEasyAdsDebugMessage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URcvEasyAdsDebugMessage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URcvEasyAdsDebugMessage, 71962177);
	template<> EASYADS_API UClass* StaticClass<URcvEasyAdsDebugMessage>()
	{
		return URcvEasyAdsDebugMessage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URcvEasyAdsDebugMessage(Z_Construct_UClass_URcvEasyAdsDebugMessage, &URcvEasyAdsDebugMessage::StaticClass, TEXT("/Script/EasyAds"), TEXT("URcvEasyAdsDebugMessage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URcvEasyAdsDebugMessage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
