/*
 * externals.h
 *
 *  Created on: 3 Jun 2021
 *      Author: Nutzer
 */

#ifndef APPLICATION_SOURCE_BFFT_EXTERNALS_H_
#define APPLICATION_SOURCE_BFFT_EXTERNALS_H_


#include "./BFFT./CAN./CANID.h"
#include "./BFFT./CAN./CANSubscriber.h"

#define BUFFER_SIZE 50u

extern volatile uint32_t au32VecUsedCANIDs[BUFFER_SIZE];
extern volatile psCANSubscriber_t apsVecCANSubscriber[BUFFER_SIZE];

#endif /* APPLICATION_SOURCE_BFFT_EXTERNALS_H_ */
