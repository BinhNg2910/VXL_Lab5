/*
 * timer.c
 *
 *  Created on: Nov 13, 2023
 *      Author: vanbi
 */
#include "timer.h"

void timerProcess(){
	  if(timer3_flag == 1){
		  setTimer3(10);
		  UpdateLeg7Seg();
	  }
	  if(timer4_flag == 1){
		  setTimer4(25);
		  clearSeg();
		  displayNum(led_7Seg[led7Seg_index]);
		  displaySegLed(led7Seg_index);
		  led7Seg_index++;
		  if(led7Seg_index >= 4){
			  led7Seg_index = 0;
		  }
	  }
}

