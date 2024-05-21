// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/GameModes/AstralGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralGameState() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_AAstralGameState();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_AAstralGameState_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralAbilitySystemComponent_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralExperienceManagerComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularGameStateBase();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class AAstralGameState Function GetAstralAbilitySystemComponent
struct Z_Construct_UFunction_AAstralGameState_GetAstralAbilitySystemComponent_Statics
{
	struct AstralGameState_eventGetAstralAbilitySystemComponent_Parms
	{
		UAstralAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|GameState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets the ability system component used for game wide things\n" },
#endif
		{ "ModuleRelativePath", "GameModes/AstralGameState.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAstralGameState_GetAstralAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralGameState_eventGetAstralAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_UAstralAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAstralGameState_GetAstralAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralGameState_GetAstralAbilitySystemComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralGameState_GetAstralAbilitySystemComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralGameState_GetAstralAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralGameState, nullptr, "GetAstralAbilitySystemComponent", nullptr, nullptr, Z_Construct_UFunction_AAstralGameState_GetAstralAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralGameState_GetAstralAbilitySystemComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAstralGameState_GetAstralAbilitySystemComponent_Statics::AstralGameState_eventGetAstralAbilitySystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralGameState_GetAstralAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralGameState_GetAstralAbilitySystemComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAstralGameState_GetAstralAbilitySystemComponent_Statics::AstralGameState_eventGetAstralAbilitySystemComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAstralGameState_GetAstralAbilitySystemComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralGameState_GetAstralAbilitySystemComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralGameState::execGetAstralAbilitySystemComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAstralAbilitySystemComponent**)Z_Param__Result=P_THIS->GetAstralAbilitySystemComponent();
	P_NATIVE_END;
}
// End Class AAstralGameState Function GetAstralAbilitySystemComponent

// Begin Class AAstralGameState Function OnRep_RecorderPlayerState
struct Z_Construct_UFunction_AAstralGameState_OnRep_RecorderPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameModes/AstralGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralGameState_OnRep_RecorderPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralGameState, nullptr, "OnRep_RecorderPlayerState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralGameState_OnRep_RecorderPlayerState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralGameState_OnRep_RecorderPlayerState_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAstralGameState_OnRep_RecorderPlayerState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralGameState_OnRep_RecorderPlayerState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralGameState::execOnRep_RecorderPlayerState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_RecorderPlayerState();
	P_NATIVE_END;
}
// End Class AAstralGameState Function OnRep_RecorderPlayerState

// Begin Class AAstralGameState
void AAstralGameState::StaticRegisterNativesAAstralGameState()
{
	UClass* Class = AAstralGameState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAstralAbilitySystemComponent", &AAstralGameState::execGetAstralAbilitySystemComponent },
		{ "OnRep_RecorderPlayerState", &AAstralGameState::execOnRep_RecorderPlayerState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAstralGameState);
UClass* Z_Construct_UClass_AAstralGameState_NoRegister()
{
	return AAstralGameState::StaticClass();
}
struct Z_Construct_UClass_AAstralGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * AAstralGameState\n *\n *\x09The base game state class used by this project.\n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModes/AstralGameState.h" },
		{ "ModuleRelativePath", "GameModes/AstralGameState.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AAstralGameState\n\n    The base game state class used by this project." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExperienceManagerComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Handles loading and managing the current gameplay experience\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameModes/AstralGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles loading and managing the current gameplay experience" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "Astral|GameState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The ability system component subobject for game-wide things (primarily gameplay cues)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameModes/AstralGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ability system component subobject for game-wide things (primarily gameplay cues)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerFPS_MetaData[] = {
		{ "ModuleRelativePath", "GameModes/AstralGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecorderPlayerState_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The player state that recorded a replay, it is used to select the right pawn to follow\n// This is only set in replay streams and is not replicated normally\n" },
#endif
		{ "ModuleRelativePath", "GameModes/AstralGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The player state that recorded a replay, it is used to select the right pawn to follow\nThis is only set in replay streams and is not replicated normally" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExperienceManagerComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ServerFPS;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RecorderPlayerState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAstralGameState_GetAstralAbilitySystemComponent, "GetAstralAbilitySystemComponent" }, // 329336046
		{ &Z_Construct_UFunction_AAstralGameState_OnRep_RecorderPlayerState, "OnRep_RecorderPlayerState" }, // 510363593
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAstralGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAstralGameState_Statics::NewProp_ExperienceManagerComponent = { "ExperienceManagerComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAstralGameState, ExperienceManagerComponent), Z_Construct_UClass_UAstralExperienceManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExperienceManagerComponent_MetaData), NewProp_ExperienceManagerComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAstralGameState_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x01440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAstralGameState, AbilitySystemComponent), Z_Construct_UClass_UAstralAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAstralGameState_Statics::NewProp_ServerFPS = { "ServerFPS", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAstralGameState, ServerFPS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerFPS_MetaData), NewProp_ServerFPS_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAstralGameState_Statics::NewProp_RecorderPlayerState = { "RecorderPlayerState", "OnRep_RecorderPlayerState", (EPropertyFlags)0x0124080100002020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAstralGameState, RecorderPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecorderPlayerState_MetaData), NewProp_RecorderPlayerState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAstralGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAstralGameState_Statics::NewProp_ExperienceManagerComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAstralGameState_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAstralGameState_Statics::NewProp_ServerFPS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAstralGameState_Statics::NewProp_RecorderPlayerState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAstralGameState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAstralGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AModularGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAstralGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AAstralGameState_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AAstralGameState, IAbilitySystemInterface), false },  // 2272790346
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAstralGameState_Statics::ClassParams = {
	&AAstralGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAstralGameState_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAstralGameState_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAstralGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_AAstralGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAstralGameState()
{
	if (!Z_Registration_Info_UClass_AAstralGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAstralGameState.OuterSingleton, Z_Construct_UClass_AAstralGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAstralGameState.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<AAstralGameState>()
{
	return AAstralGameState::StaticClass();
}
void AAstralGameState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_ServerFPS(TEXT("ServerFPS"));
	static const FName Name_RecorderPlayerState(TEXT("RecorderPlayerState"));
	const bool bIsValid = true
		&& Name_ServerFPS == ClassReps[(int32)ENetFields_Private::ServerFPS].Property->GetFName()
		&& Name_RecorderPlayerState == ClassReps[(int32)ENetFields_Private::RecorderPlayerState].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AAstralGameState"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAstralGameState);
AAstralGameState::~AAstralGameState() {}
// End Class AAstralGameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_GameModes_AstralGameState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAstralGameState, AAstralGameState::StaticClass, TEXT("AAstralGameState"), &Z_Registration_Info_UClass_AAstralGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAstralGameState), 160707604U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_GameModes_AstralGameState_h_2957929121(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_GameModes_AstralGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_GameModes_AstralGameState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
