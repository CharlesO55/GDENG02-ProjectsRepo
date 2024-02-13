// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Spawning/CoinWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoinWidget() {}
// Cross Module References
	SPAWNING_API UClass* Z_Construct_UClass_UCoinWidget();
	SPAWNING_API UClass* Z_Construct_UClass_UCoinWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Spawning();
// End Cross Module References
	struct CoinWidget_eventSetCoinSpawnText_Parms
	{
		int32 nAmount;
	};
	struct CoinWidget_eventSetItemText_Parms
	{
		int32 collected;
	};
	struct CoinWidget_eventSetPusherSpeedText_Parms
	{
		float speed;
	};
	static FName NAME_UCoinWidget_SetCoinSpawnText = FName(TEXT("SetCoinSpawnText"));
	void UCoinWidget::SetCoinSpawnText(int32 nAmount)
	{
		CoinWidget_eventSetCoinSpawnText_Parms Parms;
		Parms.nAmount=nAmount;
		ProcessEvent(FindFunctionChecked(NAME_UCoinWidget_SetCoinSpawnText),&Parms);
	}
	static FName NAME_UCoinWidget_SetItemText = FName(TEXT("SetItemText"));
	void UCoinWidget::SetItemText(int32 collected)
	{
		CoinWidget_eventSetItemText_Parms Parms;
		Parms.collected=collected;
		ProcessEvent(FindFunctionChecked(NAME_UCoinWidget_SetItemText),&Parms);
	}
	static FName NAME_UCoinWidget_SetPusherSpeedText = FName(TEXT("SetPusherSpeedText"));
	void UCoinWidget::SetPusherSpeedText(float speed)
	{
		CoinWidget_eventSetPusherSpeedText_Parms Parms;
		Parms.speed=speed;
		ProcessEvent(FindFunctionChecked(NAME_UCoinWidget_SetPusherSpeedText),&Parms);
	}
	void UCoinWidget::StaticRegisterNativesUCoinWidget()
	{
	}
	struct Z_Construct_UFunction_UCoinWidget_SetCoinSpawnText_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_nAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoinWidget_SetCoinSpawnText_Statics::NewProp_nAmount = { "nAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoinWidget_eventSetCoinSpawnText_Parms, nAmount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoinWidget_SetCoinSpawnText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoinWidget_SetCoinSpawnText_Statics::NewProp_nAmount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoinWidget_SetCoinSpawnText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CoinWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoinWidget_SetCoinSpawnText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoinWidget, nullptr, "SetCoinSpawnText", nullptr, nullptr, Z_Construct_UFunction_UCoinWidget_SetCoinSpawnText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoinWidget_SetCoinSpawnText_Statics::PropPointers), sizeof(CoinWidget_eventSetCoinSpawnText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoinWidget_SetCoinSpawnText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCoinWidget_SetCoinSpawnText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoinWidget_SetCoinSpawnText_Statics::PropPointers) < 2048);
	static_assert(sizeof(CoinWidget_eventSetCoinSpawnText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCoinWidget_SetCoinSpawnText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoinWidget_SetCoinSpawnText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoinWidget_SetItemText_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_collected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoinWidget_SetItemText_Statics::NewProp_collected = { "collected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoinWidget_eventSetItemText_Parms, collected), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoinWidget_SetItemText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoinWidget_SetItemText_Statics::NewProp_collected,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoinWidget_SetItemText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CoinWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoinWidget_SetItemText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoinWidget, nullptr, "SetItemText", nullptr, nullptr, Z_Construct_UFunction_UCoinWidget_SetItemText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoinWidget_SetItemText_Statics::PropPointers), sizeof(CoinWidget_eventSetItemText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoinWidget_SetItemText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCoinWidget_SetItemText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoinWidget_SetItemText_Statics::PropPointers) < 2048);
	static_assert(sizeof(CoinWidget_eventSetItemText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCoinWidget_SetItemText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoinWidget_SetItemText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoinWidget_SetPusherSpeedText_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoinWidget_SetPusherSpeedText_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoinWidget_eventSetPusherSpeedText_Parms, speed), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoinWidget_SetPusherSpeedText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoinWidget_SetPusherSpeedText_Statics::NewProp_speed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoinWidget_SetPusherSpeedText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CoinWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoinWidget_SetPusherSpeedText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoinWidget, nullptr, "SetPusherSpeedText", nullptr, nullptr, Z_Construct_UFunction_UCoinWidget_SetPusherSpeedText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoinWidget_SetPusherSpeedText_Statics::PropPointers), sizeof(CoinWidget_eventSetPusherSpeedText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoinWidget_SetPusherSpeedText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCoinWidget_SetPusherSpeedText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoinWidget_SetPusherSpeedText_Statics::PropPointers) < 2048);
	static_assert(sizeof(CoinWidget_eventSetPusherSpeedText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCoinWidget_SetPusherSpeedText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoinWidget_SetPusherSpeedText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCoinWidget);
	UClass* Z_Construct_UClass_UCoinWidget_NoRegister()
	{
		return UCoinWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoinWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoinWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Spawning,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoinWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoinWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoinWidget_SetCoinSpawnText, "SetCoinSpawnText" }, // 715634293
		{ &Z_Construct_UFunction_UCoinWidget_SetItemText, "SetItemText" }, // 1253643342
		{ &Z_Construct_UFunction_UCoinWidget_SetPusherSpeedText, "SetPusherSpeedText" }, // 890369699
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoinWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoinWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CoinWidget.h" },
		{ "ModuleRelativePath", "CoinWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoinWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoinWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoinWidget_Statics::ClassParams = {
		&UCoinWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCoinWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UCoinWidget_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCoinWidget()
	{
		if (!Z_Registration_Info_UClass_UCoinWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoinWidget.OuterSingleton, Z_Construct_UClass_UCoinWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCoinWidget.OuterSingleton;
	}
	template<> SPAWNING_API UClass* StaticClass<UCoinWidget>()
	{
		return UCoinWidget::StaticClass();
	}
	UCoinWidget::UCoinWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoinWidget);
	UCoinWidget::~UCoinWidget() {}
	struct Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_COIN_PUSHER_Spawning_Source_Spawning_CoinWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_COIN_PUSHER_Spawning_Source_Spawning_CoinWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCoinWidget, UCoinWidget::StaticClass, TEXT("UCoinWidget"), &Z_Registration_Info_UClass_UCoinWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoinWidget), 700187108U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_COIN_PUSHER_Spawning_Source_Spawning_CoinWidget_h_845999181(TEXT("/Script/Spawning"),
		Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_COIN_PUSHER_Spawning_Source_Spawning_CoinWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_COIN_PUSHER_Spawning_Source_Spawning_CoinWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
