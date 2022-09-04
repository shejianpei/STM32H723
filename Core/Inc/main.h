/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32h7xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include <rtthread.h>
#include <rthw.h>
#include <stdio.h>
#include "gpio.h"
#include "delay.h"
#include "ds18b20.h"
/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */
extern rt_sem_t magnetism_sem;
extern uint8_t magnetism_flag;
extern uint8_t Temp_flag;
extern uint8_t motor_flag;
/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define B1_Pin GPIO_PIN_13
#define B1_GPIO_Port GPIOC
#define SW5_Pin GPIO_PIN_3
#define SW5_GPIO_Port GPIOF
#define SW5_EXTI_IRQn EXTI3_IRQn
#define MCO_Pin GPIO_PIN_0
#define MCO_GPIO_Port GPIOH
#define ADC6_Pin GPIO_PIN_1
#define ADC6_GPIO_Port GPIOC
#define Temp4_PWM_Pin GPIO_PIN_1
#define Temp4_PWM_GPIO_Port GPIOA
#define Magnetic4_PWM_Pin GPIO_PIN_2
#define Magnetic4_PWM_GPIO_Port GPIOA
#define Moto4_PWM_Pin GPIO_PIN_3
#define Moto4_PWM_GPIO_Port GPIOA
#define Magnetic6_PWM_Pin GPIO_PIN_5
#define Magnetic6_PWM_GPIO_Port GPIOA
#define ADC1_Pin GPIO_PIN_6
#define ADC1_GPIO_Port GPIOA
#define ADC3_Pin GPIO_PIN_7
#define ADC3_GPIO_Port GPIOA
#define ADC4_Pin GPIO_PIN_4
#define ADC4_GPIO_Port GPIOC
#define ADC5_Pin GPIO_PIN_5
#define ADC5_GPIO_Port GPIOC
#define LED_GREEN_Pin GPIO_PIN_0
#define LED_GREEN_GPIO_Port GPIOB
#define ADC2_Pin GPIO_PIN_1
#define ADC2_GPIO_Port GPIOB
#define SW3_Pin GPIO_PIN_11
#define SW3_GPIO_Port GPIOF
#define SW3_EXTI_IRQn EXTI15_10_IRQn
#define SW4_Pin GPIO_PIN_15
#define SW4_GPIO_Port GPIOF
#define SW4_EXTI_IRQn EXTI15_10_IRQn
#define Motor6_PWM_Pin GPIO_PIN_10
#define Motor6_PWM_GPIO_Port GPIOB
#define Temp6_PWM_Pin GPIO_PIN_11
#define Temp6_PWM_GPIO_Port GPIOB
#define LED_RED_Pin GPIO_PIN_14
#define LED_RED_GPIO_Port GPIOB
#define Motor3_PWM_Pin GPIO_PIN_15
#define Motor3_PWM_GPIO_Port GPIOB
#define Magnetic2_PWM_Pin GPIO_PIN_12
#define Magnetic2_PWM_GPIO_Port GPIOD
#define USB_FS_OVCR_Pin GPIO_PIN_7
#define USB_FS_OVCR_GPIO_Port GPIOG
#define Magnetic1_PWM_Pin GPIO_PIN_6
#define Magnetic1_PWM_GPIO_Port GPIOC
#define Temp1_PWM_Pin GPIO_PIN_7
#define Temp1_PWM_GPIO_Port GPIOC
#define Motor1_PWM_Pin GPIO_PIN_8
#define Motor1_PWM_GPIO_Port GPIOC
#define Temp2_PWM_Pin GPIO_PIN_9
#define Temp2_PWM_GPIO_Port GPIOC
#define SWDIO_Pin GPIO_PIN_13
#define SWDIO_GPIO_Port GPIOA
#define SWCLK_Pin GPIO_PIN_14
#define SWCLK_GPIO_Port GPIOA
#define SWO_Pin GPIO_PIN_3
#define SWO_GPIO_Port GPIOB
#define Motor2_PWM_Pin GPIO_PIN_7
#define Motor2_PWM_GPIO_Port GPIOB
#define Temp3_PWM_Pin GPIO_PIN_8
#define Temp3_PWM_GPIO_Port GPIOB
#define Magnetic3_PWM_Pin GPIO_PIN_9
#define Magnetic3_PWM_GPIO_Port GPIOB
#define SW2_Pin GPIO_PIN_0
#define SW2_GPIO_Port GPIOE
#define SW2_EXTI_IRQn EXTI0_IRQn
#define LED_YELLOW_Pin GPIO_PIN_1
#define LED_YELLOW_GPIO_Port GPIOE
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
