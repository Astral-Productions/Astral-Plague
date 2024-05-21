// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/Player/AstralNPCController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralNPCController() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_AAstralNPCController();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_AAstralNPCController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularAIController();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class AAstralNPCController
void AAstralNPCController::StaticRegisterNativesAAstralNPCController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAstralNPCController);
UClass* Z_Construct_UClass_AAstralNPCController_NoRegister()
{
	return AAstralNPCController::StaticClass();
}
struct Z_Construct_UClass_AAstralNPCController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/AstralNPCController.h" },
		{ "ModuleRelativePath", "Player/AstralNPCController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastSeenPlayerState_MetaData[] = {
		{ "ModuleRelativePath", "Player/AstralNPCController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LastSeenPlayerState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAstralNPCController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAstralNPCController_Statics::NewProp_LastSeenPlayerState = { "LastSeenPlayerState", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAstralNPCController, LastSeenPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastSeenPlayerState_MetaData), NewProp_LastSeenPlayerState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAstralNPCController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAstralNPCController_Statics::NewProp_LastSeenPlayerState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAstralNPCController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAstralNPCController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AModularAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAstralNPCController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAstralNPCController_Statics::ClassParams = {
	&AAstralNPCController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAstralNPCController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAstralNPCController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAstralNPCController_Statics::Class_MetaDataParams), Z_Construct_UClass_AAstralNPCController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAstralNPCController()
{
	if (!Z_Registration_Info_UClass_AAstralNPCController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAstralNPCController.OuterSingleton, Z_Construct_UClass_AAstralNPCController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAstralNPCController.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<AAstralNPCController>()
{
	return AAstralNPCController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAstralNPCController);
AAstralNPCController::~AAstralNPCController() {}
// End Class AAstralNPCController

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Player_AstralNPCController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAstralNPCController, AAstralNPCController::StaticClass, TEXT("AAstralNPCController"), &Z_Registration_Info_UClass_AAstralNPCController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAstralNPCController), 45731389U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Player_AstralNPCController_h_1318426842(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Player_AstralNPCController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Player_AstralNPCController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
