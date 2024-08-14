// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMessageBroadcastCenter;
#ifdef MESSAGECENTER_MessageBroadcastCenter_generated_h
#error "MessageBroadcastCenter.generated.h already included, missing '#pragma once' in MessageBroadcastCenter.h"
#endif
#define MESSAGECENTER_MessageBroadcastCenter_generated_h

#define FID_DeeksNight_Plugins_MessageCenter_Source_MessageCenter_Public_MessageBroadcastCenter_h_8_DELEGATE \
static inline void FOnMessage_DelegateWrapper(const FMulticastScriptDelegate& OnMessage) \
{ \
	OnMessage.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_DeeksNight_Plugins_MessageCenter_Source_MessageCenter_Public_MessageBroadcastCenter_h_10_DELEGATE \
struct _Script_MessageCenter_eventOnMessageFloat_Parms \
{ \
	float Value; \
}; \
static inline void FOnMessageFloat_DelegateWrapper(const FMulticastScriptDelegate& OnMessageFloat, float Value) \
{ \
	_Script_MessageCenter_eventOnMessageFloat_Parms Parms; \
	Parms.Value=Value; \
	OnMessageFloat.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_DeeksNight_Plugins_MessageCenter_Source_MessageCenter_Public_MessageBroadcastCenter_h_16_SPARSE_DATA
#define FID_DeeksNight_Plugins_MessageCenter_Source_MessageCenter_Public_MessageBroadcastCenter_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRegisterBPFloatDelegate); \
	DECLARE_FUNCTION(execRegisterBPDelegate); \
	DECLARE_FUNCTION(execSetupBPFloatDelegate); \
	DECLARE_FUNCTION(execSetupBPDelegate); \
	DECLARE_FUNCTION(execBroadcastFloatMessage); \
	DECLARE_FUNCTION(execBroadcastMessage); \
	DECLARE_FUNCTION(execGetInstance);


#define FID_DeeksNight_Plugins_MessageCenter_Source_MessageCenter_Public_MessageBroadcastCenter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRegisterBPFloatDelegate); \
	DECLARE_FUNCTION(execRegisterBPDelegate); \
	DECLARE_FUNCTION(execSetupBPFloatDelegate); \
	DECLARE_FUNCTION(execSetupBPDelegate); \
	DECLARE_FUNCTION(execBroadcastFloatMessage); \
	DECLARE_FUNCTION(execBroadcastMessage); \
	DECLARE_FUNCTION(execGetInstance);


#define FID_DeeksNight_Plugins_MessageCenter_Source_MessageCenter_Public_MessageBroadcastCenter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMessageBroadcastCenter(); \
	friend struct Z_Construct_UClass_UMessageBroadcastCenter_Statics; \
public: \
	DECLARE_CLASS(UMessageBroadcastCenter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MessageCenter"), NO_API) \
	DECLARE_SERIALIZER(UMessageBroadcastCenter)


#define FID_DeeksNight_Plugins_MessageCenter_Source_MessageCenter_Public_MessageBroadcastCenter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMessageBroadcastCenter(); \
	friend struct Z_Construct_UClass_UMessageBroadcastCenter_Statics; \
public: \
	DECLARE_CLASS(UMessageBroadcastCenter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MessageCenter"), NO_API) \
	DECLARE_SERIALIZER(UMessageBroadcastCenter)


#define FID_DeeksNight_Plugins_MessageCenter_Source_MessageCenter_Public_MessageBroadcastCenter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMessageBroadcastCenter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMessageBroadcastCenter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMessageBroadcastCenter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMessageBroadcastCenter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMessageBroadcastCenter(UMessageBroadcastCenter&&); \
	NO_API UMessageBroadcastCenter(const UMessageBroadcastCenter&); \
public:


#define FID_DeeksNight_Plugins_MessageCenter_Source_MessageCenter_Public_MessageBroadcastCenter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMessageBroadcastCenter(UMessageBroadcastCenter&&); \
	NO_API UMessageBroadcastCenter(const UMessageBroadcastCenter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMessageBroadcastCenter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMessageBroadcastCenter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMessageBroadcastCenter)


#define FID_DeeksNight_Plugins_MessageCenter_Source_MessageCenter_Public_MessageBroadcastCenter_h_13_PROLOG
#define FID_DeeksNight_Plugins_MessageCenter_Source_MessageCenter_Public_MessageBroadcastCenter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DeeksNight_Plugins_MessageCenter_Source_MessageCenter_Public_MessageBroadcastCenter_h_16_SPARSE_DATA \
	FID_DeeksNight_Plugins_MessageCenter_Source_MessageCenter_Public_MessageBroadcastCenter_h_16_RPC_WRAPPERS \
	FID_DeeksNight_Plugins_MessageCenter_Source_MessageCenter_Public_MessageBroadcastCenter_h_16_INCLASS \
	FID_DeeksNight_Plugins_MessageCenter_Source_MessageCenter_Public_MessageBroadcastCenter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_DeeksNight_Plugins_MessageCenter_Source_MessageCenter_Public_MessageBroadcastCenter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DeeksNight_Plugins_MessageCenter_Source_MessageCenter_Public_MessageBroadcastCenter_h_16_SPARSE_DATA \
	FID_DeeksNight_Plugins_MessageCenter_Source_MessageCenter_Public_MessageBroadcastCenter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DeeksNight_Plugins_MessageCenter_Source_MessageCenter_Public_MessageBroadcastCenter_h_16_INCLASS_NO_PURE_DECLS \
	FID_DeeksNight_Plugins_MessageCenter_Source_MessageCenter_Public_MessageBroadcastCenter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESSAGECENTER_API UClass* StaticClass<class UMessageBroadcastCenter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DeeksNight_Plugins_MessageCenter_Source_MessageCenter_Public_MessageBroadcastCenter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
