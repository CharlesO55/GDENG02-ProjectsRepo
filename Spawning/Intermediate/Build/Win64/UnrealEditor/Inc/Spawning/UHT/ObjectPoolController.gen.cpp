// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Spawning/ObjectPoolController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectPoolController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	SPAWNING_API UClass* Z_Construct_UClass_UObjectPoolController();
	SPAWNING_API UClass* Z_Construct_UClass_UObjectPoolController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Spawning();
// End Cross Module References
	void UObjectPoolController::StaticRegisterNativesUObjectPoolController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectPoolController);
	UClass* Z_Construct_UClass_UObjectPoolController_NoRegister()
	{
		return UObjectPoolController::StaticClass();
	}
	struct Z_Construct_UClass_UObjectPoolController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_objectPool_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_objectPool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectPoolController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Spawning,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPoolController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPoolController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ObjectPoolController.h" },
		{ "ModuleRelativePath", "ObjectPoolController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPoolController_Statics::NewProp_objectPool_MetaData[] = {
		{ "Category", "ObjectPoolController" },
		{ "ModuleRelativePath", "ObjectPoolController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectPoolController_Statics::NewProp_objectPool = { "objectPool", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectPoolController, objectPool), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPoolController_Statics::NewProp_objectPool_MetaData), Z_Construct_UClass_UObjectPoolController_Statics::NewProp_objectPool_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjectPoolController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPoolController_Statics::NewProp_objectPool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectPoolController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectPoolController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectPoolController_Statics::ClassParams = {
		&UObjectPoolController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UObjectPoolController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPoolController_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPoolController_Statics::Class_MetaDataParams), Z_Construct_UClass_UObjectPoolController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPoolController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UObjectPoolController()
	{
		if (!Z_Registration_Info_UClass_UObjectPoolController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectPoolController.OuterSingleton, Z_Construct_UClass_UObjectPoolController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UObjectPoolController.OuterSingleton;
	}
	template<> SPAWNING_API UClass* StaticClass<UObjectPoolController>()
	{
		return UObjectPoolController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectPoolController);
	UObjectPoolController::~UObjectPoolController() {}
	struct Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_COIN_PUSHER_Spawning_Source_Spawning_ObjectPoolController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_COIN_PUSHER_Spawning_Source_Spawning_ObjectPoolController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UObjectPoolController, UObjectPoolController::StaticClass, TEXT("UObjectPoolController"), &Z_Registration_Info_UClass_UObjectPoolController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectPoolController), 2872726963U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_COIN_PUSHER_Spawning_Source_Spawning_ObjectPoolController_h_3073086657(TEXT("/Script/Spawning"),
		Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_COIN_PUSHER_Spawning_Source_Spawning_ObjectPoolController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_COIN_PUSHER_Spawning_Source_Spawning_ObjectPoolController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
