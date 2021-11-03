/*
***********************************************************************************************************************
* 
* Product Info
* Isolar version: ISOLAR-AB 4.0.1
* Product release version: RTA-BSW 3.1.0
* 
***********************************************************************************************************************
*/



#ifndef CRC_64_H
#define CRC_64_H
#include "Std_Types.h"
/*
**********************************************************************************************************************
* Includes
**********************************************************************************************************************
*/


/*
**********************************************************************************************************************
* Defines/Macros
**********************************************************************************************************************
*/
/* Initial values for CRC calculation */
#define CRC_INITIAL_VALUE64             0xFFFFFFFFFFFFFFFFULL

/* XOR values for CRC result modification */
#define CRC_XOR_VALUE64                 0xFFFFFFFFFFFFFFFFULL

/* Implementation specific define, used as well for TABLE as for RUNTIME version */
/* size of transmitted chunks via of the data stream */
#define CRC_64_REV_ECMA182_CHUNK_SIZE   8ULL

/*
 **********************************************************************************************************************
 * TABLE Version
 **********************************************************************************************************************
 */
#define CRC_64_TABLESIZE        256U   /* CRC Table Size */
#define CRC_64_TABLEMASK        0xFFU  /* Implementation specific mask */

/*
**********************************************************************************************************************
* Type definitions
**********************************************************************************************************************
*/


/*
**********************************************************************************************************************
* Variables
**********************************************************************************************************************
*/


/*
 **********************************************************************************************************************
 * TABLE Version
 **********************************************************************************************************************
 */
#define CRC_START_SEC_CONST_64
#include "Crc_MemMap.h"
extern const uint64 CRC_64_REV_ECMA182_Tbl[];
#define CRC_STOP_SEC_CONST_64
#include "Crc_MemMap.h"

/*
**********************************************************************************************************************
* Extern declarations
**********************************************************************************************************************
*/


/*
 **********************************************************************************************************************
 * Prototypes
 **********************************************************************************************************************
*/

#define CRC_START_SEC_CODE
#include "Crc_MemMap.h"

extern uint64 Crc_CalculateCRC64(const uint8* Crc_DataPtr, uint32 Crc_Length, uint64 Crc_StartValue64,
                                 boolean Crc_IsFirstCall);

#define CRC_STOP_SEC_CODE
#include "Crc_MemMap.h"

#endif /* CRC_64_H */
