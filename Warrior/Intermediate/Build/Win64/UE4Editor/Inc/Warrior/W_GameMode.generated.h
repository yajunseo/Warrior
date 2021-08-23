// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WARRIOR_W_GameMode_generated_h
#error "W_GameMode.generated.h already included, missing '#pragma once' in W_GameMode.h"
#endif
#define WARRIOR_W_GameMode_generated_h

#define Warrior_Source_Warrior_Public_W_GameMode_h_15_SPARSE_DATA
#define Warrior_Source_Warrior_Public_W_GameMode_h_15_RPC_WRAPPERS
#define Warrior_Source_Warrior_Public_W_GameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Warrior_Source_Warrior_Public_W_GameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAW_GameMode(); \
	friend struct Z_Construct_UClass_AW_GameMode_Statics; \
public: \
	DECLARE_CLASS(AW_GameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Warrior"), NO_API) \
	DECLARE_SERIALIZER(AW_GameMode)


#define Warrior_Source_Warrior_Public_W_GameMode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAW_GameMode(); \
	friend struct Z_Construct_UClass_AW_GameMode_Statics; \
public: \
	DECLARE_CLASS(AW_GameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Warrior"), NO_API) \
	DECLARE_SERIALIZER(AW_GameMode)


#define Warrior_Source_Warrior_Public_W_GameMode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AW_GameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AW_GameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AW_GameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AW_GameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AW_GameMode(AW_GameMode&&); \
	NO_API AW_GameMode(const AW_GameMode&); \
public:


#define Warrior_Source_Warrior_Public_W_GameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AW_GameMode(AW_GameMode&&); \
	NO_API AW_GameMode(const AW_GameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AW_GameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AW_GameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AW_GameMode)


#define Warrior_Source_Warrior_Public_W_GameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__W_GameState() { return STRUCT_OFFSET(AW_GameMode, W_GameState); } \
	FORCEINLINE static uint32 __PPO__ScoreToClear() { return STRUCT_OFFSET(AW_GameMode, ScoreToClear); }


#define Warrior_Source_Warrior_Public_W_GameMode_h_12_PROLOG
#define Warrior_Source_Warrior_Public_W_GameMode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Warrior_Source_Warrior_Public_W_GameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	Warrior_Source_Warrior_Public_W_GameMode_h_15_SPARSE_DATA \
	Warrior_Source_Warrior_Public_W_GameMode_h_15_RPC_WRAPPERS \
	Warrior_Source_Warrior_Public_W_GameMode_h_15_INCLASS \
	Warrior_Source_Warrior_Public_W_GameMode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Warrior_Source_Warrior_Public_W_GameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Warrior_Source_Warrior_Public_W_GameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	Warrior_Source_Warrior_Public_W_GameMode_h_15_SPARSE_DATA \
	Warrior_Source_Warrior_Public_W_GameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Warrior_Source_Warrior_Public_W_GameMode_h_15_INCLASS_NO_PURE_DECLS \
	Warrior_Source_Warrior_Public_W_GameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WARRIOR_API UClass* StaticClass<class AW_GameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Warrior_Source_Warrior_Public_W_GameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
