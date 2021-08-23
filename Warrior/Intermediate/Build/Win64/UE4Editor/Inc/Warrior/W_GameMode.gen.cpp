// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/W_GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW_GameMode() {}
// Cross Module References
	WARRIOR_API UClass* Z_Construct_UClass_AW_GameMode_NoRegister();
	WARRIOR_API UClass* Z_Construct_UClass_AW_GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Warrior();
	WARRIOR_API UClass* Z_Construct_UClass_AW_GameState_NoRegister();
// End Cross Module References
	void AW_GameMode::StaticRegisterNativesAW_GameMode()
	{
	}
	UClass* Z_Construct_UClass_AW_GameMode_NoRegister()
	{
		return AW_GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AW_GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_W_GameState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_W_GameState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreToClear_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ScoreToClear;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AW_GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AW_GameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "W_GameMode.h" },
		{ "ModuleRelativePath", "Public/W_GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AW_GameMode_Statics::NewProp_W_GameState_MetaData[] = {
		{ "ModuleRelativePath", "Public/W_GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AW_GameMode_Statics::NewProp_W_GameState = { "W_GameState", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AW_GameMode, W_GameState), Z_Construct_UClass_AW_GameState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AW_GameMode_Statics::NewProp_W_GameState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AW_GameMode_Statics::NewProp_W_GameState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AW_GameMode_Statics::NewProp_ScoreToClear_MetaData[] = {
		{ "ModuleRelativePath", "Public/W_GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AW_GameMode_Statics::NewProp_ScoreToClear = { "ScoreToClear", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AW_GameMode, ScoreToClear), METADATA_PARAMS(Z_Construct_UClass_AW_GameMode_Statics::NewProp_ScoreToClear_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AW_GameMode_Statics::NewProp_ScoreToClear_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AW_GameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AW_GameMode_Statics::NewProp_W_GameState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AW_GameMode_Statics::NewProp_ScoreToClear,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AW_GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AW_GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AW_GameMode_Statics::ClassParams = {
		&AW_GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AW_GameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AW_GameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AW_GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AW_GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AW_GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AW_GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AW_GameMode, 2763094135);
	template<> WARRIOR_API UClass* StaticClass<AW_GameMode>()
	{
		return AW_GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AW_GameMode(Z_Construct_UClass_AW_GameMode, &AW_GameMode::StaticClass, TEXT("/Script/Warrior"), TEXT("AW_GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AW_GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
