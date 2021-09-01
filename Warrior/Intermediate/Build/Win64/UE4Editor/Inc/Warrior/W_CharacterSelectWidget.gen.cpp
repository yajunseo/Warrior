// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/W_CharacterSelectWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW_CharacterSelectWidget() {}
// Cross Module References
	WARRIOR_API UClass* Z_Construct_UClass_UW_CharacterSelectWidget_NoRegister();
	WARRIOR_API UClass* Z_Construct_UClass_UW_CharacterSelectWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Warrior();
	UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UW_CharacterSelectWidget::execOnConfirmClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnConfirmClicked();
		P_NATIVE_END;
	}
	void UW_CharacterSelectWidget::StaticRegisterNativesUW_CharacterSelectWidget()
	{
		UClass* Class = UW_CharacterSelectWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnConfirmClicked", &UW_CharacterSelectWidget::execOnConfirmClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UW_CharacterSelectWidget_OnConfirmClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UW_CharacterSelectWidget_OnConfirmClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/W_CharacterSelectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UW_CharacterSelectWidget_OnConfirmClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UW_CharacterSelectWidget, nullptr, "OnConfirmClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UW_CharacterSelectWidget_OnConfirmClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UW_CharacterSelectWidget_OnConfirmClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UW_CharacterSelectWidget_OnConfirmClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UW_CharacterSelectWidget_OnConfirmClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UW_CharacterSelectWidget_NoRegister()
	{
		return UW_CharacterSelectWidget::StaticClass();
	}
	struct Z_Construct_UClass_UW_CharacterSelectWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConfirmButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConfirmButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UW_CharacterSelectWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UW_CharacterSelectWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UW_CharacterSelectWidget_OnConfirmClicked, "OnConfirmClicked" }, // 3679208860
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UW_CharacterSelectWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "W_CharacterSelectWidget.h" },
		{ "ModuleRelativePath", "Public/W_CharacterSelectWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UW_CharacterSelectWidget_Statics::NewProp_CurrentIndex_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/W_CharacterSelectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UW_CharacterSelectWidget_Statics::NewProp_CurrentIndex = { "CurrentIndex", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UW_CharacterSelectWidget, CurrentIndex), METADATA_PARAMS(Z_Construct_UClass_UW_CharacterSelectWidget_Statics::NewProp_CurrentIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UW_CharacterSelectWidget_Statics::NewProp_CurrentIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UW_CharacterSelectWidget_Statics::NewProp_MaxIndex_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/W_CharacterSelectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UW_CharacterSelectWidget_Statics::NewProp_MaxIndex = { "MaxIndex", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UW_CharacterSelectWidget, MaxIndex), METADATA_PARAMS(Z_Construct_UClass_UW_CharacterSelectWidget_Statics::NewProp_MaxIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UW_CharacterSelectWidget_Statics::NewProp_MaxIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UW_CharacterSelectWidget_Statics::NewProp_TextBox_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/W_CharacterSelectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW_CharacterSelectWidget_Statics::NewProp_TextBox = { "TextBox", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UW_CharacterSelectWidget, TextBox), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UW_CharacterSelectWidget_Statics::NewProp_TextBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UW_CharacterSelectWidget_Statics::NewProp_TextBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UW_CharacterSelectWidget_Statics::NewProp_ConfirmButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/W_CharacterSelectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW_CharacterSelectWidget_Statics::NewProp_ConfirmButton = { "ConfirmButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UW_CharacterSelectWidget, ConfirmButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UW_CharacterSelectWidget_Statics::NewProp_ConfirmButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UW_CharacterSelectWidget_Statics::NewProp_ConfirmButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UW_CharacterSelectWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_CharacterSelectWidget_Statics::NewProp_CurrentIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_CharacterSelectWidget_Statics::NewProp_MaxIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_CharacterSelectWidget_Statics::NewProp_TextBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_CharacterSelectWidget_Statics::NewProp_ConfirmButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UW_CharacterSelectWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UW_CharacterSelectWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UW_CharacterSelectWidget_Statics::ClassParams = {
		&UW_CharacterSelectWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UW_CharacterSelectWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UW_CharacterSelectWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UW_CharacterSelectWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UW_CharacterSelectWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UW_CharacterSelectWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UW_CharacterSelectWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UW_CharacterSelectWidget, 539001176);
	template<> WARRIOR_API UClass* StaticClass<UW_CharacterSelectWidget>()
	{
		return UW_CharacterSelectWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UW_CharacterSelectWidget(Z_Construct_UClass_UW_CharacterSelectWidget, &UW_CharacterSelectWidget::StaticClass, TEXT("/Script/Warrior"), TEXT("UW_CharacterSelectWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UW_CharacterSelectWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
