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
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define DIO0_Pin GPIO_PIN_0
#define DIO0_GPIO_Port GPIOA
#define DIO0_EXTI_IRQn EXTI0_IRQn
#define RESET_Pin GPIO_PIN_3
#define RESET_GPIO_Port GPIOA
#define NSS_Pin GPIO_PIN_4
#define NSS_GPIO_Port GPIOA
#define TEST_Pin GPIO_PIN_8
#define TEST_GPIO_Port GPIOA
#define TEST_EXTI_IRQn EXTI9_5_IRQn
#define FIRE0_Pin GPIO_PIN_10
#define FIRE0_GPIO_Port GPIOA
#define FIRE0_EXTI_IRQn EXTI15_10_IRQn
#define FIRE1_Pin GPIO_PIN_11
#define FIRE1_GPIO_Port GPIOA
#define FIRE1_EXTI_IRQn EXTI15_10_IRQn
#define LED_RED_Pin GPIO_PIN_12
#define LED_RED_GPIO_Port GPIOA
#define LED_GRN_Pin GPIO_PIN_15
#define LED_GRN_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
