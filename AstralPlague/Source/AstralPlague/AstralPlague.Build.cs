// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AstralPlague : ModuleRules
{
	public AstralPlague(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", 
			"CoreUObject", 
			"Engine", 
			"InputCore", 
			"EnhancedInput", 
			"GameplayAbilities", 
			"GameplayTags", 
			"GameplayTasks", 
			"Niagara",
			"CommonUI",
			"CommonInput"
			
			
		});
		
		PrivateDependencyModuleNames.AddRange(
			new string[] {
				"InputCore",
				"RenderCore",
				"DeveloperSettings",
				"EnhancedInput",
				"Projects",
				"UMG", 
				"ModularGameplay", 
				"ModularGameplayActors",
				"GameFeatures",
				"GameFeaturesEditor"
					
			}
		);
	}
}
