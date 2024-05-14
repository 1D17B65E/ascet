/******************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED BY:..ASCET-DEVELOPER V7.5.0
 * CODE GENERATOR:..............V7.5.0
 * COMPONENT:...................ascet.APP.APP_RGBControl
 * REPRESENTATION:..............EVB
 * DESCRIPTION:
 *    
 ******************************************************************************/



/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "globalH.h"
#include "APP_RGBControl_EVB.h"
#include "S32K144Build_ARM_ArithmeticServices_EVB.h"
#include "Linear_Interpolation_S32.h"


/******************************************************************************
 * BEGIN: Generation Information
 *-----------------------------------------------------------------------------
 * Component:................State Machine
 * Name:....................."APP_RGBControl"
 * Implementation:..........."EVB"
 * Dataset:.................."esdl_Data_Default"
 * Specification:............State Machine
 * Version:..................<empty String>
 * Repository Path:..........<empty String>
 * Library Path:............."\ascet\APP"
 *-----------------------------------------------------------------------------
 * Project Name:............."S32K144Build_ARM_ArithmeticServices"
 * Project Library Path:....."\_project\"
 *-----------------------------------------------------------------------------
 * Generation Date:..........02/12/2020
 * Generation Time:..........11:47:50
 *-----------------------------------------------------------------------------
 * ASCET Version:............V7.5.0
 * ASCET-MD Version:.........V7.5.0
 * ASCET-RP Version:.........not installed
 * ASCET-SE Version:.........V6.4.4-0197
 *-----------------------------------------------------------------------------
 * END: Generation Information
 ******************************************************************************/



