/*
 * DataConverter.h
 *
 *  Created on: 03.08.2021
 *      Author: maanm
 */

#ifndef APPLICATION_SOURCE_BFFT_CAN_DATACONVERTER_H_
#define APPLICATION_SOURCE_BFFT_CAN_DATACONVERTER_H_

#include "main.h"

/*Forward declaration*/
typedef enum CANSubscriberType eCANSubscriberType_t;


typedef enum DisplayType
{
   eDisplayTypeInvalid = 0,
   eDisplayTypeSpeed,
   eDisplayTypeBattery,
   eDisplayTypeRotation
} eDisplayType_t;
typedef eDisplayType_t* peDisplayType_t;


eDisplayType_t eCANTypeToDisplayType(const eCANSubscriberType_t ceCANSubscriberType);
bool bConvertRevolution(uint8_t* const pu8Data, const uint8_t cu8DataLength);
bool bConvertBatteryStatus(uint8_t* const pu8Data, const uint8_t cu8DataLength);
bool bConvertSpeed(uint8_t* const pu8Data, const uint8_t cu8DataLength);

#endif /* APPLICATION_SOURCE_BFFT_CAN_DATACONVERTER_H_ */
