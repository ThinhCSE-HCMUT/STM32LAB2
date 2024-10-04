/*
 * ledmatrix.c
 *
 *  Created on: Oct 1, 2024
 *      Author: Admin
 */

#include "ledmatrix.h"

void selectRow(int row, uint8_t col)
{
	switch(row)
	{
	case 0:
		HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, RESET);
		HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, SET);
		HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, SET);
		HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, SET);
		HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, SET);
		HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, SET);
		HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, SET);
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, SET);
		break;
	case 1:
		HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, RESET);
		HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, SET);
		HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, SET);
		HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, SET);
		HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, SET);
		HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, SET);
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, RESET);
		HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, SET);
		HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, SET);
		HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, SET);
		HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, SET);
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, SET);
		break;
	case 3:
		HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, RESET);
		HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, SET);
		HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, SET);
		HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, SET);
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, SET);
		break;
	case 4:
		HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, RESET);
		HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, SET);
		HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, SET);
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, SET);
		break;
	case 5:
		HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, RESET);
		HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, SET);
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, SET);
		break;
	case 6:
		HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, RESET);
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, SET);

		break;
	case 7:
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, RESET);
		break;
	default:
		break;
	}
}
void determineCol(uint8_t data)
{
	HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, (data & 0x01) ? RESET : SET);
	HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, (data & 0x02) ? RESET : SET);
	HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, (data & 0x04) ? RESET : SET);
	HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, (data & 0x08) ? RESET : SET);
	HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, (data & 0x10) ? RESET : SET);
	HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, (data & 0x20) ? RESET : SET);
	HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, (data & 0x40) ? RESET : SET);
	HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, (data & 0x80) ? RESET : SET);
}