/******************************************************************************
 * BEGIN: Project Options "Build"/"Code"
 *-----------------------------------------------------------------------------
 *    Build
 *-----------------------------------------------------------------------------
 * Code Generator:...........Object Based Controller Implementation
 * Compiler:.................Virtual ESDL Compiler
 * Operating System:.........GENERIC_OSEK
 * Target:...................ANSI-C for ESDL
 *-----------------------------------------------------------------------------
 *    Code
 *-----------------------------------------------------------------------------
 * Add Comment with Generation Information for each Component [true]: true
 * Add Comment with Implementation Information for each Assignment Statement [true]: true
 * Add Comment with Specification Source for each Statement [true]:..true
 * Add parenthesis for readability [true]:...........................true
 * Allow References without Init Value [false]:......................false
 * Casting [MISRA]:..................................................MISRA
 * Force Parenthesis for Binary Logical Operators [true]:............true
 * Generate Define Directives for Enum Values [false]:...............false
 * Prefix for Component Names [<empty String>]:......................<empty String>
 * Protected against division by zero [true]:........................true
 * Protected Division against Signed Overflow [true]:................true
 * Protected Vector Indices [true]:..................................true
 * Result on Division by Zero [numerator]:...........................numerator
 * Use Redundant Data Storage [true]:................................true
 *-----------------------------------------------------------------------------
 *    Code.Compiler
 *-----------------------------------------------------------------------------
 * Division truncation direction [Zero (T-division)]:................Zero (T-division)
 * Inline directive [<empty String>]:................................<empty String>
 * Integer Bit Size [32]:............................................32
 * Private directive [<empty String>]:...............................<empty String>
 * Public directive [<empty String>]:................................<empty String>
 *-----------------------------------------------------------------------------
 *    Code.FixedPoint
 *-----------------------------------------------------------------------------
 * Allow Double bit Size for Division Numerators [true]:.............true
 * Arithmetic Service Set [<None>]:..................................example
 * Generate Float Limiter on Assignment [false]:.....................false
 * Generate Round Operation on float to integer Assignment [true]:...true
 * Maximum bit Length (int) [32]:....................................32
 * New Behaviour for Discrete Types [true]:..........................true
 * Temp Vars always 32 bit (integer) [false]:........................false
 * Use power of 2 approximations of literals [false]:................true
 * Use SHIFT Operation on Signed Values instead of DIV Operation [false]: false
 * Use SHIFT Operation on Signed Values instead of MUL Operation [false]: false
 *-----------------------------------------------------------------------------
 *    Code.Optimizations
 *-----------------------------------------------------------------------------
 * Auto-inline private methods (Smaller code-size - may be changed locally) [false]: false
 * Common Subexpression Elimination [false]:.........................true
 * Dead Code Elimination [Comment]:..................................Comment
 * Disable BDE Temp Variable Generation [false]:.....................true
 * Generate well-formed switch [true]:...............................true
 * Hierarchical Code-Generation (may be changed locally) [false]:....false
 * Initialise history variable with zero [false]:....................false
 * Optimize Direct Access Methods (Multiple Levels) [false]:.........true
 * Optimize Direct Access Methods (One Level) [false]:...............true
 * Optimize Static Actions (Restricted Modelling) [true]:............false
 * Outline Generated Methods (may be changed locally) [false]:.......false
 *-----------------------------------------------------------------------------
 *    Code.Production
 *-----------------------------------------------------------------------------
 * Add Implementation Definitions [true]:............................true
 * Generate Access Methods for dT (Alternative: use OS dT directly) [true]: false
 * Generate Data Structures [USELOCAL]:..............................USELOCAL
 * Generate Map File [true]:.........................................false
 * Generate OS Configuration [true]:.................................true
 * Use OID for Generation of Component Names [false]:................false
 *-----------------------------------------------------------------------------
 *    Station.Build
 *-----------------------------------------------------------------------------
 * Use Customized Data Type Names [false]:...........................true
 *-----------------------------------------------------------------------------
 *    TargetSettings.G_ANSI.Build
 *-----------------------------------------------------------------------------
 * Compile Unused Data [false]:......................................false
 * Cont Implementation Type [SINGLE]:................................SINGLE
 * Force no self pointer optimization [false]:.......................false
 * Function Name of memcpy [memcpy]:.................................memcpy
 * Generate define for constants [false]:............................false
 * Generate Method Body [Use Component Settings]:....................Use Component Settings
 * Generating Access Macros [true]:..................................true
 * Generating Access Macros for Messages [false]:....................false
 * Generating Message Copy [true]:...................................true
 * Generating SCOOP-IX [false]:......................................false
 * Matrix Orientation [columnMajor]:.................................columnMajor
 * Number of dimensions for fixed matrixes [1D]:.....................1D
 * Optimize Unused Code [false]:.....................................true
 * Place Array/Matrix reference structure of Parameters on the Stack [false]: false
 * Place Array/Matrix reference structure of Variables on the Stack [false]: false
 * Resolve System Constants [compileTime]:...........................compileTime
 * Using External Build Tool [false]:................................false
 * Variant Coded Data Structures [false]:............................false
 *-----------------------------------------------------------------------------
 * END: Project Options "Build"/"Code"
 ******************************************************************************/


