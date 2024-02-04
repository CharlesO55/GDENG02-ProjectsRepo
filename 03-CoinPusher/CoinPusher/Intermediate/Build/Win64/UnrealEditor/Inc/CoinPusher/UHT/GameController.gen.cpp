// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoinPusher/GameController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameController() {}
// Cross Module References
	COINPUSHER_API UClass* Z_Construct_UClass_AGameController();
	COINPUSHER_API UClass* Z_Construct_UClass_AGameController_NoRegister();
	COINPUSHER_API UClass* Z_Construct_UClass_UPoollingComp_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CoinPusher();
// End Cross Module References
	void AGameController::StaticRegisterNativesAGameController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameController);
	UClass* Z_Construct_UClass_AGameController_NoRegister()
	{
		return AGameController::StaticClass();
	}
	struct Z_Construct_UClass_AGameController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_CoinPool_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_CoinPool;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_SpawnBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_SpawnBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_StartingSpawnAmount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_m_StartingSpawnAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_CoinPusher,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GameController.h" },
		{ "ModuleRelativePath", "GameController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameController_Statics::NewProp_m_CoinPool_MetaData[] = {
		{ "Category", "GameController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//POOLING\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "POOLING" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameController_Statics::NewProp_m_CoinPool = { "m_CoinPool", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameController, m_CoinPool), Z_Construct_UClass_UPoollingComp_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameController_Statics::NewProp_m_CoinPool_MetaData), Z_Construct_UClass_AGameController_Statics::NewProp_m_CoinPool_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameController_Statics::NewProp_m_SpawnBox_MetaData[] = {
		{ "Category", "GameController" },
		{ "ModuleRelativePath", "GameController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameController_Statics::NewProp_m_SpawnBox = { "m_SpawnBox", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameController, m_SpawnBox), Z_Construct_UClass_ATriggerBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameController_Statics::NewProp_m_SpawnBox_MetaData), Z_Construct_UClass_AGameController_Statics::NewProp_m_SpawnBox_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameController_Statics::NewProp_m_StartingSpawnAmount_MetaData[] = {
		{ "Category", "GameController" },
		{ "ModuleRelativePath", "GameController.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameController_Statics::NewProp_m_StartingSpawnAmount = { "m_StartingSpawnAmount", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameController, m_StartingSpawnAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameController_Statics::NewProp_m_StartingSpawnAmount_MetaData), Z_Construct_UClass_AGameController_Statics::NewProp_m_StartingSpawnAmount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameController_Statics::NewProp_m_CoinPool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameController_Statics::NewProp_m_SpawnBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameController_Statics::NewProp_m_StartingSpawnAmount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameController_Statics::ClassParams = {
		&AGameController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGameController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameController_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameController_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGameController()
	{
		if (!Z_Registration_Info_UClass_AGameController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameController.OuterSingleton, Z_Construct_UClass_AGameController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGameController.OuterSingleton;
	}
	template<> COINPUSHER_API UClass* StaticClass<AGameController>()
	{
		return AGameController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameController);
	AGameController::~AGameController() {}
	struct Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_03_CoinPusher_CoinPusher_Source_CoinPusher_GameController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_03_CoinPusher_CoinPusher_Source_CoinPusher_GameController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameController, AGameController::StaticClass, TEXT("AGameController"), &Z_Registration_Info_UClass_AGameController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameController), 3215850701U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_03_CoinPusher_CoinPusher_Source_CoinPusher_GameController_h_4261674543(TEXT("/Script/CoinPusher"),
		Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_03_CoinPusher_CoinPusher_Source_CoinPusher_GameController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_03_CoinPusher_CoinPusher_Source_CoinPusher_GameController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
