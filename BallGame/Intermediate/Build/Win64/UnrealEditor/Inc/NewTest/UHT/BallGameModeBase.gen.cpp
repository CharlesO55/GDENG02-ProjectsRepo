// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NewTest/Game/BallGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBallGameModeBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	NEWTEST_API UClass* Z_Construct_UClass_ABallGameModeBase();
	NEWTEST_API UClass* Z_Construct_UClass_ABallGameModeBase_NoRegister();
	NEWTEST_API UClass* Z_Construct_UClass_UScoreUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NewTest();
// End Cross Module References
	void ABallGameModeBase::StaticRegisterNativesABallGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABallGameModeBase);
	UClass* Z_Construct_UClass_ABallGameModeBase_NoRegister()
	{
		return ABallGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABallGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScoreWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ScoreWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABallGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NewTest,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABallGameModeBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABallGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/BallGameModeBase.h" },
		{ "ModuleRelativePath", "Game/BallGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABallGameModeBase_Statics::NewProp_WidgetClass_MetaData[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Game/BallGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABallGameModeBase_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABallGameModeBase, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABallGameModeBase_Statics::NewProp_WidgetClass_MetaData), Z_Construct_UClass_ABallGameModeBase_Statics::NewProp_WidgetClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABallGameModeBase_Statics::NewProp_ScoreWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Game/BallGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABallGameModeBase_Statics::NewProp_ScoreWidget = { "ScoreWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABallGameModeBase, ScoreWidget), Z_Construct_UClass_UScoreUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABallGameModeBase_Statics::NewProp_ScoreWidget_MetaData), Z_Construct_UClass_ABallGameModeBase_Statics::NewProp_ScoreWidget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABallGameModeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABallGameModeBase_Statics::NewProp_WidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABallGameModeBase_Statics::NewProp_ScoreWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABallGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABallGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABallGameModeBase_Statics::ClassParams = {
		&ABallGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABallGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABallGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABallGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ABallGameModeBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABallGameModeBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABallGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ABallGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABallGameModeBase.OuterSingleton, Z_Construct_UClass_ABallGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABallGameModeBase.OuterSingleton;
	}
	template<> NEWTEST_API UClass* StaticClass<ABallGameModeBase>()
	{
		return ABallGameModeBase::StaticClass();
	}
	ABallGameModeBase::ABallGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABallGameModeBase);
	ABallGameModeBase::~ABallGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_ENG02_NewTest_Source_NewTest_Game_BallGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ENG02_NewTest_Source_NewTest_Game_BallGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABallGameModeBase, ABallGameModeBase::StaticClass, TEXT("ABallGameModeBase"), &Z_Registration_Info_UClass_ABallGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABallGameModeBase), 1605440943U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ENG02_NewTest_Source_NewTest_Game_BallGameModeBase_h_3596154288(TEXT("/Script/NewTest"),
		Z_CompiledInDeferFile_FID_ENG02_NewTest_Source_NewTest_Game_BallGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ENG02_NewTest_Source_NewTest_Game_BallGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
