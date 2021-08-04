// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WARRIOR_W_GameInstance_generated_h
#error "W_GameInstance.generated.h already included, missing '#pragma once' in W_GameInstance.h"
#endif
#define WARRIOR_W_GameInstance_generated_h

#define Warrior_Source_Warrior_Public_W_GameInstance_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FW_CharacterData_Statics; \
	WARRIOR_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> WARRIOR_API UScriptStruct* StaticStruct<struct FW_CharacterData>();

#define Warrior_Source_Warrior_Public_W_GameInstance_h_40_SPARSE_DATA
#define Warrior_Source_Warrior_Public_W_GameInstance_h_40_RPC_WRAPPERS
#define Warrior_Source_Warrior_Public_W_GameInstance_h_40_RPC_WRAPPERS_NO_PURE_DECLS
#define Warrior_Source_Warrior_Public_W_GameInstance_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUW_GameInstance(); \
	friend struct Z_Construct_UClass_UW_GameInstance_Statics; \
public: \
	DECLARE_CLASS(UW_GameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Warrior"), NO_API) \
	DECLARE_SERIALIZER(UW_GameInstance)


#define Warrior_Source_Warrior_Public_W_GameInstance_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUW_GameInstance(); \
	friend struct Z_Construct_UClass_UW_GameInstance_Statics; \
public: \
	DECLARE_CLASS(UW_GameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Warrior"), NO_API) \
	DECLARE_SERIALIZER(UW_GameInstance)


#define Warrior_Source_Warrior_Public_W_GameInstance_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UW_GameInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UW_GameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UW_GameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UW_GameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UW_GameInstance(UW_GameInstance&&); \
	NO_API UW_GameInstance(const UW_GameInstance&); \
public:


#define Warrior_Source_Warrior_Public_W_GameInstance_h_40_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UW_GameInstance(UW_GameInstance&&); \
	NO_API UW_GameInstance(const UW_GameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UW_GameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UW_GameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UW_GameInstance)


#define Warrior_Source_Warrior_Public_W_GameInstance_h_40_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__W_CharacterTable() { return STRUCT_OFFSET(UW_GameInstance, W_CharacterTable); }


#define Warrior_Source_Warrior_Public_W_GameInstance_h_37_PROLOG
#define Warrior_Source_Warrior_Public_W_GameInstance_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Warrior_Source_Warrior_Public_W_GameInstance_h_40_PRIVATE_PROPERTY_OFFSET \
	Warrior_Source_Warrior_Public_W_GameInstance_h_40_SPARSE_DATA \
	Warrior_Source_Warrior_Public_W_GameInstance_h_40_RPC_WRAPPERS \
	Warrior_Source_Warrior_Public_W_GameInstance_h_40_INCLASS \
	Warrior_Source_Warrior_Public_W_GameInstance_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Warrior_Source_Warrior_Public_W_GameInstance_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Warrior_Source_Warrior_Public_W_GameInstance_h_40_PRIVATE_PROPERTY_OFFSET \
	Warrior_Source_Warrior_Public_W_GameInstance_h_40_SPARSE_DATA \
	Warrior_Source_Warrior_Public_W_GameInstance_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	Warrior_Source_Warrior_Public_W_GameInstance_h_40_INCLASS_NO_PURE_DECLS \
	Warrior_Source_Warrior_Public_W_GameInstance_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WARRIOR_API UClass* StaticClass<class UW_GameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Warrior_Source_Warrior_Public_W_GameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
