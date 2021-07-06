/**
 * @file snake.c
 * @author Velampudi Rohit
 * @brief  program of snake game
 * @version 0.1
 * @date 2021-07-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "games.h"


/**
 * @brief variables for setting the snaker game boundary and position of fruit
 * 
 */
int i, j, height = 20, width = 20;
int gameover, score;
int x, y, fruitx, fruity, flagg;

/**
 * @brief Function to generate the fruit within the boundary
 * 
 */
int setup()
{
	gameover = 0;

	// Stores height and width
	x = height / 2;
	y = width / 2;
label1:
	fruitx = rand() % 20;
	if (fruitx == 0)
		goto label1;
label2:
	fruity = rand() % 20;
	if (fruity == 0)
		goto label2;
	score = 0;
	return 1;
}
/**
 * @brief Function to draw the boundaries
 * 
 */


int draw()
{
	system("cls");
	for (i = 0; i < height; i++) {
		for (j = 0; j < width; j++) {
			if (i == 0 || i == width - 1
				|| j == 0
				|| j == height - 1) {
				printf("#");
			}
			else {
				if (i == x && j == y)
					printf("0");
				else if (i == fruitx
						&& j == fruity)
					printf("*");
				else
					printf(" ");
			}
		}
		printf("\n");
	}

	// This Prints the score after the game ends

	printf("score = %d", score);
	printf("\n");
	printf("press X to quit the game");
	return 1;
}


/**
 * @brief Function to take the input
 * 
 */
int input()
{
	if (kbhit()) {
		switch (getch()) {
		case 'a':
			flagg = 1;
			break;
		case 's':
			flagg = 2;
			break;
		case 'd':
			flagg = 3;
			break;
		case 'w':
			flagg = 4;
			break;
		case 'x':
			gameover = 1;
			break;
		}
	}
	return 1;
}


/**
 * @brief Function for the logic behind each movement
 * 
 */
int logic()
{
	sleep(0.01);
	switch (flagg) {
	case 1:
		y--;
		break;
	case 2:
		x++;
		break;
	case 3:
		y++;
		break;
	case 4:
		x--;
		break;
	default:
		break;
	}

	// If the game is over
	if (x < 0 || x > height
		|| y < 0 || y > width)
		gameover = 1;

	// If snake reaches the fruit, then update the score
	if (x == fruitx && y == fruity) {
	label3:
		fruitx = rand() % 20;
		if (fruitx == 0)
			goto label3;

	// After eating the above fruit,will generate new fruit
	label4:
		fruity = rand() % 20;
		if (fruity == 0)
			goto label4;
		score += 10;
	}
	return 1;
}

/**
 * @brief Driver code of Snake game
 * 
 */
void mainofsnake()
{
	int m, n;

	// Generate boundary
	setup();

	// Until the game is over
	while (!gameover) {

		// Function Call
		draw();
		input();
		logic();
	}
}
