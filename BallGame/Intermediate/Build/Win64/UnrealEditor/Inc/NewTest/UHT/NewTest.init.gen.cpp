// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewTest_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_NewTest;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_NewTest()
	{
		if (!Z_Registration_Info_UPackage__Script_NewTest.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/NewTest",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x27B07170,
				0xFA0544E6,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_NewTest.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_NewTest.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_NewTest(Z_Construct_UPackage__Script_NewTest, TEXT("/Script/NewTest"), Z_Registration_Info_UPackage__Script_NewTest, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x27B07170, 0xFA0544E6));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
