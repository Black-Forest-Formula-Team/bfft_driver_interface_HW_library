/*
 * LIFO.h
 *
 *  Created on: 20 Jun 2021
 *      Author: Nutzer
 */

#ifndef APPLICATION_SOURCE_BFFT_DATAMANAGEMENT_LIFO_H_
#define APPLICATION_SOURCE_BFFT_DATAMANAGEMENT_LIFO_H_

#include"main.h"

#define LIFO_SIZE 100u

typedef enum
{
   eLIFO_ERROR = 0,
   eLIFO_OKAY,
   eLIFO_VALID,
   eLIFO_INVALID
} eLIFO_t;

typedef struct
{
  uint32_t au32Buffer[LIFO_SIZE];
  uint8_t u8Pos;
} sLIFO_t;

typedef sLIFO_t* psLIFO_t;


eLIFO_t eLIFO_Init(psLIFO_t const _this);
eLIFO_t eLIFO_DeInit(psLIFO_t const _this);
eLIFO_t eLIFO_Write(psLIFO_t const _this, const uint32_t cu32Data);
eLIFO_t eLIFO_Search(const psLIFO_t const _this, const uint32_t cu32Data);
eLIFO_t eLIFO_GetBuffer(const psLIFO_t const _this, uint32_t** ppu32Buffer, uint8_t* const pu8NumberOfElements);


#endif /* APPLICATION_SOURCE_BFFT_DATAMANAGEMENT_LIFO_H_ */
