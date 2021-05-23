/*
 * BFFT_SystemStatusLED.c
 *
 *  Created on: Apr 8, 2021
 *      Author: Nutzer
 */

#include "BFFT.h"
#include "DeviceDriver.h"

void vLEDStatusOkaySet(void)
{
	DeviceDriver_SetLedStatus(1);

}
void vLEDStatusErrorSet(void)
{
	DeviceDriver_SetLedStatus(0);
}
