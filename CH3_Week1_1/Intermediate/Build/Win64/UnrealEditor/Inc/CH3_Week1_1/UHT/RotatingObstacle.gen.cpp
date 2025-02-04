// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CH3_Week1_1/Public/RotatingObstacle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotatingObstacle() {}

// Begin Cross Module References
CH3_WEEK1_1_API UClass* Z_Construct_UClass_ARotatingObstacle();
CH3_WEEK1_1_API UClass* Z_Construct_UClass_ARotatingObstacle_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_CH3_Week1_1();
// End Cross Module References

// Begin Class ARotatingObstacle
void ARotatingObstacle::StaticRegisterNativesARotatingObstacle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARotatingObstacle);
UClass* Z_Construct_UClass_ARotatingObstacle_NoRegister()
{
	return ARotatingObstacle::StaticClass();
}
struct Z_Construct_UClass_ARotatingObstacle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RotatingObstacle.h" },
		{ "ModuleRelativePath", "Public/RotatingObstacle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__RotateSpeed_MetaData[] = {
		{ "Category", "Obstacled|Properties" },
		{ "ModuleRelativePath", "Public/RotatingObstacle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__SceneRoot_MetaData[] = {
		{ "Category", "Obstacle|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RotatingObstacle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__StaticMeshComp_MetaData[] = {
		{ "Category", "Obstacle|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RotatingObstacle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp__RotateSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__StaticMeshComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARotatingObstacle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARotatingObstacle_Statics::NewProp__RotateSpeed = { "_RotateSpeed", nullptr, (EPropertyFlags)0x0020080000000805, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotatingObstacle, _RotateSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__RotateSpeed_MetaData), NewProp__RotateSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARotatingObstacle_Statics::NewProp__SceneRoot = { "_SceneRoot", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotatingObstacle, _SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__SceneRoot_MetaData), NewProp__SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARotatingObstacle_Statics::NewProp__StaticMeshComp = { "_StaticMeshComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARotatingObstacle, _StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__StaticMeshComp_MetaData), NewProp__StaticMeshComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARotatingObstacle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotatingObstacle_Statics::NewProp__RotateSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotatingObstacle_Statics::NewProp__SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotatingObstacle_Statics::NewProp__StaticMeshComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARotatingObstacle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARotatingObstacle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CH3_Week1_1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARotatingObstacle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARotatingObstacle_Statics::ClassParams = {
	&ARotatingObstacle::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARotatingObstacle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARotatingObstacle_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARotatingObstacle_Statics::Class_MetaDataParams), Z_Construct_UClass_ARotatingObstacle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARotatingObstacle()
{
	if (!Z_Registration_Info_UClass_ARotatingObstacle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARotatingObstacle.OuterSingleton, Z_Construct_UClass_ARotatingObstacle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARotatingObstacle.OuterSingleton;
}
template<> CH3_WEEK1_1_API UClass* StaticClass<ARotatingObstacle>()
{
	return ARotatingObstacle::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARotatingObstacle);
ARotatingObstacle::~ARotatingObstacle() {}
// End Class ARotatingObstacle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Junmo_Documents_Unreal_Projects_CH3_Week1_1_Source_CH3_Week1_1_Public_RotatingObstacle_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARotatingObstacle, ARotatingObstacle::StaticClass, TEXT("ARotatingObstacle"), &Z_Registration_Info_UClass_ARotatingObstacle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARotatingObstacle), 3306090841U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Junmo_Documents_Unreal_Projects_CH3_Week1_1_Source_CH3_Week1_1_Public_RotatingObstacle_h_2930347300(TEXT("/Script/CH3_Week1_1"),
	Z_CompiledInDeferFile_FID_Users_Junmo_Documents_Unreal_Projects_CH3_Week1_1_Source_CH3_Week1_1_Public_RotatingObstacle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Junmo_Documents_Unreal_Projects_CH3_Week1_1_Source_CH3_Week1_1_Public_RotatingObstacle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
