// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovingObstacle.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CH3_WEEK1_1_MovingObstacle_generated_h
#error "MovingObstacle.generated.h already included, missing '#pragma once' in MovingObstacle.h"
#endif
#define CH3_WEEK1_1_MovingObstacle_generated_h

#define FID_Users_Junmo_Documents_Unreal_Projects_CH3_Week1_1_Source_CH3_Week1_1_Public_MovingObstacle_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMovingObstacle(); \
	friend struct Z_Construct_UClass_AMovingObstacle_Statics; \
public: \
	DECLARE_CLASS(AMovingObstacle, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CH3_Week1_1"), NO_API) \
	DECLARE_SERIALIZER(AMovingObstacle)


#define FID_Users_Junmo_Documents_Unreal_Projects_CH3_Week1_1_Source_CH3_Week1_1_Public_MovingObstacle_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMovingObstacle(AMovingObstacle&&); \
	AMovingObstacle(const AMovingObstacle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovingObstacle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovingObstacle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMovingObstacle) \
	NO_API virtual ~AMovingObstacle();


#define FID_Users_Junmo_Documents_Unreal_Projects_CH3_Week1_1_Source_CH3_Week1_1_Public_MovingObstacle_h_18_PROLOG
#define FID_Users_Junmo_Documents_Unreal_Projects_CH3_Week1_1_Source_CH3_Week1_1_Public_MovingObstacle_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Junmo_Documents_Unreal_Projects_CH3_Week1_1_Source_CH3_Week1_1_Public_MovingObstacle_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_Junmo_Documents_Unreal_Projects_CH3_Week1_1_Source_CH3_Week1_1_Public_MovingObstacle_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CH3_WEEK1_1_API UClass* StaticClass<class AMovingObstacle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Junmo_Documents_Unreal_Projects_CH3_Week1_1_Source_CH3_Week1_1_Public_MovingObstacle_h


#define FOREACH_ENUM_EDIR(op) \
	op(EDir::X) \
	op(EDir::Y) \
	op(EDir::Z) 

enum class EDir : uint8;
template<> struct TIsUEnumClass<EDir> { enum { Value = true }; };
template<> CH3_WEEK1_1_API UEnum* StaticEnum<EDir>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
