/*
 * CANFilterCalculator.c
 *
 *  Created on: 20 Jun 2021
 *      Author: Nutzer
 */

#include "CANFilterCalculator.h"


eCAN_t eCAN_CalculateFilter(void)
{
   xCANFilter.FilterConfig = 0;
   xCANFilter.FilterID1 = 0;
   xCANFilter.FilterID2 = 0;
   xCANFilter.FilterIndex = 0;
   xCANFilter.FilterType = 0;
   xCANFilter.IdType = 0;
   xCANFilter.IsCalibrationMsg = 0;
   xCANFilter.RxBufferIndex = 0;
}
