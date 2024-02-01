// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Snowman/Player/PlayerSwitcher.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerSwitcher() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	SNOWMAN_API UClass* Z_Construct_UClass_APlayerSwitcher();
	SNOWMAN_API UClass* Z_Construct_UClass_APlayerSwitcher_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Snowman();
// End Cross Module References
	DEFINE_FUNCTION(APlayerSwitcher::execSwitchPawn)
	{
		P_GET_OBJECT(APawn,Z_Param_sender);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchPawn(Z_Param_sender);
		P_NATIVE_END;
	}
	void APlayerSwitcher::StaticRegisterNativesAPlayerSwitcher()
	{
		UClass* Class = APlayerSwitcher::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SwitchPawn", &APlayerSwitcher::execSwitchPawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerSwitcher_SwitchPawn_Statics
	{
		struct PlayerSwitcher_eventSwitchPawn_Parms
		{
			APawn* sender;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_sender;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerSwitcher_SwitchPawn_Statics::NewProp_sender = { "sender", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerSwitcher_eventSwitchPawn_Parms, sender), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerSwitcher_SwitchPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerSwitcher_SwitchPawn_Statics::NewProp_sender,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerSwitcher_SwitchPawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/PlayerSwitcher.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerSwitcher_SwitchPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerSwitcher, nullptr, "SwitchPawn", nullptr, nullptr, Z_Construct_UFunction_APlayerSwitcher_SwitchPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerSwitcher_SwitchPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerSwitcher_SwitchPawn_Statics::PlayerSwitcher_eventSwitchPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerSwitcher_SwitchPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerSwitcher_SwitchPawn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerSwitcher_SwitchPawn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APlayerSwitcher_SwitchPawn_Statics::PlayerSwitcher_eventSwitchPawn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APlayerSwitcher_SwitchPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerSwitcher_SwitchPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerSwitcher);
	UClass* Z_Construct_UClass_APlayerSwitcher_NoRegister()
	{
		return APlayerSwitcher::StaticClass();
	}
	struct Z_Construct_UClass_APlayerSwitcher_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_PawnIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_m_PawnIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_Pawns_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_Pawns_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_m_Pawns;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_MainCam_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_MainCam;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_CamOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_m_CamOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerSwitcher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Snowman,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerSwitcher_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerSwitcher_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerSwitcher_SwitchPawn, "SwitchPawn" }, // 2123808825
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerSwitcher_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerSwitcher_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player/PlayerSwitcher.h" },
		{ "ModuleRelativePath", "Player/PlayerSwitcher.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerSwitcher_Statics::NewProp_m_PawnIndex_MetaData[] = {
		{ "Category", "PlayerSwitcher" },
		{ "ModuleRelativePath", "Player/PlayerSwitcher.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerSwitcher_Statics::NewProp_m_PawnIndex = { "m_PawnIndex", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerSwitcher, m_PawnIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerSwitcher_Statics::NewProp_m_PawnIndex_MetaData), Z_Construct_UClass_APlayerSwitcher_Statics::NewProp_m_PawnIndex_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerSwitcher_Statics::NewProp_m_Pawns_Inner = { "m_Pawns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerSwitcher_Statics::NewProp_m_Pawns_MetaData[] = {
		{ "Category", "PlayerSwitcher" },
		{ "ModuleRelativePath", "Player/PlayerSwitcher.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayerSwitcher_Statics::NewProp_m_Pawns = { "m_Pawns", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerSwitcher, m_Pawns), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerSwitcher_Statics::NewProp_m_Pawns_MetaData), Z_Construct_UClass_APlayerSwitcher_Statics::NewProp_m_Pawns_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerSwitcher_Statics::NewProp_m_MainCam_MetaData[] = {
		{ "Category", "PlayerSwitcher" },
		{ "ModuleRelativePath", "Player/PlayerSwitcher.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerSwitcher_Statics::NewProp_m_MainCam = { "m_MainCam", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerSwitcher, m_MainCam), Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerSwitcher_Statics::NewProp_m_MainCam_MetaData), Z_Construct_UClass_APlayerSwitcher_Statics::NewProp_m_MainCam_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerSwitcher_Statics::NewProp_m_CamOffset_MetaData[] = {
		{ "Category", "PlayerSwitcher" },
		{ "ModuleRelativePath", "Player/PlayerSwitcher.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerSwitcher_Statics::NewProp_m_CamOffset = { "m_CamOffset", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerSwitcher, m_CamOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerSwitcher_Statics::NewProp_m_CamOffset_MetaData), Z_Construct_UClass_APlayerSwitcher_Statics::NewProp_m_CamOffset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerSwitcher_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerSwitcher_Statics::NewProp_m_PawnIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerSwitcher_Statics::NewProp_m_Pawns_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerSwitcher_Statics::NewProp_m_Pawns,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerSwitcher_Statics::NewProp_m_MainCam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerSwitcher_Statics::NewProp_m_CamOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerSwitcher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerSwitcher>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerSwitcher_Statics::ClassParams = {
		&APlayerSwitcher::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayerSwitcher_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerSwitcher_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerSwitcher_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerSwitcher_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerSwitcher_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APlayerSwitcher()
	{
		if (!Z_Registration_Info_UClass_APlayerSwitcher.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerSwitcher.OuterSingleton, Z_Construct_UClass_APlayerSwitcher_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerSwitcher.OuterSingleton;
	}
	template<> SNOWMAN_API UClass* StaticClass<APlayerSwitcher>()
	{
		return APlayerSwitcher::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerSwitcher);
	APlayerSwitcher::~APlayerSwitcher() {}
	struct Z_CompiledInDeferFile_FID_ENG02_Snowman_Source_Snowman_Player_PlayerSwitcher_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ENG02_Snowman_Source_Snowman_Player_PlayerSwitcher_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerSwitcher, APlayerSwitcher::StaticClass, TEXT("APlayerSwitcher"), &Z_Registration_Info_UClass_APlayerSwitcher, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerSwitcher), 3861933563U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ENG02_Snowman_Source_Snowman_Player_PlayerSwitcher_h_2265715442(TEXT("/Script/Snowman"),
		Z_CompiledInDeferFile_FID_ENG02_Snowman_Source_Snowman_Player_PlayerSwitcher_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ENG02_Snowman_Source_Snowman_Player_PlayerSwitcher_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
