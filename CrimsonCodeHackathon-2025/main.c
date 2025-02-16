/*
* comment block
*/

#include "questions.h"
#include "projectquestions.h"

int main()
{	
	srand(time(NULL));

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

	return 0;
}