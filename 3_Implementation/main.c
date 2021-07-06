/**
 * @file main.c
 * @author SDLC Team 26
 * @brief 
 * @version 0.1
 * @date 2021-07-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "games.h"
/**
 * @brief Main Driver Code of Gaming Portal
 * 
 * @return int 
 */
int main()
{
	int n1;
	gotoxy(30,5);
	gotoxy(25,6);
printf("  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**");
gotoxy(25,7);
printf("  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**");
gotoxy(25,8);
printf("        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
gotoxy(25,9);
printf("        =                 WELCOME                   =");
gotoxy(25,10);
printf("        =                   TO                      =");
gotoxy(25,11);
printf("        =               ALL-IN-ONE                  =");
gotoxy(25,12);
printf("        =                 GAMING                    =");
gotoxy(25,13);
printf("        =                 PORTAL                    =");
gotoxy(25,14);
printf("        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
gotoxy(25,15);
printf("  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**");
gotoxy(25,16);
printf("  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**");

	do{
		printf("\n\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("\n Enter 1 for snake\n Enter 2 for tictactoe\n Enter 3 for hangman\n Enter 4 for Rock-Paper-Scissors\n Enter 5 to exit\n\n");
	printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("Enter the choice:");
	scanf("%d",&n1);
	switch(n1){
		case 1:mainofsnake(); break;
		case 2:mainOftictactoe(); break;
		case 3:mainofHangman();break;
		case 4:mainofRPS();break;
		case 5:thankyou();break;
		
	}
	}while(n1!=5);
	return 0;
}
