/*
 * cppmain.c
 *
 *  Created on: Jul 6, 2022
 *      Author: Owner
 */
#include "main.h"
extern TIM_HandleTypeDef htim1;


void cppmain()
{
	while(1){
	HAL_TIM_PWM_Start(&htim1,TIM_CHANNEL_2);

	__HAL_TIM_SET_COMPARE(&htim1,TIM_CHANNEL_2,750);

	HAL_Delay(1000);
	__HAL_TIM_SET_COMPARE(&htim1,TIM_CHANNEL_2,500);

	HAL_Delay (1000);

}
}




