/*
 * button.c
 *
 *  Created on: Oct 30, 2023
 *      Author: vanbi
 */

#include "button.h"

uint16_t modeBtn[3] = {btnMode_Pin, btnIncrease_Pin, btnSetVal_Pin};

int KeyReg0[BTN_NUM] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int KeyReg1[BTN_NUM] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int KeyReg2[BTN_NUM] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int KeyReg3[BTN_NUM] = {NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};

int TimerForKeyPress[BTN_NUM] = {200, 200, 200};
int btn_flag[BTN_NUM] = {0, 0, 0};

int isButtonPressed(int index){
	if(btn_flag[index] == 1){
		btn_flag[index] = 0;
		return 1;
	}
	return 0;
}

void subKeyProcess(int index){
	//TODO
	btn_flag[index] = 1;
}

void getKeyInput(){
	for(int i = 0; i < BTN_NUM; i++){
		KeyReg2[i] = KeyReg1[i];
		KeyReg1[i] = KeyReg0[i];
		KeyReg0[i] = HAL_GPIO_ReadPin(GPIOB, modeBtn[i]);
//		KeyReg0[i] = KeyReg1[i];
//		KeyReg1[i] = KeyReg2[i];
//		KeyReg2[i] = HAL_GPIO_ReadPin(GPIOB, modeBtn[i]);

		if((KeyReg0[i] == KeyReg1[i]) && (KeyReg1[i] == KeyReg2[i])){
			if(KeyReg3[i] != KeyReg2[i]){
				KeyReg3[i] = KeyReg2[i];
				if(KeyReg3[i] == PRESSED_STATE){
					//TODO
					subKeyProcess(i);
					TimerForKeyPress[i] = 200;
				}
			}else{
				TimerForKeyPress[i]--;
				if(TimerForKeyPress[i] == 0){
					//TODO
					KeyReg3[i] = NORMAL_STATE;
				}
			}
		}
	}
}
