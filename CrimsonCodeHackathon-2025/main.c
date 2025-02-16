/*
* comment block
*/

#include "map.h"
#include "hacathon.h"

int main()
{
	// 2D array to be used as linear map movement
	char mapArr[ROWS][COLS] = { {'\0'} }; // initializes as empty
								// size index for 3 questions for 5 rooms, with buffer spaces

	print_menu();

	mapInit(mapArr); 
	mapArr[0][0] = '*'; 
	mapPrint(mapArr);

	return 0;
}