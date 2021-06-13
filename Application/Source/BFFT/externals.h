/*
 * externals.h
 *
 *  Created on: 3 Jun 2021
 *      Author: Nutzer
 */

#ifndef APPLICATION_SOURCE_BFFT_EXTERNALS_H_
#define APPLICATION_SOURCE_BFFT_EXTERNALS_H_


#include "main.h"

// Forward declaration
typedef struct CANSubscriber* psCANSubscriber_t;

#define BUFFER_SIZE 50u

extern volatile uint32_t au32VecUsedCANIDs[BUFFER_SIZE];
extern volatile psCANSubscriber_t apsVecCANSubscriber[BUFFER_SIZE];
extern FDCAN_HandleTypeDef hfdcan1;
extern volatile FDCAN_TxHeaderTypeDef xCANTxHeader;
extern volatile FDCAN_RxHeaderTypeDef xCANRxHeader;
extern volatile FDCAN_FilterTypeDef xCANFilter;
#endif /* APPLICATION_SOURCE_BFFT_EXTERNALS_H_ */
