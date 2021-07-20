// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/W_GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW_GameInstance() {}
// Cross Module References
	WARRIOR_API UScriptStruct* Z_Construct_UScriptStruct_FW_CharacterData();
	UPackage* Z_Construct_UPackage__Script_Warrior();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	WARRIOR_API UClass* Z_Construct_UClass_UW_GameInstance_NoRegister();
	WARRIOR_API UClass* Z_Construct_UClass_UW_GameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FW_CharacterData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FW_CharacterData cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FW_CharacterData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern WARRIOR_API uint32 Get_Z_Construct_UScriptStruct_FW_CharacterData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FW_CharacterData, Z_Construct_UPackage__Script_Warrior(), TEXT("W_CharacterData"), sizeof(FW_CharacterData), Get_Z_Construct_UScriptStruct_FW_CharacterData_Hash());
	}
	return Singleton;
}
template<> WARRIOR_API UScriptStruct* StaticStruct<FW_CharacterData>()
{
	return FW_CharacterData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FW_CharacterData(FW_CharacterData::StaticStruct, TEXT("/Script/Warrior"), TEXT("W_CharacterData"), false, nullptr, nullptr);
static struct FScriptStruct_Warrior_StaticRegisterNativesFW_CharacterData
{
	FScriptStruct_Warrior_StaticRegisterNativesFW_CharacterData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("W_CharacterData")),new UScriptStruct::TCppStructOps<FW_CharacterData>);
	}
} ScriptStruct_Warrior_StaticRegisterNativesFW_CharacterData;
	struct Z_Construct_UScriptStruct_FW_CharacterData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attack_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Attack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DropExp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DropExp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextExp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NextExp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FW_CharacterData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "W_GameInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FW_CharacterData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FW_CharacterData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FW_CharacterData_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "W_GameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FW_CharacterData_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FW_CharacterData, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FW_CharacterData_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FW_CharacterData_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FW_CharacterData_Statics::NewProp_MaxHP_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "W_GameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FW_CharacterData_Statics::NewProp_MaxHP = { "MaxHP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FW_CharacterData, MaxHP), METADATA_PARAMS(Z_Construct_UScriptStruct_FW_CharacterData_Statics::NewProp_MaxHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FW_CharacterData_Statics::NewProp_MaxHP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FW_CharacterData_Statics::NewProp_Attack_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "W_GameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FW_CharacterData_Statics::NewProp_Attack = { "Attack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FW_CharacterData, Attack), METADATA_PARAMS(Z_Construct_UScriptStruct_FW_CharacterData_Statics::NewProp_Attack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FW_CharacterData_Statics::NewProp_Attack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FW_CharacterData_Statics::NewProp_DropExp_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "W_GameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FW_CharacterData_Statics::NewProp_DropExp = { "DropExp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FW_CharacterData, DropExp), METADATA_PARAMS(Z_Construct_UScriptStruct_FW_CharacterData_Statics::NewProp_DropExp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FW_CharacterData_Statics::NewProp_DropExp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FW_CharacterData_Statics::NewProp_NextExp_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "W_GameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FW_CharacterData_Statics::NewProp_NextExp = { "NextExp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FW_CharacterData, NextExp), METADATA_PARAMS(Z_Construct_UScriptStruct_FW_CharacterData_Statics::NewProp_NextExp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FW_CharacterData_Statics::NewProp_NextExp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FW_CharacterData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FW_CharacterData_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FW_CharacterData_Statics::NewProp_MaxHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FW_CharacterData_Statics::NewProp_Attack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FW_CharacterData_Statics::NewProp_DropExp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FW_CharacterData_Statics::NewProp_NextExp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FW_CharacterData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"W_CharacterData",
		sizeof(FW_CharacterData),
		alignof(FW_CharacterData),
		Z_Construct_UScriptStruct_FW_CharacterData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FW_CharacterData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FW_CharacterData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FW_CharacterData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FW_CharacterData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FW_CharacterData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Warrior();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("W_CharacterData"), sizeof(FW_CharacterData), Get_Z_Construct_UScriptStruct_FW_CharacterData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FW_CharacterData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FW_CharacterData_Hash() { return 3150409454U; }
	void UW_GameInstance::StaticRegisterNativesUW_GameInstance()
	{
	}
	UClass* Z_Construct_UClass_UW_GameInstance_NoRegister()
	{
		return UW_GameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UW_GameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_W_CharacterTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_W_CharacterTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UW_GameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UW_GameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "W_GameInstance.h" },
		{ "ModuleRelativePath", "W_GameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UW_GameInstance_Statics::NewProp_W_CharacterTable_MetaData[] = {
		{ "ModuleRelativePath", "W_GameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW_GameInstance_Statics::NewProp_W_CharacterTable = { "W_CharacterTable", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UW_GameInstance, W_CharacterTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UW_GameInstance_Statics::NewProp_W_CharacterTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UW_GameInstance_Statics::NewProp_W_CharacterTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UW_GameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_GameInstance_Statics::NewProp_W_CharacterTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UW_GameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UW_GameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UW_GameInstance_Statics::ClassParams = {
		&UW_GameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UW_GameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UW_GameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UW_GameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UW_GameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UW_GameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UW_GameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UW_GameInstance, 2919105358);
	template<> WARRIOR_API UClass* StaticClass<UW_GameInstance>()
	{
		return UW_GameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UW_GameInstance(Z_Construct_UClass_UW_GameInstance, &UW_GameInstance::StaticClass, TEXT("/Script/Warrior"), TEXT("UW_GameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UW_GameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