/******************************************************************************
 * BEGIN: ASCET-SE AddOn Options
 * ----------------------------------------------------------------------------
 *     Code
 * ----------------------------------------------------------------------------
 * checkMemSectionVolatility [true]:.................................false
 * checkMultipleSend [false]:........................................false
 * distribVarMemClass ["DISTRRAM"]:.................................."DISTRRAM"
 * genAlwaysInitValues [false]:......................................true
 * genLogicElementsAs [PACKED_BITFIELD]:.............................PACKED_BITFIELD
 * genObjList [false]:...............................................false
 * implInfoComments [true]:..........................................true
 * initTaskMemClass ["ASD_INIT_TASK_MEM"]:..........................."ASD_INIT_TASK_MEM"
 * isrMemClass ["ASD_ISR_MEM"]:......................................"ASD_ISR_MEM"
 * mainMemClass ["ASD_EXT_CODE_MEM"]:................................"ASD_EXT_CODE_MEM"
 * paramAsSysConst [false]:..........................................false
 * pragmaMemClassAtDecl [false]:.....................................false
 * pragmaMemClassEnabled [true]:.....................................true
 * referenceMemClass ["REFRAM"]:....................................."REFRAM"
 * shortNames [false]:...............................................false
 * taskMemClass ["ASD_TASK_MEM"]:...................................."CODE"
 * virtualParameterMemClass ["VIRT_PARAM"]:.........................."VIRT_PARAM"
 * ----------------------------------------------------------------------------
 *     Code.Appearance
 * ----------------------------------------------------------------------------
 * braceLineFeed [true]:.............................................true
 * genDate [<undef>]:................................................<undef>
 * genTime [<undef>]:................................................<undef>
 * generateSignatureDecorationComments [true]:.......................true
 * lineFeedPosition [LEFT]:..........................................LEFT
 * maxIdentLength [0]:...............................................40
 * maxRightLength [60]:..............................................60
 * minLeftLength [8]:................................................8
 * preventIndentStructInit [true]:...................................true
 * ----------------------------------------------------------------------------
 *     OS
 * ----------------------------------------------------------------------------
 * MemAllocKeyword_ShortnameAndAlignment [true]:.....................true
 * Os-Config-C_gen_declaration_alarms [false]:.......................false
 * Os-Config-C_gen_declaration_appmodes [false]:.....................false
 * Os-Config-C_gen_dt_calc [false]:..................................true
 * Os-Config-C_gen_initCOM [false]:..................................false
 * Os-Config-C_gen_inittask [false]:.................................false
 * Os-Config-C_gen_main [false]:.....................................false
 * Os-Config-C_gen_process_container [false]:........................true
 * Os-Config-C_gen_startuphook [false]:..............................true
 * asd_exclusive_area ["ASD_EXCLUSIVE_AREA"]:........................"ASCET_exclusive_area"
 * messageDoInit [false]:............................................true
 * messageExternalMessageCopies [false]:.............................false
 * messageGenOSEKDeclarations [true]:................................false
 * messageIgnoreUsageInInitTask [false]:.............................false
 * messageOverloadInitValues [<undef>]:..............................<undef>
 * messageUsageVariant [OPT_COPY]:...................................NON_OPT_COPY
 * modularMessageUse [false]:........................................false
 * osAppModePattern ["%name%"]:......................................"appmode_%name%"
 * osStartupFunction [<undef>]:......................................<undef>
 * ----------------------------------------------------------------------------
 *     OS.OIL
 * ----------------------------------------------------------------------------
 * OIL-COOP-RESOURCE-name ["ASD_Cooperative_Res"]:..................."ASD_Cooperative_Res"
 * OIL-outputFile ["temp.oil"]:......................................"temp.oil"
 * ----------------------------------------------------------------------------
 *     SERAP
 * ----------------------------------------------------------------------------
 * SERAPRefPageMemoryClass ["SERAP_REF"]:............................"SERAP_REF"
 * SERAPWorkPageMemoryClass ["SERAP_WORK"]:.........................."SERAP_WORK"
 * serap [false]:....................................................false
 * serapEmbedded [true]:.............................................true
 * ----------------------------------------------------------------------------
 *     Virtual Address Tables
 * ----------------------------------------------------------------------------
 * addressTableMemoryClass ["VATROM"]:..............................."VATROM"
 * ----------------------------------------------------------------------------
 * END: ASCET-SE AddOn Options
 ******************************************************************************/


/******************************************************************************
 * BEGIN: source code of a multiple instance class
 ******************************************************************************/



