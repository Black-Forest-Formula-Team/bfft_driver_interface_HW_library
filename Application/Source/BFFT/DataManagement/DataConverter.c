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
 * @fn u32ConvertRevolution
 * @brief unit Convert to Revolution
 * @param cu32Revolution: const Variable
 * @ret uint32_t
 */
uint32_t u32ConvertRevolution(const uint32_t cu32Revolution)
{
   //TODO Clearify Conversion
   return 0;
}


/**
 * @fn u32ConvertBatteryStatus
 * @brief unit Convert the Battery status
 * @param cu32BatteryStatus: const Variable
 * @ret uint32_t
 */
uint32_t u32ConvertBatteryStatus(const uint32_t cu32BatteryStatus)
{
   //TODO Clearify Conversion
   return 0;
}


/**
 * @fn u32ConvertSpeed
 * @brief unit Convert the Speed Level
 * @param cu32Speed: const Variable
 * @ret uint32_t
 */
uint32_t u32ConvertSpeed(const uint32_t cu32Speed)
{
   //TODO Clearify Conversion
   return 0;
}
