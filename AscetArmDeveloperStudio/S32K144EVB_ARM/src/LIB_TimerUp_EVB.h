/******************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED BY:..ASCET-DEVELOPER V7.5.0
 * CODE GENERATOR:..............V7.5.0
 * COMPONENT:...................ascet.Lib.LIB_TimerUp
 * REPRESENTATION:..............EVB
 * DESCRIPTION:
 *    
 ******************************************************************************/
#ifndef _ASD_LIB_TIMERUP_EVB_H_
#define _ASD_LIB_TIMERUP_EVB_H_


/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "esdl.h"
#include "sysconsts.h"
#include "chartab.h"


/******************************************************************************
 * BEGIN: DEFINITION OF MEMORY CLASS STRUCTURE FOR CLASS 'LIB_TIMERUP_EVB'
 * ----------------------------------------------------------------------------
 * memory class:.................................'IRAM'
 * ---------------------------------------------------------------------------*/
struct LIB_TIMERUP_EVB_IRAM_SUBSTRUCT {
   uint16 LIB_TimeInternal;	/* min=0.0, max=65.53, esdl_f0_001, limit=yes */
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MEMORY CLASS STRUCTURE FOR CLASS 'LIB_TIMERUP_EVB'
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF MAIN STRUCTURE FOR CLASS 'LIB_TIMERUP_EVB'
 * ----------------------------------------------------------------------------
 * memory class:.................................'IFLASH'
 * ---------------------------------------------------------------------------*/
struct LIB_TIMERUP_EVB {
   struct LIB_TIMERUP_EVB_IRAM_SUBSTRUCT * LIB_TIMERUP_EVB_IRAM;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MAIN STRUCTURE FOR CLASS 'LIB_TIMERUP_EVB'
 ******************************************************************************/

/* Following DEFINE signalizes the completion of definition                   */
/* of data structs for component: ............................LIB_TIMERUP_EVB */
#define _LIB_TIMERUP_EVB_TYPE_DEF_




/******************************************************************************
 * BEGIN: declaration of global C functions defined by class LIB_TIMERUP_EVB
 ******************************************************************************/
extern uint16 LIB_TIMERUP_EVB_LIB_Time (
               struct LIB_TIMERUP_EVB * self,
   /* IN    */ boolean                  LIB_Reset,
   /* IN    */ uint16                   LIB_DT
   );



#endif /* _ASD_LIB_TIMERUP_EVB_H_ */
