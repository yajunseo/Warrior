// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/W_HUDWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW_HUDWidget() {}
// Cross Module References
	WARRIOR_API UClass* Z_Construct_UClass_UW_HUDWidget_NoRegister();
	WARRIOR_API UClass* Z_Construct_UClass_UW_HUDWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Warrior();
// End Cross Module References
	void UW_HUDWidget::StaticRegisterNativesUW_HUDWidget()
	{
	}
	UClass* Z_Construct_UClass_UW_HUDWidget_NoRegister()
	{
		return UW_HUDWidget::StaticClass();
	}
	struct Z_Construct_UClass_UW_HUDWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UW_HUDWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UW_HUDWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "W_HUDWidget.h" },
		{ "ModuleRelativePath", "Public/W_HUDWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UW_HUDWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UW_HUDWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UW_HUDWidget_Statics::ClassParams = {
		&UW_HUDWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UW_HUDWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UW_HUDWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UW_HUDWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UW_HUDWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UW_HUDWidget, 4068569372);
	template<> WARRIOR_API UClass* StaticClass<UW_HUDWidget>()
	{
		return UW_HUDWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UW_HUDWidget(Z_Construct_UClass_UW_HUDWidget, &UW_HUDWidget::StaticClass, TEXT("/Script/Warrior"), TEXT("UW_HUDWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UW_HUDWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
