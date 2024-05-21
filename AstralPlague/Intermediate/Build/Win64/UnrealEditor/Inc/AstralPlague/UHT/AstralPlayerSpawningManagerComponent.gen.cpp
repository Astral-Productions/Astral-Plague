// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/Player/AstralPlayerSpawningManagerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralPlayerSpawningManagerComponent() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_AAstralPlayerStart_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralPlayerSpawningManagerComponent();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralPlayerSpawningManagerComponent_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameStateComponent();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class UAstralPlayerSpawningManagerComponent Function K2_OnFinishRestartPlayer
struct AstralPlayerSpawningManagerComponent_eventK2_OnFinishRestartPlayer_Parms
{
	AController* Player;
	FRotator StartRotation;
};
static FName NAME_UAstralPlayerSpawningManagerComponent_K2_OnFinishRestartPlayer = FName(TEXT("K2_OnFinishRestartPlayer"));
void UAstralPlayerSpawningManagerComponent::K2_OnFinishRestartPlayer(AController* Player, FRotator const& StartRotation)
{
	AstralPlayerSpawningManagerComponent_eventK2_OnFinishRestartPlayer_Parms Parms;
	Parms.Player=Player;
	Parms.StartRotation=StartRotation;
	ProcessEvent(FindFunctionChecked(NAME_UAstralPlayerSpawningManagerComponent_K2_OnFinishRestartPlayer),&Parms);
}
struct Z_Construct_UFunction_UAstralPlayerSpawningManagerComponent_K2_OnFinishRestartPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "OnFinishRestartPlayer" },
		{ "ModuleRelativePath", "Player/AstralPlayerSpawningManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAstralPlayerSpawningManagerComponent_K2_OnFinishRestartPlayer_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralPlayerSpawningManagerComponent_eventK2_OnFinishRestartPlayer_Parms, Player), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAstralPlayerSpawningManagerComponent_K2_OnFinishRestartPlayer_Statics::NewProp_StartRotation = { "StartRotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralPlayerSpawningManagerComponent_eventK2_OnFinishRestartPlayer_Parms, StartRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartRotation_MetaData), NewProp_StartRotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralPlayerSpawningManagerComponent_K2_OnFinishRestartPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralPlayerSpawningManagerComponent_K2_OnFinishRestartPlayer_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralPlayerSpawningManagerComponent_K2_OnFinishRestartPlayer_Statics::NewProp_StartRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralPlayerSpawningManagerComponent_K2_OnFinishRestartPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralPlayerSpawningManagerComponent_K2_OnFinishRestartPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralPlayerSpawningManagerComponent, nullptr, "K2_OnFinishRestartPlayer", nullptr, nullptr, Z_Construct_UFunction_UAstralPlayerSpawningManagerComponent_K2_OnFinishRestartPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralPlayerSpawningManagerComponent_K2_OnFinishRestartPlayer_Statics::PropPointers), sizeof(AstralPlayerSpawningManagerComponent_eventK2_OnFinishRestartPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C80800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralPlayerSpawningManagerComponent_K2_OnFinishRestartPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralPlayerSpawningManagerComponent_K2_OnFinishRestartPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(AstralPlayerSpawningManagerComponent_eventK2_OnFinishRestartPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralPlayerSpawningManagerComponent_K2_OnFinishRestartPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralPlayerSpawningManagerComponent_K2_OnFinishRestartPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UAstralPlayerSpawningManagerComponent Function K2_OnFinishRestartPlayer

// Begin Class UAstralPlayerSpawningManagerComponent
void UAstralPlayerSpawningManagerComponent::StaticRegisterNativesUAstralPlayerSpawningManagerComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAstralPlayerSpawningManagerComponent);
UClass* Z_Construct_UClass_UAstralPlayerSpawningManagerComponent_NoRegister()
{
	return UAstralPlayerSpawningManagerComponent::StaticClass();
}
struct Z_Construct_UClass_UAstralPlayerSpawningManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @class UAstralPlayerSpawningManagerComponent\n */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Player/AstralPlayerSpawningManagerComponent.h" },
		{ "ModuleRelativePath", "Player/AstralPlayerSpawningManagerComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@class UAstralPlayerSpawningManagerComponent" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedPlayerStarts_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** ~AAstralGameMode */" },
#endif
		{ "ModuleRelativePath", "Player/AstralPlayerSpawningManagerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~AAstralGameMode" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CachedPlayerStarts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedPlayerStarts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAstralPlayerSpawningManagerComponent_K2_OnFinishRestartPlayer, "K2_OnFinishRestartPlayer" }, // 2190948540
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAstralPlayerSpawningManagerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAstralPlayerSpawningManagerComponent_Statics::NewProp_CachedPlayerStarts_Inner = { "CachedPlayerStarts", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AAstralPlayerStart_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAstralPlayerSpawningManagerComponent_Statics::NewProp_CachedPlayerStarts = { "CachedPlayerStarts", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralPlayerSpawningManagerComponent, CachedPlayerStarts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedPlayerStarts_MetaData), NewProp_CachedPlayerStarts_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAstralPlayerSpawningManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralPlayerSpawningManagerComponent_Statics::NewProp_CachedPlayerStarts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralPlayerSpawningManagerComponent_Statics::NewProp_CachedPlayerStarts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralPlayerSpawningManagerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAstralPlayerSpawningManagerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameStateComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralPlayerSpawningManagerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAstralPlayerSpawningManagerComponent_Statics::ClassParams = {
	&UAstralPlayerSpawningManagerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAstralPlayerSpawningManagerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAstralPlayerSpawningManagerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralPlayerSpawningManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAstralPlayerSpawningManagerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAstralPlayerSpawningManagerComponent()
{
	if (!Z_Registration_Info_UClass_UAstralPlayerSpawningManagerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAstralPlayerSpawningManagerComponent.OuterSingleton, Z_Construct_UClass_UAstralPlayerSpawningManagerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAstralPlayerSpawningManagerComponent.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<UAstralPlayerSpawningManagerComponent>()
{
	return UAstralPlayerSpawningManagerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAstralPlayerSpawningManagerComponent);
UAstralPlayerSpawningManagerComponent::~UAstralPlayerSpawningManagerComponent() {}
// End Class UAstralPlayerSpawningManagerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Player_AstralPlayerSpawningManagerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAstralPlayerSpawningManagerComponent, UAstralPlayerSpawningManagerComponent::StaticClass, TEXT("UAstralPlayerSpawningManagerComponent"), &Z_Registration_Info_UClass_UAstralPlayerSpawningManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAstralPlayerSpawningManagerComponent), 190619228U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Player_AstralPlayerSpawningManagerComponent_h_154403300(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Player_AstralPlayerSpawningManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Player_AstralPlayerSpawningManagerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
