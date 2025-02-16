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
	//mapInit(mapArr);
	////mapArr[0][0] = "*****************************";
	//mapArr[0][0] = 254;
	
	//mapPrint(mapArr);
	



	int success = 0, rowCur = 0, colCur = 0, guard = 0;
	int freq[6];
	int freq2[6];
	int freq3[6];
	int freq4[6];
	int freq5[6];
	int count = 6;

	int end = 0;
		end = print_menu();
		if (end == 3)
			return 1;
	

		do {
			mapInit(mapArr);
			mapArr[0][0] = 254;
			success = 0, rowCur = 0, colCur = 0, guard = 0; 
		
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
				if (!success)
				{
					guard++;
				}
				if (guard >= 3)
				{
					pic_security();
					system("pause");
					system("cls");
					printf(RESET_COLOR"The guard has caught you!\n"RESET);
					system("pause");
					
					break;
				}
				mapMovement(mapArr, success, &rowCur, &colCur);
				maze(mapArr);
			} while (!success);// || guard >= 3);
			if (guard >= 3)
			{
				game_over();
				// game over
				return 1;
			}
			do {
				
				
				success = myth_questions(freq4);
				if (!success)
				{
					guard++;
				}
				if (guard >= 3)
				{
					printf(RED"The guard has caught you!\n"RESET);
					break;
				}
				mapMovement(mapArr, success, &rowCur, &colCur);
				maze(mapArr);
			} while (!success);//&& guard != 3);
			if (guard >= 3)
			{
				// game over
				return 1;
			}
			do {
				success = myth_questions(freq4);
				if (!success)
				{
					guard++;
				}
				if (guard >= 3)
				{
					pic_security();
					system("pause");
					system("cls");
					printf(RED"The guard has caught you!\n"RESET);
					break;
				}
				
				mapMovement(mapArr, success, &rowCur, &colCur);
				maze(mapArr);
			} while (!success);// || guard != 3);
			if (guard >= 3)
			{
				// game over
				game_over();

				return 1;
			}
			do {
			
				
				success = geo_questions(freq5);
				if (!success)
				{
					guard++;
				}
				if (guard >= 3)
				{
					pic_security();
					system("pause");
					system("cls");
					printf(RED"The guard has caught you!\n"RESET);
					break;
				}
				mapMovement(mapArr, success, &rowCur, &colCur);
				maze(mapArr);
			} while (!success);// || guard != 3);
			if (guard >= 3)
			{
				// game over
				game_over();

				return 1;
			}
			do {
				success = geo_questions(freq5);
				if (!success)
				{
					guard++;
				}
				if (guard >= 3)
				{
					pic_security();
					system("pause");
					system("cls");
					printf(RED"The guard has caught you!\n"RESET);
					break;
				}
				mapMovement(mapArr, success, &rowCur, &colCur);
				maze(mapArr);
			} while (!success);// || guard != 3);
			if (guard >= 3)
			{
				// game over
				game_over();

				return 1;
			}
			do {
				success = geo_questions(freq5);
				if (!success)
				{
					guard++;
				}
				if (guard >= 3)
				{
					pic_security();
					system("pause");
					system("cls");
					printf(RED"The guard has caught you!\n"RESET);
					break;
				}
				mapMovement(mapArr, success, &rowCur, &colCur);
				maze(mapArr);
			} while (!success);// || guard != 3);
			if (guard >= 3)
			{
				// game over
				game_over();

				return 1;
			}
			do {
				
				success = history_questions(freq);
				if (!success)
				{
					guard++;
				}
				if (guard >= 3)
				{
					pic_security();
					system("pause");
					system("cls");
					printf(RED"The guard has caught you!\n"RESET);
					break;
				}
				mapMovement(mapArr, success, &rowCur, &colCur);
				maze(mapArr);
			} while (!success);// || guard != 3);
			if (guard >= 3)
			{
				// game over
				game_over();

				return 1;
			}
			do {
				success = history_questions(freq);
				if (!success)
				{
					guard++;
				}
				if (guard >= 3)
				{
					pic_security();
					system("pause");
					system("cls");
					printf(RED"The guard has caught you!\n"RESET);
					break;
				}
				mapMovement(mapArr, success, &rowCur, &colCur);
				maze(mapArr);
			} while (!success);// || guard != 3);
			if (guard >= 3)
			{
				// game over
				game_over();

				return 1;
			}
			do {
				success = history_questions(freq);
				if (!success)
				{
					guard++;
				}
				if (guard >= 3)
				{
					pic_security();
					system("pause");
					system("cls");
					printf(RED"The guard has caught you!\n"RESET);
					break;
				}
				mapMovement(mapArr, success, &rowCur, &colCur);
				maze(mapArr);
			} while (!success);// || guard != 3);
			if (guard >= 3)
			{
				// game over
				game_over();

				return 1;
			}
			do {
			
				success = science_questions(freq2);
				if (!success)
				{
					guard++;
				}
				if (guard >= 3)
				{
					pic_security();
					system("pause");
					system("cls");
					printf(RED"The guard has caught you!\n"RESET);
					break;
				}
				mapMovement(mapArr, success, &rowCur, &colCur);
				maze(mapArr);
			} while (!success);// || guard != 3);
			if (guard >= 3)
			{
				// game over
				game_over();

				return 1;
			}
			do {
				success = science_questions(freq2);
				if (!success)
				{
					guard++;
				}
				if (guard >= 3)
				{
					pic_security();
					system("pause");
					system("cls");
					printf(RED"The guard has caught you!\n"RESET);
					break;
				}
				mapMovement(mapArr, success, &rowCur, &colCur);
				maze(mapArr);
			} while (!success);// || guard != 3);
			if (guard >= 3)
			{
				// game over
				game_over();

				return 1;
			}
			do {
				success = science_questions(freq2);
				if (!success)
				{
					guard++;
				}
				if (guard >= 3)
				{
					pic_security();
					system("pause");
					system("cls");
					printf(RED"The guard has caught you!\n"RESET);
					break;
				}
				mapMovement(mapArr, success, &rowCur, &colCur);
				maze(mapArr);
			} while (!success);// || guard != 3);
			if (guard >= 3)
			{
				// game over
				game_over();

				return 1;
			}
			do {
			
				success = art_questions(freq3);
				if (!success)
				{
					guard++;
				}
				if (guard >= 3)
				{
					pic_security();
					system("pause");
					system("cls");
					printf(RED"The guard has caught you!\n"RESET);
					break;
				}
				mapMovement(mapArr, success, &rowCur, &colCur);
				maze(mapArr);
			} while (!success);// || guard != 3);
			if (guard >= 3)
			{
				// game over
				game_over();

				return 1;
			}
			do {
				success = art_questions(freq3);
				if (!success)
				{
					guard++;
				}
				if (guard >= 3)
				{
					pic_security();
					system("pause");
					system("cls");
					printf(RED"The guard has caught you!\n"RESET);
					break;
				}
				mapMovement(mapArr, success, &rowCur, &colCur);
				maze(mapArr);
			} while (!success);// || guard != 3);
			if (guard >= 3)
			{
				// game over
				game_over();

				return 1;
			}
		do{
			success = art_questions(freq3);
			if (!success)
			{
				guard++;
			}
			if (guard >= 3)
			{
				pic_security();
				system("pause");
				system("cls");
				printf(RED"The guard has caught you!\n"RESET);
				break;
			}
			mapMovement(mapArr, success, &rowCur, &colCur);
			maze(mapArr);
		} while (!success);// || guard != 3);
		if (guard >= 3)
		{
			game_over();
			// game over
			return 1;
		}

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