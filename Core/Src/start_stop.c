#include "start_stop.h"

void Magnetism_start()
{
	__HAL_TIM_SetCompare(&htim3, TIM_CHANNEL_1, 500);
}
void Magnetism_stop()
{
	__HAL_TIM_SetCompare(&htim3, TIM_CHANNEL_1, 0);
}



void Temp_start()
{
	__HAL_TIM_SetCompare(&htim3, TIM_CHANNEL_2, 500);
}

void Temp_stop()
{
	__HAL_TIM_SetCompare(&htim3, TIM_CHANNEL_2, 0);
}




void Motor_start()
{
	__HAL_TIM_SetCompare(&htim3, TIM_CHANNEL_3, 500);
}
void Motor_stop()
{
	__HAL_TIM_SetCompare(&htim3, TIM_CHANNEL_3, 0);
}