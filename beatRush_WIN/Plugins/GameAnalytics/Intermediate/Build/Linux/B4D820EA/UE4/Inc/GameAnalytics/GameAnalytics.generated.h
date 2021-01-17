// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGAAdAction : uint8;
enum class EGAAdType : uint8;
enum class EGAAdError : uint8;
enum class EGAErrorSeverity : uint8;
enum class EGAProgressionStatus : uint8;
enum class EGAResourceFlowType : uint8;
#ifdef GAMEANALYTICS_GameAnalytics_generated_h
#error "GameAnalytics.generated.h already included, missing '#pragma once' in GameAnalytics.h"
#endif
#define GAMEANALYTICS_GameAnalytics_generated_h

#define beatRush_WIN_Plugins_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_86_SPARSE_DATA
#define beatRush_WIN_Plugins_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_86_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnQuit); \
	DECLARE_FUNCTION(execGetABTestingVariantId); \
	DECLARE_FUNCTION(execGetABTestingId); \
	DECLARE_FUNCTION(execGetRemoteConfigsContentAsString); \
	DECLARE_FUNCTION(execIsRemoteConfigsReady); \
	DECLARE_FUNCTION(execGetRemoteConfigsValueAsStringWithDefaultValue); \
	DECLARE_FUNCTION(execGetRemoteConfigsValueAsString); \
	DECLARE_FUNCTION(execSetCustomDimension03); \
	DECLARE_FUNCTION(execSetCustomDimension02); \
	DECLARE_FUNCTION(execSetCustomDimension01); \
	DECLARE_FUNCTION(execAddAdEventWithNoAdReason); \
	DECLARE_FUNCTION(execAddAdEventWithDuration); \
	DECLARE_FUNCTION(execAddAdEvent); \
	DECLARE_FUNCTION(execAddErrorEvent); \
	DECLARE_FUNCTION(execAddDesignEventWithValue); \
	DECLARE_FUNCTION(execAddDesignEvent); \
	DECLARE_FUNCTION(execAddProgressionEventWithOneTwoThreeAndScore); \
	DECLARE_FUNCTION(execAddProgressionEventWithOneTwoAndThree); \
	DECLARE_FUNCTION(execAddProgressionEventWithOneTwoAndScore); \
	DECLARE_FUNCTION(execAddProgressionEventWithOneAndTwo); \
	DECLARE_FUNCTION(execAddProgressionEventWithOneAndScore); \
	DECLARE_FUNCTION(execAddProgressionEventWithOne); \
	DECLARE_FUNCTION(execAddResourceEvent); \
	DECLARE_FUNCTION(execAddBusinessEvent); \
	DECLARE_FUNCTION(execAddBusinessEventAndroid); \
	DECLARE_FUNCTION(execAddBusinessEventAndAutoFetchReceipt); \
	DECLARE_FUNCTION(execAddBusinessEventIOS);


#define beatRush_WIN_Plugins_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_86_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnQuit); \
	DECLARE_FUNCTION(execGetABTestingVariantId); \
	DECLARE_FUNCTION(execGetABTestingId); \
	DECLARE_FUNCTION(execGetRemoteConfigsContentAsString); \
	DECLARE_FUNCTION(execIsRemoteConfigsReady); \
	DECLARE_FUNCTION(execGetRemoteConfigsValueAsStringWithDefaultValue); \
	DECLARE_FUNCTION(execGetRemoteConfigsValueAsString); \
	DECLARE_FUNCTION(execSetCustomDimension03); \
	DECLARE_FUNCTION(execSetCustomDimension02); \
	DECLARE_FUNCTION(execSetCustomDimension01); \
	DECLARE_FUNCTION(execAddAdEventWithNoAdReason); \
	DECLARE_FUNCTION(execAddAdEventWithDuration); \
	DECLARE_FUNCTION(execAddAdEvent); \
	DECLARE_FUNCTION(execAddErrorEvent); \
	DECLARE_FUNCTION(execAddDesignEventWithValue); \
	DECLARE_FUNCTION(execAddDesignEvent); \
	DECLARE_FUNCTION(execAddProgressionEventWithOneTwoThreeAndScore); \
	DECLARE_FUNCTION(execAddProgressionEventWithOneTwoAndThree); \
	DECLARE_FUNCTION(execAddProgressionEventWithOneTwoAndScore); \
	DECLARE_FUNCTION(execAddProgressionEventWithOneAndTwo); \
	DECLARE_FUNCTION(execAddProgressionEventWithOneAndScore); \
	DECLARE_FUNCTION(execAddProgressionEventWithOne); \
	DECLARE_FUNCTION(execAddResourceEvent); \
	DECLARE_FUNCTION(execAddBusinessEvent); \
	DECLARE_FUNCTION(execAddBusinessEventAndroid); \
	DECLARE_FUNCTION(execAddBusinessEventAndAutoFetchReceipt); \
	DECLARE_FUNCTION(execAddBusinessEventIOS);


#define beatRush_WIN_Plugins_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_86_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameAnalytics(); \
	friend struct Z_Construct_UClass_UGameAnalytics_Statics; \
