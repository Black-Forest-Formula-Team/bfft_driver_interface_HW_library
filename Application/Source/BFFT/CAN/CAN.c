/*
 * CAN.c
 *
 *  Created on: 03.06.2021
 *      Author: maanm
 */
#include "CAN.h"

#define CAN_BUFFER_SIZE 4u

static eCAN_t eCAN_GeneralInit(void);
static eCAN_t eCAN_TxInit(void);
static eCAN_t eCAN_FilterInit(void);
static uint32_t u32CANTxBufferNumber = FDCAN_TX_BUFFER0;
static const uint32_t cu32TxId = 0;

/**
 * @fn eCAN_Start
 * @brief start of CAN
 * @ret Error handling
 */
eCAN_t eCAN_Start(void)
{
   if((eCAN_OKAY != eCAN_GeneralInit()) || (eCAN_OKAY != eCAN_TxInit()) || (eCAN_OKAY != eCAN_FilterInit()))
      return eCAN_ERROR;

  return eCAN_OKAY;
}

/**
 * @fn eCAN_GeneralInit
 * @brief initialize of CAN BUS
 * @ret Error handling
 */
static eCAN_t eCAN_GeneralInit(void)
{
   if(HAL_OK != HAL_FDCAN_Start(&hfdcan1))
      return eCAN_ERROR;

   if(HAL_OK != HAL_FDCAN_ActivateNotification(&hfdcan1, FDCAN_IT_RX_BUFFER_NEW_MESSAGE, u32CANTxBufferNumber))
      return eCAN_ERROR;

   return eCAN_OKAY;
}

/**
 * @fn eCAN_TxInit
 * @brief initialize of Transmit
 * @ret Error handling
 */
static eCAN_t eCAN_TxInit(void)
{
   xCANTxHeader.IdType =cu32TxId;
   xCANTxHeader.Identifier = FDCAN_STANDARD_ID;
   xCANTxHeader.TxFrameType =FDCAN_DATA_BYTES_32;
   xCANTxHeader.DataLength =CAN_BUFFER_SIZE;
   xCANTxHeader.ErrorStateIndicator= FDCAN_ESI_PASSIVE;
   xCANTxHeader.BitRateSwitch=FDCAN_BRS_OFF;
   xCANTxHeader.FDFormat=FDCAN_CLASSIC_CAN;
   xCANTxHeader.TxEventFifoControl=FDCAN_STORE_TX_EVENTS;
   xCANTxHeader.MessageMarker = 0;

   return eCAN_OKAY;
}

/**
 * @fn eCAN_FilterInit
 * @brief initialize the Filter of CAN
 * @ret Error handling
 */
static eCAN_t eCAN_FilterInit(void)
{
   if((eCAN_OKAY != eCAN_CalculateFilter()) ||
      (HAL_OK != HAL_FDCAN_ConfigFilter(&hfdcan1, (FDCAN_FilterTypeDef*)&xCANFilter)))
      return eCAN_ERROR;

   return eCAN_OKAY;
}

uint32_t u32CAN_GetMessageId(void)
{
    return xCANRxHeader.Identifier;
}
