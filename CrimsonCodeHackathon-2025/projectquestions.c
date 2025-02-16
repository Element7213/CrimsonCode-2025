#include "projectquestions.h"


void geo_questions(void)
{
	srand(time(NULL));
	int freq[7] = { 0 };
	int question[7];
	int random = 0;
	int index = 0;
	int count = 7;

	for (int i = 0; i < count; i++)
	{
		question[i] = i;
	}

	while (count > 0)
	{
		index = rand() % 7;

		if (freq[index] == 0)
		{
			random = question[index];
			freq[index] = 1;
			count--;

			char choice = NULL;
	
			switch (random)
			{
			case 1:
				printf("\nWhat was the name of the believed supercontinent that existed billions of years ago?\n");
				printf("a. Pangea \nb. Supercontinent  \nc. Completed Continent \nd. Panama \n");
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
				system("pause");
				system("cls");
				break;
			case 2:
				printf("\nWhich is NOT one of the 7 continents?\n");

				printf("a. Asia \nb. Europe \nc. Antarctica \nd. America \n");
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
				system("pause");
				system("cls");
				break;
			case 3:
				printf("\nWhat Country has the largest population in the world?\n");
				printf("a. America \nb. China \nc. India \nd. Russia \n");
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
				system("pause");
				system("cls");
				break;
			case 4:
				printf("\nWhat ocean lies on the West Coast?\n");
				printf("a. Atlantic Ocean \nb. Pacific Ocean \nc. Indian Ocean \nd. Arctic Ocean \n");
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
				system("pause");
				system("cls");
				break;
			case 5:
				printf("\nA line from east-west on an atlas map is a line of what?\n");
				printf("a. Latitude \nb. Longitude \nc. Meridian \nd. Reference \n");
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
				system("pause");
				system("cls");
				break;
			case 6:
				printf("\nWhich is the highest mountain in the world?\n");
				printf("a. Mount Fuji \nb. Mount Everest \nc. Mount Makalu \nd. Mount Kilimanjaro \n");
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
				system("pause");
				system("cls");
				break;

				//default: 
				//	printf("error\n");
			}

		}

	}
}

void myth_questions(void)
{
	srand(time(NULL));
	int freq[7] = { 0 };
	int question[7];
	int random = 0;
	int index = 0;
	int count = 7;

	for (int i = 0; i < count; i++)
	{
		question[i] = i;
	}

	while (count > 0)
	{
		index = rand() % 7;

		if (freq[index] == 0)
		{
			random = question[index];
			freq[index] = 1;
			count--;

			char choice = NULL;

			switch (random)
			{
			case 1:
				printf("\nWho is the king of Olympus?\n");
				printf("a. Zeus \nb. Hades \nc. Hera \nd. Poseidon \n");
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
				system("pause");
				system("cls");
				break;
			case 2:
				printf("\nWhich Roman God is the God of beauty?\n");

				printf("a. Jupiter \nb. Mars \nc. Venus \nd. Mercury \n");
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
				system("pause");
				system("cls");
				break;
			case 3:
				printf("\nWhich Norse God is the God of mischief?\n");
				printf("a. Thor \nb. Loki \nc. Hela \nd. Odin \n");
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
				system("pause");
				system("cls");
				break;
			case 4:
				printf("\nWho is the Greek God of war?\n");
				printf("a. Ares \nb. Hephaestus \nc. Hermes \nd. Athena \n");
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
				system("pause");
				system("cls");
				break;
			case 5:
				printf("\nWhat Mythological beast grows 2 heads back if you chop 1 head off?\n");
				printf("a. Griffon \nb. Pegasus \nc. Chimera \nd. Hydra \n");
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
				system("pause");
				system("cls");
				break;
			case 6:
				printf("\nWhat Mythological beast guards the underworld in Greek Mythology?\n");
				printf("a. Hydra \nb. Cerberus \nc. Dragon \nd. Chimera \n");
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
				system("pause");
				system("cls");
				break;
				//default: 
				//	printf("error\n");
			}

		}

	}
}




