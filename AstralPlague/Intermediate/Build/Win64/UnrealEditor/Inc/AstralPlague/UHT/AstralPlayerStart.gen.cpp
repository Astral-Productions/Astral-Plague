// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/Player/AstralPlayerStart.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralPlayerStart() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_AAstralPlayerStart();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_AAstralPlayerStart_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerStart();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class AAstralPlayerStart
void AAstralPlayerStart::StaticRegisterNativesAAstralPlayerStart()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAstralPlayerStart);
UClass* Z_Construct_UClass_AAstralPlayerStart_NoRegister()
{
	return AAstralPlayerStart::StaticClass();
}
struct Z_Construct_UClass_AAstralPlayerStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * AAstralPlayerStart\n * \n * Base player starts that can be used by a lot of modes.\n */" },
#endif
		{ "HideCategories", "Collision Lighting LightColor Force" },
		{ "IncludePath", "Player/AstralPlayerStart.h" },
		{ "ModuleRelativePath", "Player/AstralPlayerStart.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AAstralPlayerStart\n\nBase player starts that can be used by a lot of modes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClaimingController_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The controller that claimed this PlayerStart */" },
#endif
		{ "ModuleRelativePath", "Player/AstralPlayerStart.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The controller that claimed this PlayerStart" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpirationCheckInterval_MetaData[] = {
		{ "Category", "Player Start Claiming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Interval in which we'll check if this player start is not colliding with anyone anymore */" },
#endif
		{ "ModuleRelativePath", "Player/AstralPlayerStart.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interval in which we'll check if this player start is not colliding with anyone anymore" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPointTags_MetaData[] = {
		{ "Category", "AstralPlayerStart" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tags to identify this player start */" },
#endif
		{ "ModuleRelativePath", "Player/AstralPlayerStart.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags to identify this player start" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClaimingController;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpirationCheckInterval;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartPointTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAstralPlayerStart>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAstralPlayerStart_Statics::NewProp_ClaimingController = { "ClaimingController", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAstralPlayerStart, ClaimingController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClaimingController_MetaData), NewProp_ClaimingController_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAstralPlayerStart_Statics::NewProp_ExpirationCheckInterval = { "ExpirationCheckInterval", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAstralPlayerStart, ExpirationCheckInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpirationCheckInterval_MetaData), NewProp_ExpirationCheckInterval_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAstralPlayerStart_Statics::NewProp_StartPointTags = { "StartPointTags", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAstralPlayerStart, StartPointTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPointTags_MetaData), NewProp_StartPointTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAstralPlayerStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAstralPlayerStart_Statics::NewProp_ClaimingController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAstralPlayerStart_Statics::NewProp_ExpirationCheckInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAstralPlayerStart_Statics::NewProp_StartPointTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAstralPlayerStart_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAstralPlayerStart_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerStart,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAstralPlayerStart_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAstralPlayerStart_Statics::ClassParams = {
	&AAstralPlayerStart::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAstralPlayerStart_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAstralPlayerStart_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAstralPlayerStart_Statics::Class_MetaDataParams), Z_Construct_UClass_AAstralPlayerStart_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAstralPlayerStart()
{
	if (!Z_Registration_Info_UClass_AAstralPlayerStart.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAstralPlayerStart.OuterSingleton, Z_Construct_UClass_AAstralPlayerStart_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAstralPlayerStart.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<AAstralPlayerStart>()
{
	return AAstralPlayerStart::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAstralPlayerStart);
AAstralPlayerStart::~AAstralPlayerStart() {}
// End Class AAstralPlayerStart

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Player_AstralPlayerStart_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAstralPlayerStart, AAstralPlayerStart::StaticClass, TEXT("AAstralPlayerStart"), &Z_Registration_Info_UClass_AAstralPlayerStart, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAstralPlayerStart), 2412292340U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Player_AstralPlayerStart_h_2338220360(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Player_AstralPlayerStart_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Player_AstralPlayerStart_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
