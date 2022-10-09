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

int dem1 = 10;
int dem2 = 10;

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

void display7SEG(int num)
{
	if (num == 0)
	{
		HAL_GPIO_WritePin(A_GPIO_Port,A_Pin,0);
		HAL_GPIO_WritePin(B_GPIO_Port,B_Pin,0);
		HAL_GPIO_WritePin(C_GPIO_Port,C_Pin,0);
		HAL_GPIO_WritePin(D_GPIO_Port,D_Pin,0);
		HAL_GPIO_WritePin(E_GPIO_Port,E_Pin,0);
		HAL_GPIO_WritePin(F_GPIO_Port,F_Pin,0);
		HAL_GPIO_WritePin(G_GPIO_Port,G_Pin,1);
	}
	if (num == 1)
	{
		HAL_GPIO_WritePin(A_GPIO_Port,A_Pin,1);
		HAL_GPIO_WritePin(B_GPIO_Port,B_Pin,0);
		HAL_GPIO_WritePin(C_GPIO_Port,C_Pin,0);
		HAL_GPIO_WritePin(D_GPIO_Port,D_Pin,1);
		HAL_GPIO_WritePin(E_GPIO_Port,E_Pin,1);
		HAL_GPIO_WritePin(F_GPIO_Port,F_Pin,1);
		HAL_GPIO_WritePin(G_GPIO_Port,G_Pin,1);
	}
	if (num == 2)
	{
		HAL_GPIO_WritePin(A_GPIO_Port,A_Pin,0);
		HAL_GPIO_WritePin(B_GPIO_Port,B_Pin,0);
		HAL_GPIO_WritePin(C_GPIO_Port,C_Pin,1);
		HAL_GPIO_WritePin(D_GPIO_Port,D_Pin,0);
		HAL_GPIO_WritePin(E_GPIO_Port,E_Pin,0);
		HAL_GPIO_WritePin(F_GPIO_Port,F_Pin,1);
		HAL_GPIO_WritePin(G_GPIO_Port,G_Pin,0);
	}
	if (num == 3)
	{
		HAL_GPIO_WritePin(A_GPIO_Port,A_Pin,0);
		HAL_GPIO_WritePin(B_GPIO_Port,B_Pin,0);
		HAL_GPIO_WritePin(C_GPIO_Port,C_Pin,0);
		HAL_GPIO_WritePin(D_GPIO_Port,D_Pin,0);
		HAL_GPIO_WritePin(E_GPIO_Port,E_Pin,1);
		HAL_GPIO_WritePin(F_GPIO_Port,F_Pin,1);
		HAL_GPIO_WritePin(G_GPIO_Port,G_Pin,0);
	}
	if (num == 4)
	{
		HAL_GPIO_WritePin(A_GPIO_Port,A_Pin,1);
		HAL_GPIO_WritePin(B_GPIO_Port,B_Pin,0);
		HAL_GPIO_WritePin(C_GPIO_Port,C_Pin,0);
		HAL_GPIO_WritePin(D_GPIO_Port,D_Pin,1);
		HAL_GPIO_WritePin(E_GPIO_Port,E_Pin,1);
		HAL_GPIO_WritePin(F_GPIO_Port,F_Pin,0);
		HAL_GPIO_WritePin(G_GPIO_Port,G_Pin,0);
	}
	if (num == 5)
	{
		HAL_GPIO_WritePin(A_GPIO_Port,A_Pin,0);
		HAL_GPIO_WritePin(B_GPIO_Port,B_Pin,1);
		HAL_GPIO_WritePin(C_GPIO_Port,C_Pin,0);
		HAL_GPIO_WritePin(D_GPIO_Port,D_Pin,0);
		HAL_GPIO_WritePin(E_GPIO_Port,E_Pin,1);
		HAL_GPIO_WritePin(F_GPIO_Port,F_Pin,0);
		HAL_GPIO_WritePin(G_GPIO_Port,G_Pin,0);
	}
	if (num == 6)
	{
		HAL_GPIO_WritePin(A_GPIO_Port,A_Pin,0);
		HAL_GPIO_WritePin(B_GPIO_Port,B_Pin,1);
		HAL_GPIO_WritePin(C_GPIO_Port,C_Pin,0);
		HAL_GPIO_WritePin(D_GPIO_Port,D_Pin,0);
		HAL_GPIO_WritePin(E_GPIO_Port,E_Pin,0);
		HAL_GPIO_WritePin(F_GPIO_Port,F_Pin,0);
		HAL_GPIO_WritePin(G_GPIO_Port,G_Pin,0);
	}
	if (num == 7)
	{
		HAL_GPIO_WritePin(A_GPIO_Port,A_Pin,0);
		HAL_GPIO_WritePin(B_GPIO_Port,B_Pin,0);
		HAL_GPIO_WritePin(C_GPIO_Port,C_Pin,0);
		HAL_GPIO_WritePin(D_GPIO_Port,D_Pin,1);
		HAL_GPIO_WritePin(E_GPIO_Port,E_Pin,1);
		HAL_GPIO_WritePin(F_GPIO_Port,F_Pin,1);
		HAL_GPIO_WritePin(G_GPIO_Port,G_Pin,1);
	}
	if (num == 8)
	{
		HAL_GPIO_WritePin(A_GPIO_Port,A_Pin,0);
		HAL_GPIO_WritePin(B_GPIO_Port,B_Pin,0);
		HAL_GPIO_WritePin(C_GPIO_Port,C_Pin,0);
		HAL_GPIO_WritePin(D_GPIO_Port,D_Pin,0);
		HAL_GPIO_WritePin(E_GPIO_Port,E_Pin,0);
		HAL_GPIO_WritePin(F_GPIO_Port,F_Pin,0);
		HAL_GPIO_WritePin(G_GPIO_Port,G_Pin,0);
	}
	if (num == 9)
	{
		HAL_GPIO_WritePin(A_GPIO_Port,A_Pin,0);
		HAL_GPIO_WritePin(B_GPIO_Port,B_Pin,0);
		HAL_GPIO_WritePin(C_GPIO_Port,C_Pin,0);
		HAL_GPIO_WritePin(D_GPIO_Port,D_Pin,0);
		HAL_GPIO_WritePin(E_GPIO_Port,E_Pin,1);
		HAL_GPIO_WritePin(F_GPIO_Port,F_Pin,0);
		HAL_GPIO_WritePin(G_GPIO_Port,G_Pin,0);
	}
}

