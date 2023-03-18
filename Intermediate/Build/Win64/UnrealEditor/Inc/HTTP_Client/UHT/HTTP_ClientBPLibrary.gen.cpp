// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HTTP_Client/Public/HTTP_ClientBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHTTP_ClientBPLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	HTTP_CLIENT_API UClass* Z_Construct_UClass_UHTTP_ClientBPLibrary();
	HTTP_CLIENT_API UClass* Z_Construct_UClass_UHTTP_ClientBPLibrary_NoRegister();
	HTTP_CLIENT_API UFunction* Z_Construct_UDelegateFunction_HTTP_Client_HttpClientGet__DelegateSignature();
	HTTP_CLIENT_API UFunction* Z_Construct_UDelegateFunction_HTTP_Client_HttpClientPost__DelegateSignature();
	HTTP_CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FBytesArrayStruct();
	UPackage* Z_Construct_UPackage__Script_HTTP_Client();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BytesArrayStruct;
class UScriptStruct* FBytesArrayStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BytesArrayStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BytesArrayStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBytesArrayStruct, Z_Construct_UPackage__Script_HTTP_Client(), TEXT("BytesArrayStruct"));
	}
	return Z_Registration_Info_UScriptStruct_BytesArrayStruct.OuterSingleton;
}
template<> HTTP_CLIENT_API UScriptStruct* StaticStruct<FBytesArrayStruct>()
{
	return FBytesArrayStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBytesArrayStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Array_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bytes_Array_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes_Array;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBytesArrayStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HTTP_ClientBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBytesArrayStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBytesArrayStruct>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBytesArrayStruct_Statics::NewProp_Bytes_Array_Inner = { "Bytes_Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBytesArrayStruct_Statics::NewProp_Bytes_Array_MetaData[] = {
		{ "Category", "BytesArrayStruct" },
		{ "ModuleRelativePath", "Public/HTTP_ClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBytesArrayStruct_Statics::NewProp_Bytes_Array = { "Bytes_Array", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBytesArrayStruct, Bytes_Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBytesArrayStruct_Statics::NewProp_Bytes_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBytesArrayStruct_Statics::NewProp_Bytes_Array_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBytesArrayStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBytesArrayStruct_Statics::NewProp_Bytes_Array_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBytesArrayStruct_Statics::NewProp_Bytes_Array,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBytesArrayStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HTTP_Client,
		nullptr,
		&NewStructOps,
		"BytesArrayStruct",
		sizeof(FBytesArrayStruct),
		alignof(FBytesArrayStruct),
		Z_Construct_UScriptStruct_FBytesArrayStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBytesArrayStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBytesArrayStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBytesArrayStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBytesArrayStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_BytesArrayStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BytesArrayStruct.InnerSingleton, Z_Construct_UScriptStruct_FBytesArrayStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BytesArrayStruct.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_HTTP_Client_HttpClientPost__DelegateSignature_Statics
	{
		struct _Script_HTTP_Client_eventHttpClientPost_Parms
		{
			bool bIsSuccessfull;
			FBytesArrayStruct STR_Bytes;
		};
		static void NewProp_bIsSuccessfull_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSuccessfull;
		static const UECodeGen_Private::FStructPropertyParams NewProp_STR_Bytes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_HTTP_Client_HttpClientPost__DelegateSignature_Statics::NewProp_bIsSuccessfull_SetBit(void* Obj)
	{
		((_Script_HTTP_Client_eventHttpClientPost_Parms*)Obj)->bIsSuccessfull = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_HTTP_Client_HttpClientPost__DelegateSignature_Statics::NewProp_bIsSuccessfull = { "bIsSuccessfull", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_HTTP_Client_eventHttpClientPost_Parms), &Z_Construct_UDelegateFunction_HTTP_Client_HttpClientPost__DelegateSignature_Statics::NewProp_bIsSuccessfull_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_HTTP_Client_HttpClientPost__DelegateSignature_Statics::NewProp_STR_Bytes = { "STR_Bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_HTTP_Client_eventHttpClientPost_Parms, STR_Bytes), Z_Construct_UScriptStruct_FBytesArrayStruct, METADATA_PARAMS(nullptr, 0) }; // 2021806852
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HTTP_Client_HttpClientPost__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HTTP_Client_HttpClientPost__DelegateSignature_Statics::NewProp_bIsSuccessfull,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HTTP_Client_HttpClientPost__DelegateSignature_Statics::NewProp_STR_Bytes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HTTP_Client_HttpClientPost__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HTTP_ClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HTTP_Client_HttpClientPost__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HTTP_Client, nullptr, "HttpClientPost__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_HTTP_Client_HttpClientPost__DelegateSignature_Statics::_Script_HTTP_Client_eventHttpClientPost_Parms), Z_Construct_UDelegateFunction_HTTP_Client_HttpClientPost__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HTTP_Client_HttpClientPost__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120004, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_HTTP_Client_HttpClientPost__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HTTP_Client_HttpClientPost__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_HTTP_Client_HttpClientPost__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HTTP_Client_HttpClientPost__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_HTTP_Client_HttpClientGet__DelegateSignature_Statics
	{
		struct _Script_HTTP_Client_eventHttpClientGet_Parms
		{
			bool bIsSuccessfull;
			FBytesArrayStruct STR_Bytes;
		};
		static void NewProp_bIsSuccessfull_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSuccessfull;
		static const UECodeGen_Private::FStructPropertyParams NewProp_STR_Bytes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_HTTP_Client_HttpClientGet__DelegateSignature_Statics::NewProp_bIsSuccessfull_SetBit(void* Obj)
	{
		((_Script_HTTP_Client_eventHttpClientGet_Parms*)Obj)->bIsSuccessfull = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_HTTP_Client_HttpClientGet__DelegateSignature_Statics::NewProp_bIsSuccessfull = { "bIsSuccessfull", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_HTTP_Client_eventHttpClientGet_Parms), &Z_Construct_UDelegateFunction_HTTP_Client_HttpClientGet__DelegateSignature_Statics::NewProp_bIsSuccessfull_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_HTTP_Client_HttpClientGet__DelegateSignature_Statics::NewProp_STR_Bytes = { "STR_Bytes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_HTTP_Client_eventHttpClientGet_Parms, STR_Bytes), Z_Construct_UScriptStruct_FBytesArrayStruct, METADATA_PARAMS(nullptr, 0) }; // 2021806852
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HTTP_Client_HttpClientGet__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HTTP_Client_HttpClientGet__DelegateSignature_Statics::NewProp_bIsSuccessfull,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HTTP_Client_HttpClientGet__DelegateSignature_Statics::NewProp_STR_Bytes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HTTP_Client_HttpClientGet__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HTTP_ClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HTTP_Client_HttpClientGet__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HTTP_Client, nullptr, "HttpClientGet__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_HTTP_Client_HttpClientGet__DelegateSignature_Statics::_Script_HTTP_Client_eventHttpClientGet_Parms), Z_Construct_UDelegateFunction_HTTP_Client_HttpClientGet__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HTTP_Client_HttpClientGet__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120004, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_HTTP_Client_HttpClientGet__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HTTP_Client_HttpClientGet__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_HTTP_Client_HttpClientGet__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HTTP_Client_HttpClientGet__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UHTTP_ClientBPLibrary::execHTTP_Client_Get)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_DelegateClientGet);
		P_GET_PROPERTY(FStrProperty,Z_Param_In_URL);
		P_GET_PROPERTY(FStrProperty,Z_Param_ContentType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHTTP_ClientBPLibrary::HTTP_Client_Get(FHttpClientGet(Z_Param_DelegateClientGet),Z_Param_In_URL,Z_Param_ContentType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHTTP_ClientBPLibrary::execHTTP_Client_Post)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_DelegateClientPost);
		P_GET_TARRAY(uint8,Z_Param_In_Array);
		P_GET_PROPERTY(FStrProperty,Z_Param_In_URL);
		P_GET_PROPERTY(FStrProperty,Z_Param_ContentType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHTTP_ClientBPLibrary::HTTP_Client_Post(FHttpClientPost(Z_Param_DelegateClientPost),Z_Param_In_Array,Z_Param_In_URL,Z_Param_ContentType);
		P_NATIVE_END;
	}
	void UHTTP_ClientBPLibrary::StaticRegisterNativesUHTTP_ClientBPLibrary()
	{
		UClass* Class = UHTTP_ClientBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HTTP_Client_Get", &UHTTP_ClientBPLibrary::execHTTP_Client_Get },
			{ "HTTP_Client_Post", &UHTTP_ClientBPLibrary::execHTTP_Client_Post },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHTTP_ClientBPLibrary_HTTP_Client_Get_Statics
	{
		struct HTTP_ClientBPLibrary_eventHTTP_Client_Get_Parms
		{
			FScriptDelegate DelegateClientGet;
			FString In_URL;
			FString ContentType;
		};
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_DelegateClientGet;
		static const UECodeGen_Private::FStrPropertyParams NewProp_In_URL;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContentType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UHTTP_ClientBPLibrary_HTTP_Client_Get_Statics::NewProp_DelegateClientGet = { "DelegateClientGet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HTTP_ClientBPLibrary_eventHTTP_Client_Get_Parms, DelegateClientGet), Z_Construct_UDelegateFunction_HTTP_Client_HttpClientGet__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1806062159
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHTTP_ClientBPLibrary_HTTP_Client_Get_Statics::NewProp_In_URL = { "In_URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HTTP_ClientBPLibrary_eventHTTP_Client_Get_Parms, In_URL), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHTTP_ClientBPLibrary_HTTP_Client_Get_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HTTP_ClientBPLibrary_eventHTTP_Client_Get_Parms, ContentType), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHTTP_ClientBPLibrary_HTTP_Client_Get_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTP_ClientBPLibrary_HTTP_Client_Get_Statics::NewProp_DelegateClientGet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTP_ClientBPLibrary_HTTP_Client_Get_Statics::NewProp_In_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTP_ClientBPLibrary_HTTP_Client_Get_Statics::NewProp_ContentType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTP_ClientBPLibrary_HTTP_Client_Get_Statics::Function_MetaDataParams[] = {
		{ "Category", "FF_HTTP|Client" },
		{ "CPP_Default_ContentType", "application/pdf" },
		{ "DisplayName", "HTTP Client - Get" },
		{ "Keywords", "pdf, pdfium, library, http, web, url, get" },
		{ "ModuleRelativePath", "Public/HTTP_ClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHTTP_ClientBPLibrary_HTTP_Client_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHTTP_ClientBPLibrary, nullptr, "HTTP_Client_Get", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHTTP_ClientBPLibrary_HTTP_Client_Get_Statics::HTTP_ClientBPLibrary_eventHTTP_Client_Get_Parms), Z_Construct_UFunction_UHTTP_ClientBPLibrary_HTTP_Client_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTP_ClientBPLibrary_HTTP_Client_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHTTP_ClientBPLibrary_HTTP_Client_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTP_ClientBPLibrary_HTTP_Client_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHTTP_ClientBPLibrary_HTTP_Client_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHTTP_ClientBPLibrary_HTTP_Client_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHTTP_ClientBPLibrary_HTTP_Client_Post_Statics
	{
		struct HTTP_ClientBPLibrary_eventHTTP_Client_Post_Parms
		{
			FScriptDelegate DelegateClientPost;
			TArray<uint8> In_Array;
			FString In_URL;
			FString ContentType;
		};
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_DelegateClientPost;
		static const UECodeGen_Private::FBytePropertyParams NewProp_In_Array_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_In_Array;
		static const UECodeGen_Private::FStrPropertyParams NewProp_In_URL;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContentType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UHTTP_ClientBPLibrary_HTTP_Client_Post_Statics::NewProp_DelegateClientPost = { "DelegateClientPost", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HTTP_ClientBPLibrary_eventHTTP_Client_Post_Parms, DelegateClientPost), Z_Construct_UDelegateFunction_HTTP_Client_HttpClientPost__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 3411220034
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHTTP_ClientBPLibrary_HTTP_Client_Post_Statics::NewProp_In_Array_Inner = { "In_Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHTTP_ClientBPLibrary_HTTP_Client_Post_Statics::NewProp_In_Array = { "In_Array", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HTTP_ClientBPLibrary_eventHTTP_Client_Post_Parms, In_Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHTTP_ClientBPLibrary_HTTP_Client_Post_Statics::NewProp_In_URL = { "In_URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HTTP_ClientBPLibrary_eventHTTP_Client_Post_Parms, In_URL), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHTTP_ClientBPLibrary_HTTP_Client_Post_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HTTP_ClientBPLibrary_eventHTTP_Client_Post_Parms, ContentType), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHTTP_ClientBPLibrary_HTTP_Client_Post_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTP_ClientBPLibrary_HTTP_Client_Post_Statics::NewProp_DelegateClientPost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTP_ClientBPLibrary_HTTP_Client_Post_Statics::NewProp_In_Array_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTP_ClientBPLibrary_HTTP_Client_Post_Statics::NewProp_In_Array,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTP_ClientBPLibrary_HTTP_Client_Post_Statics::NewProp_In_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTTP_ClientBPLibrary_HTTP_Client_Post_Statics::NewProp_ContentType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHTTP_ClientBPLibrary_HTTP_Client_Post_Statics::Function_MetaDataParams[] = {
		{ "Category", "FF_HTTP|Client" },
		{ "CPP_Default_ContentType", "application/pdf" },
		{ "DisplayName", "HTTP Client - Post" },
		{ "Keywords", "pdf, pdfium, library, http, web, url, post" },
		{ "ModuleRelativePath", "Public/HTTP_ClientBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHTTP_ClientBPLibrary_HTTP_Client_Post_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHTTP_ClientBPLibrary, nullptr, "HTTP_Client_Post", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHTTP_ClientBPLibrary_HTTP_Client_Post_Statics::HTTP_ClientBPLibrary_eventHTTP_Client_Post_Parms), Z_Construct_UFunction_UHTTP_ClientBPLibrary_HTTP_Client_Post_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTP_ClientBPLibrary_HTTP_Client_Post_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHTTP_ClientBPLibrary_HTTP_Client_Post_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTTP_ClientBPLibrary_HTTP_Client_Post_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHTTP_ClientBPLibrary_HTTP_Client_Post()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHTTP_ClientBPLibrary_HTTP_Client_Post_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHTTP_ClientBPLibrary);
	UClass* Z_Construct_UClass_UHTTP_ClientBPLibrary_NoRegister()
	{
		return UHTTP_ClientBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UHTTP_ClientBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHTTP_ClientBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_HTTP_Client,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHTTP_ClientBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHTTP_ClientBPLibrary_HTTP_Client_Get, "HTTP_Client_Get" }, // 1722211258
		{ &Z_Construct_UFunction_UHTTP_ClientBPLibrary_HTTP_Client_Post, "HTTP_Client_Post" }, // 714449648
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHTTP_ClientBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HTTP_ClientBPLibrary.h" },
		{ "ModuleRelativePath", "Public/HTTP_ClientBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHTTP_ClientBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHTTP_ClientBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHTTP_ClientBPLibrary_Statics::ClassParams = {
		&UHTTP_ClientBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHTTP_ClientBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHTTP_ClientBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHTTP_ClientBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UHTTP_ClientBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHTTP_ClientBPLibrary.OuterSingleton, Z_Construct_UClass_UHTTP_ClientBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHTTP_ClientBPLibrary.OuterSingleton;
	}
	template<> HTTP_CLIENT_API UClass* StaticClass<UHTTP_ClientBPLibrary>()
	{
		return UHTTP_ClientBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHTTP_ClientBPLibrary);
	UHTTP_ClientBPLibrary::~UHTTP_ClientBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Plugins_HTTP_Client_Source_HTTP_Client_Public_HTTP_ClientBPLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Plugins_HTTP_Client_Source_HTTP_Client_Public_HTTP_ClientBPLibrary_h_Statics::ScriptStructInfo[] = {
		{ FBytesArrayStruct::StaticStruct, Z_Construct_UScriptStruct_FBytesArrayStruct_Statics::NewStructOps, TEXT("BytesArrayStruct"), &Z_Registration_Info_UScriptStruct_BytesArrayStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBytesArrayStruct), 2021806852U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Plugins_HTTP_Client_Source_HTTP_Client_Public_HTTP_ClientBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHTTP_ClientBPLibrary, UHTTP_ClientBPLibrary::StaticClass, TEXT("UHTTP_ClientBPLibrary"), &Z_Registration_Info_UClass_UHTTP_ClientBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHTTP_ClientBPLibrary), 846105615U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Plugins_HTTP_Client_Source_HTTP_Client_Public_HTTP_ClientBPLibrary_h_2993213928(TEXT("/Script/HTTP_Client"),
		Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Plugins_HTTP_Client_Source_HTTP_Client_Public_HTTP_ClientBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Plugins_HTTP_Client_Source_HTTP_Client_Public_HTTP_ClientBPLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Plugins_HTTP_Client_Source_HTTP_Client_Public_HTTP_ClientBPLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_FROZEN_SDKs_FF_Plugins_Plugins_HTTP_Client_Source_HTTP_Client_Public_HTTP_ClientBPLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
