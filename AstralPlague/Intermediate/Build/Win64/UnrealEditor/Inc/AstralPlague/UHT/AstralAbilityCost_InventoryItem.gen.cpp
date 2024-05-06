// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/AbilitySystem/AstralAbilityCost_InventoryItem.h"
#include "GameplayAbilities/Public/ScalableFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralAbilityCost_InventoryItem() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralAbilityCost();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralAbilityCost_InventoryItem();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralAbilityCost_InventoryItem_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class UAstralAbilityCost_InventoryItem
void UAstralAbilityCost_InventoryItem::StaticRegisterNativesUAstralAbilityCost_InventoryItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAstralAbilityCost_InventoryItem);
UClass* Z_Construct_UClass_UAstralAbilityCost_InventoryItem_NoRegister()
{
	return UAstralAbilityCost_InventoryItem::StaticClass();
}
struct Z_Construct_UClass_UAstralAbilityCost_InventoryItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/AstralAbilityCost_InventoryItem.h" },
		{ "ModuleRelativePath", "AbilitySystem/AstralAbilityCost_InventoryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "Category", "AbilityCost" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How much of the item to spend (keyed on ability level) */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/AstralAbilityCost_InventoryItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How much of the item to spend (keyed on ability level)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAstralAbilityCost_InventoryItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAstralAbilityCost_InventoryItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralAbilityCost_InventoryItem, Quantity), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) }; // 703790095
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAstralAbilityCost_InventoryItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralAbilityCost_InventoryItem_Statics::NewProp_Quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralAbilityCost_InventoryItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAstralAbilityCost_InventoryItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAstralAbilityCost,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralAbilityCost_InventoryItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAstralAbilityCost_InventoryItem_Statics::ClassParams = {
	&UAstralAbilityCost_InventoryItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAstralAbilityCost_InventoryItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAstralAbilityCost_InventoryItem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralAbilityCost_InventoryItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UAstralAbilityCost_InventoryItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAstralAbilityCost_InventoryItem()
{
	if (!Z_Registration_Info_UClass_UAstralAbilityCost_InventoryItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAstralAbilityCost_InventoryItem.OuterSingleton, Z_Construct_UClass_UAstralAbilityCost_InventoryItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAstralAbilityCost_InventoryItem.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<UAstralAbilityCost_InventoryItem>()
{
	return UAstralAbilityCost_InventoryItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAstralAbilityCost_InventoryItem);
UAstralAbilityCost_InventoryItem::~UAstralAbilityCost_InventoryItem() {}
// End Class UAstralAbilityCost_InventoryItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralAbilityCost_InventoryItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAstralAbilityCost_InventoryItem, UAstralAbilityCost_InventoryItem::StaticClass, TEXT("UAstralAbilityCost_InventoryItem"), &Z_Registration_Info_UClass_UAstralAbilityCost_InventoryItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAstralAbilityCost_InventoryItem), 2668025758U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralAbilityCost_InventoryItem_h_2891817126(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralAbilityCost_InventoryItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralAbilityCost_InventoryItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
