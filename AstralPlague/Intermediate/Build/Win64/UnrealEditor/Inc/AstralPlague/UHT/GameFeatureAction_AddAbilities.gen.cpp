// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/GameFeatures/GameFeatureAction_AddAbilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameFeatureAction_AddAbilities() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralAbilitySet_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UGameFeatureAction_AddAbilities();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UGameFeatureAction_AddAbilities_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UGameFeatureAction_WorldActionBase();
ASTRALPLAGUE_API UScriptStruct* Z_Construct_UScriptStruct_FAstralAbilityGrant();
ASTRALPLAGUE_API UScriptStruct* Z_Construct_UScriptStruct_FAstralAttributeSetGrant();
ASTRALPLAGUE_API UScriptStruct* Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin ScriptStruct FAstralAbilityGrant
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AstralAbilityGrant;
class UScriptStruct* FAstralAbilityGrant::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AstralAbilityGrant.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AstralAbilityGrant.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAstralAbilityGrant, (UObject*)Z_Construct_UPackage__Script_AstralPlague(), TEXT("AstralAbilityGrant"));
	}
	return Z_Registration_Info_UScriptStruct_AstralAbilityGrant.OuterSingleton;
}
template<> ASTRALPLAGUE_API UScriptStruct* StaticStruct<FAstralAbilityGrant>()
{
	return FAstralAbilityGrant::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAstralAbilityGrant_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityType_MetaData[] = {
		{ "AssetBundles", "Client,Server" },
		{ "Category", "AstralAbilityGrant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Type of ability to grant\n" },
#endif
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddAbilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of ability to grant" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_AbilityType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAstralAbilityGrant>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FAstralAbilityGrant_Statics::NewProp_AbilityType = { "AbilityType", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAstralAbilityGrant, AbilityType), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityType_MetaData), NewProp_AbilityType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAstralAbilityGrant_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAstralAbilityGrant_Statics::NewProp_AbilityType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAstralAbilityGrant_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAstralAbilityGrant_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
	nullptr,
	&NewStructOps,
	"AstralAbilityGrant",
	Z_Construct_UScriptStruct_FAstralAbilityGrant_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAstralAbilityGrant_Statics::PropPointers),
	sizeof(FAstralAbilityGrant),
	alignof(FAstralAbilityGrant),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAstralAbilityGrant_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAstralAbilityGrant_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAstralAbilityGrant()
{
	if (!Z_Registration_Info_UScriptStruct_AstralAbilityGrant.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AstralAbilityGrant.InnerSingleton, Z_Construct_UScriptStruct_FAstralAbilityGrant_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AstralAbilityGrant.InnerSingleton;
}
// End ScriptStruct FAstralAbilityGrant

// Begin ScriptStruct FAstralAttributeSetGrant
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AstralAttributeSetGrant;
class UScriptStruct* FAstralAttributeSetGrant::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AstralAttributeSetGrant.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AstralAttributeSetGrant.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAstralAttributeSetGrant, (UObject*)Z_Construct_UPackage__Script_AstralPlague(), TEXT("AstralAttributeSetGrant"));
	}
	return Z_Registration_Info_UScriptStruct_AstralAttributeSetGrant.OuterSingleton;
}
template<> ASTRALPLAGUE_API UScriptStruct* StaticStruct<FAstralAttributeSetGrant>()
{
	return FAstralAttributeSetGrant::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAstralAttributeSetGrant_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSetType_MetaData[] = {
		{ "AssetBundles", "Client,Server" },
		{ "Category", "AstralAttributeSetGrant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ability set to grant\n" },
#endif
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddAbilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ability set to grant" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitializationData_MetaData[] = {
		{ "AssetBundles", "Client,Server" },
		{ "Category", "AstralAttributeSetGrant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Data table referent to initialize the attributes with, if any (can be left unset)\n" },
#endif
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddAbilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data table referent to initialize the attributes with, if any (can be left unset)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_AttributeSetType;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_InitializationData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAstralAttributeSetGrant>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FAstralAttributeSetGrant_Statics::NewProp_AttributeSetType = { "AttributeSetType", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAstralAttributeSetGrant, AttributeSetType), Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSetType_MetaData), NewProp_AttributeSetType_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FAstralAttributeSetGrant_Statics::NewProp_InitializationData = { "InitializationData", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAstralAttributeSetGrant, InitializationData), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitializationData_MetaData), NewProp_InitializationData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAstralAttributeSetGrant_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAstralAttributeSetGrant_Statics::NewProp_AttributeSetType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAstralAttributeSetGrant_Statics::NewProp_InitializationData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAstralAttributeSetGrant_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAstralAttributeSetGrant_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
	nullptr,
	&NewStructOps,
	"AstralAttributeSetGrant",
	Z_Construct_UScriptStruct_FAstralAttributeSetGrant_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAstralAttributeSetGrant_Statics::PropPointers),
	sizeof(FAstralAttributeSetGrant),
	alignof(FAstralAttributeSetGrant),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAstralAttributeSetGrant_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAstralAttributeSetGrant_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAstralAttributeSetGrant()
{
	if (!Z_Registration_Info_UScriptStruct_AstralAttributeSetGrant.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AstralAttributeSetGrant.InnerSingleton, Z_Construct_UScriptStruct_FAstralAttributeSetGrant_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AstralAttributeSetGrant.InnerSingleton;
}
// End ScriptStruct FAstralAttributeSetGrant

// Begin ScriptStruct FGameFeatureAbilitiesEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameFeatureAbilitiesEntry;
class UScriptStruct* FGameFeatureAbilitiesEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameFeatureAbilitiesEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameFeatureAbilitiesEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry, (UObject*)Z_Construct_UPackage__Script_AstralPlague(), TEXT("GameFeatureAbilitiesEntry"));
	}
	return Z_Registration_Info_UScriptStruct_GameFeatureAbilitiesEntry.OuterSingleton;
}
template<> ASTRALPLAGUE_API UScriptStruct* StaticStruct<FGameFeatureAbilitiesEntry>()
{
	return FGameFeatureAbilitiesEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "Category", "Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The base actor class to add to\n" },
