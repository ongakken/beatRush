// © 2020 SMD Tech s. r. o. - All rights reserved.


#include "leaderboardAgent.h"

void AleaderboardAgent::lbHttpCall(FString URL, FString username, FString currentSong, FString infPoints)
{
	TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
	Request->OnProcessRequestComplete().BindUObject(this, &AleaderboardAgent::OnResponseReceived);
	Request->SetURL(URL + username + "-" + currentSong + "/" + infPoints);
	Request->SetVerb("GET");
	Request->ProcessRequest();
}

void AleaderboardAgent::newsHttpCall(FString URL)
{
	TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
	Request->OnProcessRequestComplete().BindUObject(this, &AleaderboardAgent::OnNewsResponseReceived);
	Request->SetHeader(TEXT("User-Agent"), TEXT("X-BeatRush-Agent"));
	Request->SetURL(URL);
	Request->SetVerb("GET");
	Request->ProcessRequest();
}

// Sets default values
AleaderboardAgent::AleaderboardAgent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AleaderboardAgent::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AleaderboardAgent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AleaderboardAgent::OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	if (bWasSuccessful)
	{
		FString responseString = Response->GetContentAsString();
		char* responseStringChar = TCHAR_TO_ANSI(*responseString);
		UGameAnalytics::addDesignEvent(responseStringChar, Response->GetResponseCode());
	}
}

void AleaderboardAgent::OnNewsResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	if (bWasSuccessful)
	{
		newsResponseString = Response->GetContentAsString();
		UGameAnalytics::addDesignEvent("gotNews", Response->GetResponseCode());
	}
}



