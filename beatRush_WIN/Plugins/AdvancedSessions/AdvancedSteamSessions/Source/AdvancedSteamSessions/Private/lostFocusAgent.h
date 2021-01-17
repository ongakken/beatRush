// © 2020 - 2021 Ongakken s. r. o. - All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "lostFocusAgent.generated.h"

UCLASS()
class AlostFocusAgent : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AlostFocusAgent();

	UFUNCTION(BlueprintCallable, Category = "misc")
		bool isGameFocused();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