#endif
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddAbilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The base actor class to add to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAbilities_MetaData[] = {
		{ "Category", "Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of abilities to grant to actors of the specified class\n" },
#endif
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddAbilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of abilities to grant to actors of the specified class" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAttributes_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of attribute sets to grant to actors of the specified class \n" },
#endif
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddAbilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of attribute sets to grant to actors of the specified class" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAbilitySets_MetaData[] = {
		{ "AssetBundles", "Client,Server" },
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of ability sets to grant to actors of the specified class\n" },
#endif
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddAbilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of ability sets to grant to actors of the specified class" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAbilities;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedAttributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAttributes;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_GrantedAbilitySets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAbilitySets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameFeatureAbilitiesEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameFeatureAbilitiesEntry, ActorClass), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilities_Inner = { "GrantedAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAstralAbilityGrant, METADATA_PARAMS(0, nullptr) }; // 1781082238
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilities = { "GrantedAbilities", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameFeatureAbilitiesEntry, GrantedAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedAbilities_MetaData), NewProp_GrantedAbilities_MetaData) }; // 1781082238
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAttributes_Inner = { "GrantedAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAstralAttributeSetGrant, METADATA_PARAMS(0, nullptr) }; // 533667422
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAttributes = { "GrantedAttributes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameFeatureAbilitiesEntry, GrantedAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedAttributes_MetaData), NewProp_GrantedAttributes_MetaData) }; // 533667422
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilitySets_Inner = { "GrantedAbilitySets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAstralAbilitySet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilitySets = { "GrantedAbilitySets", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameFeatureAbilitiesEntry, GrantedAbilitySets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedAbilitySets_MetaData), NewProp_GrantedAbilitySets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAttributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilitySets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilitySets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
	nullptr,
	&NewStructOps,
	"GameFeatureAbilitiesEntry",
	Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::PropPointers),
	sizeof(FGameFeatureAbilitiesEntry),
	alignof(FGameFeatureAbilitiesEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry()
{
	if (!Z_Registration_Info_UScriptStruct_GameFeatureAbilitiesEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameFeatureAbilitiesEntry.InnerSingleton, Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameFeatureAbilitiesEntry.InnerSingleton;
}
// End ScriptStruct FGameFeatureAbilitiesEntry

// Begin Class UGameFeatureAction_AddAbilities
void UGameFeatureAction_AddAbilities::StaticRegisterNativesUGameFeatureAction_AddAbilities()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameFeatureAction_AddAbilities);
UClass* Z_Construct_UClass_UGameFeatureAction_AddAbilities_NoRegister()
{
	return UGameFeatureAction_AddAbilities::StaticClass();
}
struct Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * GameFeatureAction responsible for granting abilities (and attributes) to actors of a specified type.\n */" },
#endif
		{ "DisplayName", "Add Abilities" },
		{ "IncludePath", "GameFeatures/GameFeatureAction_AddAbilities.h" },
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddAbilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GameFeatureAction responsible for granting abilities (and attributes) to actors of a specified type." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitiesList_MetaData[] = {
		{ "Category", "Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**  */" },
#endif
		{ "ModuleRelativePath", "GameFeatures/GameFeatureAction_AddAbilities.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "TitleProperty", "ActorClass" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilitiesList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilitiesList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameFeatureAction_AddAbilities>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics::NewProp_AbilitiesList_Inner = { "AbilitiesList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry, METADATA_PARAMS(0, nullptr) }; // 2660793537
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics::NewProp_AbilitiesList = { "AbilitiesList", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameFeatureAction_AddAbilities, AbilitiesList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitiesList_MetaData), NewProp_AbilitiesList_MetaData) }; // 2660793537
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics::NewProp_AbilitiesList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics::NewProp_AbilitiesList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameFeatureAction_WorldActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics::ClassParams = {
	&UGameFeatureAction_AddAbilities::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameFeatureAction_AddAbilities()
{
	if (!Z_Registration_Info_UClass_UGameFeatureAction_AddAbilities.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameFeatureAction_AddAbilities.OuterSingleton, Z_Construct_UClass_UGameFeatureAction_AddAbilities_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameFeatureAction_AddAbilities.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<UGameFeatureAction_AddAbilities>()
{
	return UGameFeatureAction_AddAbilities::StaticClass();
}
UGameFeatureAction_AddAbilities::UGameFeatureAction_AddAbilities(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameFeatureAction_AddAbilities);
UGameFeatureAction_AddAbilities::~UGameFeatureAction_AddAbilities() {}
// End Class UGameFeatureAction_AddAbilities

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_GameFeatures_GameFeatureAction_AddAbilities_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAstralAbilityGrant::StaticStruct, Z_Construct_UScriptStruct_FAstralAbilityGrant_Statics::NewStructOps, TEXT("AstralAbilityGrant"), &Z_Registration_Info_UScriptStruct_AstralAbilityGrant, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAstralAbilityGrant), 1781082238U) },
		{ FAstralAttributeSetGrant::StaticStruct, Z_Construct_UScriptStruct_FAstralAttributeSetGrant_Statics::NewStructOps, TEXT("AstralAttributeSetGrant"), &Z_Registration_Info_UScriptStruct_AstralAttributeSetGrant, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAstralAttributeSetGrant), 533667422U) },
		{ FGameFeatureAbilitiesEntry::StaticStruct, Z_Construct_UScriptStruct_FGameFeatureAbilitiesEntry_Statics::NewStructOps, TEXT("GameFeatureAbilitiesEntry"), &Z_Registration_Info_UScriptStruct_GameFeatureAbilitiesEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameFeatureAbilitiesEntry), 2660793537U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameFeatureAction_AddAbilities, UGameFeatureAction_AddAbilities::StaticClass, TEXT("UGameFeatureAction_AddAbilities"), &Z_Registration_Info_UClass_UGameFeatureAction_AddAbilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameFeatureAction_AddAbilities), 3870490767U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_GameFeatures_GameFeatureAction_AddAbilities_h_1828391220(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_GameFeatures_GameFeatureAction_AddAbilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_GameFeatures_GameFeatureAction_AddAbilities_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_GameFeatures_GameFeatureAction_AddAbilities_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_GameFeatures_GameFeatureAction_AddAbilities_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
