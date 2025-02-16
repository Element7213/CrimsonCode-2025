#ifndef QUESTIONS_H
#define QUESTIONS_H

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <Windows.h>
#include <conio.h>
//#include <CreateThread>


#define RED "\033[31m"
#define GREEN "\033[32m"
#define RESET "\033[0m"
#define PURPLE "\033[35m"

//int random_question(void);

void history_questions(void);

void science_questions(void);

void art_questions(void);

void countdown_timer(void);

#endif