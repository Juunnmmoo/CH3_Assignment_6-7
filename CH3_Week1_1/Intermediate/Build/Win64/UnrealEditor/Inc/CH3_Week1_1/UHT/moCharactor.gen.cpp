// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CH3_Week1_1/Public/moCharactor.h"
#include "EnhancedInput/Public/InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodemoCharactor() {}

// Begin Cross Module References
CH3_WEEK1_1_API UClass* Z_Construct_UClass_AmoCharactor();
CH3_WEEK1_1_API UClass* Z_Construct_UClass_AmoCharactor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
UPackage* Z_Construct_UPackage__Script_CH3_Week1_1();
// End Cross Module References

// Begin Class AmoCharactor Function Look
struct Z_Construct_UFunction_AmoCharactor_Look_Statics
{
	struct moCharactor_eventLook_Parms
	{
		FInputActionValue _value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/moCharactor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AmoCharactor_Look_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(moCharactor_eventLook_Parms, _value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__value_MetaData), NewProp__value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AmoCharactor_Look_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AmoCharactor_Look_Statics::NewProp__value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AmoCharactor_Look_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AmoCharactor_Look_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AmoCharactor, nullptr, "Look", nullptr, nullptr, Z_Construct_UFunction_AmoCharactor_Look_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AmoCharactor_Look_Statics::PropPointers), sizeof(Z_Construct_UFunction_AmoCharactor_Look_Statics::moCharactor_eventLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AmoCharactor_Look_Statics::Function_MetaDataParams), Z_Construct_UFunction_AmoCharactor_Look_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AmoCharactor_Look_Statics::moCharactor_eventLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AmoCharactor_Look()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AmoCharactor_Look_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AmoCharactor::execLook)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out__value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Look(Z_Param_Out__value);
	P_NATIVE_END;
}
// End Class AmoCharactor Function Look

// Begin Class AmoCharactor Function Move
struct Z_Construct_UFunction_AmoCharactor_Move_Statics
{
	struct moCharactor_eventMove_Parms
	{
		FInputActionValue _value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/moCharactor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AmoCharactor_Move_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(moCharactor_eventMove_Parms, _value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__value_MetaData), NewProp__value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AmoCharactor_Move_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AmoCharactor_Move_Statics::NewProp__value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AmoCharactor_Move_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AmoCharactor_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AmoCharactor, nullptr, "Move", nullptr, nullptr, Z_Construct_UFunction_AmoCharactor_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AmoCharactor_Move_Statics::PropPointers), sizeof(Z_Construct_UFunction_AmoCharactor_Move_Statics::moCharactor_eventMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AmoCharactor_Move_Statics::Function_MetaDataParams), Z_Construct_UFunction_AmoCharactor_Move_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AmoCharactor_Move_Statics::moCharactor_eventMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AmoCharactor_Move()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AmoCharactor_Move_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AmoCharactor::execMove)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out__value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Move(Z_Param_Out__value);
	P_NATIVE_END;
}
// End Class AmoCharactor Function Move

// Begin Class AmoCharactor
void AmoCharactor::StaticRegisterNativesAmoCharactor()
{
	UClass* Class = AmoCharactor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Look", &AmoCharactor::execLook },
		{ "Move", &AmoCharactor::execMove },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AmoCharactor);
UClass* Z_Construct_UClass_AmoCharactor_NoRegister()
{
	return AmoCharactor::StaticClass();
}
struct Z_Construct_UClass_AmoCharactor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "moCharactor.h" },
		{ "ModuleRelativePath", "Public/moCharactor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__CapsuleComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/moCharactor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__SpringArmComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/moCharactor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__CameraComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/moCharactor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__PlayerSpeed_MetaData[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "Public/moCharactor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__CapsuleComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__SpringArmComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__CameraComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__PlayerSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AmoCharactor_Look, "Look" }, // 3305091038
		{ &Z_Construct_UFunction_AmoCharactor_Move, "Move" }, // 2361730792
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AmoCharactor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AmoCharactor_Statics::NewProp__CapsuleComp = { "_CapsuleComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmoCharactor, _CapsuleComp), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__CapsuleComp_MetaData), NewProp__CapsuleComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AmoCharactor_Statics::NewProp__SpringArmComp = { "_SpringArmComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmoCharactor, _SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__SpringArmComp_MetaData), NewProp__SpringArmComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AmoCharactor_Statics::NewProp__CameraComp = { "_CameraComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmoCharactor, _CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__CameraComp_MetaData), NewProp__CameraComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AmoCharactor_Statics::NewProp__PlayerSpeed = { "_PlayerSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmoCharactor, _PlayerSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__PlayerSpeed_MetaData), NewProp__PlayerSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AmoCharactor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AmoCharactor_Statics::NewProp__CapsuleComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AmoCharactor_Statics::NewProp__SpringArmComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AmoCharactor_Statics::NewProp__CameraComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AmoCharactor_Statics::NewProp__PlayerSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AmoCharactor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AmoCharactor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_CH3_Week1_1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AmoCharactor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AmoCharactor_Statics::ClassParams = {
	&AmoCharactor::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AmoCharactor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AmoCharactor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AmoCharactor_Statics::Class_MetaDataParams), Z_Construct_UClass_AmoCharactor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AmoCharactor()
{
	if (!Z_Registration_Info_UClass_AmoCharactor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AmoCharactor.OuterSingleton, Z_Construct_UClass_AmoCharactor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AmoCharactor.OuterSingleton;
}
template<> CH3_WEEK1_1_API UClass* StaticClass<AmoCharactor>()
{
	return AmoCharactor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AmoCharactor);
AmoCharactor::~AmoCharactor() {}
// End Class AmoCharactor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Junmo_Documents_Unreal_Projects_CH3_Week1_1_Source_CH3_Week1_1_Public_moCharactor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AmoCharactor, AmoCharactor::StaticClass, TEXT("AmoCharactor"), &Z_Registration_Info_UClass_AmoCharactor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AmoCharactor), 4016732196U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Junmo_Documents_Unreal_Projects_CH3_Week1_1_Source_CH3_Week1_1_Public_moCharactor_h_3941043161(TEXT("/Script/CH3_Week1_1"),
	Z_CompiledInDeferFile_FID_Users_Junmo_Documents_Unreal_Projects_CH3_Week1_1_Source_CH3_Week1_1_Public_moCharactor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Junmo_Documents_Unreal_Projects_CH3_Week1_1_Source_CH3_Week1_1_Public_moCharactor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
