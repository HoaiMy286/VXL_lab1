/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

int demgiay = 0;
int demphut = 0;
int demgio = 0;

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

void setAllClock(int dem)
{
	HAL_GPIO_WritePin(LED_1_GPIO_Port,LED_1_Pin,0);
	HAL_GPIO_WritePin(LED_2_GPIO_Port,LED_2_Pin,0);
	HAL_GPIO_WritePin(LED_3_GPIO_Port,LED_3_Pin,0);
	HAL_GPIO_WritePin(LED_4_GPIO_Port,LED_4_Pin,0);
	HAL_GPIO_WritePin(LED_5_GPIO_Port,LED_5_Pin,0);
	HAL_GPIO_WritePin(LED_6_GPIO_Port,LED_6_Pin,0);
	HAL_GPIO_WritePin(LED_7_GPIO_Port,LED_7_Pin,0);
	HAL_GPIO_WritePin(LED_8_GPIO_Port,LED_8_Pin,0);
	HAL_GPIO_WritePin(LED_9_GPIO_Port,LED_9_Pin,0);
	HAL_GPIO_WritePin(LED_10_GPIO_Port,LED_10_Pin,0);
	HAL_GPIO_WritePin(LED_11_GPIO_Port,LED_11_Pin,0);
	HAL_GPIO_WritePin(LED_12_GPIO_Port,LED_12_Pin,0);
}

void clearAllClock ()
{
	 HAL_GPIO_WritePin(LED_1_GPIO_Port,LED_1_Pin,1);
	 HAL_GPIO_WritePin(LED_2_GPIO_Port,LED_2_Pin,1);
	 HAL_GPIO_WritePin(LED_3_GPIO_Port,LED_3_Pin,1);
	 HAL_GPIO_WritePin(LED_4_GPIO_Port,LED_4_Pin,1);
	 HAL_GPIO_WritePin(LED_5_GPIO_Port,LED_5_Pin,1);
	 HAL_GPIO_WritePin(LED_6_GPIO_Port,LED_6_Pin,1);
	 HAL_GPIO_WritePin(LED_7_GPIO_Port,LED_7_Pin,1);
	 HAL_GPIO_WritePin(LED_8_GPIO_Port,LED_8_Pin,1);
	 HAL_GPIO_WritePin(LED_9_GPIO_Port,LED_9_Pin,1);
	 HAL_GPIO_WritePin(LED_10_GPIO_Port,LED_10_Pin,1);
	 HAL_GPIO_WritePin(LED_11_GPIO_Port,LED_11_Pin,1);
	 HAL_GPIO_WritePin(LED_12_GPIO_Port,LED_12_Pin,1);
}

void setNumberOnClock(int num)
{
	if (num == 0)
	{
		HAL_GPIO_WritePin(LED_1_GPIO_Port,LED_1_Pin,0);
	}
	if (num == 1)
	{
		HAL_GPIO_WritePin(LED_2_GPIO_Port,LED_2_Pin,0);
	}
	if (num == 2)
	{
		HAL_GPIO_WritePin(LED_3_GPIO_Port,LED_3_Pin,0);
	}
	if (num == 3)
	{
		HAL_GPIO_WritePin(LED_4_GPIO_Port,LED_4_Pin,0);
	}
	if (num == 4)
	{
		HAL_GPIO_WritePin(LED_5_GPIO_Port,LED_5_Pin,0);
	}
	if (num == 5)
	{
		HAL_GPIO_WritePin(LED_6_GPIO_Port,LED_6_Pin,0);
	}
	if (num == 6)
	{
		HAL_GPIO_WritePin(LED_7_GPIO_Port,LED_7_Pin,0);
	}
	if (num == 7)
	{
		HAL_GPIO_WritePin(LED_8_GPIO_Port,LED_8_Pin,0);
	}
	if (num == 8)
	{
		HAL_GPIO_WritePin(LED_9_GPIO_Port,LED_9_Pin,0);
	}
	if (num == 9)
	{
		HAL_GPIO_WritePin(LED_10_GPIO_Port,LED_10_Pin,0);
	}
	if (num == 10)
	{
		HAL_GPIO_WritePin(LED_11_GPIO_Port,LED_11_Pin,0);
	}
	if (num == 11)
	{
		HAL_GPIO_WritePin(LED_12_GPIO_Port,LED_12_Pin,0);
	}
}

