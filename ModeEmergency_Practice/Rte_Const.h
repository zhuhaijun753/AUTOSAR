/** @file     Rte_Const.h
  * 
  * @brief    RTA-RTE related configuration constants
  * 
  * @note     AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
  * 
  * @note     Generated by ETAS GmbH  RTA-RTE v5.8.4  (R4.0 backend version: v7.8.7 (Build 46772))
  * 
  * @date     Thu Jan 25 11:18:44 2018
  */

#ifndef RTE_CONST_H
#define RTE_CONST_H

#define RTE_CALPRM_NONE                          (1)
#define RTE_COMPATIBILITY_MODE                   (1)
#define RTE_MAINFUNCTION_PERIOD_MS               (10)
#define RTE_MAINFUNCTION_PERIOD_NS               (10000000)
#define RTE_MAINFUNCTION_PERIOD_US               (10000)
#define RTE_MEASUREMENT_ENABLED                  (1)
/* Box: Rte: OS Environment begin */
/* The following OSENV_ macros are supported by this OS DLL: */
/* OSENV_UNSUPPORTED */
/* OSENV_RTAOS40 */
#if defined(OSENV_RTAOS40)
#if defined( OSENV_UNSUPPORTED )
#error "Please define exactly one of [ OSENV_RTAOS40, OSENV_UNSUPPORTED ] for OS_AUTOSAR40 DLL OS API."
#endif /* defined( OSENV_UNSUPPORTED ) */
#elif defined(OSENV_UNSUPPORTED)
#else
#error "Please define exactly one of [ OSENV_RTAOS40, OSENV_UNSUPPORTED ] for OS_AUTOSAR40 DLL OS API."
#endif
/* Box: Rte: OS Environment end */
#endif /* RTE_CONST_H */
