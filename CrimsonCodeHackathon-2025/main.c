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


	char mapArr[ROWS][COLS] = { {'\0'} }; // initializes as empty 
										// size index for 3 questions for 5 rooms, with buffer spaces
	mapInit(mapArr);
	//mapArr[0][0] = "*****************************";
	mapArr[0][0] = 254;
	
	//mapPrint(mapArr);
	maze(mapArr); 



	int success = 0;
	int freq[7];
	int freq2[7];
	int freq3[7];
	int freq4[7];
	int freq5[7];
	int count = 7;

	for (int i = 0; i < count; i++)
	{
		freq[i] = 0;
		freq2[i] = 0;
		freq3[i] = 0;
		freq4[i] = 0;
		freq5[i] = 0;
	}

	myth_questions(freq4, success);
	myth_questions(freq4, success);
	myth_questions(freq4, success);
	geo_questions(freq5, success);
	geo_questions(freq5, success);
	geo_questions(freq5, success);
	history_questions(freq, success);
	history_questions(freq, success);
	history_questions(freq, success);
	science_questions(freq2, success);
	science_questions(freq2, success);
	science_questions(freq2, success);
	art_questions(freq3, success);
	art_questions(freq3, success);
	art_questions(freq3, success);


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
	trophy();
	game_over();*/

	return 0;

}