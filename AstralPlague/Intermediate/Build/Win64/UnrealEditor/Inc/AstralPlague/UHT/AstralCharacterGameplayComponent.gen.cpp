// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/Components/AstralCharacterGameplayComponent.h"
#include "AstralPlague/GameFeatures/GameFeatureAction_AddInputContextMapping.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralCharacterGameplayComponent() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralCameraMode_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralCharacterGameplayComponent();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralCharacterGameplayComponent_NoRegister();
ASTRALPLAGUE_API UScriptStruct* Z_Construct_UScriptStruct_FInputMappingContextAndPriority();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameFrameworkInitStateInterface_NoRegister();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UPawnComponent();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class UAstralCharacterGameplayComponent Function FindGameplayComponent
struct Z_Construct_UFunction_UAstralCharacterGameplayComponent_FindGameplayComponent_Statics
{
	struct AstralCharacterGameplayComponent_eventFindGameplayComponent_Parms
	{
		const AActor* Actor;
		UAstralCharacterGameplayComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|Hero" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the hero component if one exists on the specified actor. */" },
#endif
		{ "ModuleRelativePath", "Components/AstralCharacterGameplayComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the hero component if one exists on the specified actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAstralCharacterGameplayComponent_FindGameplayComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralCharacterGameplayComponent_eventFindGameplayComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAstralCharacterGameplayComponent_FindGameplayComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralCharacterGameplayComponent_eventFindGameplayComponent_Parms, ReturnValue), Z_Construct_UClass_UAstralCharacterGameplayComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralCharacterGameplayComponent_FindGameplayComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralCharacterGameplayComponent_FindGameplayComponent_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralCharacterGameplayComponent_FindGameplayComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralCharacterGameplayComponent_FindGameplayComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralCharacterGameplayComponent_FindGameplayComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralCharacterGameplayComponent, nullptr, "FindGameplayComponent", nullptr, nullptr, Z_Construct_UFunction_UAstralCharacterGameplayComponent_FindGameplayComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralCharacterGameplayComponent_FindGameplayComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAstralCharacterGameplayComponent_FindGameplayComponent_Statics::AstralCharacterGameplayComponent_eventFindGameplayComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralCharacterGameplayComponent_FindGameplayComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralCharacterGameplayComponent_FindGameplayComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAstralCharacterGameplayComponent_FindGameplayComponent_Statics::AstralCharacterGameplayComponent_eventFindGameplayComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralCharacterGameplayComponent_FindGameplayComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralCharacterGameplayComponent_FindGameplayComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAstralCharacterGameplayComponent::execFindGameplayComponent)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAstralCharacterGameplayComponent**)Z_Param__Result=UAstralCharacterGameplayComponent::FindGameplayComponent(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UAstralCharacterGameplayComponent Function FindGameplayComponent

// Begin Class UAstralCharacterGameplayComponent
void UAstralCharacterGameplayComponent::StaticRegisterNativesUAstralCharacterGameplayComponent()
{
	UClass* Class = UAstralCharacterGameplayComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindGameplayComponent", &UAstralCharacterGameplayComponent::execFindGameplayComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAstralCharacterGameplayComponent);
UClass* Z_Construct_UClass_UAstralCharacterGameplayComponent_NoRegister()
{
	return UAstralCharacterGameplayComponent::StaticClass();
}
struct Z_Construct_UClass_UAstralCharacterGameplayComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Component that sets up input and camera handling for player controlled pawns (or bots that simulate players).\n * This depends on a PawnExtensionComponent to coordinate initialization.\n */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Components/AstralCharacterGameplayComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Components/AstralCharacterGameplayComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component that sets up input and camera handling for player controlled pawns (or bots that simulate players).\nThis depends on a PawnExtensionComponent to coordinate initialization." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInputMappings_MetaData[] = {
		{ "Category", "AstralCharacterGameplayComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Input Configs that should be added to this player when initializing the input. These configs\n\x09 * will NOT be registered with the settings because they are added at runtime. If you want the config\n\x09 * pair to be in the settings, then add it via the GameFeatureAction_AddInputConfig\n\x09 * \n\x09 * NOTE: You should only add to this if you do not have a game feature plugin accessible to you.\n\x09 * If you do, then use the GameFeatureAction_AddInputConfig instead. \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Components/AstralCharacterGameplayComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Configs that should be added to this player when initializing the input. These configs\nwill NOT be registered with the settings because they are added at runtime. If you want the config\npair to be in the settings, then add it via the GameFeatureAction_AddInputConfig\n\nNOTE: You should only add to this if you do not have a game feature plugin accessible to you.\nIf you do, then use the GameFeatureAction_AddInputConfig instead." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityCameraMode_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera mode set by an ability. */" },
#endif
		{ "ModuleRelativePath", "Components/AstralCharacterGameplayComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera mode set by an ability." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultInputMappings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultInputMappings;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityCameraMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAstralCharacterGameplayComponent_FindGameplayComponent, "FindGameplayComponent" }, // 2215667536
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAstralCharacterGameplayComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAstralCharacterGameplayComponent_Statics::NewProp_DefaultInputMappings_Inner = { "DefaultInputMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputMappingContextAndPriority, METADATA_PARAMS(0, nullptr) }; // 3234570853
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAstralCharacterGameplayComponent_Statics::NewProp_DefaultInputMappings = { "DefaultInputMappings", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralCharacterGameplayComponent, DefaultInputMappings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultInputMappings_MetaData), NewProp_DefaultInputMappings_MetaData) }; // 3234570853
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAstralCharacterGameplayComponent_Statics::NewProp_AbilityCameraMode = { "AbilityCameraMode", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralCharacterGameplayComponent, AbilityCameraMode), Z_Construct_UClass_UClass, Z_Construct_UClass_UAstralCameraMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityCameraMode_MetaData), NewProp_AbilityCameraMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAstralCharacterGameplayComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralCharacterGameplayComponent_Statics::NewProp_DefaultInputMappings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralCharacterGameplayComponent_Statics::NewProp_DefaultInputMappings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralCharacterGameplayComponent_Statics::NewProp_AbilityCameraMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralCharacterGameplayComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAstralCharacterGameplayComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralCharacterGameplayComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAstralCharacterGameplayComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGameFrameworkInitStateInterface_NoRegister, (int32)VTABLE_OFFSET(UAstralCharacterGameplayComponent, IGameFrameworkInitStateInterface), false },  // 363983679
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAstralCharacterGameplayComponent_Statics::ClassParams = {
	&UAstralCharacterGameplayComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAstralCharacterGameplayComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAstralCharacterGameplayComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralCharacterGameplayComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAstralCharacterGameplayComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAstralCharacterGameplayComponent()
{
	if (!Z_Registration_Info_UClass_UAstralCharacterGameplayComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAstralCharacterGameplayComponent.OuterSingleton, Z_Construct_UClass_UAstralCharacterGameplayComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAstralCharacterGameplayComponent.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<UAstralCharacterGameplayComponent>()
{
	return UAstralCharacterGameplayComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAstralCharacterGameplayComponent);
UAstralCharacterGameplayComponent::~UAstralCharacterGameplayComponent() {}
// End Class UAstralCharacterGameplayComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Components_AstralCharacterGameplayComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAstralCharacterGameplayComponent, UAstralCharacterGameplayComponent::StaticClass, TEXT("UAstralCharacterGameplayComponent"), &Z_Registration_Info_UClass_UAstralCharacterGameplayComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAstralCharacterGameplayComponent), 3378614638U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Components_AstralCharacterGameplayComponent_h_136192043(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Components_AstralCharacterGameplayComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Components_AstralCharacterGameplayComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
