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

#include "curl/curl.h"

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

static const char* payload_text[] = {
  "Date: Mon, 29 Nov 2010 21:54:29 +1100\r\n",
  "To: " "eray.ozer@outlook.com" "\r\n",
  "From: " "eray.qhost.ozer@gmail.com" "\r\n",
  "Cc: " "eray.ozer2014@gmail.com" "\r\n",
  "Message-ID: <dcd7cb36-11db-487a-9f3a-e652a9458efd@"
  "rfcpedant.example.org>\r\n",
  "Subject: SMTP example message\r\n",
  "\r\n", /* empty line to divide headers from body, see RFC5322 */
  "The body of the message starts here.\r\n",
  "\r\n",
  "It could be a lot of lines, could be MIME encoded, whatever.\r\n",
  "Check RFC5322.\r\n",
  NULL
};

struct upload_status
{
    size_t bytes_read;
};

static size_t payload_source(void* ptr, size_t size, size_t nmemb, void* userp)
{
    struct upload_status* upload_ctx = (struct upload_status*)userp;
    const char* data;

    if ((size == 0) || (nmemb == 0) || ((size * nmemb) < 1)) {
        return 0;
    }

    data = payload_text[upload_ctx->bytes_read];

    if (data) {
        size_t len = strlen(data);
        memcpy(ptr, data, len);
        upload_ctx->bytes_read++;

        return len;
    }

    return 0;
}

void UHTTP_ClientBPLibrary::Send_Email(FString TargetMail, FString Cc, FString Bcc, FString Subject, FString Content, FString Sender, FString Password, FString SMTP, int32 Port, TArray<uint8> Attachment)
{    
    CURLcode Response = CURLE_OK;
    
    CURL* curl = curl_easy_init();
    if (curl)
    {
        curl_slist* Recipients = NULL;
        Recipients = curl_slist_append(Recipients, "eray.ozer@outlook.com");
        Recipients = curl_slist_append(Recipients, "eray.ozer2014@gmail.com");

        curl_easy_setopt(curl, CURLOPT_URL, "smtps://smtp.gmail.com:465");
        curl_easy_setopt(curl, CURLOPT_MAIL_FROM, "eray.qhost.ozer@gmail.com");
        curl_easy_setopt(curl, CURLOPT_MAIL_RCPT, Recipients);

        curl_easy_setopt(curl, CURLOPT_USERNAME, "eray.qhost.ozer@gmail.com");
        curl_easy_setopt(curl, CURLOPT_PASSWORD, "sxfmxgycgzykgzxb");
        curl_easy_setopt(curl, CURLOPT_CAINFO, "C:\\Users\\erayo\\Downloads\\cacert.pem");
        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, true);
        curl_easy_setopt(curl, CURLOPT_READFUNCTION, payload_source);

        struct upload_status upload_ctx;
        memset(&upload_ctx, 0, sizeof(upload_status));
        curl_easy_setopt(curl, CURLOPT_READDATA, &upload_ctx);
        curl_easy_setopt(curl, CURLOPT_UPLOAD, 1L);

        Response = curl_easy_perform(curl);
        curl_slist_free_all(Recipients);
        curl_easy_cleanup(curl);
    }

    else
    {
        curl_easy_cleanup(curl);
    }

    GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, FString::FromInt((int)Response));
}