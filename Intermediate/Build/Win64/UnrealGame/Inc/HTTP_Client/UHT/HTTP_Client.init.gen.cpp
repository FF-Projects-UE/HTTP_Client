// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHTTP_Client_init() {}
	HTTP_CLIENT_API UFunction* Z_Construct_UDelegateFunction_HTTP_Client_HttpClientGet__DelegateSignature();
	HTTP_CLIENT_API UFunction* Z_Construct_UDelegateFunction_HTTP_Client_HttpClientPost__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_HTTP_Client;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_HTTP_Client()
	{
		if (!Z_Registration_Info_UPackage__Script_HTTP_Client.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_HTTP_Client_HttpClientGet__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_HTTP_Client_HttpClientPost__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/HTTP_Client",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x2F9F19B2,
				0xE20D3D9C,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_HTTP_Client.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_HTTP_Client.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_HTTP_Client(Z_Construct_UPackage__Script_HTTP_Client, TEXT("/Script/HTTP_Client"), Z_Registration_Info_UPackage__Script_HTTP_Client, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x2F9F19B2, 0xE20D3D9C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
