// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MessageCenter/Public/MessageBroadcastCenter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMessageBroadcastCenter() {}
// Cross Module References
	MESSAGECENTER_API UFunction* Z_Construct_UDelegateFunction_MessageCenter_OnMessage__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MessageCenter();
	MESSAGECENTER_API UFunction* Z_Construct_UDelegateFunction_MessageCenter_OnMessageFloat__DelegateSignature();
	MESSAGECENTER_API UClass* Z_Construct_UClass_UMessageBroadcastCenter_NoRegister();
	MESSAGECENTER_API UClass* Z_Construct_UClass_UMessageBroadcastCenter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MessageCenter_OnMessage__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MessageCenter_OnMessage__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MessageBroadcastCenter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MessageCenter_OnMessage__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MessageCenter, nullptr, "OnMessage__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MessageCenter_OnMessage__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MessageCenter_OnMessage__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MessageCenter_OnMessage__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MessageCenter_OnMessage__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_MessageCenter_OnMessageFloat__DelegateSignature_Statics
	{
		struct _Script_MessageCenter_eventOnMessageFloat_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_MessageCenter_OnMessageFloat__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MessageCenter_eventOnMessageFloat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MessageCenter_OnMessageFloat__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MessageCenter_OnMessageFloat__DelegateSignature_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MessageCenter_OnMessageFloat__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MessageBroadcastCenter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MessageCenter_OnMessageFloat__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MessageCenter, nullptr, "OnMessageFloat__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MessageCenter_OnMessageFloat__DelegateSignature_Statics::_Script_MessageCenter_eventOnMessageFloat_Parms), Z_Construct_UDelegateFunction_MessageCenter_OnMessageFloat__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MessageCenter_OnMessageFloat__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MessageCenter_OnMessageFloat__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MessageCenter_OnMessageFloat__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MessageCenter_OnMessageFloat__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MessageCenter_OnMessageFloat__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UMessageBroadcastCenter::execRegisterBPFloatDelegate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MessageType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterBPFloatDelegate(Z_Param_MessageType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMessageBroadcastCenter::execRegisterBPDelegate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MessageType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterBPDelegate(Z_Param_MessageType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMessageBroadcastCenter::execSetupBPFloatDelegate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MessageType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupBPFloatDelegate(Z_Param_MessageType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMessageBroadcastCenter::execSetupBPDelegate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MessageType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupBPDelegate(Z_Param_MessageType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMessageBroadcastCenter::execBroadcastFloatMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MessageType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastFloatMessage(Z_Param_MessageType,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMessageBroadcastCenter::execBroadcastMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MessageType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastMessage(Z_Param_MessageType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMessageBroadcastCenter::execGetInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMessageBroadcastCenter**)Z_Param__Result=UMessageBroadcastCenter::GetInstance();
		P_NATIVE_END;
	}
	void UMessageBroadcastCenter::StaticRegisterNativesUMessageBroadcastCenter()
	{
		UClass* Class = UMessageBroadcastCenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadcastFloatMessage", &UMessageBroadcastCenter::execBroadcastFloatMessage },
			{ "BroadcastMessage", &UMessageBroadcastCenter::execBroadcastMessage },
			{ "GetInstance", &UMessageBroadcastCenter::execGetInstance },
			{ "RegisterBPDelegate", &UMessageBroadcastCenter::execRegisterBPDelegate },
			{ "RegisterBPFloatDelegate", &UMessageBroadcastCenter::execRegisterBPFloatDelegate },
			{ "SetupBPDelegate", &UMessageBroadcastCenter::execSetupBPDelegate },
			{ "SetupBPFloatDelegate", &UMessageBroadcastCenter::execSetupBPFloatDelegate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMessageBroadcastCenter_BroadcastFloatMessage_Statics
	{
		struct MessageBroadcastCenter_eventBroadcastFloatMessage_Parms
		{
			FString MessageType;
			float Value;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_MessageType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMessageBroadcastCenter_BroadcastFloatMessage_Statics::NewProp_MessageType = { "MessageType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MessageBroadcastCenter_eventBroadcastFloatMessage_Parms, MessageType), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMessageBroadcastCenter_BroadcastFloatMessage_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MessageBroadcastCenter_eventBroadcastFloatMessage_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMessageBroadcastCenter_BroadcastFloatMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageBroadcastCenter_BroadcastFloatMessage_Statics::NewProp_MessageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageBroadcastCenter_BroadcastFloatMessage_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMessageBroadcastCenter_BroadcastFloatMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MessageBroadcastCenter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMessageBroadcastCenter_BroadcastFloatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMessageBroadcastCenter, nullptr, "BroadcastFloatMessage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMessageBroadcastCenter_BroadcastFloatMessage_Statics::MessageBroadcastCenter_eventBroadcastFloatMessage_Parms), Z_Construct_UFunction_UMessageBroadcastCenter_BroadcastFloatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageBroadcastCenter_BroadcastFloatMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMessageBroadcastCenter_BroadcastFloatMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageBroadcastCenter_BroadcastFloatMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMessageBroadcastCenter_BroadcastFloatMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMessageBroadcastCenter_BroadcastFloatMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMessageBroadcastCenter_BroadcastMessage_Statics
	{
		struct MessageBroadcastCenter_eventBroadcastMessage_Parms
		{
			FString MessageType;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_MessageType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMessageBroadcastCenter_BroadcastMessage_Statics::NewProp_MessageType = { "MessageType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MessageBroadcastCenter_eventBroadcastMessage_Parms, MessageType), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMessageBroadcastCenter_BroadcastMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageBroadcastCenter_BroadcastMessage_Statics::NewProp_MessageType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMessageBroadcastCenter_BroadcastMessage_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Broadcast Messages========================================================================================================\n" },
		{ "ModuleRelativePath", "Public/MessageBroadcastCenter.h" },
		{ "ToolTip", "Broadcast Messages========================================================================================================" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMessageBroadcastCenter_BroadcastMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMessageBroadcastCenter, nullptr, "BroadcastMessage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMessageBroadcastCenter_BroadcastMessage_Statics::MessageBroadcastCenter_eventBroadcastMessage_Parms), Z_Construct_UFunction_UMessageBroadcastCenter_BroadcastMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageBroadcastCenter_BroadcastMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMessageBroadcastCenter_BroadcastMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageBroadcastCenter_BroadcastMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMessageBroadcastCenter_BroadcastMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMessageBroadcastCenter_BroadcastMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMessageBroadcastCenter_GetInstance_Statics
	{
		struct MessageBroadcastCenter_eventGetInstance_Parms
		{
			UMessageBroadcastCenter* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMessageBroadcastCenter_GetInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MessageBroadcastCenter_eventGetInstance_Parms, ReturnValue), Z_Construct_UClass_UMessageBroadcastCenter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMessageBroadcastCenter_GetInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageBroadcastCenter_GetInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMessageBroadcastCenter_GetInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MessageBroadcastCenter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMessageBroadcastCenter_GetInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMessageBroadcastCenter, nullptr, "GetInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMessageBroadcastCenter_GetInstance_Statics::MessageBroadcastCenter_eventGetInstance_Parms), Z_Construct_UFunction_UMessageBroadcastCenter_GetInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageBroadcastCenter_GetInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMessageBroadcastCenter_GetInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageBroadcastCenter_GetInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMessageBroadcastCenter_GetInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMessageBroadcastCenter_GetInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMessageBroadcastCenter_RegisterBPDelegate_Statics
	{
		struct MessageBroadcastCenter_eventRegisterBPDelegate_Parms
		{
			FString MessageType;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_MessageType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMessageBroadcastCenter_RegisterBPDelegate_Statics::NewProp_MessageType = { "MessageType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MessageBroadcastCenter_eventRegisterBPDelegate_Parms, MessageType), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMessageBroadcastCenter_RegisterBPDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageBroadcastCenter_RegisterBPDelegate_Statics::NewProp_MessageType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMessageBroadcastCenter_RegisterBPDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MessageBroadcastCenter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMessageBroadcastCenter_RegisterBPDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMessageBroadcastCenter, nullptr, "RegisterBPDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMessageBroadcastCenter_RegisterBPDelegate_Statics::MessageBroadcastCenter_eventRegisterBPDelegate_Parms), Z_Construct_UFunction_UMessageBroadcastCenter_RegisterBPDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageBroadcastCenter_RegisterBPDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMessageBroadcastCenter_RegisterBPDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageBroadcastCenter_RegisterBPDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMessageBroadcastCenter_RegisterBPDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMessageBroadcastCenter_RegisterBPDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMessageBroadcastCenter_RegisterBPFloatDelegate_Statics
	{
		struct MessageBroadcastCenter_eventRegisterBPFloatDelegate_Parms
		{
			FString MessageType;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_MessageType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMessageBroadcastCenter_RegisterBPFloatDelegate_Statics::NewProp_MessageType = { "MessageType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MessageBroadcastCenter_eventRegisterBPFloatDelegate_Parms, MessageType), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMessageBroadcastCenter_RegisterBPFloatDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageBroadcastCenter_RegisterBPFloatDelegate_Statics::NewProp_MessageType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMessageBroadcastCenter_RegisterBPFloatDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MessageBroadcastCenter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMessageBroadcastCenter_RegisterBPFloatDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMessageBroadcastCenter, nullptr, "RegisterBPFloatDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMessageBroadcastCenter_RegisterBPFloatDelegate_Statics::MessageBroadcastCenter_eventRegisterBPFloatDelegate_Parms), Z_Construct_UFunction_UMessageBroadcastCenter_RegisterBPFloatDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageBroadcastCenter_RegisterBPFloatDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMessageBroadcastCenter_RegisterBPFloatDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageBroadcastCenter_RegisterBPFloatDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMessageBroadcastCenter_RegisterBPFloatDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMessageBroadcastCenter_RegisterBPFloatDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMessageBroadcastCenter_SetupBPDelegate_Statics
	{
		struct MessageBroadcastCenter_eventSetupBPDelegate_Parms
		{
			FString MessageType;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_MessageType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMessageBroadcastCenter_SetupBPDelegate_Statics::NewProp_MessageType = { "MessageType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MessageBroadcastCenter_eventSetupBPDelegate_Parms, MessageType), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMessageBroadcastCenter_SetupBPDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageBroadcastCenter_SetupBPDelegate_Statics::NewProp_MessageType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMessageBroadcastCenter_SetupBPDelegate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//BP Registering========================================================================================================\n" },
		{ "ModuleRelativePath", "Public/MessageBroadcastCenter.h" },
		{ "ToolTip", "BP Registering========================================================================================================" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMessageBroadcastCenter_SetupBPDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMessageBroadcastCenter, nullptr, "SetupBPDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMessageBroadcastCenter_SetupBPDelegate_Statics::MessageBroadcastCenter_eventSetupBPDelegate_Parms), Z_Construct_UFunction_UMessageBroadcastCenter_SetupBPDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageBroadcastCenter_SetupBPDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMessageBroadcastCenter_SetupBPDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageBroadcastCenter_SetupBPDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMessageBroadcastCenter_SetupBPDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMessageBroadcastCenter_SetupBPDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMessageBroadcastCenter_SetupBPFloatDelegate_Statics
	{
		struct MessageBroadcastCenter_eventSetupBPFloatDelegate_Parms
		{
			FString MessageType;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_MessageType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMessageBroadcastCenter_SetupBPFloatDelegate_Statics::NewProp_MessageType = { "MessageType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MessageBroadcastCenter_eventSetupBPFloatDelegate_Parms, MessageType), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMessageBroadcastCenter_SetupBPFloatDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageBroadcastCenter_SetupBPFloatDelegate_Statics::NewProp_MessageType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMessageBroadcastCenter_SetupBPFloatDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MessageBroadcastCenter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMessageBroadcastCenter_SetupBPFloatDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMessageBroadcastCenter, nullptr, "SetupBPFloatDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMessageBroadcastCenter_SetupBPFloatDelegate_Statics::MessageBroadcastCenter_eventSetupBPFloatDelegate_Parms), Z_Construct_UFunction_UMessageBroadcastCenter_SetupBPFloatDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageBroadcastCenter_SetupBPFloatDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMessageBroadcastCenter_SetupBPFloatDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageBroadcastCenter_SetupBPFloatDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMessageBroadcastCenter_SetupBPFloatDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMessageBroadcastCenter_SetupBPFloatDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMessageBroadcastCenter);
	UClass* Z_Construct_UClass_UMessageBroadcastCenter_NoRegister()
	{
		return UMessageBroadcastCenter::StaticClass();
	}
	struct Z_Construct_UClass_UMessageBroadcastCenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BPMessage_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_BPMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BPFloatMessage_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_BPFloatMessage;
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_message_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_message_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_message_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_message;
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_messageFloat_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_messageFloat_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_messageFloat_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_messageFloat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMessageBroadcastCenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MessageCenter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMessageBroadcastCenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMessageBroadcastCenter_BroadcastFloatMessage, "BroadcastFloatMessage" }, // 2332565698
		{ &Z_Construct_UFunction_UMessageBroadcastCenter_BroadcastMessage, "BroadcastMessage" }, // 1998314983
		{ &Z_Construct_UFunction_UMessageBroadcastCenter_GetInstance, "GetInstance" }, // 485381211
		{ &Z_Construct_UFunction_UMessageBroadcastCenter_RegisterBPDelegate, "RegisterBPDelegate" }, // 3894447623
		{ &Z_Construct_UFunction_UMessageBroadcastCenter_RegisterBPFloatDelegate, "RegisterBPFloatDelegate" }, // 862776995
		{ &Z_Construct_UFunction_UMessageBroadcastCenter_SetupBPDelegate, "SetupBPDelegate" }, // 327439230
		{ &Z_Construct_UFunction_UMessageBroadcastCenter_SetupBPFloatDelegate, "SetupBPFloatDelegate" }, // 306518761
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMessageBroadcastCenter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MessageBroadcastCenter.h" },
		{ "ModuleRelativePath", "Public/MessageBroadcastCenter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMessageBroadcastCenter_Statics::NewProp_BPMessage_MetaData[] = {
		{ "Comment", "//Variables and Instance========================================================================================================\n" },
		{ "ModuleRelativePath", "Public/MessageBroadcastCenter.h" },
		{ "ToolTip", "Variables and Instance========================================================================================================" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMessageBroadcastCenter_Statics::NewProp_BPMessage = { "BPMessage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMessageBroadcastCenter, BPMessage), Z_Construct_UDelegateFunction_MessageCenter_OnMessage__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMessageBroadcastCenter_Statics::NewProp_BPMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMessageBroadcastCenter_Statics::NewProp_BPMessage_MetaData)) }; // 2123233724
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMessageBroadcastCenter_Statics::NewProp_BPFloatMessage_MetaData[] = {
		{ "ModuleRelativePath", "Public/MessageBroadcastCenter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMessageBroadcastCenter_Statics::NewProp_BPFloatMessage = { "BPFloatMessage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMessageBroadcastCenter, BPFloatMessage), Z_Construct_UDelegateFunction_MessageCenter_OnMessageFloat__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMessageBroadcastCenter_Statics::NewProp_BPFloatMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMessageBroadcastCenter_Statics::NewProp_BPFloatMessage_MetaData)) }; // 2297302942
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMessageBroadcastCenter_Statics::NewProp_message_ValueProp = { "message", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UDelegateFunction_MessageCenter_OnMessage__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2123233724
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMessageBroadcastCenter_Statics::NewProp_message_Key_KeyProp = { "message_Key", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMessageBroadcastCenter_Statics::NewProp_message_MetaData[] = {
		{ "ModuleRelativePath", "Public/MessageBroadcastCenter.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMessageBroadcastCenter_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010008010000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMessageBroadcastCenter, message), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMessageBroadcastCenter_Statics::NewProp_message_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMessageBroadcastCenter_Statics::NewProp_message_MetaData)) }; // 2123233724
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMessageBroadcastCenter_Statics::NewProp_messageFloat_ValueProp = { "messageFloat", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UDelegateFunction_MessageCenter_OnMessageFloat__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2297302942
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMessageBroadcastCenter_Statics::NewProp_messageFloat_Key_KeyProp = { "messageFloat_Key", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMessageBroadcastCenter_Statics::NewProp_messageFloat_MetaData[] = {
		{ "ModuleRelativePath", "Public/MessageBroadcastCenter.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMessageBroadcastCenter_Statics::NewProp_messageFloat = { "messageFloat", nullptr, (EPropertyFlags)0x0010008010000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMessageBroadcastCenter, messageFloat), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMessageBroadcastCenter_Statics::NewProp_messageFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMessageBroadcastCenter_Statics::NewProp_messageFloat_MetaData)) }; // 2297302942
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMessageBroadcastCenter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMessageBroadcastCenter_Statics::NewProp_BPMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMessageBroadcastCenter_Statics::NewProp_BPFloatMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMessageBroadcastCenter_Statics::NewProp_message_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMessageBroadcastCenter_Statics::NewProp_message_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMessageBroadcastCenter_Statics::NewProp_message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMessageBroadcastCenter_Statics::NewProp_messageFloat_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMessageBroadcastCenter_Statics::NewProp_messageFloat_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMessageBroadcastCenter_Statics::NewProp_messageFloat,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMessageBroadcastCenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMessageBroadcastCenter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMessageBroadcastCenter_Statics::ClassParams = {
		&UMessageBroadcastCenter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMessageBroadcastCenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMessageBroadcastCenter_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMessageBroadcastCenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMessageBroadcastCenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMessageBroadcastCenter()
	{
		if (!Z_Registration_Info_UClass_UMessageBroadcastCenter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMessageBroadcastCenter.OuterSingleton, Z_Construct_UClass_UMessageBroadcastCenter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMessageBroadcastCenter.OuterSingleton;
	}
	template<> MESSAGECENTER_API UClass* StaticClass<UMessageBroadcastCenter>()
	{
		return UMessageBroadcastCenter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMessageBroadcastCenter);
	struct Z_CompiledInDeferFile_FID_DeeksNight_Plugins_MessageCenter_Source_MessageCenter_Public_MessageBroadcastCenter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DeeksNight_Plugins_MessageCenter_Source_MessageCenter_Public_MessageBroadcastCenter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMessageBroadcastCenter, UMessageBroadcastCenter::StaticClass, TEXT("UMessageBroadcastCenter"), &Z_Registration_Info_UClass_UMessageBroadcastCenter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMessageBroadcastCenter), 266151898U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DeeksNight_Plugins_MessageCenter_Source_MessageCenter_Public_MessageBroadcastCenter_h_735002788(TEXT("/Script/MessageCenter"),
		Z_CompiledInDeferFile_FID_DeeksNight_Plugins_MessageCenter_Source_MessageCenter_Public_MessageBroadcastCenter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DeeksNight_Plugins_MessageCenter_Source_MessageCenter_Public_MessageBroadcastCenter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
