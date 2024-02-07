// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoinPusher_init() {}
	COINPUSHER_API UFunction* Z_Construct_UDelegateFunction_CoinPusher_CoinValueChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CoinPusher;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CoinPusher()
	{
		if (!Z_Registration_Info_UPackage__Script_CoinPusher.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_CoinPusher_CoinValueChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CoinPusher",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x3AA4F5F3,
				0x7E7F4A7C,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CoinPusher.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CoinPusher.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CoinPusher(Z_Construct_UPackage__Script_CoinPusher, TEXT("/Script/CoinPusher"), Z_Registration_Info_UPackage__Script_CoinPusher, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x3AA4F5F3, 0x7E7F4A7C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