#define _APP_BlueDuty (self->APP_RGBCONTROL_EVB_IRAM->APP_BlueDuty)
#define _APP_BlueIntensity (self->APP_RGBCONTROL_EVB_IRAM->APP_BlueIntensity)
#define _APP_BlueIntensityMap (self->APP_RGBCONTROL_EVB_IRAM->APP_BlueIntensityMap)
#define _APP_BLUELEDINTENSITY_REF_ (&(self->APP_RGBCONTROL_EVB_EFLASH->APP_BLUELEDINTENSITY))
#define _APP_GreenDuty (self->APP_RGBCONTROL_EVB_IRAM->APP_GreenDuty)
#define _APP_GreenIntensity (self->APP_RGBCONTROL_EVB_IRAM->APP_GreenIntensity)
#define _APP_GreenIntensityMap (self->APP_RGBCONTROL_EVB_IRAM->APP_GreenIntensityMap)
#define _APP_GREENLEDINTENSITY_REF_ (&(self->APP_RGBCONTROL_EVB_EFLASH->APP_GREENLEDINTENSITY))
#define _APP_LEDRESETTIME (self->APP_RGBCONTROL_EVB_EFLASH->APP_LEDRESETTIME)
#define _APP_LedTime (self->APP_RGBCONTROL_EVB_IRAM->APP_LedTime)
#define _APP_LedTimer_REF_ (&(self->APP_LedTimer))
#define _APP_Pot (self->APP_RGBCONTROL_EVB_IRAM->APP_Pot)
#define _APP_RedDuty (self->APP_RGBCONTROL_EVB_IRAM->APP_RedDuty)
#define _APP_RedIntensity (self->APP_RGBCONTROL_EVB_IRAM->APP_RedIntensity)
#define _APP_RedIntensityMap (self->APP_RGBCONTROL_EVB_IRAM->APP_RedIntensityMap)
#define _APP_REDLEDINTENSITY_REF_ (&(self->APP_RGBCONTROL_EVB_EFLASH->APP_REDLEDINTENSITY))
#define _APP_Rise2_REF_ (&(self->APP_Rise2))
#define _APP_Rise3_REF_ (&(self->APP_Rise3))
#define _APP_Sw2 (self->APP_RGBCONTROL_EVB_IRAM->APP_Sw2)
#define _APP_Sw3 (self->APP_RGBCONTROL_EVB_IRAM->APP_Sw3)
#define _sm (self->APP_RGBCONTROL_EVB_IRAM->sm)

/*-----------------------------------------------------------------------------
 *    Defines
 *----------------------------------------------------------------------------*/

#define APS_Blue 1U
#define APS_Green 2U
#define APS_Red 0U
#define APS_RGBWithFader 3U



/******************************************************************************
 * BEGIN: FUNCTIONS OF COMPONENT
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'APP_RGBCONTROL_EVB_A_RGBFader'
 * ----------------------------------------------------------------------------
 * model name:...................................'A_RGBFader'
 * memory class:.................................'ICODE'
 * ---------------------------------------------------------------------------*/
/* private A_RGBFader ()  */

