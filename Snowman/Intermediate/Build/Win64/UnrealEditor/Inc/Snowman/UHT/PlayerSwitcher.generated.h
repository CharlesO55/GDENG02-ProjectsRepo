// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/PlayerSwitcher.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef SNOWMAN_PlayerSwitcher_generated_h
#error "PlayerSwitcher.generated.h already included, missing '#pragma once' in PlayerSwitcher.h"
#endif
#define SNOWMAN_PlayerSwitcher_generated_h

#define FID_ENG02_Snowman_Source_Snowman_Player_PlayerSwitcher_h_15_SPARSE_DATA
#define FID_ENG02_Snowman_Source_Snowman_Player_PlayerSwitcher_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ENG02_Snowman_Source_Snowman_Player_PlayerSwitcher_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ENG02_Snowman_Source_Snowman_Player_PlayerSwitcher_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSwitchPawn);


#define FID_ENG02_Snowman_Source_Snowman_Player_PlayerSwitcher_h_15_ACCESSORS
#define FID_ENG02_Snowman_Source_Snowman_Player_PlayerSwitcher_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerSwitcher(); \
	friend struct Z_Construct_UClass_APlayerSwitcher_Statics; \
public: \
	DECLARE_CLASS(APlayerSwitcher, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Snowman"), NO_API) \
	DECLARE_SERIALIZER(APlayerSwitcher)


#define FID_ENG02_Snowman_Source_Snowman_Player_PlayerSwitcher_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerSwitcher(APlayerSwitcher&&); \
	NO_API APlayerSwitcher(const APlayerSwitcher&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerSwitcher); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerSwitcher); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerSwitcher) \
	NO_API virtual ~APlayerSwitcher();


#define FID_ENG02_Snowman_Source_Snowman_Player_PlayerSwitcher_h_12_PROLOG
#define FID_ENG02_Snowman_Source_Snowman_Player_PlayerSwitcher_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ENG02_Snowman_Source_Snowman_Player_PlayerSwitcher_h_15_SPARSE_DATA \
	FID_ENG02_Snowman_Source_Snowman_Player_PlayerSwitcher_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ENG02_Snowman_Source_Snowman_Player_PlayerSwitcher_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ENG02_Snowman_Source_Snowman_Player_PlayerSwitcher_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ENG02_Snowman_Source_Snowman_Player_PlayerSwitcher_h_15_ACCESSORS \
	FID_ENG02_Snowman_Source_Snowman_Player_PlayerSwitcher_h_15_INCLASS_NO_PURE_DECLS \
	FID_ENG02_Snowman_Source_Snowman_Player_PlayerSwitcher_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNOWMAN_API UClass* StaticClass<class APlayerSwitcher>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ENG02_Snowman_Source_Snowman_Player_PlayerSwitcher_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
