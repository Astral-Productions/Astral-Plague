// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/AbilitySystem/AstralPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralPlayerState() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_AAstralPlayerState();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_AAstralPlayerState_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralAbilitySystemComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class AAstralPlayerState Function GetAstralAbilitySystemComponent
struct Z_Construct_UFunction_AAstralPlayerState_GetAstralAbilitySystemComponent_Statics
{
	struct AstralPlayerState_eventGetAstralAbilitySystemComponent_Parms
	{
		UAstralAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|GameState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets the ability system component used for game wide things\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/AstralPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the ability system component used for game wide things" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAstralPlayerState_GetAstralAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralPlayerState_eventGetAstralAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_UAstralAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAstralPlayerState_GetAstralAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlayerState_GetAstralAbilitySystemComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetAstralAbilitySystemComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralPlayerState_GetAstralAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralPlayerState, nullptr, "GetAstralAbilitySystemComponent", nullptr, nullptr, Z_Construct_UFunction_AAstralPlayerState_GetAstralAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetAstralAbilitySystemComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAstralPlayerState_GetAstralAbilitySystemComponent_Statics::AstralPlayerState_eventGetAstralAbilitySystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetAstralAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralPlayerState_GetAstralAbilitySystemComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAstralPlayerState_GetAstralAbilitySystemComponent_Statics::AstralPlayerState_eventGetAstralAbilitySystemComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAstralPlayerState_GetAstralAbilitySystemComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralPlayerState_GetAstralAbilitySystemComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralPlayerState::execGetAstralAbilitySystemComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAstralAbilitySystemComponent**)Z_Param__Result=P_THIS->GetAstralAbilitySystemComponent();
	P_NATIVE_END;
}
// End Class AAstralPlayerState Function GetAstralAbilitySystemComponent

// Begin Class AAstralPlayerState
void AAstralPlayerState::StaticRegisterNativesAAstralPlayerState()
{
	UClass* Class = AAstralPlayerState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAstralAbilitySystemComponent", &AAstralPlayerState::execGetAstralAbilitySystemComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAstralPlayerState);
UClass* Z_Construct_UClass_AAstralPlayerState_NoRegister()
{
	return AAstralPlayerState::StaticClass();
}
struct Z_Construct_UClass_AAstralPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "AbilitySystem/AstralPlayerState.h" },
		{ "ModuleRelativePath", "AbilitySystem/AstralPlayerState.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "Astral|GameState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The ability system component subobject for game-wide things (primarily gameplay cues)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AbilitySystem/AstralPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ability system component subobject for game-wide things (primarily gameplay cues)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAstralPlayerState_GetAstralAbilitySystemComponent, "GetAstralAbilitySystemComponent" }, // 2793409412
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAstralPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAstralPlayerState_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x01440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAstralPlayerState, AbilitySystemComponent), Z_Construct_UClass_UAstralAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAstralPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAstralPlayerState_Statics::NewProp_AbilitySystemComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAstralPlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAstralPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAstralPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AAstralPlayerState_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AAstralPlayerState, IAbilitySystemInterface), false },  // 2272790346
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAstralPlayerState_Statics::ClassParams = {
	&AAstralPlayerState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAstralPlayerState_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAstralPlayerState_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAstralPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_AAstralPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAstralPlayerState()
{
	if (!Z_Registration_Info_UClass_AAstralPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAstralPlayerState.OuterSingleton, Z_Construct_UClass_AAstralPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAstralPlayerState.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<AAstralPlayerState>()
{
	return AAstralPlayerState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAstralPlayerState);
AAstralPlayerState::~AAstralPlayerState() {}
// End Class AAstralPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralPlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAstralPlayerState, AAstralPlayerState::StaticClass, TEXT("AAstralPlayerState"), &Z_Registration_Info_UClass_AAstralPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAstralPlayerState), 1942628331U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralPlayerState_h_1095843142(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS