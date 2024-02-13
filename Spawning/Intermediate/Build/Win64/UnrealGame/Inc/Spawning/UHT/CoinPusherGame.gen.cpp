// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Spawning/CoinPusherGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoinPusherGame() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	SPAWNING_API UClass* Z_Construct_UClass_ACoinPusherGame();
	SPAWNING_API UClass* Z_Construct_UClass_ACoinPusherGame_NoRegister();
	SPAWNING_API UClass* Z_Construct_UClass_UCoinWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Spawning();
// End Cross Module References
	void ACoinPusherGame::StaticRegisterNativesACoinPusherGame()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACoinPusherGame);
	UClass* Z_Construct_UClass_ACoinPusherGame_NoRegister()
	{
		return ACoinPusherGame::StaticClass();
	}
	struct Z_Construct_UClass_ACoinPusherGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GameWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GameWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACoinPusherGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Spawning,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACoinPusherGame_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinPusherGame_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CoinPusherGame.h" },
		{ "ModuleRelativePath", "CoinPusherGame.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinPusherGame_Statics::NewProp_GameWidgetClass_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "CoinPusherGame.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACoinPusherGame_Statics::NewProp_GameWidgetClass = { "GameWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoinPusherGame, GameWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoinPusherGame_Statics::NewProp_GameWidgetClass_MetaData), Z_Construct_UClass_ACoinPusherGame_Statics::NewProp_GameWidgetClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinPusherGame_Statics::NewProp_GameWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CoinPusherGame.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoinPusherGame_Statics::NewProp_GameWidget = { "GameWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoinPusherGame, GameWidget), Z_Construct_UClass_UCoinWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoinPusherGame_Statics::NewProp_GameWidget_MetaData), Z_Construct_UClass_ACoinPusherGame_Statics::NewProp_GameWidget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACoinPusherGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinPusherGame_Statics::NewProp_GameWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinPusherGame_Statics::NewProp_GameWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACoinPusherGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoinPusherGame>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACoinPusherGame_Statics::ClassParams = {
		&ACoinPusherGame::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACoinPusherGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACoinPusherGame_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoinPusherGame_Statics::Class_MetaDataParams), Z_Construct_UClass_ACoinPusherGame_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACoinPusherGame_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACoinPusherGame()
	{
		if (!Z_Registration_Info_UClass_ACoinPusherGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACoinPusherGame.OuterSingleton, Z_Construct_UClass_ACoinPusherGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACoinPusherGame.OuterSingleton;
	}
	template<> SPAWNING_API UClass* StaticClass<ACoinPusherGame>()
	{
		return ACoinPusherGame::StaticClass();
	}
	ACoinPusherGame::ACoinPusherGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACoinPusherGame);
	ACoinPusherGame::~ACoinPusherGame() {}
	struct Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_COIN_PUSHER_Spawning_Source_Spawning_CoinPusherGame_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_COIN_PUSHER_Spawning_Source_Spawning_CoinPusherGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACoinPusherGame, ACoinPusherGame::StaticClass, TEXT("ACoinPusherGame"), &Z_Registration_Info_UClass_ACoinPusherGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACoinPusherGame), 749837440U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_COIN_PUSHER_Spawning_Source_Spawning_CoinPusherGame_h_292795762(TEXT("/Script/Spawning"),
		Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_COIN_PUSHER_Spawning_Source_Spawning_CoinPusherGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ENG02_GDENG02_ProjectsRepo_COIN_PUSHER_Spawning_Source_Spawning_CoinPusherGame_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
