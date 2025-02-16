/*
* comment block
*/

#include "map.h"
#include "hacathon.h"

int main()
{
	// 2D array to be used as linear map movement
//<<<<<<< HEAD
//	char mapArr[ROWS][COLS] = { {'\0'} }; // initializes as empty
//								// size index for 3 questions for 5 rooms, with buffer spaces
//
//	print_menu();
//
//	mapInit(mapArr); 
//	mapArr[0][0] = '*'; 
//=======
	char* mapArr[ROWS][COLS] = { {'\0'} }; // initializes as empty 
								// size index for 3 questions for 5 rooms, with buffer spaces
	mapInit(mapArr);
	//mapArr[0][0] = "*****************************";
	//mapArr[0][0] = as;
//>>>>>>> map 
	mapPrint(mapArr);

	return 0;
}