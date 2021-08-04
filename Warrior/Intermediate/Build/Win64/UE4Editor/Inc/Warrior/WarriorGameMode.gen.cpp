// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/WarriorGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorGameMode() {}
// Cross Module References
	WARRIOR_API UClass* Z_Construct_UClass_AWarriorGameMode_NoRegister();
	WARRIOR_API UClass* Z_Construct_UClass_AWarriorGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Warrior();
// End Cross Module References
	void AWarriorGameMode::StaticRegisterNativesAWarriorGameMode()
	{
	}
	UClass* Z_Construct_UClass_AWarriorGameMode_NoRegister()
	{
		return AWarriorGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AWarriorGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWarriorGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWarriorGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "WarriorGameMode.h" },
		{ "ModuleRelativePath", "Public/WarriorGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWarriorGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWarriorGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWarriorGameMode_Statics::ClassParams = {
		&AWarriorGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AWarriorGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWarriorGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWarriorGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWarriorGameMode, 2440260961);
	template<> WARRIOR_API UClass* StaticClass<AWarriorGameMode>()
	{
		return AWarriorGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWarriorGameMode(Z_Construct_UClass_AWarriorGameMode, &AWarriorGameMode::StaticClass, TEXT("/Script/Warrior"), TEXT("AWarriorGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWarriorGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
