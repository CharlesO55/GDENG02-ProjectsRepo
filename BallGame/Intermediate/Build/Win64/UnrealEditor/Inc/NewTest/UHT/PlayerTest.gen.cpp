// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NewTest/Game/PlayerTest.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerTest() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	NEWTEST_API UClass* Z_Construct_UClass_APlayerTest();
	NEWTEST_API UClass* Z_Construct_UClass_APlayerTest_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NewTest();
// End Cross Module References
	DEFINE_FUNCTION(APlayerTest::execOnHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void APlayerTest::StaticRegisterNativesAPlayerTest()
	{
		UClass* Class = APlayerTest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHit", &APlayerTest::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerTest_OnHit_Statics
	{
		struct PlayerTest_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerTest_OnHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerTest_OnHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerTest_eventOnHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerTest_OnHit_Statics::NewProp_HitComponent_MetaData), Z_Construct_UFunction_APlayerTest_OnHit_Statics::NewProp_HitComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerTest_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerTest_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerTest_OnHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerTest_OnHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerTest_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerTest_OnHit_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_APlayerTest_OnHit_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerTest_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerTest_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerTest_OnHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerTest_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerTest_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerTest_OnHit_Statics::NewProp_Hit_MetaData), Z_Construct_UFunction_APlayerTest_OnHit_Statics::NewProp_Hit_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerTest_OnHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerTest_OnHit_Statics::NewProp_HitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerTest_OnHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerTest_OnHit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerTest_OnHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerTest_OnHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerTest_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game/PlayerTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerTest_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerTest, nullptr, "OnHit", nullptr, nullptr, Z_Construct_UFunction_APlayerTest_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerTest_OnHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerTest_OnHit_Statics::PlayerTest_eventOnHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerTest_OnHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerTest_OnHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerTest_OnHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APlayerTest_OnHit_Statics::PlayerTest_eventOnHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APlayerTest_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerTest_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerTest);
	UClass* Z_Construct_UClass_APlayerTest_NoRegister()
	{
		return APlayerTest::StaticClass();
	}
	struct Z_Construct_UClass_APlayerTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpImpulse_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxJumpCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxJumpCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_NewTest,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerTest_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerTest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerTest_OnHit, "OnHit" }, // 3512384338
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerTest_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerTest_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Game/PlayerTest.h" },
		{ "ModuleRelativePath", "Game/PlayerTest.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerTest_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// GAME COMPONENTS\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Game/PlayerTest.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GAME COMPONENTS" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerTest_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerTest, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerTest_Statics::NewProp_Mesh_MetaData), Z_Construct_UClass_APlayerTest_Statics::NewProp_Mesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerTest_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Game/PlayerTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerTest_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerTest, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerTest_Statics::NewProp_SpringArm_MetaData), Z_Construct_UClass_APlayerTest_Statics::NewProp_SpringArm_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerTest_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Game/PlayerTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerTest_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerTest, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerTest_Statics::NewProp_Camera_MetaData), Z_Construct_UClass_APlayerTest_Statics::NewProp_Camera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerTest_Statics::NewProp_MoveForce_MetaData[] = {
		{ "Category", "PlayerTest" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// VARIABLES\n" },
#endif
		{ "ModuleRelativePath", "Game/PlayerTest.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "VARIABLES" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerTest_Statics::NewProp_MoveForce = { "MoveForce", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerTest, MoveForce), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerTest_Statics::NewProp_MoveForce_MetaData), Z_Construct_UClass_APlayerTest_Statics::NewProp_MoveForce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerTest_Statics::NewProp_JumpImpulse_MetaData[] = {
		{ "Category", "PlayerTest" },
		{ "ModuleRelativePath", "Game/PlayerTest.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerTest_Statics::NewProp_JumpImpulse = { "JumpImpulse", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerTest, JumpImpulse), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerTest_Statics::NewProp_JumpImpulse_MetaData), Z_Construct_UClass_APlayerTest_Statics::NewProp_JumpImpulse_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerTest_Statics::NewProp_MaxJumpCount_MetaData[] = {
		{ "Category", "PlayerTest" },
		{ "ModuleRelativePath", "Game/PlayerTest.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerTest_Statics::NewProp_MaxJumpCount = { "MaxJumpCount", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerTest, MaxJumpCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerTest_Statics::NewProp_MaxJumpCount_MetaData), Z_Construct_UClass_APlayerTest_Statics::NewProp_MaxJumpCount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerTest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerTest_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerTest_Statics::NewProp_SpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerTest_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerTest_Statics::NewProp_MoveForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerTest_Statics::NewProp_JumpImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerTest_Statics::NewProp_MaxJumpCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerTest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerTest_Statics::ClassParams = {
		&APlayerTest::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayerTest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerTest_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerTest_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerTest_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerTest_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APlayerTest()
	{
		if (!Z_Registration_Info_UClass_APlayerTest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerTest.OuterSingleton, Z_Construct_UClass_APlayerTest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerTest.OuterSingleton;
	}
	template<> NEWTEST_API UClass* StaticClass<APlayerTest>()
	{
		return APlayerTest::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerTest);
	APlayerTest::~APlayerTest() {}
	struct Z_CompiledInDeferFile_FID_ENG02_NewTest_Source_NewTest_Game_PlayerTest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ENG02_NewTest_Source_NewTest_Game_PlayerTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerTest, APlayerTest::StaticClass, TEXT("APlayerTest"), &Z_Registration_Info_UClass_APlayerTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerTest), 121912087U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ENG02_NewTest_Source_NewTest_Game_PlayerTest_h_144578369(TEXT("/Script/NewTest"),
		Z_CompiledInDeferFile_FID_ENG02_NewTest_Source_NewTest_Game_PlayerTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ENG02_NewTest_Source_NewTest_Game_PlayerTest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
