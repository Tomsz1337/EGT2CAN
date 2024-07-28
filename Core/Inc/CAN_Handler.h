/*
 * CAN_Handler.h
 *
 *  Created on: Mar 7, 2023
 *      Author: Micza
 */

#ifndef INC_CAN_HANDLER_H_
#define INC_CAN_HANDLER_H_
#include "main.h"
#include "CAN_LIB.h"

void CAN_Handler_Init(void);

uint8_t RecieveColoursFromCan(uint16_t *r, uint16_t *g, uint16_t *b);

#endif /* INC_CAN_HANDLER_H_ */
