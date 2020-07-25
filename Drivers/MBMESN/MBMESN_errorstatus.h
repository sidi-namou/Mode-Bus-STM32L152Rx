#ifndef MBMESN_ERRORSTATUS_H_INCLUDED
#define MBMESN_ERRORSTATUS_H_INCLUDED

typedef enum
{
    MBMESN_OK = 0,
    MBMESN_ERROR,
    MBMESN_TIMEOUT,
    MBMESN_SLAVE_DEVICE_ERROR,
    MBMESN_CRC_ERROR,
    MBMESN_FUNCTION_CODE_ERROR,
    MBMESN_DATA_ADDRESS_ERROR,
    MBMESN_QUANTITY_OF_DATA_ERROR,
    MBMESN_FUNCTION_PROCESSING_ERROR,
	MBMESN_UNEXPECTED_DATA_QUANTITY,
} MBMESN_errorstatus_t;

#endif // MBMESN_ERRORSTATUS_H_INCLUDED
