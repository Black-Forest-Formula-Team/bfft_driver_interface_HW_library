/*
 * CANID.h
 *
 *  Created on: 28 May 2021
 *      Author: Nutzer
 */

#ifndef APPLICATION_SOURCE_BFFT_CAN_CANID_H_
#define APPLICATION_SOURCE_BFFT_CAN_CANID_H_

#include "main.h"

/**
 * @fn eCANID
 * @brief Several selectables and error codes for CANID
 */
typedef enum eCANID
{
   eCAN_STD_ID = 0u,
   eCAN_EXT_ID,
} eCANID_t;


/**
 * @fn CANID_Priv
 * @brief Private attributes of CANID
 */
typedef struct CANID_Priv
{
   uint32_t _u32CAN_STDID;
   uint32_t _u32CAN_EXTID;
} sCANID_Priv_t;
typedef sCANID_Priv_t* psCANID_Priv_t;


/**
 * @fn CANID
 * @brief "class" CANID
 */
typedef struct CANID
{
   sCANID_Priv_t _priv;
} sCANID_t;
typedef sCANID_t* psCANID_t;


// Function declarations
eCAN_t eCANID_Init(psCANID_t const _this, const uint32_t cu32CANID, const eCANID_t ceCANIDSelect);
eCAN_t eCANID_DeInit(psCANID_t const _this);
eCAN_t eCANID_GetID(const psCANID_t const _this, const eCANID_t ceCANIDSelect, uint32_t* const pu32CANID);
eCAN_t eCANID_SetID(psCANID_t const _this, const uint32_t cu32CANID, const eCANID_t ceCANIDSelect);
eCAN_t eCANID_IsValidID(const psCANID_t const _this, const uint32_t cu32CANID);

#endif /* APPLICATION_SOURCE_BFFT_CAN_CANID_H_ */
