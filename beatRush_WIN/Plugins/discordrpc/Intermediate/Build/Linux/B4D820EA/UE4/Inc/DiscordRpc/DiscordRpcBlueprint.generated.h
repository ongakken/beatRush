// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDiscordUserData;
#ifdef DISCORDRPC_DiscordRpcBlueprint_generated_h
#error "DiscordRpcBlueprint.generated.h already included, missing '#pragma once' in DiscordRpcBlueprint.h"
#endif
#define DISCORDRPC_DiscordRpcBlueprint_generated_h

#define beatRush_WIN_Plugins_discordrpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDiscordRichPresence_Statics; \
	DISCORDRPC_API static class UScriptStruct* StaticStruct();


template<> DISCORDRPC_API UScriptStruct* StaticStruct<struct FDiscordRichPresence>();

#define beatRush_WIN_Plugins_discordrpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDiscordUserData_Statics; \
	DISCORDRPC_API static class UScriptStruct* StaticStruct();


template<> DISCORDRPC_API UScriptStruct* StaticStruct<struct FDiscordUserData>();

#define beatRush_WIN_Plugins_discordrpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_45_DELEGATE \
struct _Script_DiscordRpc_eventDiscordJoinRequest_Parms \
{ \
	FDiscordUserData joinRequest; \
}; \
static inline void FDiscordJoinRequest_DelegateWrapper(const FMulticastScriptDelegate& DiscordJoinRequest, FDiscordUserData const& joinRequest) \
{ \
	_Script_DiscordRpc_eventDiscordJoinRequest_Parms Parms; \
	Parms.joinRequest=joinRequest; \
	DiscordJoinRequest.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define beatRush_WIN_Plugins_discordrpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_44_DELEGATE \
struct _Script_DiscordRpc_eventDiscordSpectate_Parms \
{ \
	FString spectateSecret; \
}; \
static inline void FDiscordSpectate_DelegateWrapper(const FMulticastScriptDelegate& DiscordSpectate, const FString& spectateSecret) \
{ \
	_Script_DiscordRpc_eventDiscordSpectate_Parms Parms; \
	Parms.spectateSecret=spectateSecret; \
	DiscordSpectate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define beatRush_WIN_Plugins_discordrpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_43_DELEGATE \
struct _Script_DiscordRpc_eventDiscordJoin_Parms \
{ \
	FString joinSecret; \
}; \
static inline void FDiscordJoin_DelegateWrapper(const FMulticastScriptDelegate& DiscordJoin, const FString& joinSecret) \
{ \
	_Script_DiscordRpc_eventDiscordJoin_Parms Parms; \
	Parms.joinSecret=joinSecret; \
	DiscordJoin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define beatRush_WIN_Plugins_discordrpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_42_DELEGATE \
struct _Script_DiscordRpc_eventDiscordErrored_Parms \
{ \
	int32 errorCode; \
	FString errorMessage; \
}; \
static inline void FDiscordErrored_DelegateWrapper(const FMulticastScriptDelegate& DiscordErrored, int32 errorCode, const FString& errorMessage) \
{ \
	_Script_DiscordRpc_eventDiscordErrored_Parms Parms; \
	Parms.errorCode=errorCode; \
	Parms.errorMessage=errorMessage; \
	DiscordErrored.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define beatRush_WIN_Plugins_discordrpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_41_DELEGATE \
struct _Script_DiscordRpc_eventDiscordDisconnected_Parms \
{ \
	int32 errorCode; \
	FString errorMessage; \
}; \
static inline void FDiscordDisconnected_DelegateWrapper(const FMulticastScriptDelegate& DiscordDisconnected, int32 errorCode, const FString& errorMessage) \
{ \
	_Script_DiscordRpc_eventDiscordDisconnected_Parms Parms; \
	Parms.errorCode=errorCode; \
	Parms.errorMessage=errorMessage; \
	DiscordDisconnected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define beatRush_WIN_Plugins_discordrpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_40_DELEGATE \
struct _Script_DiscordRpc_eventDiscordConnected_Parms \
{ \
	FDiscordUserData joinRequest; \
}; \
static inline void FDiscordConnected_DelegateWrapper(const FMulticastScriptDelegate& DiscordConnected, FDiscordUserData const& joinRequest) \
{ \
	_Script_DiscordRpc_eventDiscordConnected_Parms Parms; \
	Parms.joinRequest=joinRequest; \
	DiscordConnected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define beatRush_WIN_Plugins_discordrpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_94_SPARSE_DATA
#define beatRush_WIN_Plugins_discordrpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_94_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRespond); \
	DECLARE_FUNCTION(execClearPresence); \
	DECLARE_FUNCTION(execUpdatePresence); \
	DECLARE_FUNCTION(execRunCallbacks); \
	DECLARE_FUNCTION(execShutdown); \
	DECLARE_FUNCTION(execInitialize);


#define beatRush_WIN_Plugins_discordrpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRespond); \
	DECLARE_FUNCTION(execClearPresence); \
	DECLARE_FUNCTION(execUpdatePresence); \
	DECLARE_FUNCTION(execRunCallbacks); \
	DECLARE_FUNCTION(execShutdown); \
	DECLARE_FUNCTION(execInitialize);


#define beatRush_WIN_Plugins_discordrpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_94_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDiscordRpc(); \
	friend struct Z_Construct_UClass_UDiscordRpc_Statics; \
public: \
	DECLARE_CLASS(UDiscordRpc, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordRpc"), NO_API) \
	DECLARE_SERIALIZER(UDiscordRpc)


#define beatRush_WIN_Plugins_discordrpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_94_INCLASS \
private: \
	static void StaticRegisterNativesUDiscordRpc(); \
	friend struct Z_Construct_UClass_UDiscordRpc_Statics; \
public: \
	DECLARE_CLASS(UDiscordRpc, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordRpc"), NO_API) \
	DECLARE_SERIALIZER(UDiscordRpc)


#define beatRush_WIN_Plugins_discordrpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_94_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDiscordRpc(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDiscordRpc) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDiscordRpc); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDiscordRpc); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDiscordRpc(UDiscordRpc&&); \
	NO_API UDiscordRpc(const UDiscordRpc&); \
public:


#define beatRush_WIN_Plugins_discordrpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_94_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDiscordRpc(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDiscordRpc(UDiscordRpc&&); \
	NO_API UDiscordRpc(const UDiscordRpc&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDiscordRpc); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDiscordRpc); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDiscordRpc)


#define beatRush_WIN_Plugins_discordrpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_94_PRIVATE_PROPERTY_OFFSET
#define beatRush_WIN_Plugins_discordrpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_92_PROLOG
#define beatRush_WIN_Plugins_discordrpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_94_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	beatRush_WIN_Plugins_discordrpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_94_PRIVATE_PROPERTY_OFFSET \
	beatRush_WIN_Plugins_discordrpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_94_SPARSE_DATA \
	beatRush_WIN_Plugins_discordrpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_94_RPC_WRAPPERS \
	beatRush_WIN_Plugins_discordrpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_94_INCLASS \
	beatRush_WIN_Plugins_discordrpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_94_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define beatRush_WIN_Plugins_discordrpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_94_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	beatRush_WIN_Plugins_discordrpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_94_PRIVATE_PROPERTY_OFFSET \
	beatRush_WIN_Plugins_discordrpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_94_SPARSE_DATA \
	beatRush_WIN_Plugins_discordrpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
	beatRush_WIN_Plugins_discordrpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_94_INCLASS_NO_PURE_DECLS \
	beatRush_WIN_Plugins_discordrpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h_94_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISCORDRPC_API UClass* StaticClass<class UDiscordRpc>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID beatRush_WIN_Plugins_discordrpc_Source_DiscordRpc_Public_DiscordRpcBlueprint_h


#define FOREACH_ENUM_EDISCORDJOINRESPONSECODES(op) \
	op(EDiscordJoinResponseCodes::DISCORD_REPLY_NO) \
	op(EDiscordJoinResponseCodes::DISCORD_REPLY_YES) \
	op(EDiscordJoinResponseCodes::DISCORD_REPLY_IGNORE) 

enum class EDiscordJoinResponseCodes : uint8;
template<> DISCORDRPC_API UEnum* StaticEnum<EDiscordJoinResponseCodes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
