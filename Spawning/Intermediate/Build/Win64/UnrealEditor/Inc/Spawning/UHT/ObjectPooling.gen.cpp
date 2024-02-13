// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Spawning/ObjectPooling.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectPooling() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	SPAWNING_API UClass* Z_Construct_UClass_AAPoolable_NoRegister();
	SPAWNING_API UClass* Z_Construct_UClass_UObjectPooling();
	SPAWNING_API UClass* Z_Construct_UClass_UObjectPooling_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Spawning();
// End Cross Module References
	void UObjectPooling::StaticRegisterNativesUObjectPooling()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectPooling);
	UClass* Z_Construct_UClass_UObjectPooling_NoRegister()
	{
		return UObjectPooling::StaticClass();
	}
	struct Z_Construct_UClass_UObjectPooling_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxPoolSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_maxPoolSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_initialBatch_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_initialBatch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_actorCopy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_actorCopy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_parent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_parent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectPooling_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Spawning,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPooling_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPooling_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ObjectPooling.h" },
		{ "ModuleRelativePath", "ObjectPooling.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPooling_Statics::NewProp_maxPoolSize_MetaData[] = {
		{ "Category", "ObjectPooling" },
		{ "ModuleRelativePath", "ObjectPooling.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UObjectPooling_Statics::NewProp_maxPoolSize = { "maxPoolSize", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectPooling, maxPoolSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPooling_Statics::NewProp_maxPoolSize_MetaData), Z_Construct_UClass_UObjectPooling_Statics::NewProp_maxPoolSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPooling_Statics::NewProp_initialBatch_MetaData[] = {
		{ "Category", "ObjectPooling" },
		{ "ModuleRelativePath", "ObjectPooling.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UObjectPooling_Statics::NewProp_initialBatch = { "initialBatch", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectPooling, initialBatch), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPooling_Statics::NewProp_initialBatch_MetaData), Z_Construct_UClass_UObjectPooling_Statics::NewProp_initialBatch_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPooling_Statics::NewProp_actorCopy_MetaData[] = {
		{ "Category", "ObjectPooling" },
		{ "ModuleRelativePath", "ObjectPooling.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectPooling_Statics::NewProp_actorCopy = { "actorCopy", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectPooling, actorCopy), Z_Construct_UClass_AAPoolable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPooling_Statics::NewProp_actorCopy_MetaData), Z_Construct_UClass_UObjectPooling_Statics::NewProp_actorCopy_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPooling_Statics::NewProp_parent_MetaData[] = {
		{ "Category", "ObjectPooling" },
		{ "ModuleRelativePath", "ObjectPooling.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectPooling_Statics::NewProp_parent = { "parent", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectPooling, parent), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPooling_Statics::NewProp_parent_MetaData), Z_Construct_UClass_UObjectPooling_Statics::NewProp_parent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjectPooling_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPooling_Statics::NewProp_maxPoolSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPooling_Statics::NewProp_initialBatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPooling_Statics::NewProp_actorCopy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPooling_Statics::NewProp_parent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectPooling_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectPooling>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectPooling_Statics::ClassParams = {
		&UObjectPooling::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UObjectPooling_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPooling_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPooling_Statics::Class_MetaDataParams), Z_Construct_UClass_UObjectPooling_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPooling_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UObjectPooling()
	{
		if (!Z_Registration_Info_UClass_UObjectPooling.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectPooling.OuterSingleton, Z_Construct_UClass_UObjectPooling_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UObjectPooling.OuterSingleton;
	}
	template<> SPAWNING_API UClass* StaticClass<UObjectPooling>()
	{
		return UObjectPooling::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectPooling);
	UObjectPooling::~UObjectPooling() {}
	struct Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_COIN_PUSHER_Spawning_Source_Spawning_ObjectPooling_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_COIN_PUSHER_Spawning_Source_Spawning_ObjectPooling_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UObjectPooling, UObjectPooling::StaticClass, TEXT("UObjectPooling"), &Z_Registration_Info_UClass_UObjectPooling, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectPooling), 1660362059U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_COIN_PUSHER_Spawning_Source_Spawning_ObjectPooling_h_232605600(TEXT("/Script/Spawning"),
		Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_COIN_PUSHER_Spawning_Source_Spawning_ObjectPooling_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_COIN_PUSHER_Spawning_Source_Spawning_ObjectPooling_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
