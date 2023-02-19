#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h> // needed for kbhit func
#pragma once


typedef enum direction {
	RIGHT, LEFT, UP, DOWN
}Direction;

typedef struct fruit {
	int row;
	int col;
}Fruit;

typedef struct snake {
	int row;
	int col;
}Snake;

typedef struct node {
	Snake body;
	Node* pNext;
	Node* pPrev
}Node;

int printMenu(void);
void printSnakeBox(char box[][8]);
void traverseBox(char box[][8], int curRow, int curCol, char userDir);


