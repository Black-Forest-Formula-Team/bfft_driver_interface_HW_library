/*
 * DisplayDispatcher.c
 *
 *  Created on: 6 Aug 2021
 *      Author: Nutzer
 */

#include "DisplayDispatcher.h"
#include "../Application/GeneratedCode/_GUIGUI.h"
#include "../Application/GeneratedCode/_DriverInterfceFirstSeit.h"

static uint32_t u32Display_Concatenation(const uint8_t* cpu8Data);

bool bDisplay_DispatchValue(const eDisplayType_t ceDisplayType, const uint8_t* cpu8Data, const uint8_t cu8DataLength)
{
   if((NULL == cpu8Data) || (0u == cu8DataLength))
      return false;

   const XInt32 cxData = *((XInt32*) cpu8Data);

   switch(ceDisplayType)
   {
      case eDisplayTypeBattery:
         DriverInterfceStartSide_OnSetBatteryValue(DriverInterfceFirstSeit, cxData);
         return true;
      case eDisplayTypeRotation:
         DriverInterfceStartSide_OnSetRotaionSpeed(DriverInterfceFirstSeit, cxData);
         return true;
      case eDisplayTypeSpeed:
         DriverInterfceStartSide_OnSetSpeed(DriverInterfceFirstSide, cxData);
         return true;
      default:
         return false;
   }
}
