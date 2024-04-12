// Copyright Epic Games, Inc. All Rights Reserved.

#include "MeshToolCommands.h"

#define LOCTEXT_NAMESPACE "FMeshToolModule"

void FMeshToolCommands::RegisterCommands()
{
	UI_COMMAND(OpenPluginWindow, "MeshTool", "Bring up MeshTool window", EUserInterfaceActionType::Button, FInputGesture());
}

#undef LOCTEXT_NAMESPACE
