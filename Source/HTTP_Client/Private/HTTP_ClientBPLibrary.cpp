// Copyright Epic Games, Inc. All Rights Reserved.

#include "HTTP_ClientBPLibrary.h"
#include "HTTP_Client.h"

// UE Includes.
#include "Misc/App.h"
#include "Misc/FileHelper.h"
#include "Kismet/GameplayStatics.h"

#include "HttpModule.h"
#include "Interfaces/IHttpRequest.h"
#include "Interfaces/IHttpResponse.h"

UHTTP_ClientBPLibrary::UHTTP_ClientBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

void UHTTP_ClientBPLibrary::HTTP_Client_Post(FHttpClientPost DelegateClientPost, TArray<uint8> In_Array, FString In_URL, FString ContentType)
{
    if (In_URL.IsEmpty() == true)
    {
        FBytesArrayStruct Empty_Bytes_Array;
        DelegateClientPost.Execute(false, Empty_Bytes_Array);

        return;
    }

    AsyncTask(ENamedThreads::AnyNormalThreadNormalTask, [DelegateClientPost, In_Array, In_URL, ContentType]()
        {
            FHttpRequestRef HttpRequest = FHttpModule::Get().CreateRequest();
            HttpRequest->SetVerb("POST");
            HttpRequest->SetHeader("Content-Type", ContentType);
            HttpRequest->SetURL(In_URL);
            HttpRequest->SetContent(In_Array);

            HttpRequest->OnProcessRequestComplete().BindLambda([DelegateClientPost](FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
                {
                    if (bWasSuccessful == false)
                    {
                        AsyncTask(ENamedThreads::GameThread, [DelegateClientPost]()
                            {
                                FBytesArrayStruct Empty_Bytes_Array;
                                DelegateClientPost.ExecuteIfBound(false, Empty_Bytes_Array);
                            }
                        );
                    }

                    FBytesArrayStruct STR_Bytes;
                    STR_Bytes.Bytes_Array = Response->GetContent();

                    AsyncTask(ENamedThreads::GameThread, [DelegateClientPost, STR_Bytes]()
                        {
                            DelegateClientPost.ExecuteIfBound(true, STR_Bytes);
                        }
                    );
                }
            );

            HttpRequest->ProcessRequest();
        }
    );
}

void UHTTP_ClientBPLibrary::HTTP_Client_Get(FHttpClientGet DelegateClientGet, FString In_URL, FString ContentType)
{
    if (In_URL.IsEmpty() == true)
    {
        FBytesArrayStruct Empty_Bytes_Array;
        DelegateClientGet.Execute(false, Empty_Bytes_Array);

        return;
    }

    AsyncTask(ENamedThreads::AnyNormalThreadNormalTask, [DelegateClientGet, In_URL, ContentType]()
        {
            FHttpRequestRef HttpRequest = FHttpModule::Get().CreateRequest();
            HttpRequest->SetVerb("GET");
            HttpRequest->SetHeader("Content-Type", ContentType);
            HttpRequest->SetURL(In_URL);

            HttpRequest->OnProcessRequestComplete().BindLambda([DelegateClientGet](FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
                {
                    if (bWasSuccessful == false)
                    {
                        AsyncTask(ENamedThreads::GameThread, [DelegateClientGet]()
                            {
                                FBytesArrayStruct Empty_Bytes_Array;
                                DelegateClientGet.ExecuteIfBound(false, Empty_Bytes_Array);
                            }
                        );
                    }

                    FBytesArrayStruct STR_Bytes;
                    STR_Bytes.Bytes_Array = Response->GetContent();

                    AsyncTask(ENamedThreads::GameThread, [DelegateClientGet, STR_Bytes]()
                        {
                            DelegateClientGet.ExecuteIfBound(true, STR_Bytes);
                        }
                    );
                }
            );

            HttpRequest->ProcessRequest();
        }
    );
}