/*
 * DataConverter.c
 *
 *  Created on: 03.08.2021
 *      Author: maanm
 */

#include "main.h"

/**
 * @fn eCANTypeToDisplayType
 * @brief Converter CANtype to DisplayType
 * @param ceCANSubscriber: Pointer to eCANSubscriber
 * @ret Error handling
 */
eDisplayType_t eCANTypeToDisplayType(const eCANSubscriberType_t ceCANSubscriberType)
{
   switch(ceCANSubscriberType)
   {
      case eCANTypeSpeed:
         return eDisplayTypeSpeed;
      case eCANTypeBattery:
         return eDisplayTypeBattery;
      case eCanTypeRotation:
         return eDisplayTypeRotation;
      default:
         return eDisplayTypeInvalid;
   }
}


/**
 * @fn bConvertRevolution
 * @brief unit Convert to Revolution
 * @param pu8Data: Pointer of Data
 * @param cu8DataLength: const Variable
 * @ret bool
 */
bool bConvertRevolution(uint8_t* const pu8Data, const uint8_t cu8DataLength)
{
   //TODO Clearify Conversion
   return 0;
}


/**
 * @fn u32ConvertBatteryStatus
 * @brief unit Convert the Battery status
 * @param pu8Data: Pointer of Data
 * @param cu8DataLength: const Variable
 * @ret bool
 */
bool bConvertBatteryStatus(uint8_t* const pu8Data, const uint8_t cu8DataLength)
{
   //TODO Clearify Conversion
   return 0;
}


/**
 * @fn u32ConvertSpeed
 * @brief unit Convert the Speed Level
 * @param pu8Data: Pointer of Data
 * @param cu8DataLength: const Variable
 * @ret bool
 */
bool bConvertSpeed(uint8_t* const pu8Data, const uint8_t cu8DataLength)
{
   //TODO Clearify Conversion
   return 0;
}
