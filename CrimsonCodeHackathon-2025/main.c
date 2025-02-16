/*
* comment block
*/

#include "questions.h"
#include "projectquestions.h"

int main()
{	
<<<<<<< Updated upstream
	for (int i = 0; i < 3; ++i)
	{
		history_questions();
		printf("Hello");
		++i;
	}
	/*	printf("selected question index: %d\n", random);*/

	/*	history_questions(random);*/

//>>>>>>> Stashed changes
//	// commit test
=======
	int runner = 0;

    do {
        runner++;

		myth_questions();
        //geo_questions();     
		
        // Here you can add user input handling if needed

    } while (runner < 4);
	/*	printf("selected question index: %d\n", random);*/

	/*	history_questions(random);*/

	// commit test
>>>>>>> Stashed changes

	return 0;
}