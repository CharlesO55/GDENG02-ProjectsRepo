// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoinPusher/DespawnerTrigger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDespawnerTrigger() {}
// Cross Module References
	COINPUSHER_API UClass* Z_Construct_UClass_ADespawnerTrigger();
	COINPUSHER_API UClass* Z_Construct_UClass_ADespawnerTrigger_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
	UPackage* Z_Construct_UPackage__Script_CoinPusher();
// End Cross Module References
	DEFINE_FUNCTION(ADespawnerTrigger::execCheckEnteredObj)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappingActor);
		P_GET_OBJECT(AActor,Z_Param_Other);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckEnteredObj(Z_Param_OverlappingActor,Z_Param_Other);
		P_NATIVE_END;
	}
	void ADespawnerTrigger::StaticRegisterNativesADespawnerTrigger()
	{
		UClass* Class = ADespawnerTrigger::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckEnteredObj", &ADespawnerTrigger::execCheckEnteredObj },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADespawnerTrigger_CheckEnteredObj_Statics
	{
		struct DespawnerTrigger_eventCheckEnteredObj_Parms
		{
			AActor* OverlappingActor;
			AActor* Other;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappingActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Other;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADespawnerTrigger_CheckEnteredObj_Statics::NewProp_OverlappingActor = { "OverlappingActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DespawnerTrigger_eventCheckEnteredObj_Parms, OverlappingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADespawnerTrigger_CheckEnteredObj_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DespawnerTrigger_eventCheckEnteredObj_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADespawnerTrigger_CheckEnteredObj_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADespawnerTrigger_CheckEnteredObj_Statics::NewProp_OverlappingActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADespawnerTrigger_CheckEnteredObj_Statics::NewProp_Other,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADespawnerTrigger_CheckEnteredObj_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DespawnerTrigger.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADespawnerTrigger_CheckEnteredObj_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADespawnerTrigger, nullptr, "CheckEnteredObj", nullptr, nullptr, Z_Construct_UFunction_ADespawnerTrigger_CheckEnteredObj_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADespawnerTrigger_CheckEnteredObj_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADespawnerTrigger_CheckEnteredObj_Statics::DespawnerTrigger_eventCheckEnteredObj_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADespawnerTrigger_CheckEnteredObj_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADespawnerTrigger_CheckEnteredObj_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADespawnerTrigger_CheckEnteredObj_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ADespawnerTrigger_CheckEnteredObj_Statics::DespawnerTrigger_eventCheckEnteredObj_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADespawnerTrigger_CheckEnteredObj()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADespawnerTrigger_CheckEnteredObj_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADespawnerTrigger);
	UClass* Z_Construct_UClass_ADespawnerTrigger_NoRegister()
	{
		return ADespawnerTrigger::StaticClass();
	}
	struct Z_Construct_UClass_ADespawnerTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADespawnerTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerBox,
		(UObject* (*)())Z_Construct_UPackage__Script_CoinPusher,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADespawnerTrigger_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ADespawnerTrigger_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADespawnerTrigger_CheckEnteredObj, "CheckEnteredObj" }, // 3163243574
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADespawnerTrigger_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADespawnerTrigger_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DespawnerTrigger.h" },
		{ "ModuleRelativePath", "DespawnerTrigger.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADespawnerTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADespawnerTrigger>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADespawnerTrigger_Statics::ClassParams = {
		&ADespawnerTrigger::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADespawnerTrigger_Statics::Class_MetaDataParams), Z_Construct_UClass_ADespawnerTrigger_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ADespawnerTrigger()
	{
		if (!Z_Registration_Info_UClass_ADespawnerTrigger.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADespawnerTrigger.OuterSingleton, Z_Construct_UClass_ADespawnerTrigger_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADespawnerTrigger.OuterSingleton;
	}
	template<> COINPUSHER_API UClass* StaticClass<ADespawnerTrigger>()
	{
		return ADespawnerTrigger::StaticClass();
	}
	ADespawnerTrigger::ADespawnerTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADespawnerTrigger);
	ADespawnerTrigger::~ADespawnerTrigger() {}
	struct Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_03_CoinPusher_CoinPusher_Source_CoinPusher_DespawnerTrigger_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_03_CoinPusher_CoinPusher_Source_CoinPusher_DespawnerTrigger_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADespawnerTrigger, ADespawnerTrigger::StaticClass, TEXT("ADespawnerTrigger"), &Z_Registration_Info_UClass_ADespawnerTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADespawnerTrigger), 2335396032U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_03_CoinPusher_CoinPusher_Source_CoinPusher_DespawnerTrigger_h_2313324281(TEXT("/Script/CoinPusher"),
		Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_03_CoinPusher_CoinPusher_Source_CoinPusher_DespawnerTrigger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_03_CoinPusher_CoinPusher_Source_CoinPusher_DespawnerTrigger_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
