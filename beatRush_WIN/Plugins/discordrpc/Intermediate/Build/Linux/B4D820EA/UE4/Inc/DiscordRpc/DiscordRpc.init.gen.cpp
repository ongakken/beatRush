// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscordRpc_init() {}
	DISCORDRPC_API UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordConnected__DelegateSignature();
	DISCORDRPC_API UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature();
	DISCORDRPC_API UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature();
	DISCORDRPC_API UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoin__DelegateSignature();
	DISCORDRPC_API UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordSpectate__DelegateSignature();
	DISCORDRPC_API UFunction* Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoinRequest__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DiscordRpc()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_DiscordRpc_DiscordConnected__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DiscordRpc_DiscordDisconnected__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DiscordRpc_DiscordErrored__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoin__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DiscordRpc_DiscordSpectate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DiscordRpc_DiscordJoinRequest__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/DiscordRpc",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xAD7D929C,
				0xE67B4EF9,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
