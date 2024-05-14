/******************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED BY:..ASCET-DEVELOPER V7.5.0
 * CODE GENERATOR:..............V7.5.0
 * COMPONENT:...................ascet.IN.IN_InputCaptureIn
 * REPRESENTATION:..............EVB
 * DESCRIPTION:
 *    
 ******************************************************************************/



/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "globalH.h"
#include "IN_InputCaptureIn_EVB.h"
#include "T_InputCapture_EVB.h"
#include "IN_InputCaptureIn_EVBH.h"


/******************************************************************************
 * BEGIN: Generation Information
 *-----------------------------------------------------------------------------
 * Component:................Class
 * Name:....................."IN_InputCaptureIn"
 * Implementation:..........."EVB"
 * Dataset:.................."esdl_Data_Default"
 * Specification:............C Code
 * Version:..................<empty String>
 * Repository Path:..........<empty String>
 * Library Path:............."\ascet\IN"
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





/******************************************************************************
 * BEGIN: FUNCTIONS OF COMPONENT
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'IN_INPUTCAPTUREIN_EVB_getSpeedIn'
 * ----------------------------------------------------------------------------
 * model name:...................................'getSpeedIn'
 * memory class:.................................'ICODE'
 * ---------------------------------------------------------------------------*/
/* public getSpeedIn (port::S32K144_Gpio;timeout::cont;ppr::udisc) return::T_InputCapture  */

struct T_INPUTCAPTURE_EVB * IN_INPUTCAPTUREIN_EVB_getSpeedIn (
   /* IN    */ uint8  port,
   /* IN    */ uint32 timeout,
   /* IN    */ uint8  ppr
   )
{

   /* getSpeedIn 1    */static struct T_INPUTCAPTURE_EVB retval;
   /* getSpeedIn 2    */
#ifdef PC
   /* getSpeedIn 4    */	retval.IN_Pin = (uint8)0;
   /* getSpeedIn 5    */	retval.IN_Duty = (uint16)0;
   /* getSpeedIn 6    */	retval.IN_Speed = (sint16)0;
   /* getSpeedIn 7    */	retval.IN_HighTime = (uint32)0;
   /* getSpeedIn 8    */	retval.IN_Period = (uint32)0;
#endif 
   /* getSpeedIn 10   */
#ifdef S32K144EVB
   /* getSpeedIn 12   */	retval.IN_Pin = HA_GetGPIOIn(   port );
   /* getSpeedIn 13   */	retval.IN_Duty = HA_GetFTMDuty(   port ,   timeout );
   /* getSpeedIn 14   */	retval.IN_Speed = HA_GetFTMFreq(   port ,   ppr ,   timeout );
   /* getSpeedIn 15   */	retval.IN_HighTime = HA_GetFTMHigh(   port );
   /* getSpeedIn 16   */	retval.IN_Period = HA_GetFTMPeriod(   port );
#endif
   /* getSpeedIn 18   */
   /* getSpeedIn 19   */return (&retval);
   /* getSpeedIn 20   */
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'IN_INPUTCAPTUREIN_EVB_getSpeedIn'
 ******************************************************************************/



/* ****************************************************************************
 * END: FUNCTIONS OF COMPONENT
 ******************************************************************************/



