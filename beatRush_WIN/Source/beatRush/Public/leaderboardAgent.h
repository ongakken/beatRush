// © 2020 SMD Tech s. r. o. - All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Runtime/Online/HTTP/Public/Http.h"
#include "IHttpRequest.h"
#include "Runtime/Online/HTTP/Public/HttpManager.h"
#include "Runtime/Online/HTTP/Public/HttpModule.h"
#include "Runtime/Online/HTTP/Public/HttpRetrySystem.h"
#include "leaderboardAgent.generated.h"

UCLASS()
class BEATRUSH_API AleaderboardAgent : public AActor
{
	GENERATED_BODY()
	
public:	

	FHttpModule* Http;

	UFUNCTION(BlueprintCallable, Category = "HTTP GET")
		void lbHttpCall(FString URL, FString username, FString infPoints);

	// Sets default values for this actor's properties
	AleaderboardAgent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
