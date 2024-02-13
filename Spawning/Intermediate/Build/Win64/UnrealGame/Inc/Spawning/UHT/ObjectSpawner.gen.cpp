// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Spawning/ObjectSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectSpawner() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	SPAWNING_API UClass* Z_Construct_UClass_UObjectSpawner();
	SPAWNING_API UClass* Z_Construct_UClass_UObjectSpawner_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Spawning();
// End Cross Module References
	void UObjectSpawner::StaticRegisterNativesUObjectSpawner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectSpawner);
	UClass* Z_Construct_UClass_UObjectSpawner_NoRegister()
	{
		return UObjectSpawner::StaticClass();
	}
	struct Z_Construct_UClass_UObjectSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_actorCopy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_actorCopy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_spawnLimit_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_spawnLimit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Spawning,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectSpawner_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectSpawner_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ObjectSpawner.h" },
		{ "ModuleRelativePath", "ObjectSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectSpawner_Statics::NewProp_actorCopy_MetaData[] = {
		{ "Category", "ObjectSpawner" },
		{ "ModuleRelativePath", "ObjectSpawner.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectSpawner_Statics::NewProp_actorCopy = { "actorCopy", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectSpawner, actorCopy), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectSpawner_Statics::NewProp_actorCopy_MetaData), Z_Construct_UClass_UObjectSpawner_Statics::NewProp_actorCopy_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectSpawner_Statics::NewProp_spawnLimit_MetaData[] = {
		{ "Category", "ObjectSpawner" },
		{ "ModuleRelativePath", "ObjectSpawner.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UObjectSpawner_Statics::NewProp_spawnLimit = { "spawnLimit", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectSpawner, spawnLimit), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectSpawner_Statics::NewProp_spawnLimit_MetaData), Z_Construct_UClass_UObjectSpawner_Statics::NewProp_spawnLimit_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjectSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectSpawner_Statics::NewProp_actorCopy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectSpawner_Statics::NewProp_spawnLimit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectSpawner_Statics::ClassParams = {
		&UObjectSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UObjectSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UObjectSpawner_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_UObjectSpawner_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectSpawner_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UObjectSpawner()
	{
		if (!Z_Registration_Info_UClass_UObjectSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectSpawner.OuterSingleton, Z_Construct_UClass_UObjectSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UObjectSpawner.OuterSingleton;
	}
	template<> SPAWNING_API UClass* StaticClass<UObjectSpawner>()
	{
		return UObjectSpawner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectSpawner);
	UObjectSpawner::~UObjectSpawner() {}
	struct Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_COIN_PUSHER_Spawning_Source_Spawning_ObjectSpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_COIN_PUSHER_Spawning_Source_Spawning_ObjectSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UObjectSpawner, UObjectSpawner::StaticClass, TEXT("UObjectSpawner"), &Z_Registration_Info_UClass_UObjectSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectSpawner), 2953777219U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_COIN_PUSHER_Spawning_Source_Spawning_ObjectSpawner_h_3739585133(TEXT("/Script/Spawning"),
		Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_COIN_PUSHER_Spawning_Source_Spawning_ObjectSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_COIN_PUSHER_Spawning_Source_Spawning_ObjectSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
