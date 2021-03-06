#ifndef MBMESN_SLAVEPDU_H_INCLUDED
#define MBMESN_SLAVEPDU_H_INCLUDED

#include <stdint.h>

#include "MBMESN_errorstatus.h"

#define NB_OF_MBREGISTERS 2
#define FIRST_MBREGISTER_ADDRESS 0

uint16_t MB_Registers[NB_OF_MBREGISTERS];

MBMESN_errorstatus_t HandleMBRequest(uint8_t * requestFrame, uint16_t lengtOfRequest, uint8_t * responseFrame, uint16_t *pLengthOfResponseFrame);
MBMESN_errorstatus_t HandleMBFunction03(uint8_t * requestParameters, uint8_t * responseParameters, uint16_t * pNbOfRegisters);
MBMESN_errorstatus_t HandleMBFunction06(uint8_t * requestParameters, uint8_t * responseParameters, uint16_t * lengthOfResponsParameters);
MBMESN_errorstatus_t HandleMBFunction16(uint8_t * requestParameters, uint8_t * responseParameters, uint16_t * lengthOfResponsParameters);

#endif // MBMESN_SLAVEPDU_H_INCLUDED
