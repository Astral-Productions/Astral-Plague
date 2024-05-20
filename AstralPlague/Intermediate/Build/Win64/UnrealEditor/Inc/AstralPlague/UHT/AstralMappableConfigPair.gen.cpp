// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/Input/AstralMappableConfigPair.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralMappableConfigPair() {}

// Begin Cross Module References
ASTRALPLAGUE_API UScriptStruct* Z_Construct_UScriptStruct_FLoadedMappableConfigPair();
ASTRALPLAGUE_API UScriptStruct* Z_Construct_UScriptStruct_FMappableConfigPair();
COMMONINPUT_API UEnum* Z_Construct_UEnum_CommonInput_ECommonInputType();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UPlayerMappableInputConfig_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin ScriptStruct FLoadedMappableConfigPair
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LoadedMappableConfigPair;
class UScriptStruct* FLoadedMappableConfigPair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LoadedMappableConfigPair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LoadedMappableConfigPair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLoadedMappableConfigPair, (UObject*)Z_Construct_UPackage__Script_AstralPlague(), TEXT("LoadedMappableConfigPair"));
	}
	return Z_Registration_Info_UScriptStruct_LoadedMappableConfigPair.OuterSingleton;
}
template<> ASTRALPLAGUE_API UScriptStruct* StaticStruct<FLoadedMappableConfigPair>()
{
	return FLoadedMappableConfigPair::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A container to organize loaded player mappable configs to their CommonUI input type */" },
#endif
		{ "ModuleRelativePath", "Input/AstralMappableConfigPair.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A container to organize loaded player mappable configs to their CommonUI input type" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "LoadedMappableConfigPair" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The player mappable input config that should be applied to the Enhanced Input subsystem */" },
#endif
		{ "ModuleRelativePath", "Input/AstralMappableConfigPair.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The player mappable input config that should be applied to the Enhanced Input subsystem" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "LoadedMappableConfigPair" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The type of device that this mapping config should be applied to */" },
#endif
		{ "ModuleRelativePath", "Input/AstralMappableConfigPair.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The type of device that this mapping config should be applied to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[] = {
		{ "Category", "LoadedMappableConfigPair" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If this config is currently active. A config is marked as active when it's owning GFA is active */" },
#endif
		{ "ModuleRelativePath", "Input/AstralMappableConfigPair.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If this config is currently active. A config is marked as active when it's owning GFA is active" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Config;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static void NewProp_bIsActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLoadedMappableConfigPair>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0114000000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoadedMappableConfigPair, Config), Z_Construct_UClass_UPlayerMappableInputConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoadedMappableConfigPair, Type), Z_Construct_UEnum_CommonInput_ECommonInputType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 4176585250
void Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::NewProp_bIsActive_SetBit(void* Obj)
{
	((FLoadedMappableConfigPair*)Obj)->bIsActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLoadedMappableConfigPair), &Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsActive_MetaData), NewProp_bIsActive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::NewProp_Config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::NewProp_bIsActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
	nullptr,
	&NewStructOps,
	"LoadedMappableConfigPair",
	Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::PropPointers),
	sizeof(FLoadedMappableConfigPair),
	alignof(FLoadedMappableConfigPair),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLoadedMappableConfigPair()
{
	if (!Z_Registration_Info_UScriptStruct_LoadedMappableConfigPair.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LoadedMappableConfigPair.InnerSingleton, Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LoadedMappableConfigPair.InnerSingleton;
}
// End ScriptStruct FLoadedMappableConfigPair

// Begin ScriptStruct FMappableConfigPair
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MappableConfigPair;
class UScriptStruct* FMappableConfigPair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MappableConfigPair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MappableConfigPair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMappableConfigPair, (UObject*)Z_Construct_UPackage__Script_AstralPlague(), TEXT("MappableConfigPair"));
	}
	return Z_Registration_Info_UScriptStruct_MappableConfigPair.OuterSingleton;
}
template<> ASTRALPLAGUE_API UScriptStruct* StaticStruct<FMappableConfigPair>()
{
	return FMappableConfigPair::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMappableConfigPair_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A container to organize potentially unloaded player mappable configs to their CommonUI input type */" },
#endif
		{ "ModuleRelativePath", "Input/AstralMappableConfigPair.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A container to organize potentially unloaded player mappable configs to their CommonUI input type" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "MappableConfigPair" },
		{ "ModuleRelativePath", "Input/AstralMappableConfigPair.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "MappableConfigPair" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The type of config that this is. Useful for filtering out configs by the current input device\n\x09 * for things like the settings screen, or if you only want to apply this config when a certain\n\x09 * input type is being used.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Input/AstralMappableConfigPair.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The type of config that this is. Useful for filtering out configs by the current input device\nfor things like the settings screen, or if you only want to apply this config when a certain\ninput type is being used." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DependentPlatformTraits_MetaData[] = {
		{ "Category", "MappableConfigPair" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Container of platform traits that must be set in order for this input to be activated.\n\x09 * \n\x09 * If the platform does not have one of the traits specified it can still be registered, but cannot\n\x09 * be activated. \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Input/AstralMappableConfigPair.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Container of platform traits that must be set in order for this input to be activated.\n\nIf the platform does not have one of the traits specified it can still be registered, but cannot\nbe activated." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExcludedPlatformTraits_MetaData[] = {
		{ "Category", "MappableConfigPair" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If the current platform has any of these traits, then this config will not be actived.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Input/AstralMappableConfigPair.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the current platform has any of these traits, then this config will not be actived." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldActivateAutomatically_MetaData[] = {
		{ "Category", "MappableConfigPair" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, then this input config will be activated when it's associated Game Feature is activated.\n\x09 * This is normally the desirable behavior\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Input/AstralMappableConfigPair.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, then this input config will be activated when it's associated Game Feature is activated.\nThis is normally the desirable behavior" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Config;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DependentPlatformTraits;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExcludedPlatformTraits;
	static void NewProp_bShouldActivateAutomatically_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldActivateAutomatically;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMappableConfigPair>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMappableConfigPair_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMappableConfigPair, Config), Z_Construct_UClass_UPlayerMappableInputConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMappableConfigPair_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMappableConfigPair_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMappableConfigPair, Type), Z_Construct_UEnum_CommonInput_ECommonInputType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 4176585250
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMappableConfigPair_Statics::NewProp_DependentPlatformTraits = { "DependentPlatformTraits", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMappableConfigPair, DependentPlatformTraits), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DependentPlatformTraits_MetaData), NewProp_DependentPlatformTraits_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMappableConfigPair_Statics::NewProp_ExcludedPlatformTraits = { "ExcludedPlatformTraits", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMappableConfigPair, ExcludedPlatformTraits), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExcludedPlatformTraits_MetaData), NewProp_ExcludedPlatformTraits_MetaData) }; // 3352185621
void Z_Construct_UScriptStruct_FMappableConfigPair_Statics::NewProp_bShouldActivateAutomatically_SetBit(void* Obj)
{
	((FMappableConfigPair*)Obj)->bShouldActivateAutomatically = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMappableConfigPair_Statics::NewProp_bShouldActivateAutomatically = { "bShouldActivateAutomatically", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMappableConfigPair), &Z_Construct_UScriptStruct_FMappableConfigPair_Statics::NewProp_bShouldActivateAutomatically_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldActivateAutomatically_MetaData), NewProp_bShouldActivateAutomatically_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMappableConfigPair_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappableConfigPair_Statics::NewProp_Config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappableConfigPair_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappableConfigPair_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappableConfigPair_Statics::NewProp_DependentPlatformTraits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappableConfigPair_Statics::NewProp_ExcludedPlatformTraits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMappableConfigPair_Statics::NewProp_bShouldActivateAutomatically,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappableConfigPair_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMappableConfigPair_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
	nullptr,
	&NewStructOps,
	"MappableConfigPair",
	Z_Construct_UScriptStruct_FMappableConfigPair_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappableConfigPair_Statics::PropPointers),
	sizeof(FMappableConfigPair),
	alignof(FMappableConfigPair),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMappableConfigPair_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMappableConfigPair_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMappableConfigPair()
{
	if (!Z_Registration_Info_UScriptStruct_MappableConfigPair.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MappableConfigPair.InnerSingleton, Z_Construct_UScriptStruct_FMappableConfigPair_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MappableConfigPair.InnerSingleton;
}
// End ScriptStruct FMappableConfigPair

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Input_AstralMappableConfigPair_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLoadedMappableConfigPair::StaticStruct, Z_Construct_UScriptStruct_FLoadedMappableConfigPair_Statics::NewStructOps, TEXT("LoadedMappableConfigPair"), &Z_Registration_Info_UScriptStruct_LoadedMappableConfigPair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLoadedMappableConfigPair), 455363195U) },
		{ FMappableConfigPair::StaticStruct, Z_Construct_UScriptStruct_FMappableConfigPair_Statics::NewStructOps, TEXT("MappableConfigPair"), &Z_Registration_Info_UScriptStruct_MappableConfigPair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMappableConfigPair), 1884790099U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Input_AstralMappableConfigPair_h_1578910502(TEXT("/Script/AstralPlague"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Input_AstralMappableConfigPair_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Input_AstralMappableConfigPair_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
