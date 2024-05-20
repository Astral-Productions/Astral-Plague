// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/Settings/AstralSettingsLocal.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralSettingsLocal() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralSettingsLocal();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralSettingsLocal_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameUserSettings();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UPlayerMappableInputConfig_NoRegister();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class UAstralSettingsLocal Function GetInputConfigByName
struct Z_Construct_UFunction_UAstralSettingsLocal_GetInputConfigByName_Statics
{
	struct AstralSettingsLocal_eventGetInputConfigByName_Parms
	{
		FName ConfigName;
		const UPlayerMappableInputConfig* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get an input config with a certain name. If the config doesn't exist then nullptr will be returned. */" },
#endif
		{ "ModuleRelativePath", "Settings/AstralSettingsLocal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get an input config with a certain name. If the config doesn't exist then nullptr will be returned." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ConfigName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAstralSettingsLocal_GetInputConfigByName_Statics::NewProp_ConfigName = { "ConfigName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralSettingsLocal_eventGetInputConfigByName_Parms, ConfigName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAstralSettingsLocal_GetInputConfigByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralSettingsLocal_eventGetInputConfigByName_Parms, ReturnValue), Z_Construct_UClass_UPlayerMappableInputConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralSettingsLocal_GetInputConfigByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralSettingsLocal_GetInputConfigByName_Statics::NewProp_ConfigName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralSettingsLocal_GetInputConfigByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralSettingsLocal_GetInputConfigByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralSettingsLocal_GetInputConfigByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralSettingsLocal, nullptr, "GetInputConfigByName", nullptr, nullptr, Z_Construct_UFunction_UAstralSettingsLocal_GetInputConfigByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralSettingsLocal_GetInputConfigByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAstralSettingsLocal_GetInputConfigByName_Statics::AstralSettingsLocal_eventGetInputConfigByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralSettingsLocal_GetInputConfigByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralSettingsLocal_GetInputConfigByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAstralSettingsLocal_GetInputConfigByName_Statics::AstralSettingsLocal_eventGetInputConfigByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralSettingsLocal_GetInputConfigByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralSettingsLocal_GetInputConfigByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAstralSettingsLocal::execGetInputConfigByName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ConfigName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UPlayerMappableInputConfig**)Z_Param__Result=P_THIS->GetInputConfigByName(Z_Param_ConfigName);
	P_NATIVE_END;
}
// End Class UAstralSettingsLocal Function GetInputConfigByName

// Begin Class UAstralSettingsLocal
void UAstralSettingsLocal::StaticRegisterNativesUAstralSettingsLocal()
{
	UClass* Class = UAstralSettingsLocal::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetInputConfigByName", &UAstralSettingsLocal::execGetInputConfigByName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAstralSettingsLocal);
UClass* Z_Construct_UClass_UAstralSettingsLocal_NoRegister()
{
	return UAstralSettingsLocal::StaticClass();
}
struct Z_Construct_UClass_UAstralSettingsLocal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This class is currently very bare bones as the Astral logic is QUITE extensive. \n */" },
#endif
		{ "IncludePath", "Settings/AstralSettingsLocal.h" },
		{ "ModuleRelativePath", "Settings/AstralSettingsLocal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This class is currently very bare bones as the Astral logic is QUITE extensive." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAstralSettingsLocal_GetInputConfigByName, "GetInputConfigByName" }, // 3807111938
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAstralSettingsLocal>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAstralSettingsLocal_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameUserSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralSettingsLocal_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAstralSettingsLocal_Statics::ClassParams = {
	&UAstralSettingsLocal::StaticClass,
	"GameUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x408000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralSettingsLocal_Statics::Class_MetaDataParams), Z_Construct_UClass_UAstralSettingsLocal_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAstralSettingsLocal()
{
	if (!Z_Registration_Info_UClass_UAstralSettingsLocal.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAstralSettingsLocal.OuterSingleton, Z_Construct_UClass_UAstralSettingsLocal_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAstralSettingsLocal.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<UAstralSettingsLocal>()
{
	return UAstralSettingsLocal::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAstralSettingsLocal);
UAstralSettingsLocal::~UAstralSettingsLocal() {}
// End Class UAstralSettingsLocal

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Settings_AstralSettingsLocal_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAstralSettingsLocal, UAstralSettingsLocal::StaticClass, TEXT("UAstralSettingsLocal"), &Z_Registration_Info_UClass_UAstralSettingsLocal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAstralSettingsLocal), 722699833U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Settings_AstralSettingsLocal_h_3803188779(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Settings_AstralSettingsLocal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Settings_AstralSettingsLocal_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
