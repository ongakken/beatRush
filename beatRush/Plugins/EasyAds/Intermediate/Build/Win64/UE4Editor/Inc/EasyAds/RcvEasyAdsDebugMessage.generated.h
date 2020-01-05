// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URcvEasyAdsDebugMessage;
#ifdef EASYADS_RcvEasyAdsDebugMessage_generated_h
#error "RcvEasyAdsDebugMessage.generated.h already included, missing '#pragma once' in RcvEasyAdsDebugMessage.h"
#endif
#define EASYADS_RcvEasyAdsDebugMessage_generated_h

#define beatRush_Plugins_EasyAds_Source_EasyAds_Public_RcvEasyAdsDebugMessage_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRcvEasyAdsDebugMessage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(URcvEasyAdsDebugMessage**)Z_Param__Result=URcvEasyAdsDebugMessage::RcvEasyAdsDebugMessage(); \
		P_NATIVE_END; \
	}


#define beatRush_Plugins_EasyAds_Source_EasyAds_Public_RcvEasyAdsDebugMessage_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRcvEasyAdsDebugMessage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(URcvEasyAdsDebugMessage**)Z_Param__Result=URcvEasyAdsDebugMessage::RcvEasyAdsDebugMessage(); \
		P_NATIVE_END; \
	}


#define beatRush_Plugins_EasyAds_Source_EasyAds_Public_RcvEasyAdsDebugMessage_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURcvEasyAdsDebugMessage(); \
	friend struct Z_Construct_UClass_URcvEasyAdsDebugMessage_Statics; \
public: \
	DECLARE_CLASS(URcvEasyAdsDebugMessage, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyAds"), NO_API) \
	DECLARE_SERIALIZER(URcvEasyAdsDebugMessage)


#define beatRush_Plugins_EasyAds_Source_EasyAds_Public_RcvEasyAdsDebugMessage_h_21_INCLASS \
private: \
	static void StaticRegisterNativesURcvEasyAdsDebugMessage(); \
	friend struct Z_Construct_UClass_URcvEasyAdsDebugMessage_Statics; \
public: \
	DECLARE_CLASS(URcvEasyAdsDebugMessage, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyAds"), NO_API) \
	DECLARE_SERIALIZER(URcvEasyAdsDebugMessage)


#define beatRush_Plugins_EasyAds_Source_EasyAds_Public_RcvEasyAdsDebugMessage_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URcvEasyAdsDebugMessage(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URcvEasyAdsDebugMessage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URcvEasyAdsDebugMessage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URcvEasyAdsDebugMessage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URcvEasyAdsDebugMessage(URcvEasyAdsDebugMessage&&); \
	NO_API URcvEasyAdsDebugMessage(const URcvEasyAdsDebugMessage&); \
public:


#define beatRush_Plugins_EasyAds_Source_EasyAds_Public_RcvEasyAdsDebugMessage_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URcvEasyAdsDebugMessage(URcvEasyAdsDebugMessage&&); \
	NO_API URcvEasyAdsDebugMessage(const URcvEasyAdsDebugMessage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URcvEasyAdsDebugMessage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URcvEasyAdsDebugMessage); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URcvEasyAdsDebugMessage)


#define beatRush_Plugins_EasyAds_Source_EasyAds_Public_RcvEasyAdsDebugMessage_h_21_PRIVATE_PROPERTY_OFFSET
#define beatRush_Plugins_EasyAds_Source_EasyAds_Public_RcvEasyAdsDebugMessage_h_18_PROLOG
#define beatRush_Plugins_EasyAds_Source_EasyAds_Public_RcvEasyAdsDebugMessage_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	beatRush_Plugins_EasyAds_Source_EasyAds_Public_RcvEasyAdsDebugMessage_h_21_PRIVATE_PROPERTY_OFFSET \
	beatRush_Plugins_EasyAds_Source_EasyAds_Public_RcvEasyAdsDebugMessage_h_21_RPC_WRAPPERS \
	beatRush_Plugins_EasyAds_Source_EasyAds_Public_RcvEasyAdsDebugMessage_h_21_INCLASS \
	beatRush_Plugins_EasyAds_Source_EasyAds_Public_RcvEasyAdsDebugMessage_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define beatRush_Plugins_EasyAds_Source_EasyAds_Public_RcvEasyAdsDebugMessage_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	beatRush_Plugins_EasyAds_Source_EasyAds_Public_RcvEasyAdsDebugMessage_h_21_PRIVATE_PROPERTY_OFFSET \
	beatRush_Plugins_EasyAds_Source_EasyAds_Public_RcvEasyAdsDebugMessage_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	beatRush_Plugins_EasyAds_Source_EasyAds_Public_RcvEasyAdsDebugMessage_h_21_INCLASS_NO_PURE_DECLS \
	beatRush_Plugins_EasyAds_Source_EasyAds_Public_RcvEasyAdsDebugMessage_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYADS_API UClass* StaticClass<class URcvEasyAdsDebugMessage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID beatRush_Plugins_EasyAds_Source_EasyAds_Public_RcvEasyAdsDebugMessage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
