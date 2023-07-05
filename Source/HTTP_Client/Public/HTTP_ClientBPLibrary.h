// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "HTTP_ClientBPLibrary.generated.h"

USTRUCT(BlueprintType)
struct FBytesArrayStruct
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadOnly)
	TArray<uint8> Bytes_Array;

	bool operator == (const FBytesArrayStruct& Other) const
	{
		return Bytes_Array == Other.Bytes_Array;
	}

	bool operator != (const FBytesArrayStruct& Other) const
	{
		return !(*this == Other);
	}
};

FORCEINLINE uint32 GetTypeHash(const FBytesArrayStruct& Key)
{
	uint32 Hash_Bytes_Array = GetTypeHash(Key.Bytes_Array.GetData());

	uint32 GenericHash;
	FMemory::Memset(&GenericHash, 0, sizeof(uint32));

	GenericHash = HashCombine(GenericHash, Hash_Bytes_Array);

	return GenericHash;
}

UDELEGATE(BlueprintAuthorityOnly)
DECLARE_DYNAMIC_DELEGATE_TwoParams(FHttpClientPost, bool, bIsSuccessfull, FBytesArrayStruct, STR_Bytes);

UDELEGATE(BlueprintAuthorityOnly)
DECLARE_DYNAMIC_DELEGATE_TwoParams(FHttpClientGet, bool, bIsSuccessfull, FBytesArrayStruct, STR_Bytes);

UCLASS()
class UHTTP_ClientBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "HTTP Client - Post", Keywords = "pdf, pdfium, library, http, web, url, post"), Category = "FF_HTTP|Client")
	static void HTTP_Client_Post(FHttpClientPost DelegateClientPost, TArray<uint8> In_Array, FString In_URL, FString ContentType = "application/pdf");

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "HTTP Client - Get", Keywords = "pdf, pdfium, library, http, web, url, get"), Category = "FF_HTTP|Client")
	static void HTTP_Client_Get(FHttpClientGet DelegateClientGet, FString In_URL, FString ContentType = "application/pdf");

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Send Email", Keywords = "pdf, pdfium, library, http, web, url, get"), Category = "FF_HTTP|Client")
	static void Send_Email(FString TargetMail, FString Cc, FString Bcc, FString Subject, FString Content, FString Sender, FString Password, FString SMTP, int32 Port, TArray<uint8> Attachment);

};
