/*
 * global.h
 *
 *  Created on: Nov 6, 2023
 *      Author: vanbi
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "software_timer.h"
#include "button.h"
#include "main.h"
#include "traffic_light.h"
#include "fsm_automatic.h"
#include "fsm_manual.h"
#include "timer.h"
#include "scheduler.h"

#define INIT		0
#define RED_GREEN	1
#define RED_YELLOW	2
#define GREEN_RED	3
#define YELLOW_RED	4

#define MAN_RED 12
#define MAN_GREEN 13
#define MAN_YELLOW 14

extern int status;
extern int RedVal;
extern int GreenVal;
extern int YellowVal;

extern int RedCurr;
extern int GreenCurr;
extern int YellowCurr;

extern int ToggleFlag;

extern int timerLed7Seg1;
extern int timerLed7Seg2;

extern int led_7Seg[4];
extern int led7Seg_index;

void UpdateLeg7Seg();

#endif /* INC_GLOBAL_H_ */
