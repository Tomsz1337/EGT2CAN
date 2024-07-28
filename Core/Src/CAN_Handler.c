/*
 * CAN_Handler.c
 *
 *  Created on: Mar 7, 2023
 *      Author: Micza
 *      Edited: R37R0
 */
#include "CAN_Handler.h"


extern CAN_HandleTypeDef hcan;
static can_frame TEST_frame;

uint32_t getFrameReceiveTick(can_frame *frame);

void CAN_Handler_Init() {
	CAN_Init(&hcan);
	CAN_InitFrame(&TEST_frame, &hcan, 0x100, 500, 8);
}

uint8_t RecieveColoursFromCan(uint16_t *r, uint16_t *g, uint16_t *b) {
	if (CAN_IsFrameActual(&TEST_frame)) {
		*r = TEST_frame.core.data[0];
		*g = TEST_frame.core.data[1];
		*b = TEST_frame.core.data[2];
		return 1;
	}
	return 0;
}
