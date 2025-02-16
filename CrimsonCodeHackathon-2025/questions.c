#include "questions.h"

int random_question(void)
{
	srand(time(NULL));
	int random = 0;
	int unvisited[6];
    int visited = 0;
	int arr[6];
	int index = 0;
	int size = 6;
	int temp = 0;

	for (int i = 0; i < size; i++)
	{
		/*arr[i] = i;*/
		unvisited[i] = i;
	}

    while (visited < size)
    {
        index = rand() % (size - visited);

        random = unvisited[index];

	/*	temp = unvisited[index];
		unvisited[index] = unvisited[size - visited - 1];
		unvisited[size - visited - 1] = temp;*/
        unvisited[index] = unvisited[size - visited - 1];
        unvisited[size - visited - 1] = -1;

        visited++;
    }
	return random;
}

void history_questions(int random)
{
	char choice = NULL;

	switch (random)
	{
	case 1:
		printf("When Columbus sailed from Spain what did he expect to find?\n");
		printf("a. Mongolia \nb. New England \nc. America \nd. India \n");
		do
		{
			printf("Please input the letter corresponding to your answer: \n");
			scanf(" %c", &choice);
		} while (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd');

		if (choice != 'd')
		{
			printf(RED "\nWrong answer! Be careful, the guard is getting closer!\n" RESET);
		}
		else
		{
			printf(GREEN "\nThat's right! Keep going, you're almost at the exit!\n" RESET);
		}

		break;
	case 2:
		printf("When was the Declaration of Independence adopted?\n");

		printf("a. July 4, 1776 \nb. July 1, 1776 \nc. July 4, 1787 \nd. January 20, 1801 \n");
		do
		{
			printf("Please input the letter corresponding to your answer: \n");
			scanf(" %c", &choice);
		} while (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd');

		if (choice != 'a')
		{
			printf(RED "\nWrong answer! Be careful, the guard is getting closer!\n" RESET);
		}
		else
		{
			printf(GREEN "\nThat's right! Keep going, you're almost at the exit!\n" RESET);
		}
		break;
	case 3:
		printf("What was the longest war in US history?\n");
		printf("a. Civil War \nb. Afghan War \nc. Korean War \nd. WW2 \n");
		do
		{
			printf("Please input the letter corresponding to your answer: \n");
			scanf(" %c", &choice);
		} while (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd');

		if (choice != 'b')
		{
			printf(RED "\nWrong answer! Be careful, the guard is getting closer!\n" RESET);
		}
		else
		{
			printf(GREEN "\nThat's right! Keep going, you're almost at the exit!\n" RESET);
		}
		break;
	case 4:
		printf("What was the first successful US colony?\n");
		printf("a. Virginia \nb. Delaware \nc. Pennsylvania \nd. Massachusetts \n");
		do
		{
			printf("Please input the letter corresponding to your answer: \n");
			scanf(" %c", &choice);
		} while (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd');

		if (choice != 'a')
		{
			printf(RED "\nWrong answer! Be careful, the guard is getting closer!\n" RESET);
		}
		else
		{
			printf(GREEN "\nThat's right! Keep going, you're almost at the exit!\n" RESET);
		}
		break;
	case 5:
		printf("What pandemic killed 1/3 of Europe's population in the 14th century?\n");
		printf("a. Spanish flu \nb. Smallpox \nc. Bubonic plague \nd. COVID-19 \n");
		do
		{
			printf("Please input the letter corresponding to your answer: \n");
			scanf(" %c", &choice);
		} while (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd');

		if (choice != 'c')
		{
			printf(RED "\nWrong answer! Be careful, the guard is getting closer!\n" RESET);
		}
		else
		{
			printf(GREEN "\nThat's right! Keep going, you're almost at the exit!\n" RESET);
		}
		break;
	case 6:
		printf("What does the Reign of Terror refer to?\n");
		printf("a. American Revolution \nb. French Revolution \nc. Irish potato famine \nd. A 24hr hackathon \n");
		do
		{
			printf("Please input the letter corresponding to your answer: \n");
			scanf(" %c", &choice);
		} while (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd');

		if (choice != 'b')
		{
			printf(RED "\nWrong answer! Be careful, the guard is getting closer!\n" RESET);
		}
		else
		{
			printf(GREEN "\nThat's right! Keep going, you're almost at the exit!\n" RESET);
		}
		break;
	//default: 
	//	printf("error\n");
	}
}

