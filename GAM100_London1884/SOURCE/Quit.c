/**
	\file        Quit.c
	\project     London1884
	\author      primary - Minho Chae
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/

#include"Header.h"
#include"Define.h"
#include"Variable.h"


//quit option function
void Quit()
{

	TextChange(); 

	//print selection option
	Gotoxy(command_x, command_y);
	printf(" >> Do you want to quit the game?");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf(" > (Y)es");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf("   (N)o");
	command_y -= 2;

	int GameQuitLoop = 1; //set game over loop as true

	//game over loop
	while (GameQuitLoop)
	{
		switch (getch())
		{
		case UP:
			if (command_y > 30) //when the selection arrow is not at the top
			{
				//move up arrow position
				Gotoxy(command_x, command_y);
				printf("  ");
				command_y -= 2;
				Gotoxy(command_x, command_y);
				printf(" >");
			}
			break;
		case DOWN:
			if (command_y < 32) //when the selection arrow is not at the bottom
			{
				//move down arrow position
				Gotoxy(command_x, command_y);
				printf("  ");
				command_y += 2;
				Gotoxy(command_x, command_y);
				printf(" >");
			}
			break;
		case ENTER: //when select selection option
			if (command_y == 30)  //when choose yes
			{
				system("cls");

				playing_loop = 0; //quit adventure loop

				GameQuitLoop = 0; //quit game quit loop

				GameOver();
			}
			else if (command_y == 32) //when choose no
			{
				TextChange(); 

				MiniMenu(); 

				GameQuitLoop = 0; //quit game over loop
			}
			break;
		}

	}

}