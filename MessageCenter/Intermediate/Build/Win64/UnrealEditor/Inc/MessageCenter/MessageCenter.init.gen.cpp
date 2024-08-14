// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMessageCenter_init() {}
	MESSAGECENTER_API UFunction* Z_Construct_UDelegateFunction_MessageCenter_OnMessage__DelegateSignature();
	MESSAGECENTER_API UFunction* Z_Construct_UDelegateFunction_MessageCenter_OnMessageFloat__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MessageCenter;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MessageCenter()
	{
		if (!Z_Registration_Info_UPackage__Script_MessageCenter.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MessageCenter_OnMessage__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MessageCenter_OnMessageFloat__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MessageCenter",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xE057866A,
				0x47E031C7,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MessageCenter.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MessageCenter.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MessageCenter(Z_Construct_UPackage__Script_MessageCenter, TEXT("/Script/MessageCenter"), Z_Registration_Info_UPackage__Script_MessageCenter, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE057866A, 0x47E031C7));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
