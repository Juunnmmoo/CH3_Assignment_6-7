// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "moCharactor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionValue;
#ifdef CH3_WEEK1_1_moCharactor_generated_h
#error "moCharactor.generated.h already included, missing '#pragma once' in moCharactor.h"
#endif
#define CH3_WEEK1_1_moCharactor_generated_h

#define FID_Users_Junmo_Documents_Unreal_Projects_CH3_Week1_1_Source_CH3_Week1_1_Public_moCharactor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLook); \
	DECLARE_FUNCTION(execMove);


#define FID_Users_Junmo_Documents_Unreal_Projects_CH3_Week1_1_Source_CH3_Week1_1_Public_moCharactor_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAmoCharactor(); \
	friend struct Z_Construct_UClass_AmoCharactor_Statics; \
public: \
	DECLARE_CLASS(AmoCharactor, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CH3_Week1_1"), NO_API) \
	DECLARE_SERIALIZER(AmoCharactor)


#define FID_Users_Junmo_Documents_Unreal_Projects_CH3_Week1_1_Source_CH3_Week1_1_Public_moCharactor_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AmoCharactor(AmoCharactor&&); \
	AmoCharactor(const AmoCharactor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AmoCharactor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AmoCharactor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AmoCharactor) \
	NO_API virtual ~AmoCharactor();


#define FID_Users_Junmo_Documents_Unreal_Projects_CH3_Week1_1_Source_CH3_Week1_1_Public_moCharactor_h_14_PROLOG
#define FID_Users_Junmo_Documents_Unreal_Projects_CH3_Week1_1_Source_CH3_Week1_1_Public_moCharactor_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Junmo_Documents_Unreal_Projects_CH3_Week1_1_Source_CH3_Week1_1_Public_moCharactor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Junmo_Documents_Unreal_Projects_CH3_Week1_1_Source_CH3_Week1_1_Public_moCharactor_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_Junmo_Documents_Unreal_Projects_CH3_Week1_1_Source_CH3_Week1_1_Public_moCharactor_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CH3_WEEK1_1_API UClass* StaticClass<class AmoCharactor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Junmo_Documents_Unreal_Projects_CH3_Week1_1_Source_CH3_Week1_1_Public_moCharactor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
