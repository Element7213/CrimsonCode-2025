#ifndef MAP_H // guard code
#define MAP_H

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> // printf() 

#define ROWS 5 // map row size
#define COLS 4 // map column size

// initialize the empty map.
void mapInit(char* mapArr[][COLS]);

// print map
void mapPrint(char* mapArr[][COLS]);

// player moves through the map per question answered.
void mapMovement();

#endif // end guard code