void APP_RGBCONTROL_EVB_A_RGBFader ( struct APP_RGBCONTROL_EVB * self)
{
   /* A_RGBFader: line #2  */
   /* assignment to APP_LedTime: min=0, max=65530, hex=1000phys+0, limit=(maxBitLength: true, assign: true), zero incl.=true  */
   _APP_LedTime
      = LIB_TIMERUP_EVB_LIB_Time(_APP_LedTimer_REF_, _APP_LedTime >= _APP_LEDRESETTIME, SY_1MS);
   /* A_RGBFader: line #5  */
   /* assignment to APP_RedIntensityMap: min=0, max=255, hex=256phys+0, limit=(maxBitLength: true, assign: true), zero incl.=true  */
   _APP_RedIntensityMap
      = ESDL_Linear_CharTable1_getAt_u16u8((_APP_REDLEDINTENSITY_REF_)->xSize, (_APP_REDLEDINTENSITY_REF_)->xDist, (_APP_REDLEDINTENSITY_REF_)->values, _APP_LedTime);
   /* A_RGBFader: line #8  */
   /* assignment to APP_GreenIntensityMap: min=0, max=255, hex=256phys+0, limit=(maxBitLength: true, assign: true), zero incl.=true  */
   _APP_GreenIntensityMap
      = ESDL_Linear_CharTable1_getAt_u16u8((_APP_GREENLEDINTENSITY_REF_)->xSize, (_APP_GREENLEDINTENSITY_REF_)->xDist, (_APP_GREENLEDINTENSITY_REF_)->values, _APP_LedTime);
   /* A_RGBFader: line #11  */
   /* assignment to APP_BlueIntensityMap: min=0, max=255, hex=256phys+0, limit=(maxBitLength: true, assign: true), zero incl.=true  */
   _APP_BlueIntensityMap
      = ESDL_Linear_CharTable1_getAt_u16u8((_APP_BLUELEDINTENSITY_REF_)->xSize, (_APP_BLUELEDINTENSITY_REF_)->xDist, (_APP_BLUELEDINTENSITY_REF_)->values, _APP_LedTime);
   /* A_RGBFader: line #14  */
   /* assignment to APP_GreenIntensity: min=0, max=255, hex=256phys+0, limit=(maxBitLength: true, assign: true), zero incl.=true  */
   _APP_GreenIntensity = (uint8)(((_APP_GreenIntensityMap) * (_APP_Pot)) >> 16);
   /* A_RGBFader: line #17  */
   /* assignment to APP_RedIntensity: min=0, max=255, hex=256phys+0, limit=(maxBitLength: true, assign: true), zero incl.=true  */
   _APP_RedIntensity = (uint8)(((_APP_RedIntensityMap) * (_APP_Pot)) >> 16);
   /* A_RGBFader: line #20  */
   /* assignment to APP_BlueIntensity: min=0, max=255, hex=256phys+0, limit=(maxBitLength: true, assign: true), zero incl.=true  */
   _APP_BlueIntensity = (uint8)(((_APP_BlueIntensityMap) * (_APP_Pot)) >> 16);
   /* A_RGBFader: line #23  */
   /* assignment to APP_RedDuty: min=0, max=10000, hex=100phys+0, limit=(maxBitLength: true, assign: true), zero incl.=true  */
   _APP_RedDuty
      = (uint16)(((_APP_RedIntensity) * (uint16)((uint16)625U)) >> 4);
   /* A_RGBFader: line #26  */
   /* assignment to APP_GreenDuty: min=0, max=10000, hex=100phys+0, limit=(maxBitLength: true, assign: true), zero incl.=true  */
   _APP_GreenDuty
      = (uint16)(((_APP_GreenIntensity) * (uint16)((uint16)625U)) >> 4);
   /* A_RGBFader: line #29  */
   /* assignment to APP_BlueDuty: min=0, max=10000, hex=100phys+0, limit=(maxBitLength: true, assign: true), zero incl.=true  */
   _APP_BlueDuty
      = (uint16)(((_APP_BlueIntensity) * (uint16)((uint16)625U)) >> 4);
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'APP_RGBCONTROL_EVB_A_RGBFader'
 ******************************************************************************/




/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'APP_RGBCONTROL_EVB_APP_RGBStateMachineTrig'
 * ----------------------------------------------------------------------------
 * model name:...................................'APP_RGBStateMachineTrig'
 * memory class:.................................'ICODE'
 * ---------------------------------------------------------------------------*/
/* public APP_RGBStateMachineTrig ()  */

void APP_RGBCONTROL_EVB_APP_RGBStateMachineTrig ( struct APP_RGBCONTROL_EVB * self)
{
   switch (_sm)
   {
      case APS_Blue:
         /* Condition (transition from state "APS_Blue" to state "APS_Green" with prio 2): line #1  */
         if (LIB_RISE_EVB_LIB_Rising(_APP_Rise3_REF_, _APP_Sw3))
         {
            /* Switch to state "APS_Green"  */
            _sm = APS_Green;
            break;
         } /* end if */
         /* Condition (transition from state "APS_Blue" to state "APS_RGBWithFader" with prio 1): line #1  */
         if (APP_RGBCONTROL_EVB_C_Clockwise(self))
         {
            /* Switch to state "APS_RGBWithFader"  */
            _sm = APS_RGBWithFader;
            break;
         } /* end if */
         /* Static (state "APS_Blue"): line #2  */
         /* assignment to APP_RedDuty: min=0, max=10000, hex=100phys+0, limit=(maxBitLength: true, assign: true), zero incl.=true  */
         _APP_RedDuty = 0U;
         /* Static (state "APS_Blue"): line #5  */
         /* assignment to APP_GreenDuty: min=0, max=10000, hex=100phys+0, limit=(maxBitLength: true, assign: true), zero incl.=true  */
         _APP_GreenDuty = 0U;
         /* Static (state "APS_Blue"): line #8  */
         /* assignment to APP_BlueDuty: min=0, max=10000, hex=100phys+0, limit=(maxBitLength: true, assign: true), zero incl.=true  */
         _APP_BlueDuty = (uint16)(((_APP_Pot) * (uint16)((uint16)40001U)) >> 18);
         break;
      case APS_Green:
         /* Condition (transition from state "APS_Green" to state "APS_Blue" with prio 2): line #1  */
         if (LIB_RISE_EVB_LIB_Rising(_APP_Rise2_REF_, _APP_Sw2))
         {
            /* Switch to state "APS_Blue"  */
            _sm = APS_Blue;
            break;
         } /* end if */
         /* Condition (transition from state "APS_Green" to state "APS_Red" with prio 1): line #1  */
         if (LIB_RISE_EVB_LIB_Rising(_APP_Rise3_REF_, _APP_Sw3))
         {
            /* Switch to state "APS_Red"  */
            _sm = APS_Red;
            break;
         } /* end if */
         /* Static (state "APS_Green"): line #2  */
         /* assignment to APP_RedDuty: min=0, max=10000, hex=100phys+0, limit=(maxBitLength: true, assign: true), zero incl.=true  */
         _APP_RedDuty = 0U;
         /* Static (state "APS_Green"): line #5  */
         /* assignment to APP_GreenDuty: min=0, max=10000, hex=100phys+0, limit=(maxBitLength: true, assign: true), zero incl.=true  */
         _APP_GreenDuty = (uint16)(((_APP_Pot) * (uint16)((uint16)40001U)) >> 18);
         /* Static (state "APS_Green"): line #8  */
         /* assignment to APP_BlueDuty: min=0, max=10000, hex=100phys+0, limit=(maxBitLength: true, assign: true), zero incl.=true  */
         _APP_BlueDuty = 0U;
         break;
      case APS_RGBWithFader:
         /* Condition (transition from state "APS_RGBWithFader" to state "APS_Red" with prio 2): line #1  */
         if (APP_RGBCONTROL_EVB_C_Clockwise(self))
         {
            /* Switch to state "APS_Red"  */
            _sm = APS_Red;
            break;
         } /* end if */
         /* Condition (transition from state "APS_RGBWithFader" to state "APS_Blue" with prio 1): line #1  */
         if (APP_RGBCONTROL_EVB_C_AntiClockwise(self))
         {
            /* Switch to state "APS_Blue"  */
            _sm = APS_Blue;
            break;
         } /* end if */
         /* Static (state "APS_RGBWithFader"): line #2  */
         APP_RGBCONTROL_EVB_A_RGBFader(self);
         break;
      case APS_Red:
      default:
         /* Condition (transition from state "APS_Red" to state "APS_Green" with prio 2): line #1  */
         if (LIB_RISE_EVB_LIB_Rising(_APP_Rise2_REF_, _APP_Sw2))
         {
            /* Switch to state "APS_Green"  */
            _sm = APS_Green;
            break;
         } /* end if */
         /* Condition (transition from state "APS_Red" to state "APS_RGBWithFader" with prio 1): line #1  */
         if (APP_RGBCONTROL_EVB_C_AntiClockwise(self))
         {
            /* Switch to state "APS_RGBWithFader"  */
            _sm = APS_RGBWithFader;
            break;
         } /* end if */
         /* Static (state "APS_Red"): line #2  */
         /* assignment to APP_RedDuty: min=0, max=10000, hex=100phys+0, limit=(maxBitLength: true, assign: true), zero incl.=true  */
         _APP_RedDuty = (uint16)(((_APP_Pot) * (uint16)((uint16)40001U)) >> 18);
         /* Static (state "APS_Red"): line #5  */
         /* assignment to APP_GreenDuty: min=0, max=10000, hex=100phys+0, limit=(maxBitLength: true, assign: true), zero incl.=true  */
         _APP_GreenDuty = 0U;
         /* Static (state "APS_Red"): line #8  */
         /* assignment to APP_BlueDuty: min=0, max=10000, hex=100phys+0, limit=(maxBitLength: true, assign: true), zero incl.=true  */
         _APP_BlueDuty = 0U;
         break;
   } /* end switch */
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'APP_RGBCONTROL_EVB_APP_RGBStateMachineTrig'
 ******************************************************************************/




/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'APP_RGBCONTROL_EVB_C_AntiClockwise'
 * ----------------------------------------------------------------------------
 * model name:...................................'C_AntiClockwise'
 * memory class:.................................'ICODE'
 * ---------------------------------------------------------------------------*/
/* private C_AntiClockwise () return::log  */

boolean APP_RGBCONTROL_EVB_C_AntiClockwise ( struct APP_RGBCONTROL_EVB * self)
{
   /* C_AntiClockwise: line #2  */
   return LIB_RISE_EVB_LIB_Rising(_APP_Rise3_REF_, _APP_Sw3);
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'APP_RGBCONTROL_EVB_C_AntiClockwise'
 ******************************************************************************/




/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'APP_RGBCONTROL_EVB_C_Clockwise'
 * ----------------------------------------------------------------------------
 * model name:...................................'C_Clockwise'
 * memory class:.................................'ICODE'
 * ---------------------------------------------------------------------------*/
/* private C_Clockwise () return::log  */

boolean APP_RGBCONTROL_EVB_C_Clockwise ( struct APP_RGBCONTROL_EVB * self)
{
   /* C_Clockwise: line #2  */
   return LIB_RISE_EVB_LIB_Rising(_APP_Rise2_REF_, _APP_Sw2);
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'APP_RGBCONTROL_EVB_C_Clockwise'
 ******************************************************************************/




/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'APP_RGBCONTROL_EVB_esdl_getState'
 * ----------------------------------------------------------------------------
 * model name:...................................'esdl_getState'
 * memory class:.................................'ICODE'
 * ---------------------------------------------------------------------------*/
#if (defined (COMPILE_UNUSED_CODE) || defined (COMPILE_UNUSED_APP_RGBCONTROL_EVB_esdl_getState)) /* APP_RGBCONTROL_EVB_esdl_getState */
/* private esdl_getState () return::udisc  */

uint8 APP_RGBCONTROL_EVB_esdl_getState ( struct APP_RGBCONTROL_EVB * self)
{
   /* esdl_getState: line #1  */
   /* return with expr from esdl_getState: min=0, max=3, hex=1phys+0, limit=(maxBitLength: false, assign: true), zero incl.=true  */
   return _sm;
}
#endif /* APP_RGBCONTROL_EVB_esdl_getState */
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'APP_RGBCONTROL_EVB_esdl_getState'
 ******************************************************************************/



/* ****************************************************************************
 * END: FUNCTIONS OF COMPONENT
 ******************************************************************************/



