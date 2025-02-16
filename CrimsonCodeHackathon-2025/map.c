#include "map.h"
#include "Header.h" 

void mapInit(char mapArr[][COLS])
{
	char s = 254; // square ascii code
	for (int row = 0; row < ROWS; row++)
	{
		for (int col = 0; col < COLS; col++)
		{
			//mapArr[row][col] = "*****************************";
			mapArr[row][col] = ' ';
			//mapArr[row][col] = '254','\0';
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

void maze(char mapArr[][COLS]) {

	printf(PURPLE"==========================================================================================================\n"
		"|========================================================================================================|\n"
		"|                "RED"         |                        |                           |           /     "PURPLE"        |\n"
		"|        "RESET_COLOR"  %c%c%c                       %c%c%c                      %c%c%c                    "PURPLE"     %c%c%c            |\n"
		"|                "RED"         |                        |                           |           /     "PURPLE"        |\n"
		"|===============================================================================-------           -------|\n"
		"|                "RED"         |                        |                           |           /     "PURPLE"        |\n"
		"|        "RESET_COLOR"  %c%c%c                       %c%c%c                      %c%c%c                    "PURPLE"     %c%c%c            |\n"
		"|                "RED"         |                        |                           |           /     "PURPLE"        |\n"
		"|--------         --------===============================================================================|\n"
		"|                "RED"         |                        |                           |           /     "PURPLE"        |\n"
		"|        "RESET_COLOR"  %c%c%c                       %c%c%c                      %c%c%c                    "PURPLE"     %c%c%c            |\n"
		"|                "RED"         |                        |                           |           /     "PURPLE"        |\n"
		"|===============================================================================-------           -------|\n"
		"|                "RED"         |                        |                           |           /     "PURPLE"        |\n"
		"|        "RESET_COLOR"  %c%c%c                       %c%c%c                      %c%c%c                    "PURPLE"     %c%c%c            |\n"
		"|                "RED"         |                        |                           |           /     "PURPLE"        |\n"
		"|-------           -------===============================================================================|\n"
		"|                "RED"         |                        |                           |           /     "PURPLE"        |\n"
		"|        "RESET_COLOR"  %c%c%c                       %c%c%c                      %c%c%c                    "PURPLE"     %c%c%c            |\n"
		"|                "RED"         |                        |                           |           /     "PURPLE"        |\n"
		"================================================================================--------        ---------|\n" RESET_COLOR, 

		//first row
		mapArr[0][0], mapArr[0][0], mapArr[0][0], mapArr[0][1], mapArr[0][1], mapArr[0][1], mapArr[0][2], mapArr[0][2], mapArr[0][2], mapArr[0][3], mapArr[0][3], mapArr[0][3], 
		/*mapArr[0][0], mapArr[0][0], mapArr[0][0], mapArr[0][1], mapArr[0][1], mapArr[0][1], mapArr[0][2], mapArr[0][2], mapArr[0][2], mapArr[0][3], mapArr[0][3], mapArr[0][3],
		mapArr[0][0], mapArr[0][0], mapArr[0][0], mapArr[0][1], mapArr[0][1], mapArr[0][1], mapArr[0][2], mapArr[0][2], mapArr[0][2], mapArr[0][3], mapArr[0][3], mapArr[0][3],
		mapArr[0][0], mapArr[0][0], mapArr[0][0], mapArr[0][1], mapArr[0][1], mapArr[0][1], mapArr[0][2], mapArr[0][2], mapArr[0][2], mapArr[0][3], mapArr[0][3], mapArr[0][3], mapArr[0][4], mapArr[0][4], mapArr[0][4],*/
		//second row
		mapArr[1][0], mapArr[1][0], mapArr[1][0], mapArr[1][1], mapArr[1][1], mapArr[1][1], mapArr[1][2], mapArr[1][2], mapArr[1][2], mapArr[1][3], mapArr[1][3], mapArr[1][3],
		/*mapArr[1][0], mapArr[1][0], mapArr[1][0], mapArr[1][1], mapArr[1][1], mapArr[1][1], mapArr[1][2], mapArr[1][2], mapArr[1][2], mapArr[1][3], mapArr[1][3], mapArr[1][3],
		mapArr[1][0], mapArr[1][0], mapArr[1][0], mapArr[1][1], mapArr[1][1], mapArr[1][1], mapArr[1][2], mapArr[1][2], mapArr[1][2], mapArr[1][3], mapArr[1][3], mapArr[1][3],
		mapArr[1][0], mapArr[1][0], mapArr[1][0], mapArr[1][1], mapArr[1][1], mapArr[1][1], mapArr[1][2], mapArr[1][2], mapArr[1][2], mapArr[1][3], mapArr[1][3], mapArr[1][3], mapArr[1][4], mapArr[1][4], mapArr[1][4],*/
		//third row
		mapArr[2][0], mapArr[2][0], mapArr[2][0], mapArr[2][1], mapArr[2][1], mapArr[2][1], mapArr[2][2], mapArr[2][2], mapArr[2][2], mapArr[2][3], mapArr[2][3], mapArr[2][3],
		/*mapArr[2][0], mapArr[2][0], mapArr[2][0], mapArr[2][1], mapArr[2][1], mapArr[2][1], mapArr[2][2], mapArr[2][2], mapArr[2][2], mapArr[2][3], mapArr[2][3], mapArr[2][3],
		mapArr[2][0], mapArr[2][0], mapArr[2][0], mapArr[2][1], mapArr[2][1], mapArr[2][1], mapArr[2][2], mapArr[2][2], mapArr[2][2], mapArr[2][3], mapArr[2][3], mapArr[2][3],
		mapArr[2][0], mapArr[2][0], mapArr[2][0], mapArr[2][1], mapArr[2][1], mapArr[2][1], mapArr[2][2], mapArr[2][2], mapArr[2][2], mapArr[2][3], mapArr[2][3], mapArr[2][3], mapArr[2][4], mapArr[2][4], mapArr[2][4],*/
		//four row
		mapArr[3][0], mapArr[3][0], mapArr[3][0], mapArr[3][1], mapArr[3][1], mapArr[3][1], mapArr[3][2], mapArr[3][2], mapArr[3][2], mapArr[3][3], mapArr[3][3], mapArr[3][3],
		/*mapArr[3][0], mapArr[3][0], mapArr[3][0], mapArr[3][1], mapArr[3][1], mapArr[3][1], mapArr[3][2], mapArr[3][2], mapArr[3][2], mapArr[3][3], mapArr[3][3], mapArr[3][3],
		mapArr[3][0], mapArr[3][0], mapArr[3][0], mapArr[3][1], mapArr[3][1], mapArr[3][1], mapArr[3][2], mapArr[3][2], mapArr[3][2], mapArr[3][3], mapArr[3][3], mapArr[3][3],
		mapArr[3][0], mapArr[3][0], mapArr[3][0], mapArr[3][1], mapArr[3][1], mapArr[3][1], mapArr[3][2], mapArr[3][2], mapArr[3][2], mapArr[3][3], mapArr[3][3], mapArr[3][3], mapArr[3][4], mapArr[3][4], mapArr[3][4],*/
		//fifth row
		mapArr[4][0], mapArr[4][0], mapArr[4][0], mapArr[4][1], mapArr[4][1], mapArr[4][1], mapArr[4][2], mapArr[4][2], mapArr[4][2], mapArr[4][3], mapArr[4][3], mapArr[4][3]//,
		/*mapArr[4][0], mapArr[4][0], mapArr[4][0], mapArr[4][1], mapArr[4][1], mapArr[4][1], mapArr[4][2], mapArr[4][2], mapArr[4][2], mapArr[4][3], mapArr[4][3], mapArr[4][3],
		mapArr[4][0], mapArr[4][0], mapArr[4][0], mapArr[4][1], mapArr[4][1], mapArr[4][1], mapArr[4][2], mapArr[4][2], mapArr[4][2], mapArr[4][3], mapArr[4][3], mapArr[4][3],
		mapArr[4][0], mapArr[4][0], mapArr[4][0], mapArr[4][1], mapArr[4][1], mapArr[4][1], mapArr[4][2], mapArr[4][2], mapArr[4][2], mapArr[4][3], mapArr[4][3], mapArr[4][3], mapArr[4][4], mapArr[4][4], mapArr[4][4]*/
	);

		


	








}

void mapMovement(char mapArr[][COLS], int success, int* rowCur, int* colCur)
{
	// function temp, update the spaces in map for player movement

	//int rowCur = 0, colCur = 0; // current index

	// if player answers question correct
	if (success)
	{
		if (*rowCur == 4 && *colCur == COLS - 1) // winner
		{
			trophy(); 
			//return;
		}

		// move to next index
		if ((*rowCur == 0 || *rowCur == 2 || *rowCur == 4) && *colCur < COLS-1) // if on first row. move to the right
		{
			*colCur += 1;
			mapArr[*rowCur][*colCur] = 254; // new position is player
			mapArr[*rowCur][*colCur - 1] = ' '; // previous position is blank
		}
		else if ((*rowCur == 1 || *rowCur == 3) && *colCur < COLS && *colCur > 0) // move to the left
		{
			*colCur -= 1;
			mapArr[*rowCur][*colCur] = 254; // new position is player
			mapArr[*rowCur][*colCur + 1] = ' '; // previous position is blank
		}
		else if ((*rowCur == 0 || *rowCur == 2 || *rowCur == 4) && *colCur == COLS - 1) // end of row 
		{
			*rowCur += 1;
			mapArr[*rowCur][*colCur] = 254; // new position is player
			mapArr[*rowCur - 1][*colCur] = ' '; // previous position is blank
		}
		else if ((*rowCur == 1 || *rowCur == 3) && *colCur < COLS && *colCur == 0)
		{
			*rowCur += 1;
			mapArr[*rowCur][*colCur] = 254; // new position is player
			mapArr[*rowCur - 1][*colCur] = ' '; // previous position is blank
		}
	}

	// buffer text
	if (*rowCur == 1 && *colCur == 1)
	{
		printf("Way to go!\n");
		*colCur -= 1;
		mapArr[*rowCur][*colCur] = 254; // new position is player
		mapArr[*rowCur][*colCur + 1] = ' '; // previous position is blank
	}
	else if (*rowCur == 2 && *colCur == 1)
	{
		printf("You're halfway there!\n");
		*colCur += 1;
		mapArr[*rowCur][*colCur] = 254; // new position is player
		mapArr[*rowCur][*colCur - 1] = ' '; // previous position is blank
	}
	else if (*rowCur == 3 && *colCur == 1)
	{
		printf("Amazing!\n");
		*colCur -= 1;
		mapArr[*rowCur][*colCur] = 254; // new position is player
		mapArr[*rowCur][*colCur + 1] = ' '; // previous position is blank
	}
	else if (*rowCur == 4 && *colCur == 0)
	{
		printf("Almost out!\n");
		*colCur += 1;
		mapArr[*rowCur][*colCur] = 254; // new position is player
		mapArr[*rowCur][*colCur - 1] = ' '; // previous position is blank
	}
	else if (*rowCur == 4 && *colCur == 2)
	{
		printf("So close!\n");
		*colCur += 1;
		mapArr[*rowCur][*colCur] = 254; // new position is player
		mapArr[*rowCur][*colCur - 1] = ' '; // previous position is blank
	}
}