void clearNumberOnClock(int num)
{
	if (num == 0)
	{
		HAL_GPIO_WritePin(LED_1_GPIO_Port,LED_1_Pin,1);
	}
	if (num == 1)
	{
		HAL_GPIO_WritePin(LED_2_GPIO_Port,LED_2_Pin,1);
	}
	if (num == 2)
	{
		HAL_GPIO_WritePin(LED_3_GPIO_Port,LED_3_Pin,1);
	}
	if (num == 3)
	{
		HAL_GPIO_WritePin(LED_4_GPIO_Port,LED_4_Pin,1);
	}
	if (num == 4)
	{
		HAL_GPIO_WritePin(LED_5_GPIO_Port,LED_5_Pin,1);
	}
	if (num == 5)
	{
		HAL_GPIO_WritePin(LED_6_GPIO_Port,LED_6_Pin,1);
	}
	if (num == 6)
	{
		HAL_GPIO_WritePin(LED_7_GPIO_Port,LED_7_Pin,1);
	}
	if (num == 7)
	{
		HAL_GPIO_WritePin(LED_8_GPIO_Port,LED_8_Pin,1);
	}
	if (num == 8)
	{
		HAL_GPIO_WritePin(LED_9_GPIO_Port,LED_9_Pin,1);
	}
	if (num == 9)
	{
		HAL_GPIO_WritePin(LED_10_GPIO_Port,LED_10_Pin,1);
	}
	if (num == 10)
	{
		HAL_GPIO_WritePin(LED_11_GPIO_Port,LED_11_Pin,1);
	}
	if (num == 11)
	{
		HAL_GPIO_WritePin(LED_12_GPIO_Port,LED_12_Pin,1);
	}
}

void hienthi(int num)
{
	if (num >= 0 && num < 5)
	{
		setNumberOnClock(0);
	}
	if (num >= 5 && num < 10)
	{
		setNumberOnClock(1);
	}
	if (num >= 10 && num < 15)
	{
		setNumberOnClock(2);
	}
	if (num >= 15 && num < 20)
	{
		setNumberOnClock(3);
	}
	if (num >= 20 && num < 25)
	{
		setNumberOnClock(4);
	}
	if (num >= 25 && num < 30)
	{
		setNumberOnClock(5);
	}
	if (num >= 30 && num < 35)
	{
		setNumberOnClock(6);
	}
	if (num >= 35 && num < 40)
	{
		setNumberOnClock(7);
	}
	if (num >= 40 && num < 45)
	{
		setNumberOnClock(8);
	}
	if (num >= 45 && num < 50)
	{
		setNumberOnClock(9);
	}
	if (num >= 50 && num < 55)
	{
		setNumberOnClock(10);
	}
	if (num >= 55 && num < 60)
	{
		setNumberOnClock(11);
	}
}

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
	  clearAllClock();

	  hienthi(demgiay++);		// hien thi kim giay

	  if (demgiay == 60)
	  {
		  demgiay = 0;
		  demphut++;
	  }

	  hienthi(demphut);		// hien thi kim phut

	  if (demphut == 60)
	  {
		  demphut = 0;
		  demgio++;
	  }

	  hienthi (demgio * 5);	// hien thi kim gio

	  if (demgio == 12)
		  demgio = 0;

	  HAL_Delay (1000);
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, LED_1_Pin|LED_2_Pin|LED_3_Pin|LED_4_Pin
                          |LED_5_Pin|LED_6_Pin|LED_7_Pin|LED_8_Pin
                          |LED_9_Pin|LED_10_Pin|LED_11_Pin|LED_12_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : LED_1_Pin LED_2_Pin LED_3_Pin LED_4_Pin
                           LED_5_Pin LED_6_Pin LED_7_Pin LED_8_Pin
                           LED_9_Pin LED_10_Pin LED_11_Pin LED_12_Pin */
  GPIO_InitStruct.Pin = LED_1_Pin|LED_2_Pin|LED_3_Pin|LED_4_Pin
                          |LED_5_Pin|LED_6_Pin|LED_7_Pin|LED_8_Pin
                          |LED_9_Pin|LED_10_Pin|LED_11_Pin|LED_12_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
