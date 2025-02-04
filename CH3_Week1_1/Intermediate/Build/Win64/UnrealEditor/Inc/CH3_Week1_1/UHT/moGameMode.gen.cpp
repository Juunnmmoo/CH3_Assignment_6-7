// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CH3_Week1_1/Public/moGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodemoGameMode() {}

// Begin Cross Module References
CH3_WEEK1_1_API UClass* Z_Construct_UClass_AmoGameMode();
CH3_WEEK1_1_API UClass* Z_Construct_UClass_AmoGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
UPackage* Z_Construct_UPackage__Script_CH3_Week1_1();
// End Cross Module References

// Begin Class AmoGameMode
void AmoGameMode::StaticRegisterNativesAmoGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AmoGameMode);
UClass* Z_Construct_UClass_AmoGameMode_NoRegister()
{
	return AmoGameMode::StaticClass();
}
struct Z_Construct_UClass_AmoGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "moGameMode.h" },
		{ "ModuleRelativePath", "Public/moGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AmoGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AmoGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_CH3_Week1_1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AmoGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AmoGameMode_Statics::ClassParams = {
	&AmoGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AmoGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AmoGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AmoGameMode()
{
	if (!Z_Registration_Info_UClass_AmoGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AmoGameMode.OuterSingleton, Z_Construct_UClass_AmoGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AmoGameMode.OuterSingleton;
}
template<> CH3_WEEK1_1_API UClass* StaticClass<AmoGameMode>()
{
	return AmoGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AmoGameMode);
AmoGameMode::~AmoGameMode() {}
// End Class AmoGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Junmo_Documents_Unreal_Projects_CH3_Week1_1_Source_CH3_Week1_1_Public_moGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AmoGameMode, AmoGameMode::StaticClass, TEXT("AmoGameMode"), &Z_Registration_Info_UClass_AmoGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AmoGameMode), 2044647181U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Junmo_Documents_Unreal_Projects_CH3_Week1_1_Source_CH3_Week1_1_Public_moGameMode_h_2886721567(TEXT("/Script/CH3_Week1_1"),
	Z_CompiledInDeferFile_FID_Users_Junmo_Documents_Unreal_Projects_CH3_Week1_1_Source_CH3_Week1_1_Public_moGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Junmo_Documents_Unreal_Projects_CH3_Week1_1_Source_CH3_Week1_1_Public_moGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
