// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EASYADS_EasyAdsLibrary_generated_h
#error "EasyAdsLibrary.generated.h already included, missing '#pragma once' in EasyAdsLibrary.h"
#endif
#define EASYADS_EasyAdsLibrary_generated_h

#define beatRush_Plugins_EasyAds_Source_EasyAds_Public_EasyAdsLibrary_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLaunchMediationTestSuite) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEasyAdsLibrary::LaunchMediationTestSuite(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRewardedVideoReady) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEasyAdsLibrary::IsRewardedVideoReady(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInterstitialReady) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEasyAdsLibrary::IsInterstitialReady(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsBannerReady) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEasyAdsLibrary::IsBannerReady(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideBanner) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEasyAdsLibrary::HideBanner(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowBanner) \
	{ \
		P_GET_UBOOL(Z_Param_isOnBottom); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEasyAdsLibrary::ShowBanner(Z_Param_isOnBottom); \
		P_NATIVE_END; \
	}


#define beatRush_Plugins_EasyAds_Source_EasyAds_Public_EasyAdsLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLaunchMediationTestSuite) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEasyAdsLibrary::LaunchMediationTestSuite(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRewardedVideoReady) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEasyAdsLibrary::IsRewardedVideoReady(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInterstitialReady) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEasyAdsLibrary::IsInterstitialReady(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsBannerReady) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UEasyAdsLibrary::IsBannerReady(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideBanner) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEasyAdsLibrary::HideBanner(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowBanner) \
	{ \
		P_GET_UBOOL(Z_Param_isOnBottom); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UEasyAdsLibrary::ShowBanner(Z_Param_isOnBottom); \
		P_NATIVE_END; \
	}


#define beatRush_Plugins_EasyAds_Source_EasyAds_Public_EasyAdsLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEasyAdsLibrary(); \
	friend struct Z_Construct_UClass_UEasyAdsLibrary_Statics; \
public: \
	DECLARE_CLASS(UEasyAdsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyAds"), NO_API) \
	DECLARE_SERIALIZER(UEasyAdsLibrary)


#define beatRush_Plugins_EasyAds_Source_EasyAds_Public_EasyAdsLibrary_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUEasyAdsLibrary(); \
	friend struct Z_Construct_UClass_UEasyAdsLibrary_Statics; \
public: \
	DECLARE_CLASS(UEasyAdsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyAds"), NO_API) \
	DECLARE_SERIALIZER(UEasyAdsLibrary)


#define beatRush_Plugins_EasyAds_Source_EasyAds_Public_EasyAdsLibrary_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEasyAdsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEasyAdsLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEasyAdsLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEasyAdsLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEasyAdsLibrary(UEasyAdsLibrary&&); \
	NO_API UEasyAdsLibrary(const UEasyAdsLibrary&); \
public:


#define beatRush_Plugins_EasyAds_Source_EasyAds_Public_EasyAdsLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEasyAdsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEasyAdsLibrary(UEasyAdsLibrary&&); \
	NO_API UEasyAdsLibrary(const UEasyAdsLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEasyAdsLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEasyAdsLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEasyAdsLibrary)


#define beatRush_Plugins_EasyAds_Source_EasyAds_Public_EasyAdsLibrary_h_19_PRIVATE_PROPERTY_OFFSET
#define beatRush_Plugins_EasyAds_Source_EasyAds_Public_EasyAdsLibrary_h_16_PROLOG
#define beatRush_Plugins_EasyAds_Source_EasyAds_Public_EasyAdsLibrary_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	beatRush_Plugins_EasyAds_Source_EasyAds_Public_EasyAdsLibrary_h_19_PRIVATE_PROPERTY_OFFSET \
	beatRush_Plugins_EasyAds_Source_EasyAds_Public_EasyAdsLibrary_h_19_RPC_WRAPPERS \
	beatRush_Plugins_EasyAds_Source_EasyAds_Public_EasyAdsLibrary_h_19_INCLASS \
	beatRush_Plugins_EasyAds_Source_EasyAds_Public_EasyAdsLibrary_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define beatRush_Plugins_EasyAds_Source_EasyAds_Public_EasyAdsLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	beatRush_Plugins_EasyAds_Source_EasyAds_Public_EasyAdsLibrary_h_19_PRIVATE_PROPERTY_OFFSET \
	beatRush_Plugins_EasyAds_Source_EasyAds_Public_EasyAdsLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	beatRush_Plugins_EasyAds_Source_EasyAds_Public_EasyAdsLibrary_h_19_INCLASS_NO_PURE_DECLS \
	beatRush_Plugins_EasyAds_Source_EasyAds_Public_EasyAdsLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYADS_API UClass* StaticClass<class UEasyAdsLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID beatRush_Plugins_EasyAds_Source_EasyAds_Public_EasyAdsLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
