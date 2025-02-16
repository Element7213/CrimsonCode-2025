#include "hacathon.h"

void print_menu(void)
{
	int choice = 0;
do{
	printf(PURPLE"  ___ ___  ___  ___  ___  ___     _____ _  _ ___     ___  _  _ ___ ___ _  _  ___\n"RESET_COLOR);
	printf(GREEN "  |__ |__  |   |___| |__| |__       |   |__| |__    | | | |  | |__ |__ |  | | | |\n"RESET_COLOR);
	printf(BLUE  "  |__  __| |__ |   | |    |__       |   |  | |__    |   | |__| __| |__ |__| |   |\n"RESET_COLOR);
		

	printf(PURPLE"\n---Escape the Museum---\n"RESET_COLOR);
	printf("1.Play Game\n2.Display Rules\n3.Exit Game\n");
	printf("Please input which choice you would like to make (1-3): \n"); 
	scanf("%d", &choice);

	switch (choice)
	{
	case 1:printf("\nWelcome to your Middle School field trip at the National Museum! Wow, there is so much cool stuff here.\n");
		printf("Mrs. Smith, your teacher, tells you to always have a buddy no matter where you go in the Museum,\n");
		printf("but you are a rebellious pre-teen who doesn’t listen to adults. You wandered off into a room with statues that says\n");
		printf(BLUE"--DO NOT TOUCH.---\n"RESET_COLOR);
		printf("Since you are a rebellious pre-teen, you touched the statue and OH NO the statue fell on top of you.\n");
		printf(BLUE"---KABLUEY!!---\n "RESET_COLOR);
		printf("You have been knocked out....You woke up and found that the Museum has\n");
		printf(BLUE"---CLOSED!---\n"RESET_COLOR);
		printf("Now you are trying to find a way to navigate to the exit of the museum,\n");
		printf("but remember to not get caught by the Security Guard of the Museum\n");
		printf("Now let's enter the Mythological section of the Museum.\n\n");
		break;
	case 2:printf(GREEN"\nEscape the Museum "RESET_COLOR);
		printf("is a quiz - based game with a fun story line to follow along with.\n");
		printf("You will have 5 different categories of questions :");
		printf(GREEN"History, Science, Art, Geography, Mythology.\n"RESET_COLOR);
		printf( "There will be three multiple choice questions for each category\n");
		printf( "You must answer the questions right in order to escape the museum.\n");
		printf( "There is a security guard who is following you so make sure to not get 3 problems wrong,\n");
		printf("or you will get caught by the guard. Now try to Escape the Museum and Good Luck!\n\n");
		system("pause");
		system("cls");
		break;
	case 3: printf("\nGoodbye!\n");
		system("\npause");
		break;
	default: printf(RED"\nERROR\n"RESET_COLOR);
		system("pause");
		system("cls");
		break;
	}
} while (choice < 1 || choice > 3 || choice == 2);


}