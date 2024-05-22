// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/AbilitySystem/AstralGameplayEffectContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralGameplayEffectContext() {}

// Begin Cross Module References
ASTRALPLAGUE_API UScriptStruct* Z_Construct_UScriptStruct_FAstralGameplayEffectContext();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContext();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin ScriptStruct FAstralGameplayEffectContext
static_assert(std::is_polymorphic<FAstralGameplayEffectContext>() == std::is_polymorphic<FGameplayEffectContext>(), "USTRUCT FAstralGameplayEffectContext cannot be polymorphic unless super FGameplayEffectContext is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AstralGameplayEffectContext;
class UScriptStruct* FAstralGameplayEffectContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AstralGameplayEffectContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AstralGameplayEffectContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAstralGameplayEffectContext, (UObject*)Z_Construct_UPackage__Script_AstralPlague(), TEXT("AstralGameplayEffectContext"));
	}
	return Z_Registration_Info_UScriptStruct_AstralGameplayEffectContext.OuterSingleton;
}
template<> ASTRALPLAGUE_API UScriptStruct* StaticStruct<FAstralGameplayEffectContext>()
{
	return FAstralGameplayEffectContext::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAstralGameplayEffectContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/AstralGameplayEffectContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CartridgeID_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** ID to allow the identification of multiple bullets that were part of the same cartridge */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/AstralGameplayEffectContext.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ID to allow the identification of multiple bullets that were part of the same cartridge" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySourceObject_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Ability Source object (should implement IAstralAbilitySourceInterface). NOT replicated currently */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/AstralGameplayEffectContext.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ability Source object (should implement IAstralAbilitySourceInterface). NOT replicated currently" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CartridgeID;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_AbilitySourceObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAstralGameplayEffectContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAstralGameplayEffectContext_Statics::NewProp_CartridgeID = { "CartridgeID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAstralGameplayEffectContext, CartridgeID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CartridgeID_MetaData), NewProp_CartridgeID_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FAstralGameplayEffectContext_Statics::NewProp_AbilitySourceObject = { "AbilitySourceObject", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAstralGameplayEffectContext, AbilitySourceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySourceObject_MetaData), NewProp_AbilitySourceObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAstralGameplayEffectContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAstralGameplayEffectContext_Statics::NewProp_CartridgeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAstralGameplayEffectContext_Statics::NewProp_AbilitySourceObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAstralGameplayEffectContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAstralGameplayEffectContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
	Z_Construct_UScriptStruct_FGameplayEffectContext,
	&NewStructOps,
	"AstralGameplayEffectContext",
	Z_Construct_UScriptStruct_FAstralGameplayEffectContext_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAstralGameplayEffectContext_Statics::PropPointers),
	sizeof(FAstralGameplayEffectContext),
	alignof(FAstralGameplayEffectContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAstralGameplayEffectContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAstralGameplayEffectContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAstralGameplayEffectContext()
{
	if (!Z_Registration_Info_UScriptStruct_AstralGameplayEffectContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AstralGameplayEffectContext.InnerSingleton, Z_Construct_UScriptStruct_FAstralGameplayEffectContext_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AstralGameplayEffectContext.InnerSingleton;
}
// End ScriptStruct FAstralGameplayEffectContext

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralGameplayEffectContext_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAstralGameplayEffectContext::StaticStruct, Z_Construct_UScriptStruct_FAstralGameplayEffectContext_Statics::NewStructOps, TEXT("AstralGameplayEffectContext"), &Z_Registration_Info_UScriptStruct_AstralGameplayEffectContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAstralGameplayEffectContext), 2912143903U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralGameplayEffectContext_h_1962669572(TEXT("/Script/AstralPlague"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralGameplayEffectContext_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralGameplayEffectContext_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
