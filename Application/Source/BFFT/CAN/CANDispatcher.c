/*
 * CANDispatcher.c
 *
 *  Created on: 04.08.2021
 *      Author: maanm
 */

#include "main.h"
static bool bDispatchToDisplay(const eCANSubscriberType_t ceCANSubscriberType, uint8_t * const pu8Data, const uint8_t cu8DataLength);
static uint8_t au8MessageBuffer[8u];

bool bCAN_DispatchMessage(void)
{
  if(HAL_OK != HAL_FDCAN_GetRxMessage(&hfdcan1, FDCAN_RX_FIFO0, (FDCAN_RxHeaderTypeDef*)&xCANRxHeader, au8MessageBuffer))
     return false;

  const uint32_t cu32MessageId = u32CAN_GetMessageId();

  for(uint8_t index = 0u; index < BUFFER_SIZE; index++)
  {
      if((NULL == apsVecCANSubscriber[index]) || (NULL == apsVecCANSubscriber[index]->psCANID))
      {
         if(cu32MessageId == apsVecCANSubscriber[index]->psCANID->_priv._u32CAN_STDID)
            return bDispatchToDisplay(apsVecCANSubscriber[index]->_Priv.eCANSubcriberType, au8MessageBuffer, xCANRxHeader.DataLength);
      }
  }

  return false;
}


bool bDispatchToDisplay(const eCANSubscriberType_t ceCANSubscriberType, uint8_t* const pu8Data, const uint8_t cu8DataLength)
{
   if((NULL == pu8Data) || (0u == cu8DataLength))
      return false;

   bool bRetVal = false;
   const eDisplayType_t ceDisplayType = eCANTypeToDisplayType(ceCANSubscriberType);

   switch(ceDisplayType)
   {
      case eDisplayTypeSpeed:
         bRetVal = bConvertSpeed(pu8Data, cu8DataLength);
         break;
      case eDisplayTypeBattery:
         bRetVal = bConvertBatteryStatus(pu8Data, cu8DataLength);
         break;
      case eDisplayTypeRotation:
         bRetVal = bConvertRevolution(pu8Data, cu8DataLength);
         break;
      default:
         bRetVal = false;
         break;
   }

   if(true == bRetVal)
      bRetVal = bDisplay_DispatchValue(ceDisplayType, pu8Data, cu8DataLength);

   return bRetVal;
}
