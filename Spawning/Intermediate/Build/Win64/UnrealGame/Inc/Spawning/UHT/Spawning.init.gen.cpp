// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawning_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Spawning;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Spawning()
	{
		if (!Z_Registration_Info_UPackage__Script_Spawning.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Spawning",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xEBECDE55,
				0xA0A3C997,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Spawning.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Spawning.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Spawning(Z_Construct_UPackage__Script_Spawning, TEXT("/Script/Spawning"), Z_Registration_Info_UPackage__Script_Spawning, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xEBECDE55, 0xA0A3C997));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
