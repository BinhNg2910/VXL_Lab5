/*
 * global.c
 *
 *  Created on: Nov 6, 2023
 *      Author: vanbi
 */
#include "global.h"

int status = 0;

int led_7Seg[4] = {0, 0, 0, 0};
int led7Seg_index = 0;

int RedVal = 5;
int GreenVal = 3;
int YellowVal = 2;

int RedCurr = 0;
int GreenCurr = 0;
int YellowCurr = 0;

int timerLed7Seg1 = 0;
int timerLed7Seg2 = 0;

int ToggleFlag = 0;

void UpdateLeg7Seg(){
	led_7Seg[0] = timerLed7Seg1 / 10;
	led_7Seg[1] = timerLed7Seg1 % 10;
	led_7Seg[2]= timerLed7Seg2 / 10;
	led_7Seg[3] = timerLed7Seg2 % 10;
}
