/**
	\file        Menu.c
	\project     London1884
	\author      primary - Minho Chae
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/

#include"Header.h"
#include"Define.h"
#include"Variable.h"


//menu option function
void Menu()
{
	TextChange();

	//print selection option
	Color(white, black);
	Gotoxy(command_x, command_y);
	printf(" >>What is your command?");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf(" > (I)nventory");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf("   (S)uspect list");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf("   (C)lue list");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf("   (Q)uit the menu");
	command_y -= 6;

	int MenuLoop = 1; //set menu loop as true

	//menu loop
	while (MenuLoop)
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
			if (command_y < 36) //when the selection arrow is not at the bottom
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
			if (command_y == 30) //when choose inventory
			{
				Inventory();

				MenuLoop = 0;//quit menu loop
			}
			else if (command_y == 32) //when choose suspect list
			{
				SuspectList();

				MenuLoop = 0; //quit menu loop
			}
			else if (command_y == 34) //when choose clue list
			{
				ClueList();

				MenuLoop = 0; //quit menu loop
			}
			else if (command_y == 36) //when choose quit
			{
				TextChange();

				MiniMenu(); 

				MenuLoop = 0; //quit menu loop
			}
			break;
		}
		
	}

}