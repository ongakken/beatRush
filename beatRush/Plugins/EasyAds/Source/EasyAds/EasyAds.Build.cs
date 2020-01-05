// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class EasyAds : ModuleRules
{
	public EasyAds(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        PrivatePCHHeaderFile = "Public/EasyAds.h";

        PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);


        if (Target.Platform == UnrealTargetPlatform.Win32 || Target.Platform == UnrealTargetPlatform.Win64)
        {
            //PrivateIncludePaths.Add("Private/Windows");
        }
        else if (Target.Platform == UnrealTargetPlatform.Android)
        {
            PrivateDependencyModuleNames.Add("Launch");
            string PluginPath = Utils.MakePathRelativeTo(ModuleDirectory, Target.RelativeEnginePath);
            AdditionalPropertiesForReceipt.Add("AndroidPlugin", Path.Combine(PluginPath, "EasyAds_UPL.xml"));
        }
        else if(Target.Platform == UnrealTargetPlatform.IOS)
        {
            PublicAdditionalFrameworks.Add(
               new Framework(
               "admobutil",                                                     // Framework name
               "../ThirdParty/Frameworks/admobutil.embeddedframework.zip")
               );

            // admob
            PublicAdditionalFrameworks.Add(
            new Framework(
            "GoogleMobileAds",														// Framework name
            "../ThirdParty/Frameworks/GoogleMobileAds.embeddedframework.zip")
            );

            PublicAdditionalFrameworks.Add(
            new Framework(
            "GoogleAppMeasurement",														// Framework name
            "../ThirdParty/Frameworks/GoogleAppMeasurement.embeddedframework.zip")
            );

            PublicAdditionalFrameworks.Add(
            new Framework(
            "GoogleUtilities",														// Framework name
            "../ThirdParty/Frameworks/GoogleUtilities.embeddedframework.zip")
            );

            PublicAdditionalFrameworks.Add(
            new Framework(
            "nanopb",														// Framework name
            "../ThirdParty/Frameworks/nanopb.embeddedframework.zip")
            );

            // unity
            PublicAdditionalFrameworks.Add(
            new Framework(
            "UnityAds",														// Framework name
            "../ThirdParty/Frameworks/UnityAds.embeddedframework.zip")
            );

            PublicAdditionalFrameworks.Add(
            new Framework(
            "UnityAdapter",														// Framework name
            "../ThirdParty/Frameworks/UnityAdapter.embeddedframework.zip")
            );


            // chartboost
            PublicAdditionalFrameworks.Add(
            new Framework(
            "Chartboost",														// Framework name
            "../ThirdParty/Frameworks/Chartboost.embeddedframework.zip")
            );

            PublicAdditionalFrameworks.Add(
            new Framework(
            "ChartboostAdapter",														// Framework name
            "../ThirdParty/Frameworks/ChartboostAdapter.embeddedframework.zip")
            );

            // vungle
            PublicAdditionalFrameworks.Add(
            new Framework(
            "VungleAdapter",														// Framework name
            "../ThirdParty/Frameworks/VungleAdapter.embeddedframework.zip")
            );

            PublicAdditionalFrameworks.Add(
            new Framework(
            "VungleSDK",														// Framework name
            "../ThirdParty/Frameworks/VungleSDK.embeddedframework.zip")
            );

            PublicFrameworks.AddRange(
            new string[]
            {
            "EventKit",
            "CFNetwork",
            "GLKit",
            "MobileCoreServices",
            "SystemConfiguration",
            "MediaPlayer",
            "AdSupport",
            "CoreLocation",
            "MessageUI",
            "Security",
            "CoreTelephony",
            
            "Security",
            "StoreKit",
            "Foundation",
            "CoreGraphics",
            "WebKit",
            "AVFoundation",
            "UIKit"
            }
            );

            string PluginPath = Utils.MakePathRelativeTo(ModuleDirectory, Target.RelativeEnginePath);
            AdditionalPropertiesForReceipt.Add("IOSPlugin", Path.Combine(PluginPath, "EasyAds_IOS_UPL.xml"));
        }
        else if (Target.Platform == UnrealTargetPlatform.Mac)
        {
            //PrivateIncludePaths.Add("Private/Mac");
        }
        else
        {
            PrecompileForTargets = PrecompileTargetsType.None;
        }
    }
}
