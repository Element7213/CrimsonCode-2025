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

	srand(time(NULL));
	/*int runner = 0;

    do {
        runner++;*/
	int success = 0;
	int freq[7];
	int freq2[7];
	int freq3[7];
	int count = 7;

	for (int i = 0; i < count; i++)
	{
		/*question[i] = i;*/
		freq[i] = 0;
		freq2[i] = 0;
		freq3[i] = 0;
	}
	

	history_questions(freq, success);
	history_questions(freq, success);
	history_questions(freq, success);
	science_questions(freq2, success);
	science_questions(freq2, success);
	science_questions(freq2, success);
	art_questions(freq3, success);
	art_questions(freq3, success);
	art_questions(freq3, success);
	

	
	
	/*geo_questions(freq3);
	myth_questions(freq3);*/
		
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