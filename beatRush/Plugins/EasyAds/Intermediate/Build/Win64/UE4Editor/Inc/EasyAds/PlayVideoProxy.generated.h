// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPlayVideoProxy;
#ifdef EASYADS_PlayVideoProxy_generated_h
#error "PlayVideoProxy.generated.h already included, missing '#pragma once' in PlayVideoProxy.h"
#endif
#define EASYADS_PlayVideoProxy_generated_h

#define beatRush_Plugins_EasyAds_Source_EasyAds_Public_PlayVideoProxy_h_19_DELEGATE \
static inline void FDynamicInterstitialCloseDelegate_DelegateWrapper(const FMulticastScriptDelegate& DynamicInterstitialCloseDelegate) \
{ \
	DynamicInterstitialCloseDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define beatRush_Plugins_EasyAds_Source_EasyAds_Public_PlayVideoProxy_h_18_DELEGATE \
static inline void FDynamicInterstitialClickDelegate_DelegateWrapper(const FMulticastScriptDelegate& DynamicInterstitialClickDelegate) \
{ \
	DynamicInterstitialClickDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define beatRush_Plugins_EasyAds_Source_EasyAds_Public_PlayVideoProxy_h_17_DELEGATE \
static inline void FDynamicInterstitialShowDelegate_DelegateWrapper(const FMulticastScriptDelegate& DynamicInterstitialShowDelegate) \
{ \
	DynamicInterstitialShowDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define beatRush_Plugins_EasyAds_Source_EasyAds_Public_PlayVideoProxy_h_16_DELEGATE \
static inline void FDynamicRewardedClosedDelegate_DelegateWrapper(const FMulticastScriptDelegate& DynamicRewardedClosedDelegate) \
{ \
	DynamicRewardedClosedDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define beatRush_Plugins_EasyAds_Source_EasyAds_Public_PlayVideoProxy_h_15_DELEGATE \
struct _Script_EasyAds_eventPlayRewardedDelegate_Parms \
{ \
	FString item; \
	int32 amount; \
}; \
static inline void FPlayRewardedDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlayRewardedDelegate, const FString& item, int32 amount) \
{ \
	_Script_EasyAds_eventPlayRewardedDelegate_Parms Parms; \
	Parms.item=item; \
	Parms.amount=amount; \
	PlayRewardedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define beatRush_Plugins_EasyAds_Source_EasyAds_Public_PlayVideoProxy_h_14_DELEGATE \
struct _Script_EasyAds_eventDynamicEasyAdsDebugMessageDelegate_Parms \
{ \
	FString debugMessage; \
}; \
static inline void FDynamicEasyAdsDebugMessageDelegate_DelegateWrapper(const FMulticastScriptDelegate& DynamicEasyAdsDebugMessageDelegate, const FString& debugMessage) \
{ \
	_Script_EasyAds_eventDynamicEasyAdsDebugMessageDelegate_Parms Parms; \
	Parms.debugMessage=debugMessage; \
	DynamicEasyAdsDebugMessageDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define beatRush_Plugins_EasyAds_Source_EasyAds_Public_PlayVideoProxy_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPlayRewardedVideo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPlayVideoProxy**)Z_Param__Result=UPlayVideoProxy::PlayRewardedVideo(); \
		P_NATIVE_END; \
	}


#define beatRush_Plugins_EasyAds_Source_EasyAds_Public_PlayVideoProxy_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlayRewardedVideo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPlayVideoProxy**)Z_Param__Result=UPlayVideoProxy::PlayRewardedVideo(); \
		P_NATIVE_END; \
	}


#define beatRush_Plugins_EasyAds_Source_EasyAds_Public_PlayVideoProxy_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayVideoProxy(); \
	friend struct Z_Construct_UClass_UPlayVideoProxy_Statics; \
public: \
	DECLARE_CLASS(UPlayVideoProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyAds"), NO_API) \
	DECLARE_SERIALIZER(UPlayVideoProxy)


#define beatRush_Plugins_EasyAds_Source_EasyAds_Public_PlayVideoProxy_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUPlayVideoProxy(); \
	friend struct Z_Construct_UClass_UPlayVideoProxy_Statics; \
public: \
	DECLARE_CLASS(UPlayVideoProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyAds"), NO_API) \
	DECLARE_SERIALIZER(UPlayVideoProxy)


#define beatRush_Plugins_EasyAds_Source_EasyAds_Public_PlayVideoProxy_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayVideoProxy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayVideoProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayVideoProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayVideoProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayVideoProxy(UPlayVideoProxy&&); \
	NO_API UPlayVideoProxy(const UPlayVideoProxy&); \
public:


#define beatRush_Plugins_EasyAds_Source_EasyAds_Public_PlayVideoProxy_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayVideoProxy(UPlayVideoProxy&&); \
	NO_API UPlayVideoProxy(const UPlayVideoProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayVideoProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayVideoProxy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayVideoProxy)


#define beatRush_Plugins_EasyAds_Source_EasyAds_Public_PlayVideoProxy_h_28_PRIVATE_PROPERTY_OFFSET
#define beatRush_Plugins_EasyAds_Source_EasyAds_Public_PlayVideoProxy_h_25_PROLOG
#define beatRush_Plugins_EasyAds_Source_EasyAds_Public_PlayVideoProxy_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	beatRush_Plugins_EasyAds_Source_EasyAds_Public_PlayVideoProxy_h_28_PRIVATE_PROPERTY_OFFSET \
	beatRush_Plugins_EasyAds_Source_EasyAds_Public_PlayVideoProxy_h_28_RPC_WRAPPERS \
	beatRush_Plugins_EasyAds_Source_EasyAds_Public_PlayVideoProxy_h_28_INCLASS \
	beatRush_Plugins_EasyAds_Source_EasyAds_Public_PlayVideoProxy_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define beatRush_Plugins_EasyAds_Source_EasyAds_Public_PlayVideoProxy_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	beatRush_Plugins_EasyAds_Source_EasyAds_Public_PlayVideoProxy_h_28_PRIVATE_PROPERTY_OFFSET \
	beatRush_Plugins_EasyAds_Source_EasyAds_Public_PlayVideoProxy_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	beatRush_Plugins_EasyAds_Source_EasyAds_Public_PlayVideoProxy_h_28_INCLASS_NO_PURE_DECLS \
	beatRush_Plugins_EasyAds_Source_EasyAds_Public_PlayVideoProxy_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYADS_API UClass* StaticClass<class UPlayVideoProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID beatRush_Plugins_EasyAds_Source_EasyAds_Public_PlayVideoProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
