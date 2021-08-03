/*
 * CANFilterCalculator.c
 *
 *  Created on: 20 Jun 2021
 *      Author: Nutzer
 */

#include "CANFilterCalculator.h"

static eCAN_t _eCAN_CalculateFilter(uint32_t* const pu32Filter);
static eCAN_t _eCAN_CalculateMask(uint32_t* const pu32Mask);


/**
 * @fn eCAN_CalculateFilter
 * @brief Calculate and setup the filter and filter mask
 * @param void
 * @ret Error handling
 */
eCAN_t eCAN_CalculateFilter(void)
{
   uint32_t u32Filter = 0u;
   uint32_t u32Mask = 0u;

   if((eCAN_OKAY != _eCAN_CalculateFilter(&u32Filter)) ||
      (eCAN_OKAY != _eCAN_CalculateMask(&u32Mask)))
   {
      return eCAN_ERROR;
   }

   xCANFilter.FilterConfig = FDCAN_FILTER_TO_RXFIFO0;
   xCANFilter.FilterID1 = u32Filter;
   xCANFilter.FilterID2 = u32Mask;
   xCANFilter.FilterIndex = 0u;
   xCANFilter.FilterType = FDCAN_FILTER_MASK;
   xCANFilter.IdType = FDCAN_STANDARD_ID;
   xCANFilter.IsCalibrationMsg = 0u;
   xCANFilter.RxBufferIndex = 0u;

   return eCAN_OKAY;
}


/**
 * @fn _eCAN_CalculateFilter
 * @brief Calculate the filter
 * @param pu32Filter: Return value for the filter
 * @ret Error handling
 */
static eCAN_t _eCAN_CalculateFilter(uint32_t* const pu32Filter)
{
   if((NULL == apsVecCANSubscriber) ||
      (NULL == pu32Filter))
   {
      return eCAN_ERROR;
   }

   *pu32Filter = 0u;

   for(uint8_t u8Index = 0u; u8Index < BUFFER_SIZE; u8Index++)
   {
      if(NULL != apsVecCANSubscriber[u8Index]->psCANID)
         *pu32Filter |= apsVecCANSubscriber[u8Index]->psCANID->_priv._u32CAN_STDID;
   }

   return eCAN_OKAY;
}


/**
 * @fn _eCAN_CalculateMask
 * @brief Getter methode to return the type of the subscriber
 * @param pu32Mask: Return value for the filtermask
 * @ret Error handling
 */
static eCAN_t _eCAN_CalculateMask(uint32_t* const pu32Mask)
{
   if(NULL == pu32Mask)
      return eCAN_ERROR;

   eCAN_t eRetVal = _eCAN_CalculateFilter(pu32Mask);
   *pu32Mask = ~(*pu32Mask);

   return eRetVal;
}
