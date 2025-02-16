/*
* comment block
*/

#include "questions.h"
#include "projectquestions.h"

int main()
//<<<<<<< Updated upstream
//{
//<<<<<<< Updated upstream
//	
//=======
{	
	/*int runner = 0;

    do {
        runner++;*/

	int freq[7];
	int count = 7;

	for (int i = 0; i < count; i++)
	{
		/*question[i] = i;*/
		freq[i] = 0;
	}

	history_questions(freq);
	history_questions(freq);
	history_questions(freq);
	science_questions();
	art_questions();
	geo_questions();
	myth_questions();
		
        //geo_questions();     
		
        // Here you can add user input handling if needed

   /* } while (runner < 4);*/
	/*	printf("selected question index: %d\n", random);*/

	/*	history_questions(random);*/

//>>>>>>> Stashed changes
//=======
//	/*countdown_timer();*/
//	history_questions();
//>>>>>>> Stashed changes
	// commit test

	return 0;
}