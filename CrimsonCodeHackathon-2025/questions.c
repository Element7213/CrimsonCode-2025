#include "questions.h"



int history_questions(int freq[])
{
	int success = 0;
	
	int question[7];
	int random = 0;
	int index = 0;
	int count = 7; 

	for (int i = 0; i < count; i++)
	{
		question[i] = i;
	
	}

	
	do
	{
		index = rand() % 6;
	} while (freq[index] == 1);

		
			random = question[index];
			freq[index] = 1;
			count--;

			//history(); 
			char choice = NULL;



			switch (random)
			{
			case 0:

				printf("\nWhen Columbus sailed from Spain, what did he expect to find?\n");
				printf("a. Mongolia \nb. New England \nc. America \nd. India \n");


				do
				{
					printf("Please input the letter corresponding to your answer: \n");
					scanf(" %c", &choice);

				} while (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd');


				if (choice != 'd')
				{
					printf(RED "\nWrong answer! Be careful, the guard is getting closer!\n" RESET);
					success = 0;
				}
				else
				{
					printf(GREEN "\nThat's right! Keep going, you're almost at the exit!\n" RESET);
					success = 1;
				}
				
				system("pause");
				system("cls");
				return success;
				break;

			case 1:

				printf("\nWhen was the Declaration of Independence adopted?\n");
				printf("a. July 4, 1776 \nb. July 1, 1776 \nc. July 4, 1787 \nd. January 20, 1801 \n");



				do
				{
					printf("Please input the letter corresponding to your answer: \n");
					scanf(" %c", &choice);

				} while (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd');


				if (choice != 'a')
				{
					printf(RED "\nWrong answer! Be careful, the guard is getting closer!\n" RESET);
					success = 0;
				}
				else
				{
					printf(GREEN "\nThat's right! Keep going, you're almost at the exit!\n" RESET);
					success = 1;
				}
				
				system("pause");
				system("cls");
				return success;
				break;

			case 2:

				printf("\nWhat was the longest war in US history?\n");
				printf("a. Civil War \nb. Afghan War \nc. Korean War \nd. WW2 \n");



				do
				{
					printf("Please input the letter corresponding to your answer: \n");
					scanf(" %c", &choice);

				} while (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd');


				if (choice != 'b')
				{
					printf(RED "\nWrong answer! Be careful, the guard is getting closer!\n" RESET);
					success = 0;
				}
				else
				{
					printf(GREEN "\nThat's right! Keep going, you're almost at the exit!\n" RESET);
					success = 1;
				}
				
				system("pause");
				system("cls");
				return success;
				break;

			case 3:

				printf("\nWhat was the first successful US colony?\n");
				printf("a. Virginia \nb. Delaware \nc. Pennsylvania \nd. Massachusetts \n");



				do
				{
					printf("Please input the letter corresponding to your answer: \n");
					scanf(" %c", &choice);

				} while (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd');


				if (choice != 'a')
				{
					printf(RED "\nWrong answer! Be careful, the guard is getting closer!\n" RESET);
					success = 0;
				}
				else
				{
					printf(GREEN "\nThat's right! Keep going, you're almost at the exit!\n" RESET);
					success = 1;
				}
				
				system("pause");
				system("cls");
				return success;
				break;

			case 4:

				printf("\nWhat pandemic killed 1/3 of Europe's population in the 14th century?\n");
				printf("a. Spanish flu \nb. Smallpox \nc. Bubonic plague \nd. COVID-19 \n");



				do
				{
					printf("Please input the letter corresponding to your answer: \n");
					scanf(" %c", &choice);

				} while (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd');


				if (choice != 'c')
				{
					printf(RED "\nWrong answer! Be careful, the guard is getting closer!\n" RESET);
					success = 0;
				}
				else
				{
					printf(GREEN "\nThat's right! Keep going, you're almost at the exit!\n" RESET);
					success = 1;
				}
				
				system("pause");
				system("cls");
				return success;
				break;

			case 5:

				printf("\nWhat does the Reign of Terror refer to?\n");
				printf("a. American Revolution \nb. French Revolution \nc. Irish potato famine \nd. A 24hr hackathon \n");



				do
				{
					printf("Please input the letter corresponding to your answer: \n");
					scanf(" %c", &choice);

				} while (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd');



				if (choice != 'b')
				{
					printf(RED "\nWrong answer! Be careful, the guard is getting closer!\n" RESET);
					success = 0;
				}
				else
				{
					printf(GREEN "\nThat's right! Keep going, you're almost at the exit!\n" RESET);
					success = 1;
				}
				
				system("pause");
				system("cls");
				return success;
				break;
			}
			
			return success;
}

int science_questions(int freq[])
{
	int success = 0;
	
	int question[7];
	int random = 0;
	int index = 0;
	int count = 7;

	for (int i = 0; i < count; i++)
	{
		question[i] = i;
		
	}


	
	do
	{
		index = rand() % 6;
	} while (freq[index] == 1);

		
			random = question[index];
			freq[index] = 1;
			count--;
		//	pic_rocket();       

			char choice = NULL;
			switch (random)
			{
			case 0:
				printf("\nFossils are most often found in what type of rock? \n");
				printf("a. Igneous \nb. Sedimentary \nc. Metamorphic \nd. Granitic \n");
				do
				{
					printf("Please input the letter corresponding to your answer: \n");
					scanf(" %c", &choice);
				} while (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd');

				if (choice != 'b')
				{
					printf(RED "\nWrong answer! Be careful, the guard is getting closer!\n" RESET);
					success = 0;
				}
				else
				{
					printf(GREEN "\nThat's right! Keep going, you're almost at the exit!\n" RESET);
					success = 1;
				}
				
				system("pause");
				system("cls");
				return success;
				break;

			case 1:
				printf("\nWhich of the following BEST describes the word static? \n");
				printf("a. Low \nb. Constant \nc. Stationary \nd. Used \n");
				do
				{
					printf("Please input the letter corresponding to your answer: \n");
					scanf(" %c", &choice);
				} while (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd');

				if (choice != 'c')
				{
					printf(RED "\nWrong answer! Be careful, the guard is getting closer!\n" RESET);
					success = 0;
				}
				else
				{
					printf(GREEN "\nThat's right! Keep going, you're almost at the exit!\n" RESET);
					success = 1;
				}
				
				system("pause");
				system("cls");
				return success;
				break;

			case 2:
				printf("\nWhich of these is NOT normally a part of an atom? \n");
				printf("a. Proton \nb. Positron \nc. Neutron \nd. Electron \n");
				do
				{
					printf("Please input the letter corresponding to your answer: \n");
					scanf(" %c", &choice);
				} while (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd');

				if (choice != 'b')
				{
					printf(RED "\nWrong answer! Be careful, the guard is getting closer!\n" RESET);
					success = 0;
				}
				else
				{
					printf(GREEN "\nThat's right! Keep going, you're almost at the exit!\n" RESET);
					success = 1;
				}
				
				system("pause");
				system("cls");
				return success;
				break;

			case 3:
				printf("\nWhat unit is used to measure force in physics? \n");
				printf("a. Ohm \nb. Watt \nc. Decibel \nd. Newton \n");
				do
				{
					printf("Please input the letter corresponding to your answer: \n");
					scanf(" %c", &choice);
				} while (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd');

				if (choice != 'd')
				{
					printf(RED "\nWrong answer! Be careful, the guard is getting closer!\n" RESET);
					success = 0;
				}
				else
				{
					printf(GREEN "\nThat's right! Keep going, you're almost at the exit!\n" RESET);
					success = 1;
				}
				
				system("pause");
				system("cls");
				return success;
				break;

			case 4:
				printf("\nWhat unit is used to measure frequency? \n");
				printf("a. Sieverts \nb. Coulombs \nc. Hertz \nd. Watt \n");
				do
				{
					printf("Please input the letter corresponding to your answer: \n");
					scanf(" %c", &choice);
				} while (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd');

				if (choice != 'c')
				{
					printf(RED "\nWrong answer! Be careful, the guard is getting closer!\n" RESET);
					success = 0;
				}
				else
				{
					printf(GREEN "\nThat's right! Keep going, you're almost at the exit!\n" RESET);
					success = 1;
				}
				
				system("pause");
				system("cls");
				return success;
				break;

			case 5:
				printf("\nWhat scientist is credited with creating the theory of evolution? \n");
				printf("a. Charles Darwin \nb. Max Planck \nc. Isaac Newton \nd. Marie Curie \n");
				do
				{
					printf("Please input the letter corresponding to your answer: \n");
					scanf(" %c", &choice);
				} while (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd');

				if (choice != 'a')
				{
					printf(RED "\nWrong answer! Be careful, the guard is getting closer!\n" RESET);
					success = 0;
				}
				else
				{
					printf(GREEN "\nThat's right! Keep going, you're almost at the exit!\n" RESET);
					success = 1;
				}
				
				system("pause");
				system("cls");
				return success;
				break;
			}
			return success; 
}

int art_questions(int freq[])
{
	int success = 0;

	int question[7];
	int random = 0;
	int index = 0;
	int count = 7;

	for (int i = 0; i < count; i++)
	{
		question[i] = i;
		
	}


	do
	{
		index = rand() % 6;
	} while (freq[index] == 1);
		

		
			random = question[index];
			freq[index] = 1;
			count--;
		//	paintbrush(); 

			char choice = NULL;
			switch (random)
			{
			case 0:
				printf("\nWho painted The Persistence of Memory? \n");
				printf("a. Degas \nb. Salvador Dali \nc. Monet \nd. Van Gogh \n");
				do
				{
					printf("Please input the letter corresponding to your answer: \n");
					scanf(" %c", &choice);
				} while (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd');

				if (choice != 'b')
				{
					printf(RED "\nWrong answer! Be careful, the guard is getting closer!\n" RESET);
					success = 0;
				}
				else
				{
					printf(GREEN "\nThat's right! Keep going, you're almost at the exit!\n" RESET);
					success = 1;
				}
				
				system("pause");
				system("cls");
				return success;
				break;

			case 1:
				printf("\nWhat are the primary colors in painting? \n");
				printf("a. Red, white, blue \nb. Red, yellow, blue \nc. Red, green, blue \nd. White, black, red \n");
				do
				{
					printf("Please input the letter corresponding to your answer: \n");
					scanf(" %c", &choice);
				} while (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd');

				if (choice != 'b')
				{
					printf(RED "\nWrong answer! Be careful, the guard is getting closer!\n" RESET);
					success = 0;
				}
				else
				{
					printf(GREEN "\nThat's right! Keep going, you're almost at the exit!\n" RESET);
					success = 1;
				}
				
				system("pause");
				system("cls");
				return success;
				break;

			case 2:
				printf("\nWhat musical instrument has 88 keys? \n");
				printf("a. Piano \nb. Violin \nc. Guitar \nd. Saxophone \n");
				do
				{
					printf("Please input the letter corresponding to your answer: \n");
					scanf(" %c", &choice);
				} while (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd');

				if (choice != 'a')
				{
					printf(RED "\nWrong answer! Be careful, the guard is getting closer!\n" RESET);
					success = 0;
				}
				else
				{
					printf(GREEN "\nThat's right! Keep going, you're almost at the exit!\n" RESET);
					success = 1;
				}
	
				system("pause");
				system("cls");
				return success;
				break;

			case 3:
				printf("\nThe following painting (Water Lilies by Monet) follows what art style? \n");
				printf("a. Surrealism \nb. Impressionism \nc. Abstract expressionism \nd. Cubism \n");
				do
				{
					printf("Please input the letter corresponding to your answer: \n");
					scanf(" %c", &choice);
				} while (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd');

				if (choice != 'b')
				{
					printf(RED "\nWrong answer! Be careful, the guard is getting closer!\n" RESET);
					success = 0;
				}
				else
				{
					printf(GREEN "\nThat's right! Keep going, you're almost at the exit!\n" RESET);
					success = 1;
				}
				
				system("pause");
				system("cls");
				return success;
				break;

			case 4:
				printf("\nWho made the statue of David? \n");
				printf("a. Auguste Rodin \nb. Alexander Calder \nc. Michelangelo \nd. Antonio Canova \n");
				do
				{
					printf("Please input the letter corresponding to your answer: \n");
					scanf(" %c", &choice);
				} while (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd');

				if (choice != 'c')
				{
					printf(RED "\nWrong answer! Be careful, the guard is getting closer!\n" RESET);
					success = 0;
				}
				else
				{
					printf(GREEN "\nThat's right! Keep going, you're almost at the exit!\n" RESET);
					success = 1;
				}
				
				system("pause");
				system("cls");
				return success;
				break;

			case 5:
				printf("\nWhich famous artist is NOT a teenage mutant ninja turtle? \n");
				printf("a. Michelangelo \nb. Donatello \nc. Claude Monet \nd. Leonardo \n");
				do
				{
					printf("Please input the letter corresponding to your answer: \n");
					scanf(" %c", &choice);
				} while (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd');

				if (choice != 'c')
				{
					printf(RED "\nWrong answer! Be careful, the guard is getting closer!\n" RESET);
					success = 0;
				}
				else
				{
					printf(GREEN "\nThat's right! Keep going, you're almost at the exit!\n" RESET);
					success = 1;
				}
				
				system("pause");
				system("cls");
				return success;
				break;
			}
			return success;
}