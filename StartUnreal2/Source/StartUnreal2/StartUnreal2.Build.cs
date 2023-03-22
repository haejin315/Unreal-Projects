// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class StartUnreal2 : ModuleRules
{
	public StartUnreal2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
