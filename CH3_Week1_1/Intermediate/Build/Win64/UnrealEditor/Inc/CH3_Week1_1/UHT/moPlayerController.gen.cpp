// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CH3_Week1_1/Public/moPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodemoPlayerController() {}

// Begin Cross Module References
CH3_WEEK1_1_API UClass* Z_Construct_UClass_AmoPlayerController();
CH3_WEEK1_1_API UClass* Z_Construct_UClass_AmoPlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_CH3_Week1_1();
// End Cross Module References

// Begin Class AmoPlayerController
void AmoPlayerController::StaticRegisterNativesAmoPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AmoPlayerController);
UClass* Z_Construct_UClass_AmoPlayerController_NoRegister()
{
	return AmoPlayerController::StaticClass();
}
struct Z_Construct_UClass_AmoPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "moPlayerController.h" },
		{ "ModuleRelativePath", "Public/moPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/moPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__MoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/moPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__LookAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/moPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__InputMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__LookAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AmoPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AmoPlayerController_Statics::NewProp__InputMappingContext = { "_InputMappingContext", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmoPlayerController, _InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__InputMappingContext_MetaData), NewProp__InputMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AmoPlayerController_Statics::NewProp__MoveAction = { "_MoveAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmoPlayerController, _MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__MoveAction_MetaData), NewProp__MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AmoPlayerController_Statics::NewProp__LookAction = { "_LookAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmoPlayerController, _LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__LookAction_MetaData), NewProp__LookAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AmoPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AmoPlayerController_Statics::NewProp__InputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AmoPlayerController_Statics::NewProp__MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AmoPlayerController_Statics::NewProp__LookAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AmoPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AmoPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_CH3_Week1_1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AmoPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AmoPlayerController_Statics::ClassParams = {
	&AmoPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AmoPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AmoPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AmoPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AmoPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AmoPlayerController()
{
	if (!Z_Registration_Info_UClass_AmoPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AmoPlayerController.OuterSingleton, Z_Construct_UClass_AmoPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AmoPlayerController.OuterSingleton;
}
template<> CH3_WEEK1_1_API UClass* StaticClass<AmoPlayerController>()
{
	return AmoPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AmoPlayerController);
AmoPlayerController::~AmoPlayerController() {}
// End Class AmoPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Junmo_Documents_Unreal_Projects_CH3_Week1_1_Source_CH3_Week1_1_Public_moPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AmoPlayerController, AmoPlayerController::StaticClass, TEXT("AmoPlayerController"), &Z_Registration_Info_UClass_AmoPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AmoPlayerController), 1901453722U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Junmo_Documents_Unreal_Projects_CH3_Week1_1_Source_CH3_Week1_1_Public_moPlayerController_h_1475217453(TEXT("/Script/CH3_Week1_1"),
	Z_CompiledInDeferFile_FID_Users_Junmo_Documents_Unreal_Projects_CH3_Week1_1_Source_CH3_Week1_1_Public_moPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Junmo_Documents_Unreal_Projects_CH3_Week1_1_Source_CH3_Week1_1_Public_moPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
