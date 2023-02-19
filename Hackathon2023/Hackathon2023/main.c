#include "Header.h"


int main(void) {

	Direction userDir = 0;
	char snakeBox[8][8] = { { ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' '},
							{ ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' '},
							{ ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' '},
							{ ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' '},
							{ ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' '},
							{ ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' '},
							{ ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' '},
							{ ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' '}};


	printSnakeBox(snakeBox);
	printf("0 = right, 1 = left, 2 = up, 3 = down\n");

	traverseBox(snakeBox, 4, 4, 0);




}