/*
 * CAN.h
 *
 *  Created on: 03.06.2021
 *      Author: maanm
 */

#ifndef APPLICATION_SOURCE_BFFT_CAN_CAN_H_
#define APPLICATION_SOURCE_BFFT_CAN_CAN_H_

#include "main.h"
/**
 * @fn eCAN
 * @brief Error handling enum
 */
typedef enum eCAN
{
   eCAN_ERROR = 0,
   eCAN_OKAY
} eCAN_t;


/*------ Function Declaration-----*/
eCAN_t eCAN_Start(void);

#endif /* APPLICATION_SOURCE_BFFT_CAN_CAN_H_ */
