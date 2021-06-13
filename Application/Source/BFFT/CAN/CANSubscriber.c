/*
 * CANSubscriber.c
 *
 *  Created on: 03.06.2021
 *      Author: maanm
 */
#include "CANSubscriber.h"

volatile static uint32_t _u32CurrentBufferPosition = 0u;


/**
 * @fn eCANSubscriber_Init
 * @brief Constructor for CANSubscriber
 * @param _this: Pointer to object
 * @param psCANID: Pointer to CANID object
 * @param ceCANSubscriberType: Contains the subscriber type
 * @param cu32CANId: Contains the ID that should be set
 * @param ceCANID_type: Select STD or EXT ID
 * @ret Error handling
 */
eCAN_t eCANSubscriber_Init(
      psCANSubscriber_t const _this,
      psCANID_t const psCANID,
      const eCANSubscriberType_t ceCANSubscriberType,
      const uint32_t cu32CANId,
      const eCANID_t ceCANID_type)
{
   if((NULL == _this) || (BUFFER_SIZE <= _u32CurrentBufferPosition) || (NULL == psCANID))
      return eCAN_ERROR;

   _this->_Priv.eCANSubcriberType = ceCANSubscriberType;
   _this->psCANID = psCANID;

   if(eCAN_OKAY != eCANID_Init(_this->psCANID, cu32CANId, ceCANID_type))
      return eCAN_ERROR;

   apsVecCANSubscriber[_u32CurrentBufferPosition++] = _this;

   return eCAN_OKAY;
}


/**
 * @fn eCANSubscriber_DeInit
 * @brief Destructor for CANSubscriber
 * @param _this: Pointer to object
 * @ret Error handling
 */
eCAN_t eCANSubscriber_DeInit(psCANSubscriber_t const _this)
{
   if((NULL == _this))
      return eCAN_ERROR;

   _this->_Priv.eCANSubcriberType = eCANTypeInvalid;
   _this->psCANID = NULL;

   return eCAN_OKAY;
}


/**
 * @fn eCANSubscriber_GetSubscriberType
 * @brief Getter methode to return the type of the subscriber
 * @param _this: Pointer to object
 * @param peCANSubscriberType: Pointer to return the subscriber type
 * @ret Error handling
 */
eCAN_t eCANSubscriber_GetSubscriberType(
      psCANSubscriber_t const _this,
      peCANSubscriberType_t const peCANSubscriberType)
{
   if((NULL == _this) || (NULL == peCANSubscriberType))
      return eCAN_ERROR;

   *peCANSubscriberType = _this->_Priv.eCANSubcriberType;

   return eCAN_OKAY;
}
