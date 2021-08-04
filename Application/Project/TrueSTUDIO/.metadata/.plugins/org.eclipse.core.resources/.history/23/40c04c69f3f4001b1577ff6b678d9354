/*
 * DataConverter.h
 *
 *  Created on: 03.08.2021
 *      Author: maanm
 */
#include "main.h"
#ifndef APPLICATION_SOURCE_BFFT_CAN_DATACONVERTER_H_
#define APPLICATION_SOURCE_BFFT_CAN_DATACONVERTER_H_

typedef enum DisplayType
{
   eDisplayTypeInvalid = 0,
   eDisplayTypeSpeed,
   eDisplayTypeBattery,
   eDisplayTypeRotation
} eDisplayType_t;
typedef eDisplayType_t* peDisplayType_t;

eDisplayType_t eCANTypeToDisplayType(const eCANSubscriberType_t ceCANSubscriberType);
uint32_t u32ConvertRevolution(const uint32_t cu32Revolution);
uint32_t u32ConvertBatteryStatus(const uint32_t cu32BatteryStatus);
uint32_t u32ConvertSpeed(const uint32_t cu32Speed);

#endif /* APPLICATION_SOURCE_BFFT_CAN_DATACONVERTER_H_ */
