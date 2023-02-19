#include "Header.h"



int printMenu(void) {

	printf("*************	MENU	*************\n");
	printf("*		1.	Rules					*\n");
	printf("*		2.	Customize Player		*\n");
	printf("*		3.	Play Game				*\n");
	printf("*		4.	Restart 				*\n");
	printf("*		5.	Save					*\n");
	printf("*		6.	Exit					*\n");
	printf("*************************************\n");

	int menuInput = 0;
	printf("Select an option:\n");
	scanf("%d", &menuInput);

	return menuInput;

}


void determineChoice(int menuInput) {
	while (menuInput != 6) {

		switch (menuInput) {

		case 1:
			//print rules
			break;
		case 2:
			//customize player
			break;
		case 3:
			//play game
			break;
		case 4:
			// restart
			break;
		case 5:
			//save
			break;

		}
	}
	if (menuInput == 6) {
		//exit
	}
}


void printRules(void) {
	
}

Fruit apples[1] = 0;

void randomizeLoc(Fruit apples[], char box[][8]) {
	
	for (int i = 0; i < 1; i++) {
		apples[i].col = rand() % 8;
		apples[i].row = rand() % 8;
		box[apples[i].row][apples[i].col] = '*';
	}

}





void traverseBox(char box [][8], int curRow, int curCol, char userDir) {
	
	int crashed = 0;

	
	
	//int nextRow = 0, nextCol = 0;


	char userCH;
	

	while (crashed != 1) {
		if (_kbhit) {

			userCH = _getch();
			//userDir = (int)userCH;
			
			//while (crashed != 1 && userDir <= 3) {

				//switch (userDir) {
				//case RIGHT:
					if (userCH == '0') {
						if (curCol < 7) {

							if (box[curRow][curCol + 1] = '*') {
								box[curRow][curCol] = 'o';
								box[curRow][curCol + 1] = '>';
							}

							box[curRow][curCol] = ' ';
							box[curRow][curCol + 1] = '>';
							
							

							printSnakeBox(box);
							traverseBox(box, curRow, curCol + 1, userCH);

						}
						else {
							printf("You crashed. Try again.\n\n");
							crashed = 1;
							return 0;
						}
					}
					//break;


				//case LEFT:

					if (userCH == '1') {

						if (curCol > 0) {
							box[curRow][curCol] = ' ';
							box[curRow][curCol - 1] = '<';
							printSnakeBox(box);
							traverseBox(box, curRow, curCol - 1, userCH);
						}
						else {
							printf("You crashed. Try again.\n\n");
							crashed = 1;
							return 0;
						}
					}
					//break;


				//case UP:

					if (userCH == '2') {
						if (curRow > 0) {
							box[curRow][curCol] = ' ';
							box[curRow - 1][curCol] = '^';
							printSnakeBox(box);
							traverseBox(box, curRow - 1, curCol, userCH);
						}
						else {
							printf("You crashed. Try again.\n\n");
							crashed = 1;
							return 0;
						}
					}
					//break;


				//case DOWN:

					if (userCH == '3') {
						if (curRow < 7) {
							box[curRow][curCol] = ' ';
							box[curRow + 1][curCol] = 'v';
							printSnakeBox(box);
							traverseBox(box, curRow + 1, curCol, userCH);
						}
						else {
							printf("You crashed. Try again.\n\n");
							crashed = 1;
							return 0;
						}
					}
					//break;
				//}

			//}


				///*if (box[curRow][curCol + 1] == '|' || box[curRow][curCol - 1] == '|' || box[curRow - 1][curCol] == '|' || box[curRow + 1][curCol] == '|') {

				//	crashed = 1;
				//	box[curRow][curCol] = 'x';


				//}*/

			break;
		}

	}


}

void customizePlayer(void) {


}



void printSnakeBox(char box[][8]) {
	system("cls");
	printf("- - - - - - - - - -\n");
	for (int i = 0; i < 8; i++) {
		printf("| ");
		for (int j = 0; j < 8; j++) {
			printf("%c ", box[i][j]);
		}
		printf("| \n");

	}
	printf("- - - - - - - - - -\n");

}