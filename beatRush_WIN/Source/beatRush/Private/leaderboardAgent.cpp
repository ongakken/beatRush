// © 2020 SMD Tech s. r. o. - All rights reserved.


#include "leaderboardAgent.h"

void AleaderboardAgent::lbHttpCall(FString URL, FString username, FString infPoints)
{
	TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
	//Request->OnProcessRequestComplete().BindUObject(this, &AleaderboardAgent::OnResponseReceived);
	Request->SetURL(URL + username + "/" + infPoints);
	Request->SetVerb("GET");
	//Request->SetHeader(TEXT("User-Agent"), "X-UnrealEngine-Agent");
	//Request->SetHeader("Content-Type", TEXT("application/json"));
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

