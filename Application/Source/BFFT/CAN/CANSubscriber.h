/*
 * CANSubscriber.h
 *
 *  Created on: 03.06.2021
 *      Author: maanm
 */

#ifndef APPLICATION_SOURCE_BFFT_CAN_CANSUBSCRIBER_H_
#define APPLICATION_SOURCE_BFFT_CAN_CANSUBSCRIBER_H_

#include "main.h"

// Forward declaration
typedef struct CANID* psCANID_t;
typedef enum eCANID eCANID_t;
typedef enum eCAN eCAN_t;

/**
 * @fn CANSubscriberType
 * @brief Type of Can Subscriber
 */
typedef enum CANSubscriberType
{
   eCANTypeInvalid = 0,
   eCANTypeSpeed,
   eCANTypeBattery,
   eCanTypeRotation
} eCANSubscriberType_t;
typedef eCANSubscriberType_t* peCANSubscriberType_t;

/**
 * @fn CANSubscriber_Priv
 * @brief private attribute of CANSubscriber
 */
typedef struct CANSubscriber_Priv
{
  eCANSubscriberType_t eCANSubcriberType;

} sCANSubscriber_Priv_t;
typedef sCANSubscriber_Priv_t* psCANSubscriber_Priv_t;

/**
 * @fn CANSubscriber
 * @brief CANSubscriber class
 */
typedef struct CANSubscriber
{
   psCANID_t psCANID;
   sCANSubscriber_Priv_t _Priv;

} sCANSubscriber_t;
typedef sCANSubscriber_t* psCANSubscriber_t;


/*-------------Function declaration-------*/
eCAN_t eCANSubscriber_Init(
      psCANSubscriber_t const _this,
      psCANID_t const psCANID,
      const eCANSubscriberType_t ceCANSubscriberType,
      const uint32_t cu32CANId,
      const eCANID_t ceCANID_type);
eCAN_t eCANSubscriber_DeInit(psCANSubscriber_t const _this);
eCAN_t eCANSubscriber_GetSubscriberType(
      psCANSubscriber_t const _this,
      peCANSubscriberType_t const peCANSubscriberType);

#endif /* APPLICATION_SOURCE_BFFT_CAN_CANSUBSCRIBER_H_ */
