

#pragma once

#include "CoreMinimal.h"
#include "MessageBroadcastCenter.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMessage);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMessageFloat, float, Value);


UCLASS()
class MESSAGECENTER_API UMessageBroadcastCenter : public UObject
{
    GENERATED_BODY()

private:

    UMessageBroadcastCenter();

    static UMessageBroadcastCenter* Instance;

public:

    //Variables and Instance========================================================================================================

    UPROPERTY(BlueprintAssignable)
    FOnMessage BPMessage;

    UPROPERTY(BlueprintAssignable)
    FOnMessageFloat BPFloatMessage;

    UPROPERTY(BlueprintAssignable)
    TMap<FString, FOnMessage> message;

    UPROPERTY(BlueprintAssignable)
    TMap<FString, FOnMessageFloat> messageFloat;

    UFUNCTION(BlueprintCallable)
    static UMessageBroadcastCenter* GetInstance()
    {
        if (Instance == nullptr)
        {
            Instance = NewObject<UMessageBroadcastCenter>();
            Instance->AddToRoot();
        }
        return Instance;
    }
   
    //Broadcast Messages========================================================================================================
    UFUNCTION(BlueprintCallable)
    void BroadcastMessage(FString MessageType)
    {
        if (FOnMessage* delegate = message.Find(MessageType))
        {
            delegate->Broadcast();
        }
    }

    UFUNCTION(BlueprintCallable)
    void BroadcastFloatMessage(FString MessageType, float Value)
    {
        if (FOnMessageFloat* delegate = messageFloat.Find(MessageType))
        {
            delegate->Broadcast(Value);
        }
    }

    //C++ Registering========================================================================================================
    FOnMessage& RegisterRetrieveDelegate(FString MessageType)
    {
        if (FOnMessage* delegate = message.Find(MessageType))
        {
            return *delegate;
        }
        return message.Add(MessageType, FOnMessage());
    }

    FOnMessageFloat& RegisterRetrieveFloatDelegate(FString MessageType)
    {
        if (FOnMessageFloat* delegate = messageFloat.Find(MessageType))
        {   
            return *delegate;
        }
            return messageFloat.Add(MessageType, FOnMessageFloat());
    }

    //BP Registering========================================================================================================
    UFUNCTION(BlueprintCallable)
    void SetupBPDelegate(FString MessageType)
    {
        if (message.Find(MessageType))
        {
            BPMessage = message[MessageType];
        }
        BPMessage.Clear();
    }

    UFUNCTION(BlueprintCallable)
    void SetupBPFloatDelegate(FString MessageType)
    {
        if (messageFloat.Find(MessageType))
        {
            BPFloatMessage = messageFloat[MessageType];
        }
        BPFloatMessage.Clear();
    }

    UFUNCTION(BlueprintCallable)
    void RegisterBPDelegate(FString MessageType)
    {
        if (message.Find(MessageType))
        {
            message[MessageType] = BPMessage;
        }
        message.Add(MessageType, BPMessage);
    }

    UFUNCTION(BlueprintCallable)
    void RegisterBPFloatDelegate(FString MessageType)
    {
        if (messageFloat.Find(MessageType))
        {
            messageFloat[MessageType] = BPFloatMessage;
        }
        messageFloat.Add(MessageType, BPFloatMessage);
    }
};
