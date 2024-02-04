// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoinPusher/TestTriggerVol.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestTriggerVol() {}
// Cross Module References
	COINPUSHER_API UClass* Z_Construct_UClass_ATestTriggerVol();
	COINPUSHER_API UClass* Z_Construct_UClass_ATestTriggerVol_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume();
	UPackage* Z_Construct_UPackage__Script_CoinPusher();
// End Cross Module References
	DEFINE_FUNCTION(ATestTriggerVol::execBeginOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlapActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginOverlap(Z_Param_OverlapActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	void ATestTriggerVol::StaticRegisterNativesATestTriggerVol()
	{
		UClass* Class = ATestTriggerVol::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginOverlap", &ATestTriggerVol::execBeginOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATestTriggerVol_BeginOverlap_Statics
	{
		struct TestTriggerVol_eventBeginOverlap_Parms
		{
			AActor* OverlapActor;
			AActor* OtherActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlapActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATestTriggerVol_BeginOverlap_Statics::NewProp_OverlapActor = { "OverlapActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TestTriggerVol_eventBeginOverlap_Parms, OverlapActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATestTriggerVol_BeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TestTriggerVol_eventBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATestTriggerVol_BeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestTriggerVol_BeginOverlap_Statics::NewProp_OverlapActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestTriggerVol_BeginOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestTriggerVol_BeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TestTriggerVol.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestTriggerVol_BeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestTriggerVol, nullptr, "BeginOverlap", nullptr, nullptr, Z_Construct_UFunction_ATestTriggerVol_BeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestTriggerVol_BeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATestTriggerVol_BeginOverlap_Statics::TestTriggerVol_eventBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestTriggerVol_BeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATestTriggerVol_BeginOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestTriggerVol_BeginOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATestTriggerVol_BeginOverlap_Statics::TestTriggerVol_eventBeginOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATestTriggerVol_BeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestTriggerVol_BeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestTriggerVol);
	UClass* Z_Construct_UClass_ATestTriggerVol_NoRegister()
	{
		return ATestTriggerVol::StaticClass();
	}
	struct Z_Construct_UClass_ATestTriggerVol_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestTriggerVol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_CoinPusher,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestTriggerVol_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ATestTriggerVol_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATestTriggerVol_BeginOverlap, "BeginOverlap" }, // 1269903867
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestTriggerVol_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestTriggerVol_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "TestTriggerVol.h" },
		{ "ModuleRelativePath", "TestTriggerVol.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestTriggerVol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestTriggerVol>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestTriggerVol_Statics::ClassParams = {
		&ATestTriggerVol::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestTriggerVol_Statics::Class_MetaDataParams), Z_Construct_UClass_ATestTriggerVol_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATestTriggerVol()
	{
		if (!Z_Registration_Info_UClass_ATestTriggerVol.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestTriggerVol.OuterSingleton, Z_Construct_UClass_ATestTriggerVol_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATestTriggerVol.OuterSingleton;
	}
	template<> COINPUSHER_API UClass* StaticClass<ATestTriggerVol>()
	{
		return ATestTriggerVol::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestTriggerVol);
	ATestTriggerVol::~ATestTriggerVol() {}
	struct Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_03_CoinPusher_CoinPusher_Source_CoinPusher_TestTriggerVol_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_03_CoinPusher_CoinPusher_Source_CoinPusher_TestTriggerVol_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATestTriggerVol, ATestTriggerVol::StaticClass, TEXT("ATestTriggerVol"), &Z_Registration_Info_UClass_ATestTriggerVol, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestTriggerVol), 2477468005U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_03_CoinPusher_CoinPusher_Source_CoinPusher_TestTriggerVol_h_151383274(TEXT("/Script/CoinPusher"),
		Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_03_CoinPusher_CoinPusher_Source_CoinPusher_TestTriggerVol_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_03_CoinPusher_CoinPusher_Source_CoinPusher_TestTriggerVol_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