void display7SEG_2(int num)
{
	if (num == 0)
	{
		HAL_GPIO_WritePin(A2_GPIO_Port,A2_Pin,0);
		HAL_GPIO_WritePin(B2_GPIO_Port,B2_Pin,0);
		HAL_GPIO_WritePin(C2_GPIO_Port,C2_Pin,0);
		HAL_GPIO_WritePin(D2_GPIO_Port,D2_Pin,0);
		HAL_GPIO_WritePin(E2_GPIO_Port,E2_Pin,0);
		HAL_GPIO_WritePin(F2_GPIO_Port,F2_Pin,0);
		HAL_GPIO_WritePin(G2_GPIO_Port,G2_Pin,1);
	}
	if (num == 1)
	{
		HAL_GPIO_WritePin(A2_GPIO_Port,A2_Pin,1);
		HAL_GPIO_WritePin(B2_GPIO_Port,B2_Pin,0);
		HAL_GPIO_WritePin(C2_GPIO_Port,C2_Pin,0);
		HAL_GPIO_WritePin(D2_GPIO_Port,D2_Pin,1);
		HAL_GPIO_WritePin(E2_GPIO_Port,E2_Pin,1);
		HAL_GPIO_WritePin(F2_GPIO_Port,F2_Pin,1);
		HAL_GPIO_WritePin(G2_GPIO_Port,G2_Pin,1);
	}
	if (num == 2)
	{
		HAL_GPIO_WritePin(A2_GPIO_Port,A2_Pin,0);
		HAL_GPIO_WritePin(B2_GPIO_Port,B2_Pin,0);
		HAL_GPIO_WritePin(C2_GPIO_Port,C2_Pin,1);
		HAL_GPIO_WritePin(D2_GPIO_Port,D2_Pin,0);
		HAL_GPIO_WritePin(E2_GPIO_Port,E2_Pin,0);
		HAL_GPIO_WritePin(F2_GPIO_Port,F2_Pin,1);
		HAL_GPIO_WritePin(G2_GPIO_Port,G2_Pin,0);
	}
	if (num == 3)
	{
		HAL_GPIO_WritePin(A2_GPIO_Port,A2_Pin,0);
		HAL_GPIO_WritePin(B2_GPIO_Port,B2_Pin,0);
		HAL_GPIO_WritePin(C2_GPIO_Port,C2_Pin,0);
		HAL_GPIO_WritePin(D2_GPIO_Port,D2_Pin,0);
		HAL_GPIO_WritePin(E2_GPIO_Port,E2_Pin,1);
		HAL_GPIO_WritePin(F2_GPIO_Port,F2_Pin,1);
		HAL_GPIO_WritePin(G2_GPIO_Port,G2_Pin,0);
	}
	if (num == 4)
	{
		HAL_GPIO_WritePin(A2_GPIO_Port,A2_Pin,1);
		HAL_GPIO_WritePin(B2_GPIO_Port,B2_Pin,0);
		HAL_GPIO_WritePin(C2_GPIO_Port,C2_Pin,0);
		HAL_GPIO_WritePin(D2_GPIO_Port,D2_Pin,1);
		HAL_GPIO_WritePin(E2_GPIO_Port,E2_Pin,1);
		HAL_GPIO_WritePin(F2_GPIO_Port,F2_Pin,0);
		HAL_GPIO_WritePin(G2_GPIO_Port,G2_Pin,0);
	}
	if (num == 5)
	{
		HAL_GPIO_WritePin(A2_GPIO_Port,A2_Pin,0);
		HAL_GPIO_WritePin(B2_GPIO_Port,B2_Pin,1);
		HAL_GPIO_WritePin(C2_GPIO_Port,C2_Pin,0);
		HAL_GPIO_WritePin(D2_GPIO_Port,D2_Pin,0);
		HAL_GPIO_WritePin(E2_GPIO_Port,E2_Pin,1);
		HAL_GPIO_WritePin(F2_GPIO_Port,F2_Pin,0);
		HAL_GPIO_WritePin(G2_GPIO_Port,G2_Pin,0);
	}
	if (num == 6)
	{
		HAL_GPIO_WritePin(A2_GPIO_Port,A2_Pin,0);
		HAL_GPIO_WritePin(B2_GPIO_Port,B2_Pin,1);
		HAL_GPIO_WritePin(C2_GPIO_Port,C2_Pin,0);
		HAL_GPIO_WritePin(D2_GPIO_Port,D2_Pin,0);
		HAL_GPIO_WritePin(E2_GPIO_Port,E2_Pin,0);
		HAL_GPIO_WritePin(F2_GPIO_Port,F2_Pin,0);
		HAL_GPIO_WritePin(G2_GPIO_Port,G2_Pin,0);
	}
	if (num == 7)
	{
		HAL_GPIO_WritePin(A2_GPIO_Port,A2_Pin,0);
		HAL_GPIO_WritePin(B2_GPIO_Port,B2_Pin,0);
		HAL_GPIO_WritePin(C2_GPIO_Port,C2_Pin,0);
		HAL_GPIO_WritePin(D2_GPIO_Port,D2_Pin,1);
		HAL_GPIO_WritePin(E2_GPIO_Port,E2_Pin,1);
		HAL_GPIO_WritePin(F2_GPIO_Port,F2_Pin,1);
		HAL_GPIO_WritePin(G2_GPIO_Port,G2_Pin,1);
	}
	if (num == 8)
	{
		HAL_GPIO_WritePin(A2_GPIO_Port,A2_Pin,0);
		HAL_GPIO_WritePin(B2_GPIO_Port,B2_Pin,0);
		HAL_GPIO_WritePin(C2_GPIO_Port,C2_Pin,0);
		HAL_GPIO_WritePin(D2_GPIO_Port,D2_Pin,0);
		HAL_GPIO_WritePin(E2_GPIO_Port,E2_Pin,0);
		HAL_GPIO_WritePin(F2_GPIO_Port,F2_Pin,0);
		HAL_GPIO_WritePin(G2_GPIO_Port,G2_Pin,0);
	}
	if (num == 9)
	{
		HAL_GPIO_WritePin(A2_GPIO_Port,A2_Pin,0);
		HAL_GPIO_WritePin(B2_GPIO_Port,B2_Pin,0);
		HAL_GPIO_WritePin(C2_GPIO_Port,C2_Pin,0);
		HAL_GPIO_WritePin(D2_GPIO_Port,D2_Pin,0);
		HAL_GPIO_WritePin(E2_GPIO_Port,E2_Pin,1);
		HAL_GPIO_WritePin(F2_GPIO_Port,F2_Pin,0);
		HAL_GPIO_WritePin(G2_GPIO_Port,G2_Pin,0);
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
	  // DEN 111111
	  if(dem1 <= 10 && dem1 > 5)	// do
	  {
		  HAL_GPIO_WritePin(LED_RED_1_GPIO_Port,LED_RED_1_Pin,0); 		// red sang
		  HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port,LED_GREEN_1_Pin,1);	// green tat
		  HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port,LED_YELLOW_1_Pin,1);	// yel tat

		  display7SEG(dem1 - 6);
	  }
	  if (dem1 <= 5 && dem1 > 2)	// xanh
	  {
		  HAL_GPIO_WritePin(LED_RED_1_GPIO_Port,LED_RED_1_Pin,1);		// red tat
		  HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port,LED_GREEN_1_Pin,0);	// green sang
		  HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port,LED_YELLOW_1_Pin,1);	// yel tat

		  display7SEG(dem1 - 3);
	  }
	  if (dem1 <= 2)	// vang
	  {
		  HAL_GPIO_WritePin(LED_RED_1_GPIO_Port,LED_RED_1_Pin,1);		// red tat
		  HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port,LED_GREEN_1_Pin,1);	// green tat
		  HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port,LED_YELLOW_1_Pin,0);	// yel sang

		  display7SEG(dem1 - 1);
	  }

	  // DEN 2222222
	  if(dem2 <= 10 && dem2 > 8)	// xanh 2 hd
	  {
		  HAL_GPIO_WritePin(LED_RED_2_GPIO_Port,LED_RED_2_Pin,1);		// red tat
		  HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port,LED_GREEN_2_Pin,0);	// green sang
		  HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port,LED_YELLOW_2_Pin,1);	// yel tat

		  display7SEG_2(dem2 - 8);
	  }
	  if (dem2 <= 8 && dem2 > 5)	// vang 2 hd
	  {
		  HAL_GPIO_WritePin(LED_RED_2_GPIO_Port,LED_RED_2_Pin,1);		// red tat
		  HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port,LED_GREEN_2_Pin,1);	// green tat
		  HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port,LED_YELLOW_2_Pin,0);	// yel sang

		  display7SEG_2(dem2 - 6);
	  }
	  if (dem2 <= 5)	// do 2 hd
	  {
		  HAL_GPIO_WritePin(LED_RED_2_GPIO_Port,LED_RED_2_Pin,0); 		// red sang
		  HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port,LED_GREEN_2_Pin,1);	// green tat
		  HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port,LED_YELLOW_2_Pin,1);	// yel tat

		  display7SEG_2(dem2 - 1);
	  }

	  dem1--;
	  dem2--;

	  if (dem1 == 0)
	  {
		  dem1 = 10;
		  dem2 = 10;
	  }

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
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, LED_RED_1_Pin|LED_YELLOW_1_Pin|LED_GREEN_1_Pin|LED_RED_2_Pin
                          |LED_YELLOW_2_Pin|LED_GREEN_2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, A_Pin|B_Pin|C_Pin|D2_Pin
                          |E2_Pin|F2_Pin|G2_Pin|D_Pin
                          |E_Pin|F_Pin|G_Pin|A2_Pin
                          |B2_Pin|C2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : LED_RED_1_Pin LED_YELLOW_1_Pin LED_GREEN_1_Pin LED_RED_2_Pin
                           LED_YELLOW_2_Pin LED_GREEN_2_Pin */
  GPIO_InitStruct.Pin = LED_RED_1_Pin|LED_YELLOW_1_Pin|LED_GREEN_1_Pin|LED_RED_2_Pin
                          |LED_YELLOW_2_Pin|LED_GREEN_2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : A_Pin B_Pin C_Pin D2_Pin
                           E2_Pin F2_Pin G2_Pin D_Pin
                           E_Pin F_Pin G_Pin A2_Pin
                           B2_Pin C2_Pin */
  GPIO_InitStruct.Pin = A_Pin|B_Pin|C_Pin|D2_Pin
                          |E2_Pin|F2_Pin|G2_Pin|D_Pin
                          |E_Pin|F_Pin|G_Pin|A2_Pin
                          |B2_Pin|C2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

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
