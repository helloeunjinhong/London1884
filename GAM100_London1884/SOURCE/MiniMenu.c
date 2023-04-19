/**
	\file        MiniMenu.c
	\project     London1884
	\author      primary - Doyeong Yi, secondary - Minho Chae 
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/

#include"Header.h"
#include"Variable.h"


//print mini menu 
void MiniMenu()
{
	command_y += 15;

	Gotoxy(command_x, command_y);
	printf("                                             SUSPECT : %i / 9      CLUE : %i / 7 \n", talk_count, clue_count);
	printf("                                  _______________________________________________ \n");
	printf("                                 |                                               |\n");
	printf("                                 | ARROW KEY : MOVE        "); Color(black, white); printf("\""); Color(white, black);  printf("      : PEOPLE       |\n");
	printf("                                 |                                               |\n");
	printf("                                 |    M      : MENU        *      : CLUE         |\n");
	printf("                                 |    Q      : QUIT      |||||    : STAIR        |\n");
	printf("                                 |_______________________________________________|\n");

	command_y -= 15; 
}