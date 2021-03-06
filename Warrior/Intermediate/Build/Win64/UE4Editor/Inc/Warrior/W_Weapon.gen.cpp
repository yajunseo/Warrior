// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/W_Weapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW_Weapon() {}
// Cross Module References
	WARRIOR_API UClass* Z_Construct_UClass_AW_Weapon_NoRegister();
	WARRIOR_API UClass* Z_Construct_UClass_AW_Weapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Warrior();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AW_Weapon::StaticRegisterNativesAW_Weapon()
	{
	}
	UClass* Z_Construct_UClass_AW_Weapon_NoRegister()
	{
		return AW_Weapon::StaticClass();
	}
	struct Z_Construct_UClass_AW_Weapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Weapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackDamageMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackDamageMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackDamageMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackDamageMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackModifierMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackModifierMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackModifierMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackModifierMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackModifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AW_Weapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AW_Weapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "W_Weapon.h" },
		{ "ModuleRelativePath", "Public/W_Weapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AW_Weapon_Statics::NewProp_Weapon_MetaData[] = {
		{ "Category", "Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/W_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AW_Weapon_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AW_Weapon, Weapon), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AW_Weapon_Statics::NewProp_Weapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AW_Weapon_Statics::NewProp_Weapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AW_Weapon_Statics::NewProp_AttackRange_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/W_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AW_Weapon_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AW_Weapon, AttackRange), METADATA_PARAMS(Z_Construct_UClass_AW_Weapon_Statics::NewProp_AttackRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AW_Weapon_Statics::NewProp_AttackRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AW_Weapon_Statics::NewProp_AttackDamageMin_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/W_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AW_Weapon_Statics::NewProp_AttackDamageMin = { "AttackDamageMin", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AW_Weapon, AttackDamageMin), METADATA_PARAMS(Z_Construct_UClass_AW_Weapon_Statics::NewProp_AttackDamageMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AW_Weapon_Statics::NewProp_AttackDamageMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AW_Weapon_Statics::NewProp_AttackDamageMax_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/W_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AW_Weapon_Statics::NewProp_AttackDamageMax = { "AttackDamageMax", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AW_Weapon, AttackDamageMax), METADATA_PARAMS(Z_Construct_UClass_AW_Weapon_Statics::NewProp_AttackDamageMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AW_Weapon_Statics::NewProp_AttackDamageMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AW_Weapon_Statics::NewProp_AttackModifierMin_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/W_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AW_Weapon_Statics::NewProp_AttackModifierMin = { "AttackModifierMin", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AW_Weapon, AttackModifierMin), METADATA_PARAMS(Z_Construct_UClass_AW_Weapon_Statics::NewProp_AttackModifierMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AW_Weapon_Statics::NewProp_AttackModifierMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AW_Weapon_Statics::NewProp_AttackModifierMax_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/W_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AW_Weapon_Statics::NewProp_AttackModifierMax = { "AttackModifierMax", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AW_Weapon, AttackModifierMax), METADATA_PARAMS(Z_Construct_UClass_AW_Weapon_Statics::NewProp_AttackModifierMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AW_Weapon_Statics::NewProp_AttackModifierMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AW_Weapon_Statics::NewProp_AttackDamage_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/W_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AW_Weapon_Statics::NewProp_AttackDamage = { "AttackDamage", nullptr, (EPropertyFlags)0x0020080000022815, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AW_Weapon, AttackDamage), METADATA_PARAMS(Z_Construct_UClass_AW_Weapon_Statics::NewProp_AttackDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AW_Weapon_Statics::NewProp_AttackDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AW_Weapon_Statics::NewProp_AttackModifier_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/W_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AW_Weapon_Statics::NewProp_AttackModifier = { "AttackModifier", nullptr, (EPropertyFlags)0x0020080000022815, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AW_Weapon, AttackModifier), METADATA_PARAMS(Z_Construct_UClass_AW_Weapon_Statics::NewProp_AttackModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AW_Weapon_Statics::NewProp_AttackModifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AW_Weapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AW_Weapon_Statics::NewProp_Weapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AW_Weapon_Statics::NewProp_AttackRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AW_Weapon_Statics::NewProp_AttackDamageMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AW_Weapon_Statics::NewProp_AttackDamageMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AW_Weapon_Statics::NewProp_AttackModifierMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AW_Weapon_Statics::NewProp_AttackModifierMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AW_Weapon_Statics::NewProp_AttackDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AW_Weapon_Statics::NewProp_AttackModifier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AW_Weapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AW_Weapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AW_Weapon_Statics::ClassParams = {
		&AW_Weapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AW_Weapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AW_Weapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AW_Weapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AW_Weapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AW_Weapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AW_Weapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AW_Weapon, 1632951950);
	template<> WARRIOR_API UClass* StaticClass<AW_Weapon>()
	{
		return AW_Weapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AW_Weapon(Z_Construct_UClass_AW_Weapon, &AW_Weapon::StaticClass, TEXT("/Script/Warrior"), TEXT("AW_Weapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AW_Weapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
