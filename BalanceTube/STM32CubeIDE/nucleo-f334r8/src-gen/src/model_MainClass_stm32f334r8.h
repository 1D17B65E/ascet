/******************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED BY:..ASCET-DEVELOPER 7.9.0
 * CODE GENERATOR:..............6.4.7
 * COMPONENT:...................model.MainClass
 * REPRESENTATION:..............stm32f334r8
 * DESCRIPTION:
 *    
 ******************************************************************************/
#ifndef _ASD_MODEL_MAINCLASS_STM32F334R8_H_
#define _ASD_MODEL_MAINCLASS_STM32F334R8_H_


/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "esdl.h"
#if (!defined(ESDL_HEADER_VERSION) || (ESDL_HEADER_VERSION < 7))
# error NOT COMPLIANT (< compliance level 7) VERSION OF esdl.h FOUND; To fix that, delete the old headers (esdl_<...>.h) in include folder and restart build again to get the new version of those files.
#endif
#include "chartab.h"
#include "model_GameController_Automatic.h"
#include "model_LedController_stm32f334r8.h"
#include "model_ServoController_Automatic.h"


/******************************************************************************
 * BEGIN: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'model_MainClass_stm32f334r8'
 * ----------------------------------------------------------------------------
 * memory class:.................................'CAL_MEM'
 * ---------------------------------------------------------------------------*/
struct model_MainClass_stm32f334r8_CAL_MEM_SUBSTRUCT {
   struct model_GameController_Automatic_CAL_MEM_SUBSTRUCT gameController;
   struct model_ServoController_Automatic_CAL_MEM_SUBSTRUCT servoController;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'model_MainClass_stm32f334r8'
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'model_MainClass_stm32f334r8'
 * ----------------------------------------------------------------------------
 * memory class:.................................'RAM'
 * ---------------------------------------------------------------------------*/
struct model_MainClass_stm32f334r8_RAM_SUBSTRUCT {
   struct model_GameController_Automatic_RAM_SUBSTRUCT gameController;
   struct model_LedController_stm32f334r8_RAM_SUBSTRUCT ledController;
   struct model_ServoController_Automatic_RAM_SUBSTRUCT servoController;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'model_MainClass_stm32f334r8'
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF MAIN STRUCTURE FOR MODULE 'model_MainClass_stm32f334r8'
 * ----------------------------------------------------------------------------
 * memory class:.................................'ROM'
 * ---------------------------------------------------------------------------*/
struct model_MainClass_stm32f334r8 {
   struct model_GameController_Automatic gameController;
   struct model_LedController_stm32f334r8 ledController;
   struct model_ServoController_Automatic servoController;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MAIN STRUCTURE FOR MODULE 'model_MainClass_stm32f334r8'
 ******************************************************************************/

/* Following DEFINE signalizes the completion of definition                   */
/* of data structs for component: ................model_MainClass_stm32f334r8 */
#define _model_MainClass_stm32f334r8_TYPE_DEF_




/* forward declaration of substruct variable 'model_MainClass_CAL_MEM' */
/* containing 'CAL_MEM' memory class tree */
extern const volatile struct model_MainClass_stm32f334r8_CAL_MEM_SUBSTRUCT model_MainClass_CAL_MEM;

/* forward declaration of substruct variable 'model_MainClass_RAM' */
/* containing 'RAM' memory class tree */
extern struct model_MainClass_stm32f334r8_RAM_SUBSTRUCT model_MainClass_RAM;

/* forward declaration of component variable 'model_MainClass' */
/* containing 'ROM' memory class tree */
extern const struct model_MainClass_stm32f334r8 model_MainClass;

/******************************************************************************
 * BEGIN: declaration of global C functions defined by module model_MainClass_stm32f334r8
 ******************************************************************************/
extern void model_MainClass_stm32f334r8_step (void);



#endif /* _ASD_MODEL_MAINCLASS_STM32F334R8_H_ */