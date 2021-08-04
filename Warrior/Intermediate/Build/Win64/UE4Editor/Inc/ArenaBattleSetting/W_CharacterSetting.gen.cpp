// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaBattleSetting/Public/W_CharacterSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW_CharacterSetting() {}
// Cross Module References
	ARENABATTLESETTING_API UClass* Z_Construct_UClass_UW_CharacterSetting_NoRegister();
	ARENABATTLESETTING_API UClass* Z_Construct_UClass_UW_CharacterSetting();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ArenaBattleSetting();
// End Cross Module References
	void UW_CharacterSetting::StaticRegisterNativesUW_CharacterSetting()
	{
	}
	UClass* Z_Construct_UClass_UW_CharacterSetting_NoRegister()
	{
		return UW_CharacterSetting::StaticClass();
	}
	struct Z_Construct_UClass_UW_CharacterSetting_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UW_CharacterSetting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaBattleSetting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UW_CharacterSetting_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "W_CharacterSetting.h" },
		{ "ModuleRelativePath", "Public/W_CharacterSetting.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UW_CharacterSetting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UW_CharacterSetting>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UW_CharacterSetting_Statics::ClassParams = {
		&UW_CharacterSetting::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UW_CharacterSetting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UW_CharacterSetting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UW_CharacterSetting()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UW_CharacterSetting_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UW_CharacterSetting, 3207131106);
	template<> ARENABATTLESETTING_API UClass* StaticClass<UW_CharacterSetting>()
	{
		return UW_CharacterSetting::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UW_CharacterSetting(Z_Construct_UClass_UW_CharacterSetting, &UW_CharacterSetting::StaticClass, TEXT("/Script/ArenaBattleSetting"), TEXT("UW_CharacterSetting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UW_CharacterSetting);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
