// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/AbilitySystem/Attributes/DefaultAttributeSet.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultAttributeSet() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UDefaultAttributeSet();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UDefaultAttributeSet_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class UDefaultAttributeSet
void UDefaultAttributeSet::StaticRegisterNativesUDefaultAttributeSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDefaultAttributeSet);
UClass* Z_Construct_UClass_UDefaultAttributeSet_NoRegister()
{
	return UDefaultAttributeSet::StaticClass();
}
struct Z_Construct_UClass_UDefaultAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Attributes/DefaultAttributeSet.h" },
		{ "ModuleRelativePath", "AbilitySystem/Attributes/DefaultAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Astral|Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The current health attribute.  The health will be capped by the max health attribute.  Health is hidden from modifiers so only executions can modify it.\n" },
#endif
		{ "HideFromModifiers", "" },
		{ "ModuleRelativePath", "AbilitySystem/Attributes/DefaultAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The current health attribute.  The health will be capped by the max health attribute.  Health is hidden from modifiers so only executions can modify it." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Astral|Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The current max health attribute.  Max health is an attribute since gameplay effects can modify it.\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/DefaultAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The current max health attribute.  Max health is an attribute since gameplay effects can modify it." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Healing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Astral|Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Incoming healing. This is mapped directly to +Health\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/DefaultAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Incoming healing. This is mapped directly to +Health" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Astral|Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Incoming damage. This is mapped directly to -Health\n" },
#endif
		{ "HideFromModifiers", "" },
		{ "ModuleRelativePath", "AbilitySystem/Attributes/DefaultAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Incoming damage. This is mapped directly to -Health" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Healing;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDefaultAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDefaultAttributeSet_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDefaultAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDefaultAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDefaultAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDefaultAttributeSet_Statics::NewProp_Healing = { "Healing", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDefaultAttributeSet, Healing), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Healing_MetaData), NewProp_Healing_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDefaultAttributeSet_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDefaultAttributeSet, Damage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDefaultAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultAttributeSet_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultAttributeSet_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultAttributeSet_Statics::NewProp_Healing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultAttributeSet_Statics::NewProp_Damage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultAttributeSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDefaultAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDefaultAttributeSet_Statics::ClassParams = {
	&UDefaultAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDefaultAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UDefaultAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDefaultAttributeSet()
{
	if (!Z_Registration_Info_UClass_UDefaultAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDefaultAttributeSet.OuterSingleton, Z_Construct_UClass_UDefaultAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDefaultAttributeSet.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<UDefaultAttributeSet>()
{
	return UDefaultAttributeSet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDefaultAttributeSet);
UDefaultAttributeSet::~UDefaultAttributeSet() {}
// End Class UDefaultAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_Attributes_DefaultAttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDefaultAttributeSet, UDefaultAttributeSet::StaticClass, TEXT("UDefaultAttributeSet"), &Z_Registration_Info_UClass_UDefaultAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDefaultAttributeSet), 365901720U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_Attributes_DefaultAttributeSet_h_1953875064(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_Attributes_DefaultAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_Attributes_DefaultAttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
