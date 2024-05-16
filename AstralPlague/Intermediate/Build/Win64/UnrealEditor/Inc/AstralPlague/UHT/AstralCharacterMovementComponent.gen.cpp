// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/Character/AstralCharacterMovementComponent.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralCharacterMovementComponent() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralCharacterMovementComponent();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralCharacterMovementComponent_NoRegister();
ASTRALPLAGUE_API UScriptStruct* Z_Construct_UScriptStruct_FAstralCharacterGroundInfo();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin ScriptStruct FAstralCharacterGroundInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AstralCharacterGroundInfo;
class UScriptStruct* FAstralCharacterGroundInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AstralCharacterGroundInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AstralCharacterGroundInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAstralCharacterGroundInfo, (UObject*)Z_Construct_UPackage__Script_AstralPlague(), TEXT("AstralCharacterGroundInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AstralCharacterGroundInfo.OuterSingleton;
}
template<> ASTRALPLAGUE_API UScriptStruct* StaticStruct<FAstralCharacterGroundInfo>()
{
	return FAstralCharacterGroundInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAstralCharacterGroundInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FAstralCharacterGroundInfo\n *\n *\x09Information about the ground under the character.  It only gets updated as needed.\n */" },
#endif
		{ "ModuleRelativePath", "Character/AstralCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FAstralCharacterGroundInfo\n\n    Information about the ground under the character.  It only gets updated as needed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundHitResult_MetaData[] = {
		{ "Category", "AstralCharacterGroundInfo" },
		{ "ModuleRelativePath", "Character/AstralCharacterMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundDistance_MetaData[] = {
		{ "Category", "AstralCharacterGroundInfo" },
		{ "ModuleRelativePath", "Character/AstralCharacterMovementComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroundHitResult;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAstralCharacterGroundInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAstralCharacterGroundInfo_Statics::NewProp_GroundHitResult = { "GroundHitResult", nullptr, (EPropertyFlags)0x0010008000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAstralCharacterGroundInfo, GroundHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundHitResult_MetaData), NewProp_GroundHitResult_MetaData) }; // 4100991306
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAstralCharacterGroundInfo_Statics::NewProp_GroundDistance = { "GroundDistance", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAstralCharacterGroundInfo, GroundDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundDistance_MetaData), NewProp_GroundDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAstralCharacterGroundInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAstralCharacterGroundInfo_Statics::NewProp_GroundHitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAstralCharacterGroundInfo_Statics::NewProp_GroundDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAstralCharacterGroundInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAstralCharacterGroundInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
	nullptr,
	&NewStructOps,
	"AstralCharacterGroundInfo",
	Z_Construct_UScriptStruct_FAstralCharacterGroundInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAstralCharacterGroundInfo_Statics::PropPointers),
	sizeof(FAstralCharacterGroundInfo),
	alignof(FAstralCharacterGroundInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAstralCharacterGroundInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAstralCharacterGroundInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAstralCharacterGroundInfo()
{
	if (!Z_Registration_Info_UScriptStruct_AstralCharacterGroundInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AstralCharacterGroundInfo.InnerSingleton, Z_Construct_UScriptStruct_FAstralCharacterGroundInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AstralCharacterGroundInfo.InnerSingleton;
}
// End ScriptStruct FAstralCharacterGroundInfo

// Begin Class UAstralCharacterMovementComponent Function GetGroundInfo
struct Z_Construct_UFunction_UAstralCharacterMovementComponent_GetGroundInfo_Statics
{
	struct AstralCharacterMovementComponent_eventGetGroundInfo_Parms
	{
		FAstralCharacterGroundInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|CharacterMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the current ground info.  Calling this will update the ground info if it's out of date.\n" },
#endif
		{ "ModuleRelativePath", "Character/AstralCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current ground info.  Calling this will update the ground info if it's out of date." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAstralCharacterMovementComponent_GetGroundInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralCharacterMovementComponent_eventGetGroundInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FAstralCharacterGroundInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 310791831
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralCharacterMovementComponent_GetGroundInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralCharacterMovementComponent_GetGroundInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralCharacterMovementComponent_GetGroundInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralCharacterMovementComponent_GetGroundInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralCharacterMovementComponent, nullptr, "GetGroundInfo", nullptr, nullptr, Z_Construct_UFunction_UAstralCharacterMovementComponent_GetGroundInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralCharacterMovementComponent_GetGroundInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAstralCharacterMovementComponent_GetGroundInfo_Statics::AstralCharacterMovementComponent_eventGetGroundInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralCharacterMovementComponent_GetGroundInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralCharacterMovementComponent_GetGroundInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAstralCharacterMovementComponent_GetGroundInfo_Statics::AstralCharacterMovementComponent_eventGetGroundInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralCharacterMovementComponent_GetGroundInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralCharacterMovementComponent_GetGroundInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAstralCharacterMovementComponent::execGetGroundInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAstralCharacterGroundInfo*)Z_Param__Result=P_THIS->GetGroundInfo();
	P_NATIVE_END;
}
// End Class UAstralCharacterMovementComponent Function GetGroundInfo

// Begin Class UAstralCharacterMovementComponent
void UAstralCharacterMovementComponent::StaticRegisterNativesUAstralCharacterMovementComponent()
{
	UClass* Class = UAstralCharacterMovementComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetGroundInfo", &UAstralCharacterMovementComponent::execGetGroundInfo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAstralCharacterMovementComponent);
UClass* Z_Construct_UClass_UAstralCharacterMovementComponent_NoRegister()
{
	return UAstralCharacterMovementComponent::StaticClass();
}
struct Z_Construct_UClass_UAstralCharacterMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FAstralCharacterGroundInfo\n *\n *\x09Information about the ground under the character.  It only gets updated as needed.\n */" },
#endif
		{ "IncludePath", "Character/AstralCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Character/AstralCharacterMovementComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FAstralCharacterGroundInfo\n\n    Information about the ground under the character.  It only gets updated as needed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasReplicatedAcceleration_MetaData[] = {
		{ "ModuleRelativePath", "Character/AstralCharacterMovementComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bHasReplicatedAcceleration_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasReplicatedAcceleration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAstralCharacterMovementComponent_GetGroundInfo, "GetGroundInfo" }, // 4196506620
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAstralCharacterMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UAstralCharacterMovementComponent_Statics::NewProp_bHasReplicatedAcceleration_SetBit(void* Obj)
{
	((UAstralCharacterMovementComponent*)Obj)->bHasReplicatedAcceleration = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAstralCharacterMovementComponent_Statics::NewProp_bHasReplicatedAcceleration = { "bHasReplicatedAcceleration", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAstralCharacterMovementComponent), &Z_Construct_UClass_UAstralCharacterMovementComponent_Statics::NewProp_bHasReplicatedAcceleration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasReplicatedAcceleration_MetaData), NewProp_bHasReplicatedAcceleration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAstralCharacterMovementComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralCharacterMovementComponent_Statics::NewProp_bHasReplicatedAcceleration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralCharacterMovementComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAstralCharacterMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralCharacterMovementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAstralCharacterMovementComponent_Statics::ClassParams = {
	&UAstralCharacterMovementComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAstralCharacterMovementComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAstralCharacterMovementComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralCharacterMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAstralCharacterMovementComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAstralCharacterMovementComponent()
{
	if (!Z_Registration_Info_UClass_UAstralCharacterMovementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAstralCharacterMovementComponent.OuterSingleton, Z_Construct_UClass_UAstralCharacterMovementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAstralCharacterMovementComponent.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<UAstralCharacterMovementComponent>()
{
	return UAstralCharacterMovementComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAstralCharacterMovementComponent);
UAstralCharacterMovementComponent::~UAstralCharacterMovementComponent() {}
// End Class UAstralCharacterMovementComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Character_AstralCharacterMovementComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAstralCharacterGroundInfo::StaticStruct, Z_Construct_UScriptStruct_FAstralCharacterGroundInfo_Statics::NewStructOps, TEXT("AstralCharacterGroundInfo"), &Z_Registration_Info_UScriptStruct_AstralCharacterGroundInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAstralCharacterGroundInfo), 310791831U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAstralCharacterMovementComponent, UAstralCharacterMovementComponent::StaticClass, TEXT("UAstralCharacterMovementComponent"), &Z_Registration_Info_UClass_UAstralCharacterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAstralCharacterMovementComponent), 1046333804U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Character_AstralCharacterMovementComponent_h_3703662483(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Character_AstralCharacterMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Character_AstralCharacterMovementComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Character_AstralCharacterMovementComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Character_AstralCharacterMovementComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
