#include "main.h"
#include"led.h"


void clearAllClock(void){
	 HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, SET);
	 HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, SET);
	 HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, SET);
	 HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, SET);
	 HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, SET);
	 HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, SET);
	 HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, SET);
	 HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, SET);
	 HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, SET);
	 HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, SET);
	 HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14, SET);
	 HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, SET);
}

void setNumberOnClock(int num){
	switch(num)
	{
	case 0:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, RESET);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, RESET);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, RESET);
		break;
	case 8:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, RESET);
		break;
	case 10:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14, RESET);
		break;
	case 11:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, RESET);
		break;
	default:
		break;

	}


}
void clearNumberOnClock(int num){
	switch(num)
	{
	case 0:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, SET);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, SET);
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, SET);
		break;
	case 4:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, SET);
		break;
	case 5:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, SET);
		break;
	case 6:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, SET);
		break;
	case 7:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_11, SET);
		break;
	case 8:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12, SET);
		break;
	case 9:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13, SET);
		break;
	case 10:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14, SET);
		break;
	case 11:
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, SET);
		break;
	default:
		break;

	}


}
void Clock(int hour, int minute, int sec){
		setNumberOnClock(hour);
		setNumberOnClock(minute);
		setNumberOnClock(sec);
}
