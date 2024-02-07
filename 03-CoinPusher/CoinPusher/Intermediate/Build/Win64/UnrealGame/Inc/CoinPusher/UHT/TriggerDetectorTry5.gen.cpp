// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoinPusher/TriggerDetectorTry5.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerDetectorTry5() {}
// Cross Module References
	COINPUSHER_API UClass* Z_Construct_UClass_ATriggerDetectorTry5();
	COINPUSHER_API UClass* Z_Construct_UClass_ATriggerDetectorTry5_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CoinPusher();
// End Cross Module References
	void ATriggerDetectorTry5::StaticRegisterNativesATriggerDetectorTry5()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATriggerDetectorTry5);
	UClass* Z_Construct_UClass_ATriggerDetectorTry5_NoRegister()
	{
		return ATriggerDetectorTry5::StaticClass();
	}
	struct Z_Construct_UClass_ATriggerDetectorTry5_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_OverlappingObjs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_OverlappingObjs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_m_OverlappingObjs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATriggerDetectorTry5_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CoinPusher,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerDetectorTry5_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerDetectorTry5_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TriggerDetectorTry5.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "TriggerDetectorTry5.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerDetectorTry5_Statics::NewProp_m_OverlappingObjs_Inner = { "m_OverlappingObjs", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerDetectorTry5_Statics::NewProp_m_OverlappingObjs_MetaData[] = {
		{ "Category", "TriggerDetectorTry5" },
		{ "ModuleRelativePath", "TriggerDetectorTry5.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATriggerDetectorTry5_Statics::NewProp_m_OverlappingObjs = { "m_OverlappingObjs", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATriggerDetectorTry5, m_OverlappingObjs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerDetectorTry5_Statics::NewProp_m_OverlappingObjs_MetaData), Z_Construct_UClass_ATriggerDetectorTry5_Statics::NewProp_m_OverlappingObjs_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATriggerDetectorTry5_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerDetectorTry5_Statics::NewProp_m_OverlappingObjs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerDetectorTry5_Statics::NewProp_m_OverlappingObjs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATriggerDetectorTry5_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATriggerDetectorTry5>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATriggerDetectorTry5_Statics::ClassParams = {
		&ATriggerDetectorTry5::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATriggerDetectorTry5_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerDetectorTry5_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerDetectorTry5_Statics::Class_MetaDataParams), Z_Construct_UClass_ATriggerDetectorTry5_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerDetectorTry5_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATriggerDetectorTry5()
	{
		if (!Z_Registration_Info_UClass_ATriggerDetectorTry5.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATriggerDetectorTry5.OuterSingleton, Z_Construct_UClass_ATriggerDetectorTry5_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATriggerDetectorTry5.OuterSingleton;
	}
	template<> COINPUSHER_API UClass* StaticClass<ATriggerDetectorTry5>()
	{
		return ATriggerDetectorTry5::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATriggerDetectorTry5);
	ATriggerDetectorTry5::~ATriggerDetectorTry5() {}
	struct Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_03_CoinPusher_CoinPusher_Source_CoinPusher_TriggerDetectorTry5_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_03_CoinPusher_CoinPusher_Source_CoinPusher_TriggerDetectorTry5_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATriggerDetectorTry5, ATriggerDetectorTry5::StaticClass, TEXT("ATriggerDetectorTry5"), &Z_Registration_Info_UClass_ATriggerDetectorTry5, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATriggerDetectorTry5), 4226457995U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_03_CoinPusher_CoinPusher_Source_CoinPusher_TriggerDetectorTry5_h_1295951804(TEXT("/Script/CoinPusher"),
		Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_03_CoinPusher_CoinPusher_Source_CoinPusher_TriggerDetectorTry5_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_03_CoinPusher_CoinPusher_Source_CoinPusher_TriggerDetectorTry5_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
