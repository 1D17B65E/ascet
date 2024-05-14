/******************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED BY:..ASCET-DEVELOPER V7.5.0
 * CODE GENERATOR:..............V7.5.0
 * COMPONENT:...................interfaces.INInterface
 * REPRESENTATION:..............EVB
 * DESCRIPTION:
 *    
 ******************************************************************************/
#ifndef _ASD_ININTERFACE_EVB_H_
#define _ASD_ININTERFACE_EVB_H_


/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "esdl.h"
#include "sysconsts.h"
#include "chartab.h"
#include "T_InputCapture_EVB.h"
#include "T_LeverIn_EVB.h"


/* component structure for module ININTERFACE_EVB intentionally not created   */
/* reason: no local elements                                                  */

/* Following DEFINE signalizes the completion of definition                   */
/* of data structs for component: ............................ININTERFACE_EVB */
#define _ININTERFACE_EVB_TYPE_DEF_



/******************************************************************************
 * BEGIN: declaration of global C variables exported by module ININTERFACE_EVB
 ******************************************************************************/


/* declaration of messages */
extern uint16 INInterface_IN_ADC0_PTD4;
   /* min=0.0, max=5.0, f_anin, limit=yes */
extern uint16 INInterface_IN_ADC10_PTA1;
   /* min=0.0, max=5.0, f_anin, limit=yes */
extern uint16 INInterface_IN_ADC11_PTA0;
   /* min=0.0, max=5.0, f_anin, limit=yes */
extern uint16 INInterface_IN_ADC12_PTA7;
   /* min=0.0, max=5.0, f_anin, limit=yes */
extern uint16 INInterface_IN_ADC13_PTB13;
   /* min=0.0, max=5.0, f_anin, limit=yes */
extern uint16 INInterface_IN_ADC14_PTC1;
   /* min=0.0, max=5.0, f_anin, limit=yes */
extern uint16 INInterface_IN_ADC15_PTC2;
   /* min=0.0, max=5.0, f_anin, limit=yes */
extern uint16 INInterface_IN_ADC1_PTB12;
   /* min=0.0, max=5.0, f_anin, limit=yes */
extern uint16 INInterface_IN_ADC2_PTB0;
   /* min=0.0, max=5.0, f_anin, limit=yes */
extern uint16 INInterface_IN_ADC3_PTB1;
   /* min=0.0, max=5.0, f_anin, limit=yes */
extern uint16 INInterface_IN_ADC4_PTA6;
   /* min=0.0, max=5.0, f_anin, limit=yes */
extern uint16 INInterface_IN_ADC5_PTC0;
   /* min=0.0, max=5.0, f_anin, limit=yes */
extern uint16 INInterface_IN_ADC6_PTE2;
   /* min=0.0, max=5.0, f_anin, limit=yes */
extern uint16 INInterface_IN_ADC7_PTE6;
   /* min=0.0, max=5.0, f_anin, limit=yes */
extern uint16 INInterface_IN_ADC8_PTA15;
   /* min=0.0, max=5.0, f_anin, limit=yes */
extern uint16 INInterface_IN_ADC9_PTA16;
   /* min=0.0, max=5.0, f_anin, limit=yes */
extern struct T_INPUTCAPTURE_EVB INInterface_IN_D0_IC_PTA2;
extern boolean INInterface_IN_D0_PTA2;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_D10_PTB5;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_D11_PTB4;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_D12_PTB3;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_D13_PTB2;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_D14_PTA9;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_D14_PTE11;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_D15_PTA8;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_D15_PTE10;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_D16_PTE12;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_D17_PTD17;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_D18_PTC9;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_D19_PTC8;
   /* min=0, max=1, Identity, limit=yes */
extern struct T_INPUTCAPTURE_EVB INInterface_IN_D1_IC_PTA3;
extern boolean INInterface_IN_D1_PTA3;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_D20_PTD8_;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_D21_PTD9;
   /* min=0, max=1, Identity, limit=yes */
extern struct T_INPUTCAPTURE_EVB INInterface_IN_D2_IC_PTB10;
extern boolean INInterface_IN_D2_PTB8;
   /* min=0, max=1, Identity, limit=yes */
extern struct T_INPUTCAPTURE_EVB INInterface_IN_D3_IC_PTB11;
extern boolean INInterface_IN_D3_PTB9;
   /* min=0, max=1, Identity, limit=yes */
extern struct T_INPUTCAPTURE_EVB INInterface_IN_D4_IC_PTC10;
extern boolean INInterface_IN_D4_PTB10;
   /* min=0, max=1, Identity, limit=yes */
extern struct T_INPUTCAPTURE_EVB INInterface_IN_D5_IC_PTC11;
extern boolean INInterface_IN_D5_PTB11;
   /* min=0, max=1, Identity, limit=yes */
extern struct T_INPUTCAPTURE_EVB INInterface_IN_D6_IC_PTC12;
extern boolean INInterface_IN_D6_PTC10;
   /* min=0, max=1, Identity, limit=yes */
extern struct T_INPUTCAPTURE_EVB INInterface_IN_D7_IC_PTC13;
extern boolean INInterface_IN_D7_PTC11;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_D8_PTD13;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_D9_PTD14;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTA10;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTA11;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTA12;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTA13;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTA14;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTA17;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTA4;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTB14;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTB15;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTB16;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTB17;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTB6;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTB7;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTC12;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTC13;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTC14;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTC15;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTC16;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTC17;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTC3;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTC4;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTC5;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTC6;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTC7;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTD0;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTD0_;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTD1;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTD10;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTD11;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTD12;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTD15;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTD16;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTD2;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTD3;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTD3_;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTD5;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTD6;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTD7;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTE0;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTE1;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTE13;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTE14;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTE15;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTE16;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTE3;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTE4;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTE5;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTE7;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTE8;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_GPIOPTE9;
   /* min=0, max=1, Identity, limit=yes */
extern struct T_LEVERIN_EVB INInterface_IN_LeverIn;
extern uint16 INInterface_IN_Potentiometer_PTC14;
   /* min=0.0, max=5.0, f_anin, limit=yes */
extern boolean INInterface_IN_SW2_PTC12;
   /* min=0, max=1, Identity, limit=yes */
extern boolean INInterface_IN_SW3_PTC13;
   /* min=0, max=1, Identity, limit=yes */


#endif /* _ASD_ININTERFACE_EVB_H_ */
