// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameAnalytics/Public/GameAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameAnalytics() {}
// Cross Module References
	GAMEANALYTICS_API UEnum* Z_Construct_UEnum_GameAnalytics_EGAAdError();
	UPackage* Z_Construct_UPackage__Script_GameAnalytics();
	GAMEANALYTICS_API UEnum* Z_Construct_UEnum_GameAnalytics_EGAAdType();
	GAMEANALYTICS_API UEnum* Z_Construct_UEnum_GameAnalytics_EGAAdAction();
	GAMEANALYTICS_API UEnum* Z_Construct_UEnum_GameAnalytics_EGAErrorSeverity();
	GAMEANALYTICS_API UEnum* Z_Construct_UEnum_GameAnalytics_EGAProgressionStatus();
	GAMEANALYTICS_API UEnum* Z_Construct_UEnum_GameAnalytics_EGAResourceFlowType();
	GAMEANALYTICS_API UClass* Z_Construct_UClass_UGameAnalytics_NoRegister();
	GAMEANALYTICS_API UClass* Z_Construct_UClass_UGameAnalytics();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EGAAdError_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameAnalytics_EGAAdError, Z_Construct_UPackage__Script_GameAnalytics(), TEXT("EGAAdError"));
		}
		return Singleton;
	}
	template<> GAMEANALYTICS_API UEnum* StaticEnum<EGAAdError>()
	{
		return EGAAdError_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGAAdError(EGAAdError_StaticEnum, TEXT("/Script/GameAnalytics"), TEXT("EGAAdError"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameAnalytics_EGAAdError_Hash() { return 1006898304U; }
	UEnum* Z_Construct_UEnum_GameAnalytics_EGAAdError()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameAnalytics();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGAAdError"), 0, Get_Z_Construct_UEnum_GameAnalytics_EGAAdError_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGAAdError::undefined", (int64)EGAAdError::undefined },
				{ "EGAAdError::unknown", (int64)EGAAdError::unknown },
				{ "EGAAdError::offline", (int64)EGAAdError::offline },
				{ "EGAAdError::nofill", (int64)EGAAdError::nofill },
				{ "EGAAdError::internalerror", (int64)EGAAdError::internalerror },
				{ "EGAAdError::invalidrequest", (int64)EGAAdError::invalidrequest },
				{ "EGAAdError::unabletoprecache", (int64)EGAAdError::unabletoprecache },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "internalerror.Name", "EGAAdError::internalerror" },
				{ "invalidrequest.Name", "EGAAdError::invalidrequest" },
				{ "ModuleRelativePath", "Public/GameAnalytics.h" },
				{ "nofill.Name", "EGAAdError::nofill" },
				{ "offline.Name", "EGAAdError::offline" },
				{ "unabletoprecache.Name", "EGAAdError::unabletoprecache" },
				{ "undefined.Name", "EGAAdError::undefined" },
				{ "unknown.Name", "EGAAdError::unknown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameAnalytics,
				nullptr,
				"EGAAdError",
				"EGAAdError",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EGAAdType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameAnalytics_EGAAdType, Z_Construct_UPackage__Script_GameAnalytics(), TEXT("EGAAdType"));
		}
		return Singleton;
	}
	template<> GAMEANALYTICS_API UEnum* StaticEnum<EGAAdType>()
	{
		return EGAAdType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGAAdType(EGAAdType_StaticEnum, TEXT("/Script/GameAnalytics"), TEXT("EGAAdType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameAnalytics_EGAAdType_Hash() { return 180145872U; }
	UEnum* Z_Construct_UEnum_GameAnalytics_EGAAdType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameAnalytics();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGAAdType"), 0, Get_Z_Construct_UEnum_GameAnalytics_EGAAdType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGAAdType::undefined", (int64)EGAAdType::undefined },
				{ "EGAAdType::video", (int64)EGAAdType::video },
				{ "EGAAdType::rewardedvideo", (int64)EGAAdType::rewardedvideo },
				{ "EGAAdType::playable", (int64)EGAAdType::playable },
				{ "EGAAdType::interstitial", (int64)EGAAdType::interstitial },
				{ "EGAAdType::offerwall", (int64)EGAAdType::offerwall },
				{ "EGAAdType::banner", (int64)EGAAdType::banner },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "banner.Name", "EGAAdType::banner" },
				{ "interstitial.Name", "EGAAdType::interstitial" },
				{ "ModuleRelativePath", "Public/GameAnalytics.h" },
				{ "offerwall.Name", "EGAAdType::offerwall" },
				{ "playable.Name", "EGAAdType::playable" },
				{ "rewardedvideo.Name", "EGAAdType::rewardedvideo" },
				{ "undefined.Name", "EGAAdType::undefined" },
				{ "video.Name", "EGAAdType::video" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameAnalytics,
				nullptr,
				"EGAAdType",
				"EGAAdType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EGAAdAction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameAnalytics_EGAAdAction, Z_Construct_UPackage__Script_GameAnalytics(), TEXT("EGAAdAction"));
		}
		return Singleton;
	}
	template<> GAMEANALYTICS_API UEnum* StaticEnum<EGAAdAction>()
	{
		return EGAAdAction_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGAAdAction(EGAAdAction_StaticEnum, TEXT("/Script/GameAnalytics"), TEXT("EGAAdAction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameAnalytics_EGAAdAction_Hash() { return 330626889U; }
	UEnum* Z_Construct_UEnum_GameAnalytics_EGAAdAction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameAnalytics();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGAAdAction"), 0, Get_Z_Construct_UEnum_GameAnalytics_EGAAdAction_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGAAdAction::undefined", (int64)EGAAdAction::undefined },
				{ "EGAAdAction::clicked", (int64)EGAAdAction::clicked },
				{ "EGAAdAction::show", (int64)EGAAdAction::show },
				{ "EGAAdAction::failedshow", (int64)EGAAdAction::failedshow },
				{ "EGAAdAction::rewardreceived", (int64)EGAAdAction::rewardreceived },
				{ "EGAAdAction::request", (int64)EGAAdAction::request },
				{ "EGAAdAction::loaded", (int64)EGAAdAction::loaded },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "clicked.Name", "EGAAdAction::clicked" },
				{ "failedshow.Name", "EGAAdAction::failedshow" },
				{ "loaded.Name", "EGAAdAction::loaded" },
				{ "ModuleRelativePath", "Public/GameAnalytics.h" },
				{ "request.Name", "EGAAdAction::request" },
				{ "rewardreceived.Name", "EGAAdAction::rewardreceived" },
				{ "show.Name", "EGAAdAction::show" },
				{ "undefined.Name", "EGAAdAction::undefined" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameAnalytics,
				nullptr,
				"EGAAdAction",
				"EGAAdAction",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EGAErrorSeverity_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameAnalytics_EGAErrorSeverity, Z_Construct_UPackage__Script_GameAnalytics(), TEXT("EGAErrorSeverity"));
		}
		return Singleton;
	}
	template<> GAMEANALYTICS_API UEnum* StaticEnum<EGAErrorSeverity>()
	{
		return EGAErrorSeverity_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGAErrorSeverity(EGAErrorSeverity_StaticEnum, TEXT("/Script/GameAnalytics"), TEXT("EGAErrorSeverity"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameAnalytics_EGAErrorSeverity_Hash() { return 3267691739U; }
	UEnum* Z_Construct_UEnum_GameAnalytics_EGAErrorSeverity()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameAnalytics();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGAErrorSeverity"), 0, Get_Z_Construct_UEnum_GameAnalytics_EGAErrorSeverity_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGAErrorSeverity::undefined", (int64)EGAErrorSeverity::undefined },
				{ "EGAErrorSeverity::debug", (int64)EGAErrorSeverity::debug },
				{ "EGAErrorSeverity::info", (int64)EGAErrorSeverity::info },
				{ "EGAErrorSeverity::warning", (int64)EGAErrorSeverity::warning },
				{ "EGAErrorSeverity::error", (int64)EGAErrorSeverity::error },
				{ "EGAErrorSeverity::critical", (int64)EGAErrorSeverity::critical },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "critical.Name", "EGAErrorSeverity::critical" },
				{ "debug.Name", "EGAErrorSeverity::debug" },
				{ "error.Name", "EGAErrorSeverity::error" },
				{ "info.Name", "EGAErrorSeverity::info" },
				{ "ModuleRelativePath", "Public/GameAnalytics.h" },
				{ "undefined.Name", "EGAErrorSeverity::undefined" },
				{ "warning.Name", "EGAErrorSeverity::warning" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameAnalytics,
				nullptr,
				"EGAErrorSeverity",
				"EGAErrorSeverity",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EGAProgressionStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameAnalytics_EGAProgressionStatus, Z_Construct_UPackage__Script_GameAnalytics(), TEXT("EGAProgressionStatus"));
		}
		return Singleton;
	}
	template<> GAMEANALYTICS_API UEnum* StaticEnum<EGAProgressionStatus>()
	{
		return EGAProgressionStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGAProgressionStatus(EGAProgressionStatus_StaticEnum, TEXT("/Script/GameAnalytics"), TEXT("EGAProgressionStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameAnalytics_EGAProgressionStatus_Hash() { return 1010600990U; }
	UEnum* Z_Construct_UEnum_GameAnalytics_EGAProgressionStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameAnalytics();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGAProgressionStatus"), 0, Get_Z_Construct_UEnum_GameAnalytics_EGAProgressionStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGAProgressionStatus::undefined", (int64)EGAProgressionStatus::undefined },
				{ "EGAProgressionStatus::start", (int64)EGAProgressionStatus::start },
				{ "EGAProgressionStatus::complete", (int64)EGAProgressionStatus::complete },
				{ "EGAProgressionStatus::fail", (int64)EGAProgressionStatus::fail },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "complete.Name", "EGAProgressionStatus::complete" },
				{ "fail.Name", "EGAProgressionStatus::fail" },
				{ "ModuleRelativePath", "Public/GameAnalytics.h" },
				{ "start.Name", "EGAProgressionStatus::start" },
				{ "undefined.Name", "EGAProgressionStatus::undefined" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameAnalytics,
				nullptr,
				"EGAProgressionStatus",
				"EGAProgressionStatus",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EGAResourceFlowType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameAnalytics_EGAResourceFlowType, Z_Construct_UPackage__Script_GameAnalytics(), TEXT("EGAResourceFlowType"));
		}
		return Singleton;
	}
	template<> GAMEANALYTICS_API UEnum* StaticEnum<EGAResourceFlowType>()
	{
		return EGAResourceFlowType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGAResourceFlowType(EGAResourceFlowType_StaticEnum, TEXT("/Script/GameAnalytics"), TEXT("EGAResourceFlowType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameAnalytics_EGAResourceFlowType_Hash() { return 910123622U; }
	UEnum* Z_Construct_UEnum_GameAnalytics_EGAResourceFlowType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameAnalytics();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGAResourceFlowType"), 0, Get_Z_Construct_UEnum_GameAnalytics_EGAResourceFlowType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGAResourceFlowType::undefined", (int64)EGAResourceFlowType::undefined },
				{ "EGAResourceFlowType::source", (int64)EGAResourceFlowType::source },
				{ "EGAResourceFlowType::sink", (int64)EGAResourceFlowType::sink },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GameAnalytics.h" },
				{ "sink.Name", "EGAResourceFlowType::sink" },
				{ "source.Name", "EGAResourceFlowType::source" },
				{ "undefined.Name", "EGAResourceFlowType::undefined" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameAnalytics,
				nullptr,
				"EGAResourceFlowType",
				"EGAResourceFlowType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UGameAnalytics::execOnQuit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameAnalytics::OnQuit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAnalytics::execGetABTestingVariantId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UGameAnalytics::GetABTestingVariantId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAnalytics::execGetABTestingId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UGameAnalytics::GetABTestingId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAnalytics::execGetRemoteConfigsContentAsString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UGameAnalytics::GetRemoteConfigsContentAsString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAnalytics::execIsRemoteConfigsReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGameAnalytics::IsRemoteConfigsReady();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAnalytics::execGetRemoteConfigsValueAsStringWithDefaultValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_DefaultValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UGameAnalytics::GetRemoteConfigsValueAsStringWithDefaultValue(Z_Param_Key,Z_Param_DefaultValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAnalytics::execGetRemoteConfigsValueAsString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UGameAnalytics::GetRemoteConfigsValueAsString(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAnalytics::execSetCustomDimension03)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CustomDimension);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameAnalytics::SetCustomDimension03(Z_Param_CustomDimension);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAnalytics::execSetCustomDimension02)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CustomDimension);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameAnalytics::SetCustomDimension02(Z_Param_CustomDimension);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAnalytics::execSetCustomDimension01)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CustomDimension);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameAnalytics::SetCustomDimension01(Z_Param_CustomDimension);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAnalytics::execAddAdEventWithNoAdReason)
	{
		P_GET_ENUM(EGAAdAction,Z_Param_action);
		P_GET_ENUM(EGAAdType,Z_Param_adType);
		P_GET_PROPERTY(FStrProperty,Z_Param_adSdkName);
		P_GET_PROPERTY(FStrProperty,Z_Param_adPlacement);
		P_GET_ENUM(EGAAdError,Z_Param_noAdReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameAnalytics::AddAdEventWithNoAdReason(EGAAdAction(Z_Param_action),EGAAdType(Z_Param_adType),Z_Param_adSdkName,Z_Param_adPlacement,EGAAdError(Z_Param_noAdReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAnalytics::execAddAdEventWithDuration)
	{
		P_GET_ENUM(EGAAdAction,Z_Param_action);
		P_GET_ENUM(EGAAdType,Z_Param_adType);
		P_GET_PROPERTY(FStrProperty,Z_Param_adSdkName);
		P_GET_PROPERTY(FStrProperty,Z_Param_adPlacement);
		P_GET_PROPERTY(FInt64Property,Z_Param_duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameAnalytics::AddAdEventWithDuration(EGAAdAction(Z_Param_action),EGAAdType(Z_Param_adType),Z_Param_adSdkName,Z_Param_adPlacement,Z_Param_duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAnalytics::execAddAdEvent)
	{
		P_GET_ENUM(EGAAdAction,Z_Param_action);
		P_GET_ENUM(EGAAdType,Z_Param_adType);
		P_GET_PROPERTY(FStrProperty,Z_Param_adSdkName);
		P_GET_PROPERTY(FStrProperty,Z_Param_adPlacement);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameAnalytics::AddAdEvent(EGAAdAction(Z_Param_action),EGAAdType(Z_Param_adType),Z_Param_adSdkName,Z_Param_adPlacement);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAnalytics::execAddErrorEvent)
	{
		P_GET_ENUM(EGAErrorSeverity,Z_Param_Severity);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameAnalytics::AddErrorEvent(EGAErrorSeverity(Z_Param_Severity),Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAnalytics::execAddDesignEventWithValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_EventId);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameAnalytics::AddDesignEventWithValue(Z_Param_EventId,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAnalytics::execAddDesignEvent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_EventId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameAnalytics::AddDesignEvent(Z_Param_EventId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAnalytics::execAddProgressionEventWithOneTwoThreeAndScore)
	{
		P_GET_ENUM(EGAProgressionStatus,Z_Param_ProgressionStatus);
		P_GET_PROPERTY(FStrProperty,Z_Param_Progression01);
		P_GET_PROPERTY(FStrProperty,Z_Param_Progression02);
		P_GET_PROPERTY(FStrProperty,Z_Param_Progression03);
		P_GET_PROPERTY(FIntProperty,Z_Param_Score);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameAnalytics::AddProgressionEventWithOneTwoThreeAndScore(EGAProgressionStatus(Z_Param_ProgressionStatus),Z_Param_Progression01,Z_Param_Progression02,Z_Param_Progression03,Z_Param_Score);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAnalytics::execAddProgressionEventWithOneTwoAndThree)
	{
		P_GET_ENUM(EGAProgressionStatus,Z_Param_ProgressionStatus);
		P_GET_PROPERTY(FStrProperty,Z_Param_Progression01);
		P_GET_PROPERTY(FStrProperty,Z_Param_Progression02);
		P_GET_PROPERTY(FStrProperty,Z_Param_Progression03);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameAnalytics::AddProgressionEventWithOneTwoAndThree(EGAProgressionStatus(Z_Param_ProgressionStatus),Z_Param_Progression01,Z_Param_Progression02,Z_Param_Progression03);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAnalytics::execAddProgressionEventWithOneTwoAndScore)
	{
		P_GET_ENUM(EGAProgressionStatus,Z_Param_ProgressionStatus);
		P_GET_PROPERTY(FStrProperty,Z_Param_Progression01);
		P_GET_PROPERTY(FStrProperty,Z_Param_Progression02);
		P_GET_PROPERTY(FIntProperty,Z_Param_Score);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameAnalytics::AddProgressionEventWithOneTwoAndScore(EGAProgressionStatus(Z_Param_ProgressionStatus),Z_Param_Progression01,Z_Param_Progression02,Z_Param_Score);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAnalytics::execAddProgressionEventWithOneAndTwo)
	{
		P_GET_ENUM(EGAProgressionStatus,Z_Param_ProgressionStatus);
		P_GET_PROPERTY(FStrProperty,Z_Param_Progression01);
		P_GET_PROPERTY(FStrProperty,Z_Param_Progression02);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameAnalytics::AddProgressionEventWithOneAndTwo(EGAProgressionStatus(Z_Param_ProgressionStatus),Z_Param_Progression01,Z_Param_Progression02);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAnalytics::execAddProgressionEventWithOneAndScore)
	{
		P_GET_ENUM(EGAProgressionStatus,Z_Param_ProgressionStatus);
		P_GET_PROPERTY(FStrProperty,Z_Param_Progression01);
		P_GET_PROPERTY(FIntProperty,Z_Param_Score);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameAnalytics::AddProgressionEventWithOneAndScore(EGAProgressionStatus(Z_Param_ProgressionStatus),Z_Param_Progression01,Z_Param_Score);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAnalytics::execAddProgressionEventWithOne)
	{
		P_GET_ENUM(EGAProgressionStatus,Z_Param_ProgressionStatus);
		P_GET_PROPERTY(FStrProperty,Z_Param_Progression01);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameAnalytics::AddProgressionEventWithOne(EGAProgressionStatus(Z_Param_ProgressionStatus),Z_Param_Progression01);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAnalytics::execAddResourceEvent)
	{
		P_GET_ENUM(EGAResourceFlowType,Z_Param_FlowType);
		P_GET_PROPERTY(FStrProperty,Z_Param_Currency);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemType);
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameAnalytics::AddResourceEvent(EGAResourceFlowType(Z_Param_FlowType),Z_Param_Currency,Z_Param_Amount,Z_Param_ItemType,Z_Param_ItemId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAnalytics::execAddBusinessEvent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Currency);
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemType);
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemId);
		P_GET_PROPERTY(FStrProperty,Z_Param_CartType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameAnalytics::AddBusinessEvent(Z_Param_Currency,Z_Param_Amount,Z_Param_ItemType,Z_Param_ItemId,Z_Param_CartType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAnalytics::execAddBusinessEventAndroid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Currency);
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemType);
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemId);
		P_GET_PROPERTY(FStrProperty,Z_Param_CartType);
		P_GET_PROPERTY(FStrProperty,Z_Param_Receipt);
		P_GET_PROPERTY(FStrProperty,Z_Param_Signature);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameAnalytics::AddBusinessEventAndroid(Z_Param_Currency,Z_Param_Amount,Z_Param_ItemType,Z_Param_ItemId,Z_Param_CartType,Z_Param_Receipt,Z_Param_Signature);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAnalytics::execAddBusinessEventAndAutoFetchReceipt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Currency);
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemType);
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemId);
		P_GET_PROPERTY(FStrProperty,Z_Param_CartType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameAnalytics::AddBusinessEventAndAutoFetchReceipt(Z_Param_Currency,Z_Param_Amount,Z_Param_ItemType,Z_Param_ItemId,Z_Param_CartType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameAnalytics::execAddBusinessEventIOS)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Currency);
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemType);
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemId);
		P_GET_PROPERTY(FStrProperty,Z_Param_CartType);
		P_GET_PROPERTY(FStrProperty,Z_Param_Receipt);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameAnalytics::AddBusinessEventIOS(Z_Param_Currency,Z_Param_Amount,Z_Param_ItemType,Z_Param_ItemId,Z_Param_CartType,Z_Param_Receipt);
		P_NATIVE_END;
	}
	void UGameAnalytics::StaticRegisterNativesUGameAnalytics()
	{
		UClass* Class = UGameAnalytics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAdEvent", &UGameAnalytics::execAddAdEvent },
			{ "AddAdEventWithDuration", &UGameAnalytics::execAddAdEventWithDuration },
			{ "AddAdEventWithNoAdReason", &UGameAnalytics::execAddAdEventWithNoAdReason },
			{ "AddBusinessEvent", &UGameAnalytics::execAddBusinessEvent },
			{ "AddBusinessEventAndAutoFetchReceipt", &UGameAnalytics::execAddBusinessEventAndAutoFetchReceipt },
			{ "AddBusinessEventAndroid", &UGameAnalytics::execAddBusinessEventAndroid },
			{ "AddBusinessEventIOS", &UGameAnalytics::execAddBusinessEventIOS },
			{ "AddDesignEvent", &UGameAnalytics::execAddDesignEvent },
			{ "AddDesignEventWithValue", &UGameAnalytics::execAddDesignEventWithValue },
			{ "AddErrorEvent", &UGameAnalytics::execAddErrorEvent },
			{ "AddProgressionEventWithOne", &UGameAnalytics::execAddProgressionEventWithOne },
			{ "AddProgressionEventWithOneAndScore", &UGameAnalytics::execAddProgressionEventWithOneAndScore },
			{ "AddProgressionEventWithOneAndTwo", &UGameAnalytics::execAddProgressionEventWithOneAndTwo },
			{ "AddProgressionEventWithOneTwoAndScore", &UGameAnalytics::execAddProgressionEventWithOneTwoAndScore },
			{ "AddProgressionEventWithOneTwoAndThree", &UGameAnalytics::execAddProgressionEventWithOneTwoAndThree },
			{ "AddProgressionEventWithOneTwoThreeAndScore", &UGameAnalytics::execAddProgressionEventWithOneTwoThreeAndScore },
			{ "AddResourceEvent", &UGameAnalytics::execAddResourceEvent },
			{ "GetABTestingId", &UGameAnalytics::execGetABTestingId },
			{ "GetABTestingVariantId", &UGameAnalytics::execGetABTestingVariantId },
			{ "GetRemoteConfigsContentAsString", &UGameAnalytics::execGetRemoteConfigsContentAsString },
			{ "GetRemoteConfigsValueAsString", &UGameAnalytics::execGetRemoteConfigsValueAsString },
			{ "GetRemoteConfigsValueAsStringWithDefaultValue", &UGameAnalytics::execGetRemoteConfigsValueAsStringWithDefaultValue },
			{ "IsRemoteConfigsReady", &UGameAnalytics::execIsRemoteConfigsReady },
			{ "OnQuit", &UGameAnalytics::execOnQuit },
			{ "SetCustomDimension01", &UGameAnalytics::execSetCustomDimension01 },
			{ "SetCustomDimension02", &UGameAnalytics::execSetCustomDimension02 },
			{ "SetCustomDimension03", &UGameAnalytics::execSetCustomDimension03 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameAnalytics_AddAdEvent_Statics
	{
		struct GameAnalytics_eventAddAdEvent_Parms
		{
			EGAAdAction action;
			EGAAdType adType;
			FString adSdkName;
			FString adPlacement;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_adPlacement_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_adPlacement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_adSdkName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_adSdkName;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_adType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_adType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_action;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_action_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddAdEvent_Statics::NewProp_adPlacement_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddAdEvent_Statics::NewProp_adPlacement = { "adPlacement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddAdEvent_Parms, adPlacement), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddAdEvent_Statics::NewProp_adPlacement_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddAdEvent_Statics::NewProp_adPlacement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddAdEvent_Statics::NewProp_adSdkName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddAdEvent_Statics::NewProp_adSdkName = { "adSdkName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddAdEvent_Parms, adSdkName), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddAdEvent_Statics::NewProp_adSdkName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddAdEvent_Statics::NewProp_adSdkName_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameAnalytics_AddAdEvent_Statics::NewProp_adType = { "adType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddAdEvent_Parms, adType), Z_Construct_UEnum_GameAnalytics_EGAAdType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameAnalytics_AddAdEvent_Statics::NewProp_adType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameAnalytics_AddAdEvent_Statics::NewProp_action = { "action", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddAdEvent_Parms, action), Z_Construct_UEnum_GameAnalytics_EGAAdAction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameAnalytics_AddAdEvent_Statics::NewProp_action_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_AddAdEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddAdEvent_Statics::NewProp_adPlacement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddAdEvent_Statics::NewProp_adSdkName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddAdEvent_Statics::NewProp_adType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddAdEvent_Statics::NewProp_adType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddAdEvent_Statics::NewProp_action,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddAdEvent_Statics::NewProp_action_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddAdEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "Comment", "/*, const char *fields*/" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
		{ "ToolTip", ", const char *fields" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_AddAdEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "AddAdEvent", nullptr, nullptr, sizeof(GameAnalytics_eventAddAdEvent_Parms), Z_Construct_UFunction_UGameAnalytics_AddAdEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddAdEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddAdEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddAdEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_AddAdEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_AddAdEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_AddAdEventWithDuration_Statics
	{
		struct GameAnalytics_eventAddAdEventWithDuration_Parms
		{
			EGAAdAction action;
			EGAAdType adType;
			FString adSdkName;
			FString adPlacement;
			int64 duration;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_adPlacement_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_adPlacement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_adSdkName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_adSdkName;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_adType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_adType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_action;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_action_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UGameAnalytics_AddAdEventWithDuration_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddAdEventWithDuration_Parms, duration), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddAdEventWithDuration_Statics::NewProp_adPlacement_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddAdEventWithDuration_Statics::NewProp_adPlacement = { "adPlacement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddAdEventWithDuration_Parms, adPlacement), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddAdEventWithDuration_Statics::NewProp_adPlacement_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddAdEventWithDuration_Statics::NewProp_adPlacement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddAdEventWithDuration_Statics::NewProp_adSdkName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddAdEventWithDuration_Statics::NewProp_adSdkName = { "adSdkName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddAdEventWithDuration_Parms, adSdkName), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddAdEventWithDuration_Statics::NewProp_adSdkName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddAdEventWithDuration_Statics::NewProp_adSdkName_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameAnalytics_AddAdEventWithDuration_Statics::NewProp_adType = { "adType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddAdEventWithDuration_Parms, adType), Z_Construct_UEnum_GameAnalytics_EGAAdType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameAnalytics_AddAdEventWithDuration_Statics::NewProp_adType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameAnalytics_AddAdEventWithDuration_Statics::NewProp_action = { "action", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddAdEventWithDuration_Parms, action), Z_Construct_UEnum_GameAnalytics_EGAAdAction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameAnalytics_AddAdEventWithDuration_Statics::NewProp_action_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_AddAdEventWithDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddAdEventWithDuration_Statics::NewProp_duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddAdEventWithDuration_Statics::NewProp_adPlacement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddAdEventWithDuration_Statics::NewProp_adSdkName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddAdEventWithDuration_Statics::NewProp_adType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddAdEventWithDuration_Statics::NewProp_adType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddAdEventWithDuration_Statics::NewProp_action,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddAdEventWithDuration_Statics::NewProp_action_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddAdEventWithDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "Comment", "/*, const char *fields*/" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
		{ "ToolTip", ", const char *fields" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_AddAdEventWithDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "AddAdEventWithDuration", nullptr, nullptr, sizeof(GameAnalytics_eventAddAdEventWithDuration_Parms), Z_Construct_UFunction_UGameAnalytics_AddAdEventWithDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddAdEventWithDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddAdEventWithDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddAdEventWithDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_AddAdEventWithDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_AddAdEventWithDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_AddAdEventWithNoAdReason_Statics
	{
		struct GameAnalytics_eventAddAdEventWithNoAdReason_Parms
		{
			EGAAdAction action;
			EGAAdType adType;
			FString adSdkName;
			FString adPlacement;
			EGAAdError noAdReason;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_noAdReason;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_noAdReason_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_adPlacement_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_adPlacement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_adSdkName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_adSdkName;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_adType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_adType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_action;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_action_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameAnalytics_AddAdEventWithNoAdReason_Statics::NewProp_noAdReason = { "noAdReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddAdEventWithNoAdReason_Parms, noAdReason), Z_Construct_UEnum_GameAnalytics_EGAAdError, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameAnalytics_AddAdEventWithNoAdReason_Statics::NewProp_noAdReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddAdEventWithNoAdReason_Statics::NewProp_adPlacement_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddAdEventWithNoAdReason_Statics::NewProp_adPlacement = { "adPlacement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddAdEventWithNoAdReason_Parms, adPlacement), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddAdEventWithNoAdReason_Statics::NewProp_adPlacement_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddAdEventWithNoAdReason_Statics::NewProp_adPlacement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddAdEventWithNoAdReason_Statics::NewProp_adSdkName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddAdEventWithNoAdReason_Statics::NewProp_adSdkName = { "adSdkName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddAdEventWithNoAdReason_Parms, adSdkName), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddAdEventWithNoAdReason_Statics::NewProp_adSdkName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddAdEventWithNoAdReason_Statics::NewProp_adSdkName_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameAnalytics_AddAdEventWithNoAdReason_Statics::NewProp_adType = { "adType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddAdEventWithNoAdReason_Parms, adType), Z_Construct_UEnum_GameAnalytics_EGAAdType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameAnalytics_AddAdEventWithNoAdReason_Statics::NewProp_adType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameAnalytics_AddAdEventWithNoAdReason_Statics::NewProp_action = { "action", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddAdEventWithNoAdReason_Parms, action), Z_Construct_UEnum_GameAnalytics_EGAAdAction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameAnalytics_AddAdEventWithNoAdReason_Statics::NewProp_action_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_AddAdEventWithNoAdReason_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddAdEventWithNoAdReason_Statics::NewProp_noAdReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddAdEventWithNoAdReason_Statics::NewProp_noAdReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddAdEventWithNoAdReason_Statics::NewProp_adPlacement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddAdEventWithNoAdReason_Statics::NewProp_adSdkName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddAdEventWithNoAdReason_Statics::NewProp_adType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddAdEventWithNoAdReason_Statics::NewProp_adType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddAdEventWithNoAdReason_Statics::NewProp_action,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddAdEventWithNoAdReason_Statics::NewProp_action_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddAdEventWithNoAdReason_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "Comment", "/*, const char *fields*/" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
		{ "ToolTip", ", const char *fields" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_AddAdEventWithNoAdReason_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "AddAdEventWithNoAdReason", nullptr, nullptr, sizeof(GameAnalytics_eventAddAdEventWithNoAdReason_Parms), Z_Construct_UFunction_UGameAnalytics_AddAdEventWithNoAdReason_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddAdEventWithNoAdReason_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddAdEventWithNoAdReason_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddAdEventWithNoAdReason_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_AddAdEventWithNoAdReason()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_AddAdEventWithNoAdReason_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics
	{
		struct GameAnalytics_eventAddBusinessEvent_Parms
		{
			FString Currency;
			int32 Amount;
			FString ItemType;
			FString ItemId;
			FString CartType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CartType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CartType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemType;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Currency_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Currency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::NewProp_CartType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::NewProp_CartType = { "CartType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddBusinessEvent_Parms, CartType), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::NewProp_CartType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::NewProp_CartType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddBusinessEvent_Parms, ItemId), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::NewProp_ItemType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddBusinessEvent_Parms, ItemType), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::NewProp_ItemType_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddBusinessEvent_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::NewProp_Currency_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddBusinessEvent_Parms, Currency), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::NewProp_Currency_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::NewProp_Currency_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::NewProp_CartType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::NewProp_ItemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::NewProp_Currency,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "Comment", "/*, const char *fields*/" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
		{ "ToolTip", ", const char *fields" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "AddBusinessEvent", nullptr, nullptr, sizeof(GameAnalytics_eventAddBusinessEvent_Parms), Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics
	{
		struct GameAnalytics_eventAddBusinessEventAndAutoFetchReceipt_Parms
		{
			FString Currency;
			int32 Amount;
			FString ItemType;
			FString ItemId;
			FString CartType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CartType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CartType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemType;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Currency_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Currency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::NewProp_CartType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::NewProp_CartType = { "CartType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddBusinessEventAndAutoFetchReceipt_Parms, CartType), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::NewProp_CartType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::NewProp_CartType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddBusinessEventAndAutoFetchReceipt_Parms, ItemId), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::NewProp_ItemType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddBusinessEventAndAutoFetchReceipt_Parms, ItemType), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::NewProp_ItemType_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddBusinessEventAndAutoFetchReceipt_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::NewProp_Currency_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddBusinessEventAndAutoFetchReceipt_Parms, Currency), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::NewProp_Currency_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::NewProp_Currency_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::NewProp_CartType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::NewProp_ItemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::NewProp_Currency,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "Comment", "/*, const char *fields*/" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
		{ "ToolTip", ", const char *fields" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "AddBusinessEventAndAutoFetchReceipt", nullptr, nullptr, sizeof(GameAnalytics_eventAddBusinessEventAndAutoFetchReceipt_Parms), Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics
	{
		struct GameAnalytics_eventAddBusinessEventAndroid_Parms
		{
			FString Currency;
			int32 Amount;
			FString ItemType;
			FString ItemId;
			FString CartType;
			FString Receipt;
			FString Signature;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Signature_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Signature;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Receipt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Receipt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CartType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CartType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemType;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Currency_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Currency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_Signature_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_Signature = { "Signature", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddBusinessEventAndroid_Parms, Signature), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_Signature_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_Signature_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_Receipt_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_Receipt = { "Receipt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddBusinessEventAndroid_Parms, Receipt), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_Receipt_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_Receipt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_CartType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_CartType = { "CartType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddBusinessEventAndroid_Parms, CartType), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_CartType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_CartType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddBusinessEventAndroid_Parms, ItemId), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_ItemType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddBusinessEventAndroid_Parms, ItemType), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_ItemType_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddBusinessEventAndroid_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_Currency_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddBusinessEventAndroid_Parms, Currency), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_Currency_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_Currency_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_Signature,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_Receipt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_CartType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_ItemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_Currency,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "Comment", "/*, const char *fields*/" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
		{ "ToolTip", ", const char *fields" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "AddBusinessEventAndroid", nullptr, nullptr, sizeof(GameAnalytics_eventAddBusinessEventAndroid_Parms), Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics
	{
		struct GameAnalytics_eventAddBusinessEventIOS_Parms
		{
			FString Currency;
			int32 Amount;
			FString ItemType;
			FString ItemId;
			FString CartType;
			FString Receipt;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Receipt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Receipt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CartType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CartType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemType;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Currency_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Currency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_Receipt_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_Receipt = { "Receipt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddBusinessEventIOS_Parms, Receipt), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_Receipt_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_Receipt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_CartType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_CartType = { "CartType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddBusinessEventIOS_Parms, CartType), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_CartType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_CartType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddBusinessEventIOS_Parms, ItemId), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_ItemType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddBusinessEventIOS_Parms, ItemType), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_ItemType_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddBusinessEventIOS_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_Currency_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddBusinessEventIOS_Parms, Currency), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_Currency_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_Currency_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_Receipt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_CartType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_ItemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_Currency,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "Comment", "/*, const char *fields*/" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
		{ "ToolTip", ", const char *fields" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "AddBusinessEventIOS", nullptr, nullptr, sizeof(GameAnalytics_eventAddBusinessEventIOS_Parms), Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_AddDesignEvent_Statics
	{
		struct GameAnalytics_eventAddDesignEvent_Parms
		{
			FString EventId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddDesignEvent_Statics::NewProp_EventId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddDesignEvent_Statics::NewProp_EventId = { "EventId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddDesignEvent_Parms, EventId), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddDesignEvent_Statics::NewProp_EventId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddDesignEvent_Statics::NewProp_EventId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_AddDesignEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddDesignEvent_Statics::NewProp_EventId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddDesignEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "Comment", "/*, const char *fields*/" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
		{ "ToolTip", ", const char *fields" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_AddDesignEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "AddDesignEvent", nullptr, nullptr, sizeof(GameAnalytics_eventAddDesignEvent_Parms), Z_Construct_UFunction_UGameAnalytics_AddDesignEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddDesignEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddDesignEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddDesignEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_AddDesignEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_AddDesignEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_AddDesignEventWithValue_Statics
	{
		struct GameAnalytics_eventAddDesignEventWithValue_Parms
		{
			FString EventId;
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameAnalytics_AddDesignEventWithValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddDesignEventWithValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddDesignEventWithValue_Statics::NewProp_EventId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddDesignEventWithValue_Statics::NewProp_EventId = { "EventId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddDesignEventWithValue_Parms, EventId), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddDesignEventWithValue_Statics::NewProp_EventId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddDesignEventWithValue_Statics::NewProp_EventId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_AddDesignEventWithValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddDesignEventWithValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddDesignEventWithValue_Statics::NewProp_EventId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddDesignEventWithValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "Comment", "/*, const char *fields*/" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
		{ "ToolTip", ", const char *fields" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_AddDesignEventWithValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "AddDesignEventWithValue", nullptr, nullptr, sizeof(GameAnalytics_eventAddDesignEventWithValue_Parms), Z_Construct_UFunction_UGameAnalytics_AddDesignEventWithValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddDesignEventWithValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddDesignEventWithValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddDesignEventWithValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_AddDesignEventWithValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_AddDesignEventWithValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_AddErrorEvent_Statics
	{
		struct GameAnalytics_eventAddErrorEvent_Parms
		{
			EGAErrorSeverity Severity;
			FString Message;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Severity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Severity_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddErrorEvent_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddErrorEvent_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddErrorEvent_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddErrorEvent_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddErrorEvent_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameAnalytics_AddErrorEvent_Statics::NewProp_Severity = { "Severity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddErrorEvent_Parms, Severity), Z_Construct_UEnum_GameAnalytics_EGAErrorSeverity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameAnalytics_AddErrorEvent_Statics::NewProp_Severity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_AddErrorEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddErrorEvent_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddErrorEvent_Statics::NewProp_Severity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddErrorEvent_Statics::NewProp_Severity_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddErrorEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "Comment", "/*, const char *fields*/" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
		{ "ToolTip", ", const char *fields" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_AddErrorEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "AddErrorEvent", nullptr, nullptr, sizeof(GameAnalytics_eventAddErrorEvent_Parms), Z_Construct_UFunction_UGameAnalytics_AddErrorEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddErrorEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddErrorEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddErrorEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_AddErrorEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_AddErrorEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOne_Statics
	{
		struct GameAnalytics_eventAddProgressionEventWithOne_Parms
		{
			EGAProgressionStatus ProgressionStatus;
			FString Progression01;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Progression01_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Progression01;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ProgressionStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProgressionStatus_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOne_Statics::NewProp_Progression01_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOne_Statics::NewProp_Progression01 = { "Progression01", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddProgressionEventWithOne_Parms, Progression01), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOne_Statics::NewProp_Progression01_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOne_Statics::NewProp_Progression01_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOne_Statics::NewProp_ProgressionStatus = { "ProgressionStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddProgressionEventWithOne_Parms, ProgressionStatus), Z_Construct_UEnum_GameAnalytics_EGAProgressionStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOne_Statics::NewProp_ProgressionStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOne_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOne_Statics::NewProp_Progression01,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOne_Statics::NewProp_ProgressionStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOne_Statics::NewProp_ProgressionStatus_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOne_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "Comment", "/*, const char *fields*/" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
		{ "ToolTip", ", const char *fields" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOne_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "AddProgressionEventWithOne", nullptr, nullptr, sizeof(GameAnalytics_eventAddProgressionEventWithOne_Parms), Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOne_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOne_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOne_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOne_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOne()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOne_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndScore_Statics
	{
		struct GameAnalytics_eventAddProgressionEventWithOneAndScore_Parms
		{
			EGAProgressionStatus ProgressionStatus;
			FString Progression01;
			int32 Score;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Score;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Progression01_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Progression01;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ProgressionStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProgressionStatus_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndScore_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddProgressionEventWithOneAndScore_Parms, Score), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndScore_Statics::NewProp_Progression01_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndScore_Statics::NewProp_Progression01 = { "Progression01", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddProgressionEventWithOneAndScore_Parms, Progression01), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndScore_Statics::NewProp_Progression01_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndScore_Statics::NewProp_Progression01_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndScore_Statics::NewProp_ProgressionStatus = { "ProgressionStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddProgressionEventWithOneAndScore_Parms, ProgressionStatus), Z_Construct_UEnum_GameAnalytics_EGAProgressionStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndScore_Statics::NewProp_ProgressionStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndScore_Statics::NewProp_Score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndScore_Statics::NewProp_Progression01,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndScore_Statics::NewProp_ProgressionStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndScore_Statics::NewProp_ProgressionStatus_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "Comment", "/*, const char *fields*/" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
		{ "ToolTip", ", const char *fields" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "AddProgressionEventWithOneAndScore", nullptr, nullptr, sizeof(GameAnalytics_eventAddProgressionEventWithOneAndScore_Parms), Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo_Statics
	{
		struct GameAnalytics_eventAddProgressionEventWithOneAndTwo_Parms
		{
			EGAProgressionStatus ProgressionStatus;
			FString Progression01;
			FString Progression02;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Progression02_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Progression02;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Progression01_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Progression01;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ProgressionStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProgressionStatus_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo_Statics::NewProp_Progression02_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo_Statics::NewProp_Progression02 = { "Progression02", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddProgressionEventWithOneAndTwo_Parms, Progression02), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo_Statics::NewProp_Progression02_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo_Statics::NewProp_Progression02_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo_Statics::NewProp_Progression01_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo_Statics::NewProp_Progression01 = { "Progression01", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddProgressionEventWithOneAndTwo_Parms, Progression01), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo_Statics::NewProp_Progression01_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo_Statics::NewProp_Progression01_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo_Statics::NewProp_ProgressionStatus = { "ProgressionStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddProgressionEventWithOneAndTwo_Parms, ProgressionStatus), Z_Construct_UEnum_GameAnalytics_EGAProgressionStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo_Statics::NewProp_ProgressionStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo_Statics::NewProp_Progression02,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo_Statics::NewProp_Progression01,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo_Statics::NewProp_ProgressionStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo_Statics::NewProp_ProgressionStatus_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "Comment", "/*, const char *fields*/" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
		{ "ToolTip", ", const char *fields" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "AddProgressionEventWithOneAndTwo", nullptr, nullptr, sizeof(GameAnalytics_eventAddProgressionEventWithOneAndTwo_Parms), Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics
	{
		struct GameAnalytics_eventAddProgressionEventWithOneTwoAndScore_Parms
		{
			EGAProgressionStatus ProgressionStatus;
			FString Progression01;
			FString Progression02;
			int32 Score;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Score;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Progression02_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Progression02;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Progression01_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Progression01;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ProgressionStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProgressionStatus_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddProgressionEventWithOneTwoAndScore_Parms, Score), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::NewProp_Progression02_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::NewProp_Progression02 = { "Progression02", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddProgressionEventWithOneTwoAndScore_Parms, Progression02), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::NewProp_Progression02_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::NewProp_Progression02_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::NewProp_Progression01_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::NewProp_Progression01 = { "Progression01", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddProgressionEventWithOneTwoAndScore_Parms, Progression01), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::NewProp_Progression01_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::NewProp_Progression01_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::NewProp_ProgressionStatus = { "ProgressionStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddProgressionEventWithOneTwoAndScore_Parms, ProgressionStatus), Z_Construct_UEnum_GameAnalytics_EGAProgressionStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::NewProp_ProgressionStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::NewProp_Score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::NewProp_Progression02,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::NewProp_Progression01,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::NewProp_ProgressionStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::NewProp_ProgressionStatus_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "Comment", "/*, const char *fields*/" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
		{ "ToolTip", ", const char *fields" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "AddProgressionEventWithOneTwoAndScore", nullptr, nullptr, sizeof(GameAnalytics_eventAddProgressionEventWithOneTwoAndScore_Parms), Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics
	{
		struct GameAnalytics_eventAddProgressionEventWithOneTwoAndThree_Parms
		{
			EGAProgressionStatus ProgressionStatus;
			FString Progression01;
			FString Progression02;
			FString Progression03;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Progression03_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Progression03;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Progression02_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Progression02;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Progression01_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Progression01;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ProgressionStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProgressionStatus_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::NewProp_Progression03_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::NewProp_Progression03 = { "Progression03", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddProgressionEventWithOneTwoAndThree_Parms, Progression03), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::NewProp_Progression03_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::NewProp_Progression03_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::NewProp_Progression02_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::NewProp_Progression02 = { "Progression02", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddProgressionEventWithOneTwoAndThree_Parms, Progression02), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::NewProp_Progression02_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::NewProp_Progression02_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::NewProp_Progression01_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::NewProp_Progression01 = { "Progression01", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddProgressionEventWithOneTwoAndThree_Parms, Progression01), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::NewProp_Progression01_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::NewProp_Progression01_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::NewProp_ProgressionStatus = { "ProgressionStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddProgressionEventWithOneTwoAndThree_Parms, ProgressionStatus), Z_Construct_UEnum_GameAnalytics_EGAProgressionStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::NewProp_ProgressionStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::NewProp_Progression03,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::NewProp_Progression02,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::NewProp_Progression01,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::NewProp_ProgressionStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::NewProp_ProgressionStatus_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "Comment", "/*, const char *fields*/" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
		{ "ToolTip", ", const char *fields" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "AddProgressionEventWithOneTwoAndThree", nullptr, nullptr, sizeof(GameAnalytics_eventAddProgressionEventWithOneTwoAndThree_Parms), Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoThreeAndScore_Statics
	{
		struct GameAnalytics_eventAddProgressionEventWithOneTwoThreeAndScore_Parms
		{
			EGAProgressionStatus ProgressionStatus;
			FString Progression01;
			FString Progression02;
			FString Progression03;
			int32 Score;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Score;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Progression03_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Progression03;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Progression02_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Progression02;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Progression01_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Progression01;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ProgressionStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProgressionStatus_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoThreeAndScore_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddProgressionEventWithOneTwoThreeAndScore_Parms, Score), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoThreeAndScore_Statics::NewProp_Progression03_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoThreeAndScore_Statics::NewProp_Progression03 = { "Progression03", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddProgressionEventWithOneTwoThreeAndScore_Parms, Progression03), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoThreeAndScore_Statics::NewProp_Progression03_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoThreeAndScore_Statics::NewProp_Progression03_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoThreeAndScore_Statics::NewProp_Progression02_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoThreeAndScore_Statics::NewProp_Progression02 = { "Progression02", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddProgressionEventWithOneTwoThreeAndScore_Parms, Progression02), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoThreeAndScore_Statics::NewProp_Progression02_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoThreeAndScore_Statics::NewProp_Progression02_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoThreeAndScore_Statics::NewProp_Progression01_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoThreeAndScore_Statics::NewProp_Progression01 = { "Progression01", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddProgressionEventWithOneTwoThreeAndScore_Parms, Progression01), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoThreeAndScore_Statics::NewProp_Progression01_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoThreeAndScore_Statics::NewProp_Progression01_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoThreeAndScore_Statics::NewProp_ProgressionStatus = { "ProgressionStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddProgressionEventWithOneTwoThreeAndScore_Parms, ProgressionStatus), Z_Construct_UEnum_GameAnalytics_EGAProgressionStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoThreeAndScore_Statics::NewProp_ProgressionStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoThreeAndScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoThreeAndScore_Statics::NewProp_Score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoThreeAndScore_Statics::NewProp_Progression03,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoThreeAndScore_Statics::NewProp_Progression02,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoThreeAndScore_Statics::NewProp_Progression01,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoThreeAndScore_Statics::NewProp_ProgressionStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoThreeAndScore_Statics::NewProp_ProgressionStatus_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoThreeAndScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "Comment", "/*, const char *fields*/" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
		{ "ToolTip", ", const char *fields" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoThreeAndScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "AddProgressionEventWithOneTwoThreeAndScore", nullptr, nullptr, sizeof(GameAnalytics_eventAddProgressionEventWithOneTwoThreeAndScore_Parms), Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoThreeAndScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoThreeAndScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoThreeAndScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoThreeAndScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoThreeAndScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoThreeAndScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics
	{
		struct GameAnalytics_eventAddResourceEvent_Parms
		{
			EGAResourceFlowType FlowType;
			FString Currency;
			float Amount;
			FString ItemType;
			FString ItemId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Currency_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Currency;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FlowType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FlowType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddResourceEvent_Parms, ItemId), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::NewProp_ItemType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddResourceEvent_Parms, ItemType), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::NewProp_ItemType_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddResourceEvent_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::NewProp_Currency_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddResourceEvent_Parms, Currency), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::NewProp_Currency_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::NewProp_Currency_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::NewProp_FlowType = { "FlowType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddResourceEvent_Parms, FlowType), Z_Construct_UEnum_GameAnalytics_EGAResourceFlowType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::NewProp_FlowType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::NewProp_ItemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::NewProp_Currency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::NewProp_FlowType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::NewProp_FlowType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "Comment", "/*, const char *fields*/" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
		{ "ToolTip", ", const char *fields" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "AddResourceEvent", nullptr, nullptr, sizeof(GameAnalytics_eventAddResourceEvent_Parms), Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_AddResourceEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_GetABTestingId_Statics
	{
		struct GameAnalytics_eventGetABTestingId_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_GetABTestingId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventGetABTestingId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_GetABTestingId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_GetABTestingId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_GetABTestingId_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_GetABTestingId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "GetABTestingId", nullptr, nullptr, sizeof(GameAnalytics_eventGetABTestingId_Parms), Z_Construct_UFunction_UGameAnalytics_GetABTestingId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_GetABTestingId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_GetABTestingId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_GetABTestingId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_GetABTestingId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_GetABTestingId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_GetABTestingVariantId_Statics
	{
		struct GameAnalytics_eventGetABTestingVariantId_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_GetABTestingVariantId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventGetABTestingVariantId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_GetABTestingVariantId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_GetABTestingVariantId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_GetABTestingVariantId_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_GetABTestingVariantId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "GetABTestingVariantId", nullptr, nullptr, sizeof(GameAnalytics_eventGetABTestingVariantId_Parms), Z_Construct_UFunction_UGameAnalytics_GetABTestingVariantId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_GetABTestingVariantId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_GetABTestingVariantId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_GetABTestingVariantId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_GetABTestingVariantId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_GetABTestingVariantId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsContentAsString_Statics
	{
		struct GameAnalytics_eventGetRemoteConfigsContentAsString_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsContentAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventGetRemoteConfigsContentAsString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsContentAsString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsContentAsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsContentAsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsContentAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "GetRemoteConfigsContentAsString", nullptr, nullptr, sizeof(GameAnalytics_eventGetRemoteConfigsContentAsString_Parms), Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsContentAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsContentAsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsContentAsString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsContentAsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsContentAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsContentAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsValueAsString_Statics
	{
		struct GameAnalytics_eventGetRemoteConfigsValueAsString_Parms
		{
			FString Key;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsValueAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventGetRemoteConfigsValueAsString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsValueAsString_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsValueAsString_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventGetRemoteConfigsValueAsString_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsValueAsString_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsValueAsString_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsValueAsString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsValueAsString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsValueAsString_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsValueAsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsValueAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "GetRemoteConfigsValueAsString", nullptr, nullptr, sizeof(GameAnalytics_eventGetRemoteConfigsValueAsString_Parms), Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsValueAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsValueAsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsValueAsString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsValueAsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsValueAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsValueAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsValueAsStringWithDefaultValue_Statics
	{
		struct GameAnalytics_eventGetRemoteConfigsValueAsStringWithDefaultValue_Parms
		{
			FString Key;
			FString DefaultValue;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsValueAsStringWithDefaultValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventGetRemoteConfigsValueAsStringWithDefaultValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsValueAsStringWithDefaultValue_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsValueAsStringWithDefaultValue_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventGetRemoteConfigsValueAsStringWithDefaultValue_Parms, DefaultValue), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsValueAsStringWithDefaultValue_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsValueAsStringWithDefaultValue_Statics::NewProp_DefaultValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsValueAsStringWithDefaultValue_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsValueAsStringWithDefaultValue_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventGetRemoteConfigsValueAsStringWithDefaultValue_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsValueAsStringWithDefaultValue_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsValueAsStringWithDefaultValue_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsValueAsStringWithDefaultValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsValueAsStringWithDefaultValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsValueAsStringWithDefaultValue_Statics::NewProp_DefaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsValueAsStringWithDefaultValue_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsValueAsStringWithDefaultValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsValueAsStringWithDefaultValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "GetRemoteConfigsValueAsStringWithDefaultValue", nullptr, nullptr, sizeof(GameAnalytics_eventGetRemoteConfigsValueAsStringWithDefaultValue_Parms), Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsValueAsStringWithDefaultValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsValueAsStringWithDefaultValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsValueAsStringWithDefaultValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsValueAsStringWithDefaultValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsValueAsStringWithDefaultValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsValueAsStringWithDefaultValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_IsRemoteConfigsReady_Statics
	{
		struct GameAnalytics_eventIsRemoteConfigsReady_Parms
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
	void Z_Construct_UFunction_UGameAnalytics_IsRemoteConfigsReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameAnalytics_eventIsRemoteConfigsReady_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameAnalytics_IsRemoteConfigsReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameAnalytics_eventIsRemoteConfigsReady_Parms), &Z_Construct_UFunction_UGameAnalytics_IsRemoteConfigsReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_IsRemoteConfigsReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_IsRemoteConfigsReady_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_IsRemoteConfigsReady_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_IsRemoteConfigsReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "IsRemoteConfigsReady", nullptr, nullptr, sizeof(GameAnalytics_eventIsRemoteConfigsReady_Parms), Z_Construct_UFunction_UGameAnalytics_IsRemoteConfigsReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_IsRemoteConfigsReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_IsRemoteConfigsReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_IsRemoteConfigsReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_IsRemoteConfigsReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_IsRemoteConfigsReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_OnQuit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_OnQuit_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_OnQuit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "OnQuit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_OnQuit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_OnQuit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_OnQuit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_OnQuit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_SetCustomDimension01_Statics
	{
		struct GameAnalytics_eventSetCustomDimension01_Parms
		{
			FString CustomDimension;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomDimension_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CustomDimension;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_SetCustomDimension01_Statics::NewProp_CustomDimension_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_SetCustomDimension01_Statics::NewProp_CustomDimension = { "CustomDimension", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventSetCustomDimension01_Parms, CustomDimension), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_SetCustomDimension01_Statics::NewProp_CustomDimension_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_SetCustomDimension01_Statics::NewProp_CustomDimension_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_SetCustomDimension01_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_SetCustomDimension01_Statics::NewProp_CustomDimension,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_SetCustomDimension01_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_SetCustomDimension01_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "SetCustomDimension01", nullptr, nullptr, sizeof(GameAnalytics_eventSetCustomDimension01_Parms), Z_Construct_UFunction_UGameAnalytics_SetCustomDimension01_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_SetCustomDimension01_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_SetCustomDimension01_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_SetCustomDimension01_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_SetCustomDimension01()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_SetCustomDimension01_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_SetCustomDimension02_Statics
	{
		struct GameAnalytics_eventSetCustomDimension02_Parms
		{
			FString CustomDimension;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomDimension_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CustomDimension;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_SetCustomDimension02_Statics::NewProp_CustomDimension_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_SetCustomDimension02_Statics::NewProp_CustomDimension = { "CustomDimension", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventSetCustomDimension02_Parms, CustomDimension), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_SetCustomDimension02_Statics::NewProp_CustomDimension_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_SetCustomDimension02_Statics::NewProp_CustomDimension_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_SetCustomDimension02_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_SetCustomDimension02_Statics::NewProp_CustomDimension,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_SetCustomDimension02_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_SetCustomDimension02_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "SetCustomDimension02", nullptr, nullptr, sizeof(GameAnalytics_eventSetCustomDimension02_Parms), Z_Construct_UFunction_UGameAnalytics_SetCustomDimension02_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_SetCustomDimension02_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_SetCustomDimension02_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_SetCustomDimension02_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_SetCustomDimension02()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_SetCustomDimension02_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_SetCustomDimension03_Statics
	{
		struct GameAnalytics_eventSetCustomDimension03_Parms
		{
			FString CustomDimension;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomDimension_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CustomDimension;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_SetCustomDimension03_Statics::NewProp_CustomDimension_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_SetCustomDimension03_Statics::NewProp_CustomDimension = { "CustomDimension", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventSetCustomDimension03_Parms, CustomDimension), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_SetCustomDimension03_Statics::NewProp_CustomDimension_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_SetCustomDimension03_Statics::NewProp_CustomDimension_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_SetCustomDimension03_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_SetCustomDimension03_Statics::NewProp_CustomDimension,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_SetCustomDimension03_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_SetCustomDimension03_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "SetCustomDimension03", nullptr, nullptr, sizeof(GameAnalytics_eventSetCustomDimension03_Parms), Z_Construct_UFunction_UGameAnalytics_SetCustomDimension03_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_SetCustomDimension03_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_SetCustomDimension03_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_SetCustomDimension03_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_SetCustomDimension03()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_SetCustomDimension03_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameAnalytics_NoRegister()
	{
		return UGameAnalytics::StaticClass();
	}
	struct Z_Construct_UClass_UGameAnalytics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameAnalytics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameAnalytics,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameAnalytics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameAnalytics_AddAdEvent, "AddAdEvent" }, // 357030858
		{ &Z_Construct_UFunction_UGameAnalytics_AddAdEventWithDuration, "AddAdEventWithDuration" }, // 3183323401
		{ &Z_Construct_UFunction_UGameAnalytics_AddAdEventWithNoAdReason, "AddAdEventWithNoAdReason" }, // 2398314640
		{ &Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent, "AddBusinessEvent" }, // 3999407347
		{ &Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt, "AddBusinessEventAndAutoFetchReceipt" }, // 469642844
		{ &Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid, "AddBusinessEventAndroid" }, // 161231480
		{ &Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS, "AddBusinessEventIOS" }, // 2352650578
		{ &Z_Construct_UFunction_UGameAnalytics_AddDesignEvent, "AddDesignEvent" }, // 3583031660
		{ &Z_Construct_UFunction_UGameAnalytics_AddDesignEventWithValue, "AddDesignEventWithValue" }, // 4187762649
		{ &Z_Construct_UFunction_UGameAnalytics_AddErrorEvent, "AddErrorEvent" }, // 2311229042
		{ &Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOne, "AddProgressionEventWithOne" }, // 304466361
		{ &Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndScore, "AddProgressionEventWithOneAndScore" }, // 4043709885
		{ &Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo, "AddProgressionEventWithOneAndTwo" }, // 2649437668
		{ &Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore, "AddProgressionEventWithOneTwoAndScore" }, // 1316260675
		{ &Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree, "AddProgressionEventWithOneTwoAndThree" }, // 1562913643
		{ &Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoThreeAndScore, "AddProgressionEventWithOneTwoThreeAndScore" }, // 626562320
		{ &Z_Construct_UFunction_UGameAnalytics_AddResourceEvent, "AddResourceEvent" }, // 2015431056
		{ &Z_Construct_UFunction_UGameAnalytics_GetABTestingId, "GetABTestingId" }, // 1882148435
		{ &Z_Construct_UFunction_UGameAnalytics_GetABTestingVariantId, "GetABTestingVariantId" }, // 835113143
		{ &Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsContentAsString, "GetRemoteConfigsContentAsString" }, // 2032064780
		{ &Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsValueAsString, "GetRemoteConfigsValueAsString" }, // 2609634026
		{ &Z_Construct_UFunction_UGameAnalytics_GetRemoteConfigsValueAsStringWithDefaultValue, "GetRemoteConfigsValueAsStringWithDefaultValue" }, // 1888496190
		{ &Z_Construct_UFunction_UGameAnalytics_IsRemoteConfigsReady, "IsRemoteConfigsReady" }, // 2106423276
		{ &Z_Construct_UFunction_UGameAnalytics_OnQuit, "OnQuit" }, // 3408739672
		{ &Z_Construct_UFunction_UGameAnalytics_SetCustomDimension01, "SetCustomDimension01" }, // 3010376888
		{ &Z_Construct_UFunction_UGameAnalytics_SetCustomDimension02, "SetCustomDimension02" }, // 982290376
		{ &Z_Construct_UFunction_UGameAnalytics_SetCustomDimension03, "SetCustomDimension03" }, // 3517091687
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameAnalytics_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameAnalytics.h" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameAnalytics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameAnalytics>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameAnalytics_Statics::ClassParams = {
		&UGameAnalytics::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameAnalytics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameAnalytics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameAnalytics()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameAnalytics_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameAnalytics, 1088364112);
	template<> GAMEANALYTICS_API UClass* StaticClass<UGameAnalytics>()
	{
		return UGameAnalytics::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameAnalytics(Z_Construct_UClass_UGameAnalytics, &UGameAnalytics::StaticClass, TEXT("/Script/GameAnalytics"), TEXT("UGameAnalytics"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameAnalytics);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
