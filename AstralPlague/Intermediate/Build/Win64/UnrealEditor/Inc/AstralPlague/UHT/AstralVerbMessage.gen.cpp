// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/Messages/AstralVerbMessage.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralVerbMessage() {}

// Begin Cross Module References
ASTRALPLAGUE_API UScriptStruct* Z_Construct_UScriptStruct_FLyraVerbMessage();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin ScriptStruct FLyraVerbMessage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LyraVerbMessage;
class UScriptStruct* FLyraVerbMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LyraVerbMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LyraVerbMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLyraVerbMessage, (UObject*)Z_Construct_UPackage__Script_AstralPlague(), TEXT("LyraVerbMessage"));
	}
	return Z_Registration_Info_UScriptStruct_LyraVerbMessage.OuterSingleton;
}
template<> ASTRALPLAGUE_API UScriptStruct* StaticStruct<FLyraVerbMessage>()
{
	return FLyraVerbMessage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLyraVerbMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Represents a generic message of the form Instigator Verb Target (in Context, with Magnitude)\n" },
#endif
		{ "ModuleRelativePath", "Messages/AstralVerbMessage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents a generic message of the form Instigator Verb Target (in Context, with Magnitude)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Verb_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Messages/AstralVerbMessage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Messages/AstralVerbMessage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Messages/AstralVerbMessage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstigatorTags_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Messages/AstralVerbMessage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTags_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Messages/AstralVerbMessage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextTags_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Messages/AstralVerbMessage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Messages/AstralVerbMessage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Verb;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstigatorTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContextTags;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Magnitude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLyraVerbMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraVerbMessage_Statics::NewProp_Verb = { "Verb", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraVerbMessage, Verb), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Verb_MetaData), NewProp_Verb_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLyraVerbMessage_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraVerbMessage, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instigator_MetaData), NewProp_Instigator_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLyraVerbMessage_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraVerbMessage, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraVerbMessage_Statics::NewProp_InstigatorTags = { "InstigatorTags", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraVerbMessage, InstigatorTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstigatorTags_MetaData), NewProp_InstigatorTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraVerbMessage_Statics::NewProp_TargetTags = { "TargetTags", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraVerbMessage, TargetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTags_MetaData), NewProp_TargetTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLyraVerbMessage_Statics::NewProp_ContextTags = { "ContextTags", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraVerbMessage, ContextTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextTags_MetaData), NewProp_ContextTags_MetaData) }; // 3352185621
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FLyraVerbMessage_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLyraVerbMessage, Magnitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Magnitude_MetaData), NewProp_Magnitude_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLyraVerbMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraVerbMessage_Statics::NewProp_Verb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraVerbMessage_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraVerbMessage_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraVerbMessage_Statics::NewProp_InstigatorTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraVerbMessage_Statics::NewProp_TargetTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraVerbMessage_Statics::NewProp_ContextTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLyraVerbMessage_Statics::NewProp_Magnitude,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraVerbMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLyraVerbMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
	nullptr,
	&NewStructOps,
	"LyraVerbMessage",
	Z_Construct_UScriptStruct_FLyraVerbMessage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraVerbMessage_Statics::PropPointers),
	sizeof(FLyraVerbMessage),
	alignof(FLyraVerbMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLyraVerbMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLyraVerbMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLyraVerbMessage()
{
	if (!Z_Registration_Info_UScriptStruct_LyraVerbMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LyraVerbMessage.InnerSingleton, Z_Construct_UScriptStruct_FLyraVerbMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LyraVerbMessage.InnerSingleton;
}
// End ScriptStruct FLyraVerbMessage

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Messages_AstralVerbMessage_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLyraVerbMessage::StaticStruct, Z_Construct_UScriptStruct_FLyraVerbMessage_Statics::NewStructOps, TEXT("LyraVerbMessage"), &Z_Registration_Info_UScriptStruct_LyraVerbMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLyraVerbMessage), 2209587620U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Messages_AstralVerbMessage_h_3646259439(TEXT("/Script/AstralPlague"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Messages_AstralVerbMessage_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Messages_AstralVerbMessage_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
