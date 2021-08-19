// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WARRIOR_W_HUDWidget_generated_h
#error "W_HUDWidget.generated.h already included, missing '#pragma once' in W_HUDWidget.h"
#endif
#define WARRIOR_W_HUDWidget_generated_h

#define Warrior_Source_Warrior_Public_W_HUDWidget_h_15_SPARSE_DATA
#define Warrior_Source_Warrior_Public_W_HUDWidget_h_15_RPC_WRAPPERS
#define Warrior_Source_Warrior_Public_W_HUDWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Warrior_Source_Warrior_Public_W_HUDWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUW_HUDWidget(); \
	friend struct Z_Construct_UClass_UW_HUDWidget_Statics; \
public: \
	DECLARE_CLASS(UW_HUDWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Warrior"), NO_API) \
	DECLARE_SERIALIZER(UW_HUDWidget)


#define Warrior_Source_Warrior_Public_W_HUDWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUW_HUDWidget(); \
	friend struct Z_Construct_UClass_UW_HUDWidget_Statics; \
public: \
	DECLARE_CLASS(UW_HUDWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Warrior"), NO_API) \
	DECLARE_SERIALIZER(UW_HUDWidget)


#define Warrior_Source_Warrior_Public_W_HUDWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UW_HUDWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UW_HUDWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UW_HUDWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UW_HUDWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UW_HUDWidget(UW_HUDWidget&&); \
	NO_API UW_HUDWidget(const UW_HUDWidget&); \
public:


#define Warrior_Source_Warrior_Public_W_HUDWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UW_HUDWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UW_HUDWidget(UW_HUDWidget&&); \
	NO_API UW_HUDWidget(const UW_HUDWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UW_HUDWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UW_HUDWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UW_HUDWidget)


#define Warrior_Source_Warrior_Public_W_HUDWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HPBar() { return STRUCT_OFFSET(UW_HUDWidget, HPBar); } \
	FORCEINLINE static uint32 __PPO__ExpBar() { return STRUCT_OFFSET(UW_HUDWidget, ExpBar); } \
	FORCEINLINE static uint32 __PPO__PlayerName() { return STRUCT_OFFSET(UW_HUDWidget, PlayerName); } \
	FORCEINLINE static uint32 __PPO__PlayerLevel() { return STRUCT_OFFSET(UW_HUDWidget, PlayerLevel); } \
	FORCEINLINE static uint32 __PPO__CurrentScore() { return STRUCT_OFFSET(UW_HUDWidget, CurrentScore); } \
	FORCEINLINE static uint32 __PPO__HighScore() { return STRUCT_OFFSET(UW_HUDWidget, HighScore); }


#define Warrior_Source_Warrior_Public_W_HUDWidget_h_12_PROLOG
#define Warrior_Source_Warrior_Public_W_HUDWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Warrior_Source_Warrior_Public_W_HUDWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	Warrior_Source_Warrior_Public_W_HUDWidget_h_15_SPARSE_DATA \
	Warrior_Source_Warrior_Public_W_HUDWidget_h_15_RPC_WRAPPERS \
	Warrior_Source_Warrior_Public_W_HUDWidget_h_15_INCLASS \
	Warrior_Source_Warrior_Public_W_HUDWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Warrior_Source_Warrior_Public_W_HUDWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Warrior_Source_Warrior_Public_W_HUDWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	Warrior_Source_Warrior_Public_W_HUDWidget_h_15_SPARSE_DATA \
	Warrior_Source_Warrior_Public_W_HUDWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Warrior_Source_Warrior_Public_W_HUDWidget_h_15_INCLASS_NO_PURE_DECLS \
	Warrior_Source_Warrior_Public_W_HUDWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WARRIOR_API UClass* StaticClass<class UW_HUDWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Warrior_Source_Warrior_Public_W_HUDWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
