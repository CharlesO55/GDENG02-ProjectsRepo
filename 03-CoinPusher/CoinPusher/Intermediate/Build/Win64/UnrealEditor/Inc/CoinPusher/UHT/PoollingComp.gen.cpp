// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoinPusher/PoollingComp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoollingComp() {}
// Cross Module References
	COINPUSHER_API UClass* Z_Construct_UClass_AActorPoolable_NoRegister();
	COINPUSHER_API UClass* Z_Construct_UClass_UPoollingComp();
	COINPUSHER_API UClass* Z_Construct_UClass_UPoollingComp_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CoinPusher();
// End Cross Module References
	DEFINE_FUNCTION(UPoollingComp::execGetRemainingAvailableSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRemainingAvailableSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPoollingComp::execReleasePoolable)
	{
		P_GET_OBJECT(AActorPoolable,Z_Param_releaseActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReleasePoolable(Z_Param_releaseActor);
		P_NATIVE_END;
	}
	void UPoollingComp::StaticRegisterNativesUPoollingComp()
	{
		UClass* Class = UPoollingComp::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRemainingAvailableSize", &UPoollingComp::execGetRemainingAvailableSize },
			{ "ReleasePoolable", &UPoollingComp::execReleasePoolable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPoollingComp_GetRemainingAvailableSize_Statics
	{
		struct PoollingComp_eventGetRemainingAvailableSize_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPoollingComp_GetRemainingAvailableSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoollingComp_eventGetRemainingAvailableSize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPoollingComp_GetRemainingAvailableSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoollingComp_GetRemainingAvailableSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPoollingComp_GetRemainingAvailableSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PoollingComp.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoollingComp_GetRemainingAvailableSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoollingComp, nullptr, "GetRemainingAvailableSize", nullptr, nullptr, Z_Construct_UFunction_UPoollingComp_GetRemainingAvailableSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoollingComp_GetRemainingAvailableSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPoollingComp_GetRemainingAvailableSize_Statics::PoollingComp_eventGetRemainingAvailableSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoollingComp_GetRemainingAvailableSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPoollingComp_GetRemainingAvailableSize_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoollingComp_GetRemainingAvailableSize_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPoollingComp_GetRemainingAvailableSize_Statics::PoollingComp_eventGetRemainingAvailableSize_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPoollingComp_GetRemainingAvailableSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoollingComp_GetRemainingAvailableSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPoollingComp_ReleasePoolable_Statics
	{
		struct PoollingComp_eventReleasePoolable_Parms
		{
			AActorPoolable* releaseActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_releaseActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPoollingComp_ReleasePoolable_Statics::NewProp_releaseActor = { "releaseActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoollingComp_eventReleasePoolable_Parms, releaseActor), Z_Construct_UClass_AActorPoolable_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPoollingComp_ReleasePoolable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoollingComp_ReleasePoolable_Statics::NewProp_releaseActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPoollingComp_ReleasePoolable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PoollingComp.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoollingComp_ReleasePoolable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoollingComp, nullptr, "ReleasePoolable", nullptr, nullptr, Z_Construct_UFunction_UPoollingComp_ReleasePoolable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoollingComp_ReleasePoolable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPoollingComp_ReleasePoolable_Statics::PoollingComp_eventReleasePoolable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoollingComp_ReleasePoolable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPoollingComp_ReleasePoolable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoollingComp_ReleasePoolable_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPoollingComp_ReleasePoolable_Statics::PoollingComp_eventReleasePoolable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPoollingComp_ReleasePoolable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoollingComp_ReleasePoolable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoollingComp);
	UClass* Z_Construct_UClass_UPoollingComp_NoRegister()
	{
		return UPoollingComp::StaticClass();
	}
	struct Z_Construct_UClass_UPoollingComp_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_PoolSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_m_PoolSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_PoolableTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_PoolableTemplate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoollingComp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CoinPusher,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoollingComp_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPoollingComp_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPoollingComp_GetRemainingAvailableSize, "GetRemainingAvailableSize" }, // 3975837954
		{ &Z_Construct_UFunction_UPoollingComp_ReleasePoolable, "ReleasePoolable" }, // 4247337339
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoollingComp_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoollingComp_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PoollingComp.h" },
		{ "ModuleRelativePath", "PoollingComp.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoollingComp_Statics::NewProp_m_PoolSize_MetaData[] = {
		{ "Category", "PoollingComp" },
		{ "ModuleRelativePath", "PoollingComp.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPoollingComp_Statics::NewProp_m_PoolSize = { "m_PoolSize", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoollingComp, m_PoolSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoollingComp_Statics::NewProp_m_PoolSize_MetaData), Z_Construct_UClass_UPoollingComp_Statics::NewProp_m_PoolSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoollingComp_Statics::NewProp_m_PoolableTemplate_MetaData[] = {
		{ "Category", "PoollingComp" },
		{ "ModuleRelativePath", "PoollingComp.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPoollingComp_Statics::NewProp_m_PoolableTemplate = { "m_PoolableTemplate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoollingComp, m_PoolableTemplate), Z_Construct_UClass_AActorPoolable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoollingComp_Statics::NewProp_m_PoolableTemplate_MetaData), Z_Construct_UClass_UPoollingComp_Statics::NewProp_m_PoolableTemplate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoollingComp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoollingComp_Statics::NewProp_m_PoolSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoollingComp_Statics::NewProp_m_PoolableTemplate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoollingComp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoollingComp>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoollingComp_Statics::ClassParams = {
		&UPoollingComp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPoollingComp_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPoollingComp_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoollingComp_Statics::Class_MetaDataParams), Z_Construct_UClass_UPoollingComp_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoollingComp_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPoollingComp()
	{
		if (!Z_Registration_Info_UClass_UPoollingComp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoollingComp.OuterSingleton, Z_Construct_UClass_UPoollingComp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoollingComp.OuterSingleton;
	}
	template<> COINPUSHER_API UClass* StaticClass<UPoollingComp>()
	{
		return UPoollingComp::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoollingComp);
	UPoollingComp::~UPoollingComp() {}
	struct Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_03_CoinPusher_CoinPusher_Source_CoinPusher_PoollingComp_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_03_CoinPusher_CoinPusher_Source_CoinPusher_PoollingComp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPoollingComp, UPoollingComp::StaticClass, TEXT("UPoollingComp"), &Z_Registration_Info_UClass_UPoollingComp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoollingComp), 1213888738U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_03_CoinPusher_CoinPusher_Source_CoinPusher_PoollingComp_h_253838097(TEXT("/Script/CoinPusher"),
		Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_03_CoinPusher_CoinPusher_Source_CoinPusher_PoollingComp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_03_CoinPusher_CoinPusher_Source_CoinPusher_PoollingComp_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
