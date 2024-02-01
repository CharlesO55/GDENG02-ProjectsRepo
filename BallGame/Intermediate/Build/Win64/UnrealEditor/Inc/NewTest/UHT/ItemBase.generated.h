// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Items/ItemBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef NEWTEST_ItemBase_generated_h
#error "ItemBase.generated.h already included, missing '#pragma once' in ItemBase.h"
#endif
#define NEWTEST_ItemBase_generated_h

#define FID_ENG02_NewTest_Source_NewTest_Items_ItemBase_h_14_SPARSE_DATA
#define FID_ENG02_NewTest_Source_NewTest_Items_ItemBase_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ENG02_NewTest_Source_NewTest_Items_ItemBase_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ENG02_NewTest_Source_NewTest_Items_ItemBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Collected_Implementation(); \
 \
	DECLARE_FUNCTION(execCollected); \
	DECLARE_FUNCTION(execOverlapBegin);


#define FID_ENG02_NewTest_Source_NewTest_Items_ItemBase_h_14_ACCESSORS
#define FID_ENG02_NewTest_Source_NewTest_Items_ItemBase_h_14_CALLBACK_WRAPPERS
#define FID_ENG02_NewTest_Source_NewTest_Items_ItemBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItemBase(); \
	friend struct Z_Construct_UClass_AItemBase_Statics; \
public: \
	DECLARE_CLASS(AItemBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NewTest"), NO_API) \
	DECLARE_SERIALIZER(AItemBase)


#define FID_ENG02_NewTest_Source_NewTest_Items_ItemBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItemBase(AItemBase&&); \
	NO_API AItemBase(const AItemBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItemBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItemBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItemBase) \
	NO_API virtual ~AItemBase();


#define FID_ENG02_NewTest_Source_NewTest_Items_ItemBase_h_11_PROLOG
#define FID_ENG02_NewTest_Source_NewTest_Items_ItemBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ENG02_NewTest_Source_NewTest_Items_ItemBase_h_14_SPARSE_DATA \
	FID_ENG02_NewTest_Source_NewTest_Items_ItemBase_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ENG02_NewTest_Source_NewTest_Items_ItemBase_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ENG02_NewTest_Source_NewTest_Items_ItemBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ENG02_NewTest_Source_NewTest_Items_ItemBase_h_14_ACCESSORS \
	FID_ENG02_NewTest_Source_NewTest_Items_ItemBase_h_14_CALLBACK_WRAPPERS \
	FID_ENG02_NewTest_Source_NewTest_Items_ItemBase_h_14_INCLASS_NO_PURE_DECLS \
	FID_ENG02_NewTest_Source_NewTest_Items_ItemBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEWTEST_API UClass* StaticClass<class AItemBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ENG02_NewTest_Source_NewTest_Items_ItemBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
