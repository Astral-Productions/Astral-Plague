// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AstralPlague : ModuleRules
{
	public AstralPlague(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", 
			"Core",
			"CoreUObject",
			"ApplicationCore",
			"Engine",
			"PhysicsCore",
			"GameplayTags",
			"GameplayTasks",
			"GameplayAbilities",
			"AIModule",
			"ModularGameplay",
			"ModularGameplayActors",
			"GameFeatures",
			"Niagara",
			"PropertyPath",
		});
		
		PrivateDependencyModuleNames.AddRange(
			new string[] {
				"InputCore",
				"Slate",
				"SlateCore",
				"RenderCore",
				"DeveloperSettings",
				"EnhancedInput",
				"NetCore",
				"RHI",
				"Projects",
				"UMG",
				"CommonUI",
				"CommonInput",
				"AudioMixer",
				"EngineSettings",
			}
		);
	}
}
