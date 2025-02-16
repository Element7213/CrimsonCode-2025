#include "map.h"

void mapInit(char mapArr[][COLS])
{
	for (int row = 0; row < ROWS; row++)
	{
		for (int col = 0; col < COLS; col++)
		{
			mapArr[row][col] = ' ';
		}
	}
}

void mapPrint(char mapArr[][COLS])
{
	// prints top row
	printf("+-------+\n");
	// prints movement spots
	printf("|%c %c %c/%c|\n", mapArr[0][0], mapArr[0][1], mapArr[0][2], mapArr[0][3]); // 1st row
	printf("|------ |\n"); // wall
	printf("|%c %c/%c %c|\n", mapArr[1][0], mapArr[1][1], mapArr[1][2], mapArr[1][3]); // 2nd row
	printf("| ------|\n"); // wall
	printf("|%c %c %c/%c|\n", mapArr[2][0], mapArr[2][1], mapArr[2][2], mapArr[2][3]); // 3rd row
	printf("|------ |\n"); // wall
	printf("|%c %c/%c %c|\n", mapArr[3][0], mapArr[3][1], mapArr[3][2], mapArr[3][3]); // 4th row
	printf("| ------|\n"); // wall
	printf("|%c %c %c %c\n", mapArr[4][0], mapArr[4][1], mapArr[4][2], mapArr[4][3]); // 5th row
	// prints bottom wall
	printf("+-------+\n"); 
}

void mapMovement()
{
	// function temp, update the spaces in map for player movement
}