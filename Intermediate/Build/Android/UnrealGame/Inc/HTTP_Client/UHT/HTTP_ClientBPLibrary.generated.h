// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HTTP_ClientBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBytesArrayStruct;
#ifdef HTTP_CLIENT_HTTP_ClientBPLibrary_generated_h
#error "HTTP_ClientBPLibrary.generated.h already included, missing '#pragma once' in HTTP_ClientBPLibrary.h"
#endif
#define HTTP_CLIENT_HTTP_ClientBPLibrary_generated_h

#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_HTTP_Client_Source_HTTP_Client_Public_HTTP_ClientBPLibrary_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBytesArrayStruct_Statics; \
	HTTP_CLIENT_API static class UScriptStruct* StaticStruct();


template<> HTTP_CLIENT_API UScriptStruct* StaticStruct<struct FBytesArrayStruct>();

#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_HTTP_Client_Source_HTTP_Client_Public_HTTP_ClientBPLibrary_h_42_DELEGATE \
struct _Script_HTTP_Client_eventHttpClientPost_Parms \
{ \
	bool bIsSuccessfull; \
	FBytesArrayStruct STR_Bytes; \
}; \
static inline void FHttpClientPost_DelegateWrapper(const FScriptDelegate& HttpClientPost, bool bIsSuccessfull, FBytesArrayStruct STR_Bytes) \
{ \
	_Script_HTTP_Client_eventHttpClientPost_Parms Parms; \
	Parms.bIsSuccessfull=bIsSuccessfull ? true : false; \
	Parms.STR_Bytes=STR_Bytes; \
	HttpClientPost.ProcessDelegate<UObject>(&Parms); \
}


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_HTTP_Client_Source_HTTP_Client_Public_HTTP_ClientBPLibrary_h_45_DELEGATE \
struct _Script_HTTP_Client_eventHttpClientGet_Parms \
{ \
	bool bIsSuccessfull; \
	FBytesArrayStruct STR_Bytes; \
}; \
static inline void FHttpClientGet_DelegateWrapper(const FScriptDelegate& HttpClientGet, bool bIsSuccessfull, FBytesArrayStruct STR_Bytes) \
{ \
	_Script_HTTP_Client_eventHttpClientGet_Parms Parms; \
	Parms.bIsSuccessfull=bIsSuccessfull ? true : false; \
	Parms.STR_Bytes=STR_Bytes; \
	HttpClientGet.ProcessDelegate<UObject>(&Parms); \
}


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_HTTP_Client_Source_HTTP_Client_Public_HTTP_ClientBPLibrary_h_50_SPARSE_DATA
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_HTTP_Client_Source_HTTP_Client_Public_HTTP_ClientBPLibrary_h_50_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHTTP_Client_Get); \
	DECLARE_FUNCTION(execHTTP_Client_Post);


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_HTTP_Client_Source_HTTP_Client_Public_HTTP_ClientBPLibrary_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHTTP_Client_Get); \
	DECLARE_FUNCTION(execHTTP_Client_Post);


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_HTTP_Client_Source_HTTP_Client_Public_HTTP_ClientBPLibrary_h_50_ACCESSORS
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_HTTP_Client_Source_HTTP_Client_Public_HTTP_ClientBPLibrary_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHTTP_ClientBPLibrary(); \
	friend struct Z_Construct_UClass_UHTTP_ClientBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UHTTP_ClientBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HTTP_Client"), NO_API) \
	DECLARE_SERIALIZER(UHTTP_ClientBPLibrary)


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_HTTP_Client_Source_HTTP_Client_Public_HTTP_ClientBPLibrary_h_50_INCLASS \
private: \
	static void StaticRegisterNativesUHTTP_ClientBPLibrary(); \
	friend struct Z_Construct_UClass_UHTTP_ClientBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UHTTP_ClientBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HTTP_Client"), NO_API) \
	DECLARE_SERIALIZER(UHTTP_ClientBPLibrary)


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_HTTP_Client_Source_HTTP_Client_Public_HTTP_ClientBPLibrary_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHTTP_ClientBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHTTP_ClientBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHTTP_ClientBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHTTP_ClientBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHTTP_ClientBPLibrary(UHTTP_ClientBPLibrary&&); \
	NO_API UHTTP_ClientBPLibrary(const UHTTP_ClientBPLibrary&); \
public: \
	NO_API virtual ~UHTTP_ClientBPLibrary();


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_HTTP_Client_Source_HTTP_Client_Public_HTTP_ClientBPLibrary_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHTTP_ClientBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHTTP_ClientBPLibrary(UHTTP_ClientBPLibrary&&); \
	NO_API UHTTP_ClientBPLibrary(const UHTTP_ClientBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHTTP_ClientBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHTTP_ClientBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHTTP_ClientBPLibrary) \
	NO_API virtual ~UHTTP_ClientBPLibrary();


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_HTTP_Client_Source_HTTP_Client_Public_HTTP_ClientBPLibrary_h_47_PROLOG
#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_HTTP_Client_Source_HTTP_Client_Public_HTTP_ClientBPLibrary_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_HTTP_Client_Source_HTTP_Client_Public_HTTP_ClientBPLibrary_h_50_SPARSE_DATA \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_HTTP_Client_Source_HTTP_Client_Public_HTTP_ClientBPLibrary_h_50_RPC_WRAPPERS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_HTTP_Client_Source_HTTP_Client_Public_HTTP_ClientBPLibrary_h_50_ACCESSORS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_HTTP_Client_Source_HTTP_Client_Public_HTTP_ClientBPLibrary_h_50_INCLASS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_HTTP_Client_Source_HTTP_Client_Public_HTTP_ClientBPLibrary_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_HTTP_Client_Source_HTTP_Client_Public_HTTP_ClientBPLibrary_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_HTTP_Client_Source_HTTP_Client_Public_HTTP_ClientBPLibrary_h_50_SPARSE_DATA \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_HTTP_Client_Source_HTTP_Client_Public_HTTP_ClientBPLibrary_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_HTTP_Client_Source_HTTP_Client_Public_HTTP_ClientBPLibrary_h_50_ACCESSORS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_HTTP_Client_Source_HTTP_Client_Public_HTTP_ClientBPLibrary_h_50_INCLASS_NO_PURE_DECLS \
	FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_HTTP_Client_Source_HTTP_Client_Public_HTTP_ClientBPLibrary_h_50_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class HTTP_ClientBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HTTP_CLIENT_API UClass* StaticClass<class UHTTP_ClientBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_FROZEN_SDKs_FF_Plugins_Mobile_Plugins_HTTP_Client_Source_HTTP_Client_Public_HTTP_ClientBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
