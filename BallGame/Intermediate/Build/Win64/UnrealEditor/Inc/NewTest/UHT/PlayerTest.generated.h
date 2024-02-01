// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/PlayerTest.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef NEWTEST_PlayerTest_generated_h
#error "PlayerTest.generated.h already included, missing '#pragma once' in PlayerTest.h"
#endif
#define NEWTEST_PlayerTest_generated_h

#define FID_ENG02_NewTest_Source_NewTest_Game_PlayerTest_h_17_SPARSE_DATA
#define FID_ENG02_NewTest_Source_NewTest_Game_PlayerTest_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ENG02_NewTest_Source_NewTest_Game_PlayerTest_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ENG02_NewTest_Source_NewTest_Game_PlayerTest_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_ENG02_NewTest_Source_NewTest_Game_PlayerTest_h_17_ACCESSORS
#define FID_ENG02_NewTest_Source_NewTest_Game_PlayerTest_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerTest(); \
	friend struct Z_Construct_UClass_APlayerTest_Statics; \
public: \
	DECLARE_CLASS(APlayerTest, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NewTest"), NO_API) \
	DECLARE_SERIALIZER(APlayerTest)


#define FID_ENG02_NewTest_Source_NewTest_Game_PlayerTest_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerTest(APlayerTest&&); \
	NO_API APlayerTest(const APlayerTest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerTest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerTest); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerTest) \
	NO_API virtual ~APlayerTest();


#define FID_ENG02_NewTest_Source_NewTest_Game_PlayerTest_h_14_PROLOG
#define FID_ENG02_NewTest_Source_NewTest_Game_PlayerTest_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ENG02_NewTest_Source_NewTest_Game_PlayerTest_h_17_SPARSE_DATA \
	FID_ENG02_NewTest_Source_NewTest_Game_PlayerTest_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ENG02_NewTest_Source_NewTest_Game_PlayerTest_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ENG02_NewTest_Source_NewTest_Game_PlayerTest_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ENG02_NewTest_Source_NewTest_Game_PlayerTest_h_17_ACCESSORS \
	FID_ENG02_NewTest_Source_NewTest_Game_PlayerTest_h_17_INCLASS_NO_PURE_DECLS \
	FID_ENG02_NewTest_Source_NewTest_Game_PlayerTest_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEWTEST_API UClass* StaticClass<class APlayerTest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ENG02_NewTest_Source_NewTest_Game_PlayerTest_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
