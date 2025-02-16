/*
* comment block
*/

#include "map.h"
#include "hacathon.h"
#include "Header.h" 
#include "questions.h"
#include "projectquestions.h"

int main()
{
	srand(time(NULL));


	char mapArr[ROWS+1][COLS] = { {'\0'} }; // initializes as empty 
										// size index for 3 questions for 5 rooms, with buffer spaces
	mapInit(mapArr);
	//mapArr[0][0] = "*****************************";
	mapArr[0][0] = 254;
	
	//mapPrint(mapArr);
	



	int success = 0, rowCur = 0, colCur = 0;
	int freq[6];
	int freq2[6];
	int freq3[6];
	int freq4[6];
	int freq5[6];
	int count = 6;

	int end = 0;
	do {
		end = print_menu();
		if (end == 3)
			return 1;
	

		//do {

		
			maze(mapArr);

			for (int i = 0; i < count; i++)
			{
				freq[i] = 0;
				freq2[i] = 0;
				freq3[i] = 0;
				freq4[i] = 0;
				freq5[i] = 0;
			}

			do {
				success = myth_questions(freq4);
				mapMovement(mapArr, success, &rowCur, &colCur);
				maze(mapArr);
			} while (!success);
			do {
				success = myth_questions(freq4);
				mapMovement(mapArr, success, &rowCur, &colCur);
				maze(mapArr);
			} while (!success);
			do {
				success = myth_questions(freq4);
				mapMovement(mapArr, success, &rowCur, &colCur);
				maze(mapArr);
			} while (!success);
			do {
				success = geo_questions(freq5);
				mapMovement(mapArr, success, &rowCur, &colCur);
				maze(mapArr);
			} while (!success);
			do {
				success = geo_questions(freq5);
				mapMovement(mapArr, success, &rowCur, &colCur);
				maze(mapArr);
			} while (!success);
			do {
				success = geo_questions(freq5);
				mapMovement(mapArr, success, &rowCur, &colCur);
				maze(mapArr);
			} while (!success);
			do {
				success = history_questions(freq);
				mapMovement(mapArr, success, &rowCur, &colCur);
				maze(mapArr);
			} while (!success);
			do {
				success = history_questions(freq);
				mapMovement(mapArr, success, &rowCur, &colCur);
				maze(mapArr);
			} while (!success);
			do {
				success = history_questions(freq);
				mapMovement(mapArr, success, &rowCur, &colCur);
				maze(mapArr);
			} while (!success);
			do {
				success = science_questions(freq2);
				mapMovement(mapArr, success, &rowCur, &colCur);
				maze(mapArr);
			} while (!success);
			do {
				success = science_questions(freq2);
				mapMovement(mapArr, success, &rowCur, &colCur);
				maze(mapArr);
			} while (!success);
			do {
				success = science_questions(freq2);
				mapMovement(mapArr, success, &rowCur, &colCur);
				maze(mapArr);
			} while (!success);
			do {
				success = art_questions(freq3);
				mapMovement(mapArr, success, &rowCur, &colCur);
				maze(mapArr);
			} while (!success);
			do {
				success = art_questions(freq3);
				mapMovement(mapArr, success, &rowCur, &colCur);
				maze(mapArr);
			} while (!success);
		do{
			success = art_questions(freq3);
			mapMovement(mapArr, success, &rowCur, &colCur);
			maze(mapArr);
		} while (!success);// || (rowCur == 4 && colCur == 3));

		end = print_menu(); 
	} while (end != 3);

	trophy();
	
	/*pic_security();
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
	
	game_over();*/

	return 0;

}