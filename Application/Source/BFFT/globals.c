/*
 * globals.c
 *
 *  Created on: 3 Jun 2021
 *      Author: Nutzer
 */

#include "externals.h"

volatile uint32_t au32VecUsedCANIDs[BUFFER_SIZE];
volatile psCANSubscriber_t apsVecCANSubscriber[BUFFER_SIZE];
volatile FDCAN_TxHeaderTypeDef xCANTxHeader;
volatile FDCAN_RxHeaderTypeDef xCANRxHeader;
volatile FDCAN_FilterTypeDef xCANFilter;
