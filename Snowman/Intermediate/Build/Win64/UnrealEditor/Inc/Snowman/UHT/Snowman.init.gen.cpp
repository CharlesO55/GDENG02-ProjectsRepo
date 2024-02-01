// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnowman_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Snowman;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Snowman()
	{
		if (!Z_Registration_Info_UPackage__Script_Snowman.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Snowman",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x3BC9ACC0,
				0xDAADE252,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Snowman.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Snowman.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Snowman(Z_Construct_UPackage__Script_Snowman, TEXT("/Script/Snowman"), Z_Registration_Info_UPackage__Script_Snowman, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x3BC9ACC0, 0xDAADE252));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
