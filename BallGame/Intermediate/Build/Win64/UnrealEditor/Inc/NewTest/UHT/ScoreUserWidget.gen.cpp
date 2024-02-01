// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NewTest/Game/ScoreUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScoreUserWidget() {}
// Cross Module References
	NEWTEST_API UClass* Z_Construct_UClass_UScoreUserWidget();
	NEWTEST_API UClass* Z_Construct_UClass_UScoreUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_NewTest();
// End Cross Module References
	struct ScoreUserWidget_eventSetItemText_Parms
	{
		int32 ItemsCollected;
		int32 ItemsInLevel;
	};
	static FName NAME_UScoreUserWidget_SetItemText = FName(TEXT("SetItemText"));
	void UScoreUserWidget::SetItemText(int32 ItemsCollected, int32 ItemsInLevel)
	{
		ScoreUserWidget_eventSetItemText_Parms Parms;
		Parms.ItemsCollected=ItemsCollected;
		Parms.ItemsInLevel=ItemsInLevel;
		ProcessEvent(FindFunctionChecked(NAME_UScoreUserWidget_SetItemText),&Parms);
	}
	void UScoreUserWidget::StaticRegisterNativesUScoreUserWidget()
	{
	}
	struct Z_Construct_UFunction_UScoreUserWidget_SetItemText_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemsCollected;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemsInLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UScoreUserWidget_SetItemText_Statics::NewProp_ItemsCollected = { "ItemsCollected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScoreUserWidget_eventSetItemText_Parms, ItemsCollected), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UScoreUserWidget_SetItemText_Statics::NewProp_ItemsInLevel = { "ItemsInLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScoreUserWidget_eventSetItemText_Parms, ItemsInLevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScoreUserWidget_SetItemText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScoreUserWidget_SetItemText_Statics::NewProp_ItemsCollected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScoreUserWidget_SetItemText_Statics::NewProp_ItemsInLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScoreUserWidget_SetItemText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game/ScoreUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScoreUserWidget_SetItemText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScoreUserWidget, nullptr, "SetItemText", nullptr, nullptr, Z_Construct_UFunction_UScoreUserWidget_SetItemText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScoreUserWidget_SetItemText_Statics::PropPointers), sizeof(ScoreUserWidget_eventSetItemText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScoreUserWidget_SetItemText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScoreUserWidget_SetItemText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UScoreUserWidget_SetItemText_Statics::PropPointers) < 2048);
	static_assert(sizeof(ScoreUserWidget_eventSetItemText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UScoreUserWidget_SetItemText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScoreUserWidget_SetItemText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScoreUserWidget);
	UClass* Z_Construct_UClass_UScoreUserWidget_NoRegister()
	{
		return UScoreUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UScoreUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScoreUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_NewTest,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScoreUserWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UScoreUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UScoreUserWidget_SetItemText, "SetItemText" }, // 3839959896
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScoreUserWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScoreUserWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Game/ScoreUserWidget.h" },
		{ "ModuleRelativePath", "Game/ScoreUserWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScoreUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScoreUserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UScoreUserWidget_Statics::ClassParams = {
		&UScoreUserWidget::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UScoreUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UScoreUserWidget_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UScoreUserWidget()
	{
		if (!Z_Registration_Info_UClass_UScoreUserWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScoreUserWidget.OuterSingleton, Z_Construct_UClass_UScoreUserWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UScoreUserWidget.OuterSingleton;
	}
	template<> NEWTEST_API UClass* StaticClass<UScoreUserWidget>()
	{
		return UScoreUserWidget::StaticClass();
	}
	UScoreUserWidget::UScoreUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScoreUserWidget);
	UScoreUserWidget::~UScoreUserWidget() {}
	struct Z_CompiledInDeferFile_FID_ENG02_NewTest_Source_NewTest_Game_ScoreUserWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ENG02_NewTest_Source_NewTest_Game_ScoreUserWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UScoreUserWidget, UScoreUserWidget::StaticClass, TEXT("UScoreUserWidget"), &Z_Registration_Info_UClass_UScoreUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScoreUserWidget), 13406809U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ENG02_NewTest_Source_NewTest_Game_ScoreUserWidget_h_1326754707(TEXT("/Script/NewTest"),
		Z_CompiledInDeferFile_FID_ENG02_NewTest_Source_NewTest_Game_ScoreUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ENG02_NewTest_Source_NewTest_Game_ScoreUserWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
