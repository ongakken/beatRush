/*
* EasyAds - unreal engine 4 ads plugin
*
* Copyright (C) 2019 feixuwu <feixuwu@outlook.com> All Rights Reserved.
*/

#include "AdmobSetting.h"
#include "Misc/ConfigCacheIni.h"


#if WITH_EDITOR
void UAdmobSetting::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	SaveConfig(CPF_Config, *GetDefaultConfigFilename());

	if (EnableAndroidTestSuite)
	{
		const TCHAR* AndroidSettings = TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings");

		FString configPath = FString::Printf(TEXT("%sDefaultEngine.ini"), *FPaths::SourceConfigDir());
		GConfig->SetInt(AndroidSettings, TEXT("MinSDKVersion"), 16, configPath);
	}
}


#endif