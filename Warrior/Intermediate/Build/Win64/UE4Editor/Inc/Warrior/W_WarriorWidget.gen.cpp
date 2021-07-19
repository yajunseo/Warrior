// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/W_WarriorWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW_WarriorWidget() {}
// Cross Module References
	WARRIOR_API UClass* Z_Construct_UClass_UW_WarriorWidget_NoRegister();
	WARRIOR_API UClass* Z_Construct_UClass_UW_WarriorWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Warrior();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	WARRIOR_API UClass* Z_Construct_UClass_AW_Character_NoRegister();
// End Cross Module References
	void UW_WarriorWidget::StaticRegisterNativesUW_WarriorWidget()
	{
	}
	UClass* Z_Construct_UClass_UW_WarriorWidget_NoRegister()
	{
		return UW_WarriorWidget::StaticClass();
	}
	struct Z_Construct_UClass_UW_WarriorWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HPProgressBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HPProgressBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WarriorActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WarriorActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UW_WarriorWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UW_WarriorWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "W_WarriorWidget.h" },
		{ "ModuleRelativePath", "W_WarriorWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UW_WarriorWidget_Statics::NewProp_HPProgressBar_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "W_WarriorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW_WarriorWidget_Statics::NewProp_HPProgressBar = { "HPProgressBar", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UW_WarriorWidget, HPProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UW_WarriorWidget_Statics::NewProp_HPProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UW_WarriorWidget_Statics::NewProp_HPProgressBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UW_WarriorWidget_Statics::NewProp_WarriorActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Actor" },
		{ "ModuleRelativePath", "W_WarriorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UW_WarriorWidget_Statics::NewProp_WarriorActor = { "WarriorActor", nullptr, (EPropertyFlags)0x0044000000020815, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UW_WarriorWidget, WarriorActor), Z_Construct_UClass_AW_Character_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UW_WarriorWidget_Statics::NewProp_WarriorActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UW_WarriorWidget_Statics::NewProp_WarriorActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UW_WarriorWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_WarriorWidget_Statics::NewProp_HPProgressBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_WarriorWidget_Statics::NewProp_WarriorActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UW_WarriorWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UW_WarriorWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UW_WarriorWidget_Statics::ClassParams = {
		&UW_WarriorWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UW_WarriorWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UW_WarriorWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UW_WarriorWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UW_WarriorWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UW_WarriorWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UW_WarriorWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UW_WarriorWidget, 2381958138);
	template<> WARRIOR_API UClass* StaticClass<UW_WarriorWidget>()
	{
		return UW_WarriorWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UW_WarriorWidget(Z_Construct_UClass_UW_WarriorWidget, &UW_WarriorWidget::StaticClass, TEXT("/Script/Warrior"), TEXT("UW_WarriorWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UW_WarriorWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
