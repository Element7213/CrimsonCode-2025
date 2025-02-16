#include "map.h"

void mapInit(char mapArr[][COLS])
{
	char s = 254; // square ascii code
	for (int row = 0; row < ROWS; row++)
	{
		for (int col = 0; col < COLS; col++)
		{
			//mapArr[row][col] = "*****************************";
			mapArr[row][col] = s;
		}
	}
}

//void mapPrint(char* mapArr[][COLS])
//{
//	// prints top row
//	for (int j = 0; j < 5; j++)
//	{
//		printf("++");
//		for (int i = 0; i < COLS * 5; i++)
//			printf("=======");
//		printf("=++\n");
//	} 
//
//	/*printf("%s%s%s%s%s%s",
//   "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^~^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^:\n",
//   "?............................ 7?: .......................... !?~ .......................... ^!\n", 
//   "?                             7?:                            ~?^                            ^!\n",
//   "?                             7?:                            ~?^                            ^!\n",
//   "?                             7?:                            ~?^                            ^!\n",
//   "?                             7?:                            ~?^                            ^!\n",
//   "?                             7?:                            ~?^                            ^!\n",
//   ?                             7?:                            ~?^                            ^!   
//   ?                             7?:                            ~?^                            ^!   
//   ?                             7?:                            ~?^                            ^!   
//   ?                             7?:                            ~?^                            ^!   
//   ?                             7?:                            ~?^                            ^!   
//   ?                             7?:                            !?~                            ^!   
//   !^^^^^^^^^^^^^^^^^^^^^^^^^^^^^!~~^^^^^^^^^^^^^^^^^^^^^^^^^^^^~~~^^^^^^^^^^^^^^^^^^^^^^^^^^^^~^)*/
//
//
//
//	/* 
//	prints movement spots 
//	*/
//	//wall space
//	printf("||");
//	for (int i = 0; i < COLS * 5; i++)
//		printf("       ");
//	printf(" ||\n");
//	// 1st row
//	printf("||%s      %s      %s      /      %s||\n", mapArr[0][0], mapArr[0][1], mapArr[0][2], mapArr[0][3]);  
//	printf("||%s      %s      %s      /      %s||\n", mapArr[0][0], mapArr[0][1], mapArr[0][2], mapArr[0][3]); 
//	printf("||%s      %s      %s      /      %s||\n", mapArr[0][0], mapArr[0][1], mapArr[0][2], mapArr[0][3]); 
//	//wall space
//	printf("||");
//	for (int i = 0; i < COLS * 5; i++)
//		printf("       ");
//	printf(" ||\n");
//
//	// wall 1
//	printf("||");
//	for (int i = 0; i < COLS * 4; i++)
//		printf("=======");
//	printf("                             ||\n");
//
//	//wall space
//	printf("||");
//	for (int i = 0; i < COLS * 5; i++)
//		printf("       ");
//	printf(" ||\n");
//	// 2nd row
//	printf("||%s      /      %s      %s      %s||\n", mapArr[1][0], mapArr[1][1], mapArr[1][2], mapArr[1][3]);
//	printf("||%s      /      %s      %s      %s||\n", mapArr[1][0], mapArr[1][1], mapArr[1][2], mapArr[1][3]); 
//	printf("||%s      /      %s      %s      %s||\n", mapArr[1][0], mapArr[1][1], mapArr[1][2], mapArr[1][3]); 
//	//wall space
//	printf("||");
//	for (int i = 0; i < COLS * 5; i++)
//		printf("       ");
//	printf(" ||\n"); 
//
//	// wall 2
//	printf("||");
//	for (int i = 0; i < COLS * 4-1; i++)
//		printf("=======");
//	printf("=");
//	for (int i = 0; i < 35; i++)
//		printf(" ");
//	printf("||\n");
//
//	//wall space
//	printf("||");
//	for (int i = 0; i < COLS * 5; i++)
//		printf("       ");
//	printf(" ||\n");
//
//	// 3rd row
//	printf("||%s		%s		%s		/		%s||\n", mapArr[2][0], mapArr[2][1], mapArr[2][2], mapArr[2][3]); 
//
//	printf("|------ |\n"); // wall 3
//
//	//wall space
//	printf("||");
//	for (int i = 0; i < COLS * 5; i++)
//		printf("       ");
//	printf(" ||\n");
//	printf("|%s%2s\\%s%2s|\n", mapArr[3][0], mapArr[3][1], mapArr[3][2], mapArr[3][3]); // 4th row
//	printf("| ------|\n"); // wall 4
//
//	//wall space
//	printf("||");
//	for (int i = 0; i < COLS * 5; i++)
//		printf("       ");
//	printf(" ||\n");
//	printf("|%s%2s%2s%2s\n", mapArr[4][0], mapArr[4][1], mapArr[4][2], mapArr[4][3]); // 5th row
//	//wall space
//	printf("||");
//	for (int i = 0; i < COLS * 5; i++)
//		printf("       ");
//	printf(" ||\n");
//
//
//
//	// prints bottom wall
//	for (int j = 0; j < 5; j++)
//	{
//		printf("++");
//		for (int i = 0; i < COLS * 5; i++)
//			printf("=======");
//		printf("=++\n");
//	}
//}

void mapMovement()
{
	// function temp, update the spaces in map for player movement
}