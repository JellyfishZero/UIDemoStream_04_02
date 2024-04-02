// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UIDemoStream_04_02 : ModuleRules
{
	public UIDemoStream_04_02(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "NavigationSystem", "AIModule", "Niagara", "EnhancedInput" });
    }
}
