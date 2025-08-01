/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
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
typedef enum {
  MOTOR,
  ROTATE,
  SPEED,
  DISPLAY,
  PTASK2,
  PTASK3,
  PTASK4,
  PTASK5,
  CMD_INVALID
} CommandType_t;

typedef enum {
  ON,
  OFF,
  CW,
  CCW,
  ALL,
  TEMP,
  HUMID,
  PARAM_INVALID
} CommandParameter_t;

typedef struct {
  CommandType_t cmd;
  uint32_t param;
} Command_t;

typedef struct {
	float temp;
	float humid;
} SensorData_t;
/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define IN1_Pin GPIO_PIN_0
#define IN1_GPIO_Port GPIOA
#define IN2_Pin GPIO_PIN_1
#define IN2_GPIO_Port GPIOA
#define ENA_Pin GPIO_PIN_2
#define ENA_GPIO_Port GPIOA
#define SEN_SCL_Pin GPIO_PIN_10
#define SEN_SCL_GPIO_Port GPIOB
#define SEN_SDA_Pin GPIO_PIN_11
#define SEN_SDA_GPIO_Port GPIOB
#define LCD_SCL_Pin GPIO_PIN_6
#define LCD_SCL_GPIO_Port GPIOB
#define LCD_SDA_Pin GPIO_PIN_7
#define LCD_SDA_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */
#define FlagISR (1UL << 0UL)

#define RX_BUFFER_SIZE 32
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
