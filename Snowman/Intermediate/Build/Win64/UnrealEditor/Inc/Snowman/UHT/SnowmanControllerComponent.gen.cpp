// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Snowman/Player/SnowmanControllerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnowmanControllerComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	SNOWMAN_API UClass* Z_Construct_UClass_USnowmanControllerComponent();
	SNOWMAN_API UClass* Z_Construct_UClass_USnowmanControllerComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Snowman();
// End Cross Module References
	void USnowmanControllerComponent::StaticRegisterNativesUSnowmanControllerComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnowmanControllerComponent);
	UClass* Z_Construct_UClass_USnowmanControllerComponent_NoRegister()
	{
		return USnowmanControllerComponent::StaticClass();
	}
	struct Z_Construct_UClass_USnowmanControllerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_SnowmanPawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_SnowmanPawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_SPEED_MULTIPLIER_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_SPEED_MULTIPLIER;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USnowmanControllerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Snowman,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanControllerComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnowmanControllerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Player/SnowmanControllerComponent.h" },
		{ "ModuleRelativePath", "Player/SnowmanControllerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnowmanControllerComponent_Statics::NewProp_m_SnowmanPawn_MetaData[] = {
		{ "Category", "SnowmanControllerComponent" },
		{ "ModuleRelativePath", "Player/SnowmanControllerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USnowmanControllerComponent_Statics::NewProp_m_SnowmanPawn = { "m_SnowmanPawn", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnowmanControllerComponent, m_SnowmanPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanControllerComponent_Statics::NewProp_m_SnowmanPawn_MetaData), Z_Construct_UClass_USnowmanControllerComponent_Statics::NewProp_m_SnowmanPawn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnowmanControllerComponent_Statics::NewProp_m_SPEED_MULTIPLIER_MetaData[] = {
		{ "Category", "SnowmanControllerComponent" },
		{ "ModuleRelativePath", "Player/SnowmanControllerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USnowmanControllerComponent_Statics::NewProp_m_SPEED_MULTIPLIER = { "m_SPEED_MULTIPLIER", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnowmanControllerComponent, m_SPEED_MULTIPLIER), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanControllerComponent_Statics::NewProp_m_SPEED_MULTIPLIER_MetaData), Z_Construct_UClass_USnowmanControllerComponent_Statics::NewProp_m_SPEED_MULTIPLIER_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnowmanControllerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnowmanControllerComponent_Statics::NewProp_m_SnowmanPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnowmanControllerComponent_Statics::NewProp_m_SPEED_MULTIPLIER,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USnowmanControllerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnowmanControllerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USnowmanControllerComponent_Statics::ClassParams = {
		&USnowmanControllerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USnowmanControllerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanControllerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanControllerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USnowmanControllerComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnowmanControllerComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USnowmanControllerComponent()
	{
		if (!Z_Registration_Info_UClass_USnowmanControllerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnowmanControllerComponent.OuterSingleton, Z_Construct_UClass_USnowmanControllerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USnowmanControllerComponent.OuterSingleton;
	}
	template<> SNOWMAN_API UClass* StaticClass<USnowmanControllerComponent>()
	{
		return USnowmanControllerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USnowmanControllerComponent);
	USnowmanControllerComponent::~USnowmanControllerComponent() {}
	struct Z_CompiledInDeferFile_FID_ENG02_Snowman_Source_Snowman_Player_SnowmanControllerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ENG02_Snowman_Source_Snowman_Player_SnowmanControllerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USnowmanControllerComponent, USnowmanControllerComponent::StaticClass, TEXT("USnowmanControllerComponent"), &Z_Registration_Info_UClass_USnowmanControllerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnowmanControllerComponent), 1332694660U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ENG02_Snowman_Source_Snowman_Player_SnowmanControllerComponent_h_1788952434(TEXT("/Script/Snowman"),
		Z_CompiledInDeferFile_FID_ENG02_Snowman_Source_Snowman_Player_SnowmanControllerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ENG02_Snowman_Source_Snowman_Player_SnowmanControllerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
