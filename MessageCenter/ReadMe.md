# Message Center
Unreal Engine Plugin for handling Messages/Listeners in Unreal Engine



## Setup
1. Put in the Plugins folder:
2. Enter in the plugin section of your .uproject or .uplugin
{
	"Name": "MessageCenter",
	"Enabled": true
}

3. Put "MessageCenter" in the public dependencies of your .build file
4. Recommended to delete binaries/intermediate folders and rebuild so it registers
5. Put "MessageBroadcastCenter.h" in the header

### Examples

## Registering Listeners in C++
	UMessageBroadcastCenter* messageCenter = UMessageBroadcastCenter::GetInstance();

	if (messageCenter)
	{
		messageCenter->RegisterRetrieveDelegate("CodeName").AddDynamic("CodeName", this, &YourClass::MessageReceiverFunction);
		//Use this version if you use a float input
		messageCenter->RegisterRetrieveFloatDelegate("CodeName").AddDynamic("CodeName", this, &YourClass::MessageReceiverFunction);
	}


void YourClass::ReceiveMessage(EMessageType messageType, const FString& message)
{

}

## Unregistering Listeners in C++
	UMessageBroadcastCenter* messageCenter = UMessageBroadcastCenter::GetInstance();

	if (messageCenter)
	{
		messageCenter->RegisterRetrieveDelegate("CodeName").RemoveDynamic("CodeName", this, &YourClass::MessageReceiverFunction);
		//Use this version if you use a float input
		messageCenter->RegisterRetrieveFloatDelegate("CodeName").RemoveDynamic("CodeName", this, &YourClass::MessageReceiverFunction);
	}

## Registering Listeners in BP
Make sure to use correct "CodeName" that matches for the delegate key
->First call "Get Instance" node
->Use the "Instance" and call SetupBPDelegate (or SetupBPFloatDelegate)
->Use "Instance" and bind your event to BPMessage (or BPFloatMessage)
->Use "Instance" and call RegisterBPDelegate(or RegisterBPFloatDelegate)

## Unregistering Listeners in BP
Same as register, but instead of binding, you unbind instead
->First call "Get Instance" node
->Use the "Instance" and call SetupBPDelegate (or SetupBPFloatDelegate)
->Use "Instance" and unbind your event to BPMessage (or BPFloatMessage)
->Use "Instance" and call RegisterBPDelegate(or RegisterBPFloatDelegate)

## Broadcasting Messages
				UMessageBroadcastCenter* messageCenter = UMessageBroadcastCenter::GetInstance();
				if (messageCenter)
				{
					messageCenter->BroadcastMessage("CodeName");
				}