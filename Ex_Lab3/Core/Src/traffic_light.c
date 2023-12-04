/*
 * traffic_light.c
 *
 *  Created on: Nov 12, 2023
 *      Author: vanbi
 */

#include "traffic_light.h"

void onRed1(){
	HAL_GPIO_WritePin(Red1_GPIO_Port, Red1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(Green1_GPIO_Port, Green1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(Yellow1_GPIO_Port, Yellow1_Pin, GPIO_PIN_RESET);
}

void onGreen1(){
	HAL_GPIO_WritePin(Red1_GPIO_Port, Red1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(Green1_GPIO_Port, Green1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(Yellow1_GPIO_Port, Yellow1_Pin, GPIO_PIN_RESET);
}

void onYellow1(){
	HAL_GPIO_WritePin(Red1_GPIO_Port, Red1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(Green1_GPIO_Port, Green1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(Yellow1_GPIO_Port, Yellow1_Pin, GPIO_PIN_SET);
}

void onRed2(){
	HAL_GPIO_WritePin(Red2_GPIO_Port, Red2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(Green2_GPIO_Port, Green2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(Yellow2_GPIO_Port, Yellow2_Pin, GPIO_PIN_RESET);
}

void onGreen2(){
	HAL_GPIO_WritePin(Red2_GPIO_Port, Red2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(Green2_GPIO_Port, Green2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(Yellow2_GPIO_Port, Yellow2_Pin, GPIO_PIN_RESET);
}

void onYellow2(){
	HAL_GPIO_WritePin(Red2_GPIO_Port, Red2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(Green2_GPIO_Port, Green2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(Yellow2_GPIO_Port, Yellow2_Pin, GPIO_PIN_SET);
}

void TurnOffAll(){
	HAL_GPIO_WritePin(Red1_GPIO_Port, Red1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(Green1_GPIO_Port, Green1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(Yellow1_GPIO_Port, Yellow1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(Red2_GPIO_Port, Red2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(Green2_GPIO_Port, Green2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(Yellow2_GPIO_Port, Yellow2_Pin, GPIO_PIN_RESET);
}
