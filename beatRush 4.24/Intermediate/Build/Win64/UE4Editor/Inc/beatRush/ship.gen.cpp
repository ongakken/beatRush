// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "beatRush/Public/ship.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeship() {}
// Cross Module References
	BEATRUSH_API UClass* Z_Construct_UClass_Aship_NoRegister();
	BEATRUSH_API UClass* Z_Construct_UClass_Aship();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_beatRush();
// End Cross Module References
	void Aship::StaticRegisterNativesAship()
	{
	}
	UClass* Z_Construct_UClass_Aship_NoRegister()
	{
		return Aship::StaticClass();
	}
	struct Z_Construct_UClass_Aship_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aship_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_beatRush,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aship_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ship.h" },
		{ "ModuleRelativePath", "Public/ship.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aship_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aship>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aship_Statics::ClassParams = {
		&Aship::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Aship_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Aship_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aship()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aship_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Aship, 2922630123);
	template<> BEATRUSH_API UClass* StaticClass<Aship>()
	{
		return Aship::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aship(Z_Construct_UClass_Aship, &Aship::StaticClass, TEXT("/Script/beatRush"), TEXT("Aship"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aship);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