public: \
	DECLARE_CLASS(UGameAnalytics, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameAnalytics"), NO_API) \
	DECLARE_SERIALIZER(UGameAnalytics)


#define beatRush_WIN_Plugins_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_86_INCLASS \
private: \
	static void StaticRegisterNativesUGameAnalytics(); \
	friend struct Z_Construct_UClass_UGameAnalytics_Statics; \
public: \
	DECLARE_CLASS(UGameAnalytics, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameAnalytics"), NO_API) \
	DECLARE_SERIALIZER(UGameAnalytics)


#define beatRush_WIN_Plugins_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_86_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameAnalytics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameAnalytics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameAnalytics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameAnalytics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameAnalytics(UGameAnalytics&&); \
	NO_API UGameAnalytics(const UGameAnalytics&); \
public:


#define beatRush_WIN_Plugins_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_86_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameAnalytics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameAnalytics(UGameAnalytics&&); \
	NO_API UGameAnalytics(const UGameAnalytics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameAnalytics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameAnalytics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameAnalytics)


#define beatRush_WIN_Plugins_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_86_PRIVATE_PROPERTY_OFFSET
#define beatRush_WIN_Plugins_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_83_PROLOG
#define beatRush_WIN_Plugins_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_86_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	beatRush_WIN_Plugins_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_86_PRIVATE_PROPERTY_OFFSET \
	beatRush_WIN_Plugins_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_86_SPARSE_DATA \
	beatRush_WIN_Plugins_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_86_RPC_WRAPPERS \
	beatRush_WIN_Plugins_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_86_INCLASS \
	beatRush_WIN_Plugins_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_86_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define beatRush_WIN_Plugins_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_86_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	beatRush_WIN_Plugins_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_86_PRIVATE_PROPERTY_OFFSET \
	beatRush_WIN_Plugins_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_86_SPARSE_DATA \
	beatRush_WIN_Plugins_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_86_RPC_WRAPPERS_NO_PURE_DECLS \
	beatRush_WIN_Plugins_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_86_INCLASS_NO_PURE_DECLS \
	beatRush_WIN_Plugins_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_86_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameAnalytics."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEANALYTICS_API UClass* StaticClass<class UGameAnalytics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID beatRush_WIN_Plugins_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h


#define FOREACH_ENUM_EGAADERROR(op) \
	op(EGAAdError::undefined) \
	op(EGAAdError::unknown) \
	op(EGAAdError::offline) \
	op(EGAAdError::nofill) \
	op(EGAAdError::internalerror) \
	op(EGAAdError::invalidrequest) \
	op(EGAAdError::unabletoprecache) 

enum class EGAAdError : uint8;
template<> GAMEANALYTICS_API UEnum* StaticEnum<EGAAdError>();

#define FOREACH_ENUM_EGAADTYPE(op) \
	op(EGAAdType::undefined) \
	op(EGAAdType::video) \
	op(EGAAdType::rewardedvideo) \
	op(EGAAdType::playable) \
	op(EGAAdType::interstitial) \
	op(EGAAdType::offerwall) \
	op(EGAAdType::banner) 

enum class EGAAdType : uint8;
template<> GAMEANALYTICS_API UEnum* StaticEnum<EGAAdType>();

#define FOREACH_ENUM_EGAADACTION(op) \
	op(EGAAdAction::undefined) \
	op(EGAAdAction::clicked) \
	op(EGAAdAction::show) \
	op(EGAAdAction::failedshow) \
	op(EGAAdAction::rewardreceived) \
	op(EGAAdAction::request) \
	op(EGAAdAction::loaded) 

enum class EGAAdAction : uint8;
template<> GAMEANALYTICS_API UEnum* StaticEnum<EGAAdAction>();

#define FOREACH_ENUM_EGAERRORSEVERITY(op) \
	op(EGAErrorSeverity::undefined) \
	op(EGAErrorSeverity::debug) \
	op(EGAErrorSeverity::info) \
	op(EGAErrorSeverity::warning) \
	op(EGAErrorSeverity::error) \
	op(EGAErrorSeverity::critical) 

enum class EGAErrorSeverity : uint8;
template<> GAMEANALYTICS_API UEnum* StaticEnum<EGAErrorSeverity>();

#define FOREACH_ENUM_EGAPROGRESSIONSTATUS(op) \
	op(EGAProgressionStatus::undefined) \
	op(EGAProgressionStatus::start) \
	op(EGAProgressionStatus::complete) \
	op(EGAProgressionStatus::fail) 

enum class EGAProgressionStatus : uint8;
template<> GAMEANALYTICS_API UEnum* StaticEnum<EGAProgressionStatus>();

#define FOREACH_ENUM_EGARESOURCEFLOWTYPE(op) \
	op(EGAResourceFlowType::undefined) \
	op(EGAResourceFlowType::source) \
	op(EGAResourceFlowType::sink) 

enum class EGAResourceFlowType : uint8;
template<> GAMEANALYTICS_API UEnum* StaticEnum<EGAResourceFlowType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
