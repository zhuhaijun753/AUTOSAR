/** @file     Rte_Sensor_swc.h
  * 
  * @brief    Application header file
  * 
  * @note     AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
  * 
  * @note     Generated by ETAS GmbH  RTA-RTE v5.8.4  (R4.0 backend version: v7.8.7 (Build 46772))
  * 
  * @date     Thu Jan 25 14:23:35 2018
  */

#ifndef RTE_SENSOR_SWC_H
#define RTE_SENSOR_SWC_H

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
#include "Rte_Intl.h"
#include "Rte_Sensor_swc_Type.h"

#include "Rte_DataHandleType.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#if defined(RTE_RUNNABLEAPI_RE_sensor_1)
   /* Do nothing for this and all elif clauses below (rte_sws_2751) */
#elif defined(RTE_RUNNABLEAPI_RE_sensor_2)
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
struct Rte_CDS_Sensor_swc {
   uint8 _dummy;
};
typedef struct Rte_CDS_Sensor_swc Rte_CDS_Sensor_swc;

/* END: SWC types (core visible) */

/*******************************************************
 ***
 *** Private Types
 ***
 *******************************************************/

/* BEGIN: SWC types (private) */
/* END: SWC types (private) */

/*******************************************************
 ***
 *** Instance Declarations
 ***
 *******************************************************/

#define RTE_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
extern CONST(struct Rte_CDS_Sensor_swc, RTE_CONST) Rte_Inst_Sensor_swc;
#define RTE_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /*lint !e537 permit multiple inclusion */


#ifndef RTE_CORE
typedef CONSTP2CONST(struct Rte_CDS_Sensor_swc, AUTOMATIC, RTE_CONST) Rte_Instance;
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
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Sensor_swc_P_send_sr_test(VAR(uint8, AUTOMATIC) data);
FUNC(void, RTE_CODE) Rte_Trigger_Sensor_swc_P_trigger_tr_test(void);
#define RTE_STOP_SEC_CODE
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
#define RTE_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
extern CONST(Rte_SelfType_ECU_ABS, RTE_CONST) Rte_Self_CPT_ECU_ABS;
#define RTE_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
#define ECU_ABS_START_SEC_CODE
#include "ECU_ABS_MemMap.h" /*lint !e537 permit multiple inclusion */
FUNC(void, ECU_ABS_CODE) RE_server_func(VAR(uint8, AUTOMATIC) test_1,
                                        CONSTP2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) test_2);

#define ECU_ABS_STOP_SEC_CODE
#include "ECU_ABS_MemMap.h" /*lint !e537 permit multiple inclusion */
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_sensor_1)
/* Inline function call optimization; Rte_Call_R_client_cs_test to RE_server_func */
#define Rte_Call_R_client_cs_test( test_1, test_2 ) ( RE_server_func(test_1, test_2), ((VAR(Std_ReturnType, AUTOMATIC))RTE_E_OK) )

#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_sensor_1)
#define Rte_Trigger_P_trigger_tr_test() (Rte_Trigger_Sensor_swc_P_trigger_tr_test())
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_sensor_2)
#define Rte_Write_P_send_sr_test( data ) (Rte_Write_Sensor_swc_P_send_sr_test(data))
#endif

/* IRV externs (explicit access) */
#define RTE_START_SEC_VAR_8BIT
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
extern VAR(uint8, RTE_DATA) CPT_Sensor_swc_IB_Sensor_swc_Explicit_VariableDataPrototype_0;
#define RTE_STOP_SEC_VAR_8BIT
#include "MemMap.h" /*lint !e537 permit multiple inclusion */


/* Rte_Irv API (explicit access) */
/* Inline read optimization; Rte_IrvRead_RE_sensor_2_Explicit_VariableDataPrototype_0 to direct read */
#define Rte_IrvRead_RE_sensor_2_Explicit_VariableDataPrototype_0()  ( CPT_Sensor_swc_IB_Sensor_swc_Explicit_VariableDataPrototype_0 )

/* Inline IrvWrite optimization; Rte_IrvWrite_RE_sensor_1_Explicit_VariableDataPrototype_0 to direct write */
#define Rte_IrvWrite_RE_sensor_1_Explicit_VariableDataPrototype_0(data) ( RTE_ATOMIC8(CPT_Sensor_swc_IB_Sensor_swc_Explicit_VariableDataPrototype_0 = data) )


#endif /* RTE_CORE */

/*******************************************************
 ***
 *** RE Prototypes
 ***
 *******************************************************/

#define Sensor_swc_START_SEC_CODE
#include "Sensor_swc_MemMap.h" /*lint !e537 permit multiple inclusion */
FUNC(void, Sensor_swc_CODE) RE_sensor_1_func(void);
FUNC(void, Sensor_swc_CODE) RE_sensor_2_func(void);
#define Sensor_swc_STOP_SEC_CODE
#include "Sensor_swc_MemMap.h" /*lint !e537 permit multiple inclusion */

/* Initial values for data element prototypes */

#ifdef __cplusplus
} /* extern C */
#endif /* __cplusplus */

#endif /* RTE_SENSOR_SWC_H */
