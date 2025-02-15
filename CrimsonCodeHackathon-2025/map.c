#include "map.h"

void mapInit()
{
	// 2D array to be used as linear map movement
	//char mapArr[ROWS][COLS] = {'\0'}; // initializes as empty, TO BE IN MAIN???
								// size index for 3 questions for 5 rooms, with buffer spaces

	// display map
	for (int row = 0; row < ROWS; row++) {
		// print horizontal walls
		for (int j = 0; j < COLS; j++) {
			printf("+----");
		}
		printf("+\n");

		// print vertical walls and room spaces
		for (int col = 0; col < COLS; col++) {
			printf("|    ");
			//printf("|****"); 
		}
		// print walls except last one
		if (row < ROWS-1)
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