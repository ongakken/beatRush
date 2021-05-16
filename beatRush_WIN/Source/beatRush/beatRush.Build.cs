// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class beatRush : ModuleRules
{
	public beatRush(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "OnlineSubsystem", "OnlineSubsystemUtils", "Steamworks", "Http", "Json", "JsonUtilities" });

		PrivateDependencyModuleNames.AddRange(new string[] { "GameAnalytics", "OnlineSubsystem" });
		PrivateIncludePathModuleNames.AddRange(new string[] { "GameAnalytics" });

		DynamicallyLoadedModuleNames.Add("OnlineSubsystemSteam");
	}
}
