// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "beatRushGameMode.h"
#include "beatRushPawn.h"

AbeatRushGameMode::AbeatRushGameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = AbeatRushPawn::StaticClass();
}
