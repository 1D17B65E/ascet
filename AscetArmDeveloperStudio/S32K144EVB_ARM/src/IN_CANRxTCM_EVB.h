/******************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED BY:..ASCET-DEVELOPER V7.5.0
 * CODE GENERATOR:..............V7.5.0
 * COMPONENT:...................ascet.IN.IN_CANRxTCM
 * REPRESENTATION:..............EVB
 * DESCRIPTION:
 *    
 ******************************************************************************/
#ifndef _ASD_IN_CANRXTCM_EVB_H_
#define _ASD_IN_CANRXTCM_EVB_H_


/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "esdl.h"
#include "sysconsts.h"
#include "chartab.h"
#include "T_CANTCMLever_EVB.h"


/* component structure for class IN_CANRXTCM_EVB intentionally not created    */
/* reason: no local elements                                                  */

/* Following DEFINE signalizes the completion of definition                   */
/* of data structs for component: ............................IN_CANRXTCM_EVB */
#define _IN_CANRXTCM_EVB_TYPE_DEF_




/******************************************************************************
 * BEGIN: declaration of global C functions defined by class IN_CANRXTCM_EVB
 ******************************************************************************/
extern struct T_CANTCMLEVER_EVB * IN_CANRXTCM_EVB_rxCANMsg (void);
extern boolean IN_CANRXTCM_EVB_rxCANNewData (/* IN    */ sint8 IN_CANRxHandle);



#endif /* _ASD_IN_CANRXTCM_EVB_H_ */