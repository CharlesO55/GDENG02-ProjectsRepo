// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoinPusher/CoinManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoinManager() {}
// Cross Module References
	COINPUSHER_API UClass* Z_Construct_UClass_ACoinManager();
	COINPUSHER_API UClass* Z_Construct_UClass_ACoinManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CoinPusher();
// End Cross Module References
	void ACoinManager::StaticRegisterNativesACoinManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACoinManager);
	UClass* Z_Construct_UClass_ACoinManager_NoRegister()
	{
		return ACoinManager::StaticClass();
	}
	struct Z_Construct_UClass_ACoinManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_SpawnTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_SpawnTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_SpawnAmount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_m_SpawnAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_DespawnRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_DespawnRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_SpawnRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_SpawnRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACoinManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CoinPusher,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACoinManager_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoinManager.h" },
		{ "ModuleRelativePath", "CoinManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinManager_Statics::NewProp_m_SpawnTemplate_MetaData[] = {
		{ "Category", "CoinManager" },
		{ "ModuleRelativePath", "CoinManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoinManager_Statics::NewProp_m_SpawnTemplate = { "m_SpawnTemplate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoinManager, m_SpawnTemplate), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoinManager_Statics::NewProp_m_SpawnTemplate_MetaData), Z_Construct_UClass_ACoinManager_Statics::NewProp_m_SpawnTemplate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinManager_Statics::NewProp_m_SpawnAmount_MetaData[] = {
		{ "Category", "CoinManager" },
		{ "ModuleRelativePath", "CoinManager.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACoinManager_Statics::NewProp_m_SpawnAmount = { "m_SpawnAmount", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoinManager, m_SpawnAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoinManager_Statics::NewProp_m_SpawnAmount_MetaData), Z_Construct_UClass_ACoinManager_Statics::NewProp_m_SpawnAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinManager_Statics::NewProp_m_DespawnRate_MetaData[] = {
		{ "Category", "CoinManager" },
		{ "ModuleRelativePath", "CoinManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACoinManager_Statics::NewProp_m_DespawnRate = { "m_DespawnRate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoinManager, m_DespawnRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoinManager_Statics::NewProp_m_DespawnRate_MetaData), Z_Construct_UClass_ACoinManager_Statics::NewProp_m_DespawnRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinManager_Statics::NewProp_m_SpawnRate_MetaData[] = {
		{ "Category", "CoinManager" },
		{ "ModuleRelativePath", "CoinManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACoinManager_Statics::NewProp_m_SpawnRate = { "m_SpawnRate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoinManager, m_SpawnRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoinManager_Statics::NewProp_m_SpawnRate_MetaData), Z_Construct_UClass_ACoinManager_Statics::NewProp_m_SpawnRate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACoinManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinManager_Statics::NewProp_m_SpawnTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinManager_Statics::NewProp_m_SpawnAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinManager_Statics::NewProp_m_DespawnRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinManager_Statics::NewProp_m_SpawnRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACoinManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoinManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACoinManager_Statics::ClassParams = {
		&ACoinManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACoinManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACoinManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoinManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ACoinManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACoinManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACoinManager()
	{
		if (!Z_Registration_Info_UClass_ACoinManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACoinManager.OuterSingleton, Z_Construct_UClass_ACoinManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACoinManager.OuterSingleton;
	}
	template<> COINPUSHER_API UClass* StaticClass<ACoinManager>()
	{
		return ACoinManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACoinManager);
	ACoinManager::~ACoinManager() {}
	struct Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_03_CoinPusher_CoinPusher_Source_CoinPusher_CoinManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_03_CoinPusher_CoinPusher_Source_CoinPusher_CoinManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACoinManager, ACoinManager::StaticClass, TEXT("ACoinManager"), &Z_Registration_Info_UClass_ACoinManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACoinManager), 1444093911U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_03_CoinPusher_CoinPusher_Source_CoinPusher_CoinManager_h_437059027(TEXT("/Script/CoinPusher"),
		Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_03_CoinPusher_CoinPusher_Source_CoinPusher_CoinManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_03_CoinPusher_CoinPusher_Source_CoinPusher_CoinManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
