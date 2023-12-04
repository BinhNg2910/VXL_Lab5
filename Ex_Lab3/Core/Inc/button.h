/*
 * button.h
 *
 *  Created on: Oct 30, 2023
 *      Author: vanbi
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"
#include "global.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

#define BTN_NUM 3

extern int btn_flag[BTN_NUM];

int isButtonPressed(int num);
void getKeyInput();

#endif /* INC_BUTTON_H_ */
