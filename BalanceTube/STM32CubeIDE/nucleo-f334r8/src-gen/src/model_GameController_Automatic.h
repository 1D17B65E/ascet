/******************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED BY:..ASCET-DEVELOPER 7.9.0
 * CODE GENERATOR:..............6.4.7
 * COMPONENT:...................model.GameController
 * REPRESENTATION:..............Automatic
 * DESCRIPTION:
 *    
 ******************************************************************************/
#ifndef _ASD_MODEL_GAMECONTROLLER_AUTOMATIC_H_
#define _ASD_MODEL_GAMECONTROLLER_AUTOMATIC_H_


/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "esdl.h"
#if (!defined(ESDL_HEADER_VERSION) || (ESDL_HEADER_VERSION < 7))
# error NOT COMPLIANT (< compliance level 7) VERSION OF esdl.h FOUND; To fix that, delete the old headers (esdl_<...>.h) in include folder and restart build again to get the new version of those files.
#endif
#include "chartab.h"
#include "SystemLib_CounterTimer_StopWatch_Automatic.h"
#include "SystemLib_CounterTimer_Timer_Automatic.h"
#include "SystemLib_Miscellaneous_EdgeRising_Impl.h"


/******************************************************************************
 * BEGIN: DEFINITION OF MEMORY CLASS STRUCTURE FOR CLASS 'model_GameController_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'CAL_MEM'
 * ---------------------------------------------------------------------------*/
struct model_GameController_Automatic_CAL_MEM_SUBSTRUCT {
   float32 gameTime;
   float32 scoringZone;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MEMORY CLASS STRUCTURE FOR CLASS 'model_GameController_Automatic'
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF MEMORY CLASS STRUCTURE FOR CLASS 'model_GameController_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'RAM'
 * ---------------------------------------------------------------------------*/
struct model_GameController_Automatic_RAM_SUBSTRUCT {
   float32 ballPosition;
   float32 score;
   uint8 sm;
   boolean startGame;
   struct SystemLib_Miscellaneous_EdgeRising_Impl_RAM_SUBSTRUCT edgeDetect;
   struct SystemLib_CounterTimer_StopWatch_Automatic_RAM_SUBSTRUCT stopWatch;
   struct SystemLib_CounterTimer_Timer_Automatic_RAM_SUBSTRUCT timer;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MEMORY CLASS STRUCTURE FOR CLASS 'model_GameController_Automatic'
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF MAIN STRUCTURE FOR CLASS 'model_GameController_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'ROM'
 * ---------------------------------------------------------------------------*/
struct model_GameController_Automatic {
   const volatile struct model_GameController_Automatic_CAL_MEM_SUBSTRUCT * model_GameController_Automatic_CAL_MEM;
   struct model_GameController_Automatic_RAM_SUBSTRUCT * model_GameController_Automatic_RAM;
   struct SystemLib_Miscellaneous_EdgeRising_Impl edgeDetect;
   struct SystemLib_CounterTimer_StopWatch_Automatic stopWatch;
   struct SystemLib_CounterTimer_Timer_Automatic timer;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MAIN STRUCTURE FOR CLASS 'model_GameController_Automatic'
 ******************************************************************************/

/* Following DEFINE signalizes the completion of definition                   */
/* of data structs for component: .............model_GameController_Automatic */
#define _model_GameController_Automatic_TYPE_DEF_




/******************************************************************************
 * BEGIN: declaration of global C functions defined by class model_GameController_Automatic
 ******************************************************************************/
extern uint8 model_GameController_Automatic_gameState ( const struct model_GameController_Automatic * self);
extern float32 model_GameController_Automatic_getTime ( const struct model_GameController_Automatic * self);
boolean model_GameController_Automatic_isCanceled ( const struct model_GameController_Automatic * self);
boolean model_GameController_Automatic_isInScoringZone ( const struct model_GameController_Automatic * self);
boolean model_GameController_Automatic_isStartGameButtonPushed ( const struct model_GameController_Automatic * self);
extern void model_GameController_Automatic_periodicTrigger ( const struct model_GameController_Automatic * self);



#endif /* _ASD_MODEL_GAMECONTROLLER_AUTOMATIC_H_ */
