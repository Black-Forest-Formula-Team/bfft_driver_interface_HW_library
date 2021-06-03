/*
 * CANSubscriber.h
 *
 *  Created on: 03.06.2021
 *      Author: maanm
 */

#ifndef APPLICATION_SOURCE_BFFT_CAN_CANSUBSCRIBER_H_
#define APPLICATION_SOURCE_BFFT_CAN_CANSUBSCRIBER_H_

#include <stdint.h>
#include "stm32h7xx_hal.h"
#include "CAN.h"
#include "CANID.h"

typedef enum CANSubscriberType
{
   eCANTypeSpeed = 0,
   eCANTypeBattery,
   eCanTypeRotation
}eCANSubscriberType_t;
typedef eCANSubscriberType_t* peCANSubscriberType_t;

typedef struct CANSubscriber_Priv
{
  eCANSubscriberType_t eCANSubcriberType;

}sCANSubscriber_Priv_t;
typedef sCANSubscriber_Priv_t* psCANSubscriber_Priv_t;

typedef struct CANSubscriber
{
   sCANID_t sCANID;
   sCANSubscriber_Priv_t _Priv;

}sCANSubscriber_t;
typedef sCANSubscriber_t* psCANSubscriber_t;

eCAN_t eCANSubscriber_Init(
      psCANSubscriber_t const _this,
      const eCANSubscriberType_t ceCANSubscriberType,
      const uint32_t cu32CANId,
      const eCANID_t ceCANID_type);
eCAN_t eCANSubscriber_DeInit(psCANSubscriber_t const _this);
eCAN_t eCANSubscriber_GetSubscriberType(
      psCANSubscriber_t const _this,
      const peCANSubscriberType_t ceCANSubscriberType);

#endif /* APPLICATION_SOURCE_BFFT_CAN_CANSUBSCRIBER_H_ */
