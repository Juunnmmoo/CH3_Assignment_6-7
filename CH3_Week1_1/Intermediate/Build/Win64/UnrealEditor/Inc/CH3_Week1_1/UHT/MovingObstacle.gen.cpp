// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CH3_Week1_1/Public/MovingObstacle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingObstacle() {}

// Begin Cross Module References
CH3_WEEK1_1_API UClass* Z_Construct_UClass_AMovingObstacle();
CH3_WEEK1_1_API UClass* Z_Construct_UClass_AMovingObstacle_NoRegister();
CH3_WEEK1_1_API UEnum* Z_Construct_UEnum_CH3_Week1_1_EDir();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_CH3_Week1_1();
// End Cross Module References

// Begin Enum EDir
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDir;
static UEnum* EDir_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDir.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDir.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CH3_Week1_1_EDir, (UObject*)Z_Construct_UPackage__Script_CH3_Week1_1(), TEXT("EDir"));
	}
	return Z_Registration_Info_UEnum_EDir.OuterSingleton;
}
template<> CH3_WEEK1_1_API UEnum* StaticEnum<EDir>()
{
	return EDir_StaticEnum();
}
struct Z_Construct_UEnum_CH3_Week1_1_EDir_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MovingObstacle.h" },
		{ "X.DisplayName", "X" },
		{ "X.Name", "EDir::X" },
		{ "Y.DisplayName", "Y" },
		{ "Y.Name", "EDir::Y" },
		{ "Z.DisplayName", "Z" },
		{ "Z.Name", "EDir::Z" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDir::X", (int64)EDir::X },
		{ "EDir::Y", (int64)EDir::Y },
		{ "EDir::Z", (int64)EDir::Z },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CH3_Week1_1_EDir_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CH3_Week1_1,
	nullptr,
	"EDir",
	"EDir",
	Z_Construct_UEnum_CH3_Week1_1_EDir_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CH3_Week1_1_EDir_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CH3_Week1_1_EDir_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CH3_Week1_1_EDir_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CH3_Week1_1_EDir()
{
	if (!Z_Registration_Info_UEnum_EDir.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDir.InnerSingleton, Z_Construct_UEnum_CH3_Week1_1_EDir_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDir.InnerSingleton;
}
// End Enum EDir

// Begin Class AMovingObstacle
void AMovingObstacle::StaticRegisterNativesAMovingObstacle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMovingObstacle);
UClass* Z_Construct_UClass_AMovingObstacle_NoRegister()
{
	return AMovingObstacle::StaticClass();
}
struct Z_Construct_UClass_AMovingObstacle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MovingObstacle.h" },
		{ "ModuleRelativePath", "Public/MovingObstacle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__MoveSpeed_MetaData[] = {
		{ "Category", "Obstacled|Properties" },
		{ "ModuleRelativePath", "Public/MovingObstacle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__Scope_MetaData[] = {
		{ "Category", "Obstacled|Properties" },
		{ "ModuleRelativePath", "Public/MovingObstacle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__CurrentScope_MetaData[] = {
		{ "Category", "Obstacled|Properties" },
		{ "ModuleRelativePath", "Public/MovingObstacle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__eDirection_MetaData[] = {
		{ "Category", "Obstacled|Properties" },
		{ "ModuleRelativePath", "Public/MovingObstacle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__PlusMinus_MetaData[] = {
		{ "Category", "Obstacled|Properties" },
		{ "ModuleRelativePath", "Public/MovingObstacle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__SceneRoot_MetaData[] = {
		{ "Category", "Obstacle|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovingObstacle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__StaticMeshComp_MetaData[] = {
		{ "Category", "Obstacle|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovingObstacle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp__MoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__Scope;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__CurrentScope;
	static const UECodeGen_Private::FBytePropertyParams NewProp__eDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__eDirection;
	static void NewProp__PlusMinus_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__PlusMinus;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__StaticMeshComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingObstacle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingObstacle_Statics::NewProp__MoveSpeed = { "_MoveSpeed", nullptr, (EPropertyFlags)0x0020080000000805, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingObstacle, _MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__MoveSpeed_MetaData), NewProp__MoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingObstacle_Statics::NewProp__Scope = { "_Scope", nullptr, (EPropertyFlags)0x0020080000000805, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingObstacle, _Scope), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__Scope_MetaData), NewProp__Scope_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingObstacle_Statics::NewProp__CurrentScope = { "_CurrentScope", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingObstacle, _CurrentScope), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__CurrentScope_MetaData), NewProp__CurrentScope_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMovingObstacle_Statics::NewProp__eDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMovingObstacle_Statics::NewProp__eDirection = { "_eDirection", nullptr, (EPropertyFlags)0x0020080000000805, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingObstacle, _eDirection), Z_Construct_UEnum_CH3_Week1_1_EDir, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__eDirection_MetaData), NewProp__eDirection_MetaData) }; // 4090898343
void Z_Construct_UClass_AMovingObstacle_Statics::NewProp__PlusMinus_SetBit(void* Obj)
{
	((AMovingObstacle*)Obj)->_PlusMinus = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMovingObstacle_Statics::NewProp__PlusMinus = { "_PlusMinus", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMovingObstacle), &Z_Construct_UClass_AMovingObstacle_Statics::NewProp__PlusMinus_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__PlusMinus_MetaData), NewProp__PlusMinus_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovingObstacle_Statics::NewProp__SceneRoot = { "_SceneRoot", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingObstacle, _SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__SceneRoot_MetaData), NewProp__SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovingObstacle_Statics::NewProp__StaticMeshComp = { "_StaticMeshComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingObstacle, _StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__StaticMeshComp_MetaData), NewProp__StaticMeshComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovingObstacle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingObstacle_Statics::NewProp__MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingObstacle_Statics::NewProp__Scope,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingObstacle_Statics::NewProp__CurrentScope,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingObstacle_Statics::NewProp__eDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingObstacle_Statics::NewProp__eDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingObstacle_Statics::NewProp__PlusMinus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingObstacle_Statics::NewProp__SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingObstacle_Statics::NewProp__StaticMeshComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingObstacle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMovingObstacle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CH3_Week1_1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingObstacle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovingObstacle_Statics::ClassParams = {
	&AMovingObstacle::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMovingObstacle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMovingObstacle_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingObstacle_Statics::Class_MetaDataParams), Z_Construct_UClass_AMovingObstacle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMovingObstacle()
{
	if (!Z_Registration_Info_UClass_AMovingObstacle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovingObstacle.OuterSingleton, Z_Construct_UClass_AMovingObstacle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMovingObstacle.OuterSingleton;
}
template<> CH3_WEEK1_1_API UClass* StaticClass<AMovingObstacle>()
{
	return AMovingObstacle::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingObstacle);
AMovingObstacle::~AMovingObstacle() {}
// End Class AMovingObstacle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Junmo_Documents_Unreal_Projects_CH3_Week1_1_Source_CH3_Week1_1_Public_MovingObstacle_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDir_StaticEnum, TEXT("EDir"), &Z_Registration_Info_UEnum_EDir, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4090898343U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMovingObstacle, AMovingObstacle::StaticClass, TEXT("AMovingObstacle"), &Z_Registration_Info_UClass_AMovingObstacle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovingObstacle), 675681026U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Junmo_Documents_Unreal_Projects_CH3_Week1_1_Source_CH3_Week1_1_Public_MovingObstacle_h_3568330146(TEXT("/Script/CH3_Week1_1"),
	Z_CompiledInDeferFile_FID_Users_Junmo_Documents_Unreal_Projects_CH3_Week1_1_Source_CH3_Week1_1_Public_MovingObstacle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Junmo_Documents_Unreal_Projects_CH3_Week1_1_Source_CH3_Week1_1_Public_MovingObstacle_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Junmo_Documents_Unreal_Projects_CH3_Week1_1_Source_CH3_Week1_1_Public_MovingObstacle_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Junmo_Documents_Unreal_Projects_CH3_Week1_1_Source_CH3_Week1_1_Public_MovingObstacle_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
