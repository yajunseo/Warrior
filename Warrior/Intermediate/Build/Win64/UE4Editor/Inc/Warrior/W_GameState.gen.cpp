// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/W_GameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW_GameState() {}
// Cross Module References
	WARRIOR_API UClass* Z_Construct_UClass_AW_GameState_NoRegister();
	WARRIOR_API UClass* Z_Construct_UClass_AW_GameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_Warrior();
// End Cross Module References
	void AW_GameState::StaticRegisterNativesAW_GameState()
	{
	}
	UClass* Z_Construct_UClass_AW_GameState_NoRegister()
	{
		return AW_GameState::StaticClass();
	}
	struct Z_Construct_UClass_AW_GameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalGameScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalGameScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGameCleared_MetaData[];
#endif
		static void NewProp_bGameCleared_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGameCleared;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AW_GameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AW_GameState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "W_GameState.h" },
		{ "ModuleRelativePath", "Public/W_GameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AW_GameState_Statics::NewProp_TotalGameScore_MetaData[] = {
		{ "ModuleRelativePath", "Public/W_GameState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AW_GameState_Statics::NewProp_TotalGameScore = { "TotalGameScore", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AW_GameState, TotalGameScore), METADATA_PARAMS(Z_Construct_UClass_AW_GameState_Statics::NewProp_TotalGameScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AW_GameState_Statics::NewProp_TotalGameScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AW_GameState_Statics::NewProp_bGameCleared_MetaData[] = {
		{ "ModuleRelativePath", "Public/W_GameState.h" },
	};
#endif
	void Z_Construct_UClass_AW_GameState_Statics::NewProp_bGameCleared_SetBit(void* Obj)
	{
		((AW_GameState*)Obj)->bGameCleared = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AW_GameState_Statics::NewProp_bGameCleared = { "bGameCleared", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AW_GameState), &Z_Construct_UClass_AW_GameState_Statics::NewProp_bGameCleared_SetBit, METADATA_PARAMS(Z_Construct_UClass_AW_GameState_Statics::NewProp_bGameCleared_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AW_GameState_Statics::NewProp_bGameCleared_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AW_GameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AW_GameState_Statics::NewProp_TotalGameScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AW_GameState_Statics::NewProp_bGameCleared,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AW_GameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AW_GameState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AW_GameState_Statics::ClassParams = {
		&AW_GameState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AW_GameState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AW_GameState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AW_GameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AW_GameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AW_GameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AW_GameState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AW_GameState, 2599398996);
	template<> WARRIOR_API UClass* StaticClass<AW_GameState>()
	{
		return AW_GameState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AW_GameState(Z_Construct_UClass_AW_GameState, &AW_GameState::StaticClass, TEXT("/Script/Warrior"), TEXT("AW_GameState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AW_GameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
