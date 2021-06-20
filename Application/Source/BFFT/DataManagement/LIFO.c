/*
 * LIFO.c
 *
 *  Created on: 20 Jun 2021
 *      Author: Nutzer
 */

#include "LIFO.h"
#include <string.h>
#include <stdbool.h>

eLIFO_t eLIFO_Init(psLIFO_t const _this)
{
   if(NULL == _this)
      return eLIFO_ERROR;

   memset(_this->au32Buffer, 0u, sizeof(uint32_t)*LIFO_SIZE);
   _this->u8Pos = 0u;

   return eLIFO_OKAY;
}

eLIFO_t eLIFO_DeInit(psLIFO_t const _this)
{
   if(NULL == _this)
      return eLIFO_ERROR;

   memset(_this->au32Buffer, 0u, sizeof(uint32_t)*LIFO_SIZE);
   _this->u8Pos = 0u;

   return eLIFO_OKAY;
}

eLIFO_t eLIFO_Write(psLIFO_t const _this, const uint32_t cu32Data)
{
   if(NULL == _this)
      return eLIFO_ERROR;

   if(LIFO_SIZE > _this->u8Pos)
      _this->au32Buffer[_this->u8Pos++] = cu32Data;

   return eLIFO_OKAY;
}

eLIFO_t eLIFO_Search(const psLIFO_t const _this, const uint32_t cu32Data)
{
   if(NULL == _this)
      return eLIFO_ERROR;

   for(uint8_t u8Index = 0u; u8Index < (_this->u8Pos); u8Index++)
   {
      if(cu32Data == _this->au32Buffer[u8Index])
         return eLIFO_VALID;
   }

   return eLIFO_INVALID;
}

eLIFO_t eLIFO_GetBuffer(const psLIFO_t const _this, uint32_t** ppu32Buffer, uint8_t* const pu8NumberOfElements)
{
   if((NULL == _this) || (NULL == ppu32Buffer) || (NULL == pu8NumberOfElements))
      return eLIFO_ERROR;

   *ppu32Buffer = _this->au32Buffer;
   *pu8NumberOfElements = _this->u8Pos;

   return eLIFO_OKAY;
}

