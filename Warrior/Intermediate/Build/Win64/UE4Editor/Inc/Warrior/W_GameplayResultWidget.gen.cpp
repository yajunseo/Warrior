// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/W_GameplayResultWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW_GameplayResultWidget() {}
// Cross Module References
	WARRIOR_API UClass* Z_Construct_UClass_UW_GameplayResultWidget_NoRegister();
	WARRIOR_API UClass* Z_Construct_UClass_UW_GameplayResultWidget();
	WARRIOR_API UClass* Z_Construct_UClass_UW_GameplayWidget();
	UPackage* Z_Construct_UPackage__Script_Warrior();
// End Cross Module References
	void UW_GameplayResultWidget::StaticRegisterNativesUW_GameplayResultWidget()
	{
	}
	UClass* Z_Construct_UClass_UW_GameplayResultWidget_NoRegister()
	{
		return UW_GameplayResultWidget::StaticClass();
	}
	struct Z_Construct_UClass_UW_GameplayResultWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UW_GameplayResultWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UW_GameplayWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UW_GameplayResultWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "W_GameplayResultWidget.h" },
		{ "ModuleRelativePath", "Public/W_GameplayResultWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UW_GameplayResultWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UW_GameplayResultWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UW_GameplayResultWidget_Statics::ClassParams = {
		&UW_GameplayResultWidget::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UW_GameplayResultWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UW_GameplayResultWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UW_GameplayResultWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UW_GameplayResultWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UW_GameplayResultWidget, 2641991931);
	template<> WARRIOR_API UClass* StaticClass<UW_GameplayResultWidget>()
	{
		return UW_GameplayResultWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UW_GameplayResultWidget(Z_Construct_UClass_UW_GameplayResultWidget, &UW_GameplayResultWidget::StaticClass, TEXT("/Script/Warrior"), TEXT("UW_GameplayResultWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UW_GameplayResultWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
