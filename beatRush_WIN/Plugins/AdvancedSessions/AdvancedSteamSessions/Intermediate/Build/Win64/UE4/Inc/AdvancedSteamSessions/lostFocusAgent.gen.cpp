// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSteamSessions/Private/lostFocusAgent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodelostFocusAgent() {}
// Cross Module References
	ADVANCEDSTEAMSESSIONS_API UClass* Z_Construct_UClass_AlostFocusAgent_NoRegister();
	ADVANCEDSTEAMSESSIONS_API UClass* Z_Construct_UClass_AlostFocusAgent();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AdvancedSteamSessions();
// End Cross Module References
	DEFINE_FUNCTION(AlostFocusAgent::execisGameFocused)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->isGameFocused();
		P_NATIVE_END;
	}
	void AlostFocusAgent::StaticRegisterNativesAlostFocusAgent()
	{
		UClass* Class = AlostFocusAgent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "isGameFocused", &AlostFocusAgent::execisGameFocused },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AlostFocusAgent_isGameFocused_Statics
	{
		struct lostFocusAgent_eventisGameFocused_Parms
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
	void Z_Construct_UFunction_AlostFocusAgent_isGameFocused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((lostFocusAgent_eventisGameFocused_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AlostFocusAgent_isGameFocused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(lostFocusAgent_eventisGameFocused_Parms), &Z_Construct_UFunction_AlostFocusAgent_isGameFocused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AlostFocusAgent_isGameFocused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AlostFocusAgent_isGameFocused_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AlostFocusAgent_isGameFocused_Statics::Function_MetaDataParams[] = {
		{ "Category", "misc" },
		{ "ModuleRelativePath", "Private/lostFocusAgent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AlostFocusAgent_isGameFocused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AlostFocusAgent, nullptr, "isGameFocused", nullptr, nullptr, sizeof(lostFocusAgent_eventisGameFocused_Parms), Z_Construct_UFunction_AlostFocusAgent_isGameFocused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AlostFocusAgent_isGameFocused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AlostFocusAgent_isGameFocused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AlostFocusAgent_isGameFocused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AlostFocusAgent_isGameFocused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AlostFocusAgent_isGameFocused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AlostFocusAgent_NoRegister()
	{
		return AlostFocusAgent::StaticClass();
	}
	struct Z_Construct_UClass_AlostFocusAgent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AlostFocusAgent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSteamSessions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AlostFocusAgent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AlostFocusAgent_isGameFocused, "isGameFocused" }, // 689244691
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AlostFocusAgent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "lostFocusAgent.h" },
		{ "ModuleRelativePath", "Private/lostFocusAgent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AlostFocusAgent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AlostFocusAgent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AlostFocusAgent_Statics::ClassParams = {
		&AlostFocusAgent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AlostFocusAgent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AlostFocusAgent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AlostFocusAgent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AlostFocusAgent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AlostFocusAgent, 1147414121);
	template<> ADVANCEDSTEAMSESSIONS_API UClass* StaticClass<AlostFocusAgent>()
	{
		return AlostFocusAgent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AlostFocusAgent(Z_Construct_UClass_AlostFocusAgent, &AlostFocusAgent::StaticClass, TEXT("/Script/AdvancedSteamSessions"), TEXT("AlostFocusAgent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AlostFocusAgent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
