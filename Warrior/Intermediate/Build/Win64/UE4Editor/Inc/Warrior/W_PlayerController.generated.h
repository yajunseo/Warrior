// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WARRIOR_W_PlayerController_generated_h
#error "W_PlayerController.generated.h already included, missing '#pragma once' in W_PlayerController.h"
#endif
#define WARRIOR_W_PlayerController_generated_h

#define Warrior_Source_Warrior_W_PlayerController_h_15_SPARSE_DATA
#define Warrior_Source_Warrior_W_PlayerController_h_15_RPC_WRAPPERS
#define Warrior_Source_Warrior_W_PlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Warrior_Source_Warrior_W_PlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAW_PlayerController(); \
	friend struct Z_Construct_UClass_AW_PlayerController_Statics; \
public: \
	DECLARE_CLASS(AW_PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Warrior"), NO_API) \
	DECLARE_SERIALIZER(AW_PlayerController)


#define Warrior_Source_Warrior_W_PlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAW_PlayerController(); \
	friend struct Z_Construct_UClass_AW_PlayerController_Statics; \
public: \
	DECLARE_CLASS(AW_PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Warrior"), NO_API) \
	DECLARE_SERIALIZER(AW_PlayerController)


#define Warrior_Source_Warrior_W_PlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AW_PlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AW_PlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AW_PlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AW_PlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AW_PlayerController(AW_PlayerController&&); \
	NO_API AW_PlayerController(const AW_PlayerController&); \
public:


#define Warrior_Source_Warrior_W_PlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AW_PlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AW_PlayerController(AW_PlayerController&&); \
	NO_API AW_PlayerController(const AW_PlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AW_PlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AW_PlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AW_PlayerController)


#define Warrior_Source_Warrior_W_PlayerController_h_15_PRIVATE_PROPERTY_OFFSET
#define Warrior_Source_Warrior_W_PlayerController_h_12_PROLOG
#define Warrior_Source_Warrior_W_PlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Warrior_Source_Warrior_W_PlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	Warrior_Source_Warrior_W_PlayerController_h_15_SPARSE_DATA \
	Warrior_Source_Warrior_W_PlayerController_h_15_RPC_WRAPPERS \
	Warrior_Source_Warrior_W_PlayerController_h_15_INCLASS \
	Warrior_Source_Warrior_W_PlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Warrior_Source_Warrior_W_PlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Warrior_Source_Warrior_W_PlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	Warrior_Source_Warrior_W_PlayerController_h_15_SPARSE_DATA \
	Warrior_Source_Warrior_W_PlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Warrior_Source_Warrior_W_PlayerController_h_15_INCLASS_NO_PURE_DECLS \
	Warrior_Source_Warrior_W_PlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WARRIOR_API UClass* StaticClass<class AW_PlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Warrior_Source_Warrior_W_PlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
