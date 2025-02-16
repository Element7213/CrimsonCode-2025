/*
* comment block
*/

#include "map.h"
#include "hacathon.h"
#include "Header.h" 

int main()
{
	char mapArr[ROWS][COLS] = { {'\0'} }; // initializes as empty 
										// size index for 3 questions for 5 rooms, with buffer spaces
	mapInit(mapArr);
	//mapArr[0][0] = "*****************************";
	mapArr[0][0] = 254;
	
	//mapPrint(mapArr);
	maze(mapArr); 


	pic_security();
	pic_rocket();
	science_logo();
	art_logo();
	paintbrush();
	myth_logo();
	bolt();
	geography_logo();
	world();
	history();
	history_logo();
	trophy();
	game_over();


	return 0;

}