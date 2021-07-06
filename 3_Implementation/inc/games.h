#ifndef __GAMES_H__
#define __GAMES_H__

#include <strings.h> // strcasecmp()
#include <string.h> // strchr() strlen()
#include <time.h> 
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
# include <unistd.h>
# include <windows.h>
#define sleep(x) Sleep(100 * (x))

/**
 * @brief Functions of Tic-Tac-Toe
 * 
 */
void menu();
void go(int n);
void start_game();
void check_draw();
void draw_board();
void player_first();
void put_X_O(char ch,int pos);

/**
 * @brief Functions of Snake 
 * 
 */
int draw();
int input();
int logic();
void mainofsnake();

/**
 * @brief Functions of Hangman
 * 
 */
int showHangman(int);
int addword();
int play();
int mainofHangman();
int aplha_in_list(char);
int checkalpha(char);

/**
 * @brief Functions of Rock Paper Scissors
 * 
 */
void game(void);
void plAgain(void);
int mainofRPS(void);

#endif
