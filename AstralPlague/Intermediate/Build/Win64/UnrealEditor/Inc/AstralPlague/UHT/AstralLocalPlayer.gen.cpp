// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/Player/AstralLocalPlayer.h"
#include "Runtime/AudioMixer/Public/AudioMixerBlueprintLibrary.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralLocalPlayer() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralLocalPlayer();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralLocalPlayer_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralSettingsLocal_NoRegister();
AUDIOMIXER_API UScriptStruct* Z_Construct_UScriptStruct_FSwapAudioOutputResult();
COMMONGAME_API UClass* Z_Construct_UClass_UCommonLocalPlayer();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class UAstralLocalPlayer Function GetLocalSettings
struct Z_Construct_UFunction_UAstralLocalPlayer_GetLocalSettings_Statics
{
	struct AstralLocalPlayer_eventGetLocalSettings_Parms
	{
		UAstralSettingsLocal* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the local settings for this player, this is read from config files at process startup and is always valid */" },
#endif
		{ "ModuleRelativePath", "Player/AstralLocalPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the local settings for this player, this is read from config files at process startup and is always valid" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAstralLocalPlayer_GetLocalSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralLocalPlayer_eventGetLocalSettings_Parms, ReturnValue), Z_Construct_UClass_UAstralSettingsLocal_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralLocalPlayer_GetLocalSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralLocalPlayer_GetLocalSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralLocalPlayer_GetLocalSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralLocalPlayer_GetLocalSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralLocalPlayer, nullptr, "GetLocalSettings", nullptr, nullptr, Z_Construct_UFunction_UAstralLocalPlayer_GetLocalSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralLocalPlayer_GetLocalSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAstralLocalPlayer_GetLocalSettings_Statics::AstralLocalPlayer_eventGetLocalSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralLocalPlayer_GetLocalSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralLocalPlayer_GetLocalSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAstralLocalPlayer_GetLocalSettings_Statics::AstralLocalPlayer_eventGetLocalSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralLocalPlayer_GetLocalSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralLocalPlayer_GetLocalSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAstralLocalPlayer::execGetLocalSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAstralSettingsLocal**)Z_Param__Result=P_THIS->GetLocalSettings();
	P_NATIVE_END;
}
// End Class UAstralLocalPlayer Function GetLocalSettings

// Begin Class UAstralLocalPlayer Function OnCompletedAudioDeviceSwap
struct Z_Construct_UFunction_UAstralLocalPlayer_OnCompletedAudioDeviceSwap_Statics
{
	struct AstralLocalPlayer_eventOnCompletedAudioDeviceSwap_Parms
	{
		FSwapAudioOutputResult SwapResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/AstralLocalPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwapResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SwapResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAstralLocalPlayer_OnCompletedAudioDeviceSwap_Statics::NewProp_SwapResult = { "SwapResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralLocalPlayer_eventOnCompletedAudioDeviceSwap_Parms, SwapResult), Z_Construct_UScriptStruct_FSwapAudioOutputResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwapResult_MetaData), NewProp_SwapResult_MetaData) }; // 556524030
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralLocalPlayer_OnCompletedAudioDeviceSwap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralLocalPlayer_OnCompletedAudioDeviceSwap_Statics::NewProp_SwapResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralLocalPlayer_OnCompletedAudioDeviceSwap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralLocalPlayer_OnCompletedAudioDeviceSwap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralLocalPlayer, nullptr, "OnCompletedAudioDeviceSwap", nullptr, nullptr, Z_Construct_UFunction_UAstralLocalPlayer_OnCompletedAudioDeviceSwap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralLocalPlayer_OnCompletedAudioDeviceSwap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAstralLocalPlayer_OnCompletedAudioDeviceSwap_Statics::AstralLocalPlayer_eventOnCompletedAudioDeviceSwap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralLocalPlayer_OnCompletedAudioDeviceSwap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralLocalPlayer_OnCompletedAudioDeviceSwap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAstralLocalPlayer_OnCompletedAudioDeviceSwap_Statics::AstralLocalPlayer_eventOnCompletedAudioDeviceSwap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralLocalPlayer_OnCompletedAudioDeviceSwap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralLocalPlayer_OnCompletedAudioDeviceSwap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAstralLocalPlayer::execOnCompletedAudioDeviceSwap)
{
	P_GET_STRUCT_REF(FSwapAudioOutputResult,Z_Param_Out_SwapResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCompletedAudioDeviceSwap(Z_Param_Out_SwapResult);
	P_NATIVE_END;
}
// End Class UAstralLocalPlayer Function OnCompletedAudioDeviceSwap

// Begin Class UAstralLocalPlayer
void UAstralLocalPlayer::StaticRegisterNativesUAstralLocalPlayer()
{
	UClass* Class = UAstralLocalPlayer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetLocalSettings", &UAstralLocalPlayer::execGetLocalSettings },
		{ "OnCompletedAudioDeviceSwap", &UAstralLocalPlayer::execOnCompletedAudioDeviceSwap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAstralLocalPlayer);
UClass* Z_Construct_UClass_UAstralLocalPlayer_NoRegister()
{
	return UAstralLocalPlayer::StaticClass();
}
struct Z_Construct_UClass_UAstralLocalPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UAstralLocalPlayer\n */" },
#endif
		{ "IncludePath", "Player/AstralLocalPlayer.h" },
		{ "ModuleRelativePath", "Player/AstralLocalPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UAstralLocalPlayer" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "ModuleRelativePath", "Player/AstralLocalPlayer.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastBoundPC_MetaData[] = {
		{ "ModuleRelativePath", "Player/AstralLocalPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_LastBoundPC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAstralLocalPlayer_GetLocalSettings, "GetLocalSettings" }, // 522770545
		{ &Z_Construct_UFunction_UAstralLocalPlayer_OnCompletedAudioDeviceSwap, "OnCompletedAudioDeviceSwap" }, // 4199584079
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAstralLocalPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAstralLocalPlayer_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralLocalPlayer, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAstralLocalPlayer_Statics::NewProp_LastBoundPC = { "LastBoundPC", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralLocalPlayer, LastBoundPC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastBoundPC_MetaData), NewProp_LastBoundPC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAstralLocalPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralLocalPlayer_Statics::NewProp_InputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralLocalPlayer_Statics::NewProp_LastBoundPC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralLocalPlayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAstralLocalPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonLocalPlayer,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralLocalPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAstralLocalPlayer_Statics::ClassParams = {
	&UAstralLocalPlayer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAstralLocalPlayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAstralLocalPlayer_Statics::PropPointers),
	0,
	0x001000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralLocalPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UAstralLocalPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAstralLocalPlayer()
{
	if (!Z_Registration_Info_UClass_UAstralLocalPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAstralLocalPlayer.OuterSingleton, Z_Construct_UClass_UAstralLocalPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAstralLocalPlayer.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<UAstralLocalPlayer>()
{
	return UAstralLocalPlayer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAstralLocalPlayer);
UAstralLocalPlayer::~UAstralLocalPlayer() {}
// End Class UAstralLocalPlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Player_AstralLocalPlayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAstralLocalPlayer, UAstralLocalPlayer::StaticClass, TEXT("UAstralLocalPlayer"), &Z_Registration_Info_UClass_UAstralLocalPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAstralLocalPlayer), 664544603U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Player_AstralLocalPlayer_h_1462787463(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Player_AstralLocalPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Player_AstralLocalPlayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
