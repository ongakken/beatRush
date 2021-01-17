// © 2020 - 2021 Ongakken s. r. o. - All rights reserved.


#include "lostFocusAgent.h"
#include "Engine/GameViewportClient.h"
#include "Engine/World.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "UnrealClient.h"

// Sets default values
AlostFocusAgent::AlostFocusAgent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

bool AlostFocusAgent::isGameFocused()
    {
        if (GetWorld())
        {
            UGameViewportClient* vpClient = GetWorld()->GetGameViewport();
            if (vpClient)
            {
                FViewport* vp = vpClient->Viewport;
                if (vp)
                {
                    return vp->IsForegroundWindow();
                }
            }
        }

        return false;
    }

// Called when the game starts or when spawned
void AlostFocusAgent::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AlostFocusAgent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

