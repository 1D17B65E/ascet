/******************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED BY:..ASCET-DEVELOPER V7.5.0
 * CODE GENERATOR:..............V7.5.0
 * COMPONENT:...................ascet.IN.IN_CANMessageInit
 * REPRESENTATION:..............EVB
 * DESCRIPTION:
 *    
 ******************************************************************************/
#ifndef _ASD_IN_CANMESSAGEINIT_EVB_H_
#define _ASD_IN_CANMESSAGEINIT_EVB_H_


/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "esdl.h"
#include "sysconsts.h"
#include "chartab.h"


/* component structure for class IN_CANMESSAGEINIT_EVB intentionally not created */
/* reason: no local elements                                                  */

/* Following DEFINE signalizes the completion of definition                   */
/* of data structs for component: ......................IN_CANMESSAGEINIT_EVB */
#define _IN_CANMESSAGEINIT_EVB_TYPE_DEF_




/******************************************************************************
 * BEGIN: declaration of global C functions defined by class IN_CANMESSAGEINIT_EVB
 ******************************************************************************/
extern sint8 IN_CANMESSAGEINIT_EVB_initCANMsg (
   /* IN    */ uint8   IN_CANChannel,
   /* IN    */ uint32  IN_CANID,
   /* IN    */ boolean IN_TxMsg,
   /* IN    */ boolean IN_ExtendedMsg,
   /* IN    */ uint8   IN_MsgLength
   );



#endif /* _ASD_IN_CANMESSAGEINIT_EVB_H_ */