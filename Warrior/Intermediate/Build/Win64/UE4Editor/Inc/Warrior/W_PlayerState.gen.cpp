// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/W_PlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW_PlayerState() {}
// Cross Module References
	WARRIOR_API UClass* Z_Construct_UClass_AW_PlayerState_NoRegister();
	WARRIOR_API UClass* Z_Construct_UClass_AW_PlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_Warrior();
// End Cross Module References
	void AW_PlayerState::StaticRegisterNativesAW_PlayerState()
	{
	}
	UClass* Z_Construct_UClass_AW_PlayerState_NoRegister()
	{
		return AW_PlayerState::StaticClass();
	}
	struct Z_Construct_UClass_AW_PlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GameScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CharacterLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Exp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Exp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AW_PlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AW_PlayerState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "W_PlayerState.h" },
		{ "ModuleRelativePath", "Public/W_PlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AW_PlayerState_Statics::NewProp_GameScore_MetaData[] = {
		{ "ModuleRelativePath", "Public/W_PlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AW_PlayerState_Statics::NewProp_GameScore = { "GameScore", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AW_PlayerState, GameScore), METADATA_PARAMS(Z_Construct_UClass_AW_PlayerState_Statics::NewProp_GameScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AW_PlayerState_Statics::NewProp_GameScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AW_PlayerState_Statics::NewProp_CharacterLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/W_PlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AW_PlayerState_Statics::NewProp_CharacterLevel = { "CharacterLevel", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AW_PlayerState, CharacterLevel), METADATA_PARAMS(Z_Construct_UClass_AW_PlayerState_Statics::NewProp_CharacterLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AW_PlayerState_Statics::NewProp_CharacterLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AW_PlayerState_Statics::NewProp_Exp_MetaData[] = {
		{ "ModuleRelativePath", "Public/W_PlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AW_PlayerState_Statics::NewProp_Exp = { "Exp", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AW_PlayerState, Exp), METADATA_PARAMS(Z_Construct_UClass_AW_PlayerState_Statics::NewProp_Exp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AW_PlayerState_Statics::NewProp_Exp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AW_PlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AW_PlayerState_Statics::NewProp_GameScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AW_PlayerState_Statics::NewProp_CharacterLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AW_PlayerState_Statics::NewProp_Exp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AW_PlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AW_PlayerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AW_PlayerState_Statics::ClassParams = {
		&AW_PlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AW_PlayerState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AW_PlayerState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AW_PlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AW_PlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AW_PlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AW_PlayerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AW_PlayerState, 1031583441);
	template<> WARRIOR_API UClass* StaticClass<AW_PlayerState>()
	{
		return AW_PlayerState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AW_PlayerState(Z_Construct_UClass_AW_PlayerState, &AW_PlayerState::StaticClass, TEXT("/Script/Warrior"), TEXT("AW_PlayerState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AW_PlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
