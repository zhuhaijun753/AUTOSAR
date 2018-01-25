/** @file     Rte_LightAlgo.h
  * 
  * @brief    Application header file
  * 
  * @note     AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
  * 
  * @note     Generated by ETAS GmbH  RTA-RTE v5.8.4  (R4.0 backend version: v7.8.7 (Build 46772))
  * 
  * @date     Thu Jan 25 11:18:33 2018
  */

#ifndef RTE_LIGHTALGO_H
#define RTE_LIGHTALGO_H

#ifndef RTE_CORE
#ifdef RTE_APPLICATION_HEADER_FILE
#error Multiple application header files included.
#endif /* RTE_APPLICATION_HEADER_FILE */
#define RTE_APPLICATION_HEADER_FILE
#endif /* RTE_CORE */

/*******************************************************
 ***
 *** Includes
 ***
 *******************************************************/

#include "Rte.h"
#include "Rte_LightAlgo_Type.h"

#include "Rte_DataHandleType.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#if defined(RTE_RUNNABLEAPI_RE_EmergencyLight)
   /* Do nothing for this and all elif clauses below (rte_sws_2751) */
#elif defined(RTE_RUNNABLEAPI_RE_LightAlgo)
#elif defined(RTE_RUNNABLEAPI_RE_LightAlgo2)
#else
   /* None of above defined so define value including all APIs (rte_sws_2751) */
   #define RTE_PRV_ALL_API
#endif

/*******************************************************
 ***
 *** Constants
 ***
 *******************************************************/


/*******************************************************
 ***
 *** Public Types
 ***
 *******************************************************/

/* BEGIN: SWC types (core visible) */
struct Rte_CDS_LightAlgo {
   /* Per-Instance Memorys (sic) */
   P2VAR(STATE_LIGHT                , AUTOMATIC, RTE_DATA) Pim_ArTypedPIM;
   P2VAR(Rte_PimType_LightAlgo_MyPim, AUTOMATIC, RTE_DATA) Pim_PIM_LightAlgo;
};
typedef struct Rte_CDS_LightAlgo Rte_CDS_LightAlgo;

/* END: SWC types (core visible) */

/*******************************************************
 ***
 *** Private Types
 ***
 *******************************************************/

/* BEGIN: SWC types (private) */
#ifndef RTE_CORE
typedef Rte_PimType_LightAlgo_MyPim MyPim;

#endif /* RTE_CORE */

/* END: SWC types (private) */

/*******************************************************
 ***
 *** Instance Declarations
 ***
 *******************************************************/

#define RTE_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
extern CONST(struct Rte_CDS_LightAlgo, RTE_CONST) Rte_Inst_LightAlgo;
#define RTE_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /*lint !e537 permit multiple inclusion */


#ifndef RTE_CORE
typedef CONSTP2CONST(struct Rte_CDS_LightAlgo, AUTOMATIC, RTE_CONST) Rte_Instance;
#endif /* RTE_CORE */

/*******************************************************
 ***
 *** API Mapping macros
 ***
 *******************************************************/

/* API Mapping Macros */
#ifndef RTE_CORE

#define RTE_START_SEC_CODE
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
FUNC(STATE_LIGHT, RTE_CODE) Rte_DRead_LightAlgo_RPortLightAL_LightState_pls(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_LightAlgo_RPortSetLight_SetLightActuator(VAR(STATE_LIGHT, AUTOMATIC) LightActuatorState);
FUNC(uint8, RTE_CODE) Rte_Mode_LightAlgo_REmergencyModeSwitch_EmergencyModeDeclarationGroup(void);
#define RTE_STOP_SEC_CODE
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_LightAlgo)
#define Rte_Call_RPortSetLight_SetLightActuator( LightActuatorState ) (Rte_Call_LightAlgo_RPortSetLight_SetLightActuator(LightActuatorState))
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_LightAlgo)
#define Rte_DRead_RPortLightAL_LightState_pls() (Rte_DRead_LightAlgo_RPortLightAL_LightState_pls())
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_EmergencyLight)
#define Rte_Mode_REmergencyModeSwitch_EmergencyModeDeclarationGroup() (Rte_Mode_LightAlgo_REmergencyModeSwitch_EmergencyModeDeclarationGroup())
#endif
#define Rte_Pim_ArTypedPIM()  ( (P2VAR(STATE_LIGHT, AUTOMATIC, RTE_APPL_DATA)) Rte_Inst_LightAlgo.Pim_ArTypedPIM )
#define Rte_Pim_PIM_LightAlgo()  ( (P2VAR(MyPim, AUTOMATIC, RTE_APPL_DATA)) Rte_Inst_LightAlgo.Pim_PIM_LightAlgo )

/* Rte_Irv API (explicit access) */
FUNC(STATE_LIGHT, RTE_CODE) Rte_IrvRead_LightAlgo_RE_LightAlgo2_Explicit_IRV_LightAlgo(void);
#define Rte_IrvRead_RE_LightAlgo2_Explicit_IRV_LightAlgo() Rte_IrvRead_LightAlgo_RE_LightAlgo2_Explicit_IRV_LightAlgo()
FUNC(void, RTE_CODE) Rte_IrvWrite_LightAlgo_RE_LightAlgo_Explicit_IRV_LightAlgo(VAR(STATE_LIGHT, AUTOMATIC) data);
#define Rte_IrvWrite_RE_LightAlgo_Explicit_IRV_LightAlgo(data) Rte_IrvWrite_LightAlgo_RE_LightAlgo_Explicit_IRV_LightAlgo(data)

#endif /* RTE_CORE */

/*******************************************************
 ***
 *** RE Prototypes
 ***
 *******************************************************/

#define LightAlgo_START_SEC_CODE
#include "LightAlgo_MemMap.h" /*lint !e537 permit multiple inclusion */
FUNC(void, LightAlgo_CODE) RE_EmergencyLight_func(void);
FUNC(void, LightAlgo_CODE) RE_LightAlgo2_func(void);
FUNC(void, LightAlgo_CODE) RE_LightAlgo_func(void);
#define LightAlgo_STOP_SEC_CODE
#include "LightAlgo_MemMap.h" /*lint !e537 permit multiple inclusion */

/* Initial values for data element prototypes */

#ifdef __cplusplus
} /* extern C */
#endif /* __cplusplus */

#endif /* RTE_LIGHTALGO_H */
