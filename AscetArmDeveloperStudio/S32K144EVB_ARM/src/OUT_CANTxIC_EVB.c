/******************************************************************************
 * DO NOT EDIT!
 * AUTOMATICALLY GENERATED BY:..ASCET-DEVELOPER V7.5.0
 * CODE GENERATOR:..............V7.5.0
 * COMPONENT:...................ascet.OUT.OUT_CANTxIC
 * REPRESENTATION:..............EVB
 * DESCRIPTION:
 *    
 ******************************************************************************/



/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "globalH.h"
#include "OUT_CANTxIC_EVB.h"
#include "T_InputCapture_EVB.h"
#include "OUT_CANTxIC_EVBH.h"


/******************************************************************************
 * BEGIN: Generation Information
 *-----------------------------------------------------------------------------
 * Component:................Class
 * Name:....................."OUT_CANTxIC"
 * Implementation:..........."EVB"
 * Dataset:.................."esdl_Data_Default"
 * Specification:............C Code
 * Version:..................<empty String>
 * Repository Path:..........<empty String>
 * Library Path:............."\ascet\OUT"
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
 * BEGIN: DEFINITION OF METHOD 'OUT_CANTXIC_EVB_txCANMsg'
 * ----------------------------------------------------------------------------
 * model name:...................................'txCANMsg'
 * memory class:.................................'ICODE'
 * ---------------------------------------------------------------------------*/
/* public txCANMsg (OUT_CANTxHandle::sdisc;OUT_CANTxMsg::T_InputCapture;OUT_CANTxMux::log) return::H_Status  */

uint8 OUT_CANTXIC_EVB_txCANMsg (
   /* IN    */ sint8                       OUT_CANTxHandle,
   /* IN    */ struct T_INPUTCAPTURE_EVB * OUT_CANTxMsg,
   /* IN    */ boolean                     OUT_CANTxMux
   )
{

#ifdef PC
   /* txCANMsg 2    */return(1);
#else
   /* txCANMsg 4    */uint8 retval;
   /* txCANMsg 5    */static uint8 msg[8];
   /* txCANMsg 6    */
   /* txCANMsg 7    */	/* Initialised, and handle was good? */
   /* txCANMsg 8    */	if (   OUT_CANTxHandle  != HA_CANNOHANDLE)
   /* txCANMsg 9    */		{
   /* txCANMsg 10   */			msg[0] = (uint8)((   OUT_CANTxMux  << 7) | (   OUT_CANTxMsg->IN_Pin << 6) | ((   OUT_CANTxMsg->IN_Duty & 0x3F00) >> 8));
   /* txCANMsg 11   */			msg[1] = (uint8)(   OUT_CANTxMsg->IN_Duty & 0x00FF);
   /* txCANMsg 12   */			msg[2] = (uint8)((   OUT_CANTxMsg->IN_Speed & 0xFF00) >> 8);
   /* txCANMsg 13   */			msg[3] = (uint8)(   OUT_CANTxMsg->IN_Speed & 0x00FF);
   /* txCANMsg 14   */			if (   OUT_CANTxMux  != (uint8)0)
   /* txCANMsg 15   */				{
   /* txCANMsg 16   */					msg[4] = (uint8)((   OUT_CANTxMsg->IN_Period & 0xFF000000) >> 24);
   /* txCANMsg 17   */					msg[5] = (uint8)((   OUT_CANTxMsg->IN_Period & 0x00FF0000) >> 16);
   /* txCANMsg 18   */					msg[6] = (uint8)((   OUT_CANTxMsg->IN_Period & 0x0000FF00) >> 8);
   /* txCANMsg 19   */					msg[7] = (uint8)((   OUT_CANTxMsg->IN_Period & 0x000000FF));
   /* txCANMsg 20   */				}
   /* txCANMsg 21   */			else
   /* txCANMsg 22   */				{
   /* txCANMsg 23   */					msg[4] = (uint8)((   OUT_CANTxMsg->IN_HighTime & 0xFF000000) >> 24);
   /* txCANMsg 24   */					msg[5] = (uint8)((   OUT_CANTxMsg->IN_HighTime & 0x00FF0000) >> 16);
   /* txCANMsg 25   */					msg[6] = (uint8)((   OUT_CANTxMsg->IN_HighTime & 0x0000FF00) >> 8);
   /* txCANMsg 26   */					msg[7] = (uint8)((   OUT_CANTxMsg->IN_HighTime & 0x000000FF));
   /* txCANMsg 27   */				}
   /* txCANMsg 28   */
   /* txCANMsg 29   */			/* Transmit CAN data on given handle */
   /* txCANMsg 30   */			(void) HA_CANTransmitMessage(   OUT_CANTxHandle , msg);
   /* txCANMsg 31   */			retval = (uint8)1; /* H_Okay return */
   /* txCANMsg 32   */		}
   /* txCANMsg 33   */	else
   /* txCANMsg 34   */	/* Bad handle */
   /* txCANMsg 35   */		{
   /* txCANMsg 36   */			retval = (uint8)5; /* H_Implausible return */
   /* txCANMsg 37   */		}
   /* txCANMsg 38   */
   /* txCANMsg 39   */return (retval);
#endif
   /* txCANMsg 41   */
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'OUT_CANTXIC_EVB_txCANMsg'
 ******************************************************************************/



/* ****************************************************************************
 * END: FUNCTIONS OF COMPONENT
 ******************************************************************************/



