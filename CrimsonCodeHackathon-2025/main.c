/*
* comment block
*/

#include "questions.h"

int main()
{
	int runner = 0;
	do {
		runner++;
		int random = random_question();

		printf("selected question index: %d\n", random);

		history_questions(random);
	} while (runner != 7);
	

	// commit test

	return 0;
}