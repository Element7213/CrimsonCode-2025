#include "map.h"

void mapInit(char mapArr[][COLS])
{
	for (int row = 0; row < ROWS; row++)
	{
		for (int col = 0; col < COLS; col++)
		{
			mapArr[row][col] = " ";
		}
	}
}

void mapPrint(char mapArr[][COLS])
{
	// display map
	for (int row = 0; row < ROWS; row++) {
		// print horizontal walls
		for (int j = 0; j < COLS; j++) {
			printf("+----");
		}
		printf("+\n");

		// print vertical walls and room spaces
		for (int col = 0; col < COLS; col++) {
			//printf("|    ");
			if (col == 0)
			{
				printf("|");
			}
			else 
			{
				//printf
			}
			//printf("|****"); 
		}
		// print walls except last one
		if (row < ROWS - 1)
			printf("|\n");
		else
			printf("\n");
	}
	// print bottom horizontal walls
	for (int col = 0; col < COLS; col++) {
		printf("+----");
	}
	printf("+\n");
}

void mapMovement()
{
	// function temp, update the spaces in map for player movement
}