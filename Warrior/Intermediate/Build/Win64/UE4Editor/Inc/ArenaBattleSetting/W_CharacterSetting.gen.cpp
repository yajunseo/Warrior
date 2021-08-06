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
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
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
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharacterAssets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CharacterAssets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UW_CharacterSetting_Statics::NewProp_CharacterAssets_Inner = { "CharacterAssets", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UW_CharacterSetting_Statics::NewProp_CharacterAssets_MetaData[] = {
		{ "ModuleRelativePath", "Public/W_CharacterSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UW_CharacterSetting_Statics::NewProp_CharacterAssets = { "CharacterAssets", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UW_CharacterSetting, CharacterAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UW_CharacterSetting_Statics::NewProp_CharacterAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UW_CharacterSetting_Statics::NewProp_CharacterAssets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UW_CharacterSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_CharacterSetting_Statics::NewProp_CharacterAssets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_CharacterSetting_Statics::NewProp_CharacterAssets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UW_CharacterSetting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UW_CharacterSetting>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UW_CharacterSetting_Statics::ClassParams = {
		&UW_CharacterSetting::StaticClass,
		"Warrior",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UW_CharacterSetting_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UW_CharacterSetting_Statics::PropPointers),
		0,
		0x001000A4u,
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
	IMPLEMENT_CLASS(UW_CharacterSetting, 3725402411);
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
