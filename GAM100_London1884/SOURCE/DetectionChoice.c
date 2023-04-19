/**
	\file        DetectionChoice.c
	\project     London1884
	\author      primary - Do Yeong Yi
				 secondary - Ho Chang Jang
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/

#include"Header.h"
#include"Define.h"
#include"Variable.h"

//choice option function
void ChoiceMenu()
{
	TextChange();

	//print choice selection option
	Color(white, black);
	Gotoxy(command_x, command_y);
	printf(" >>Which you want to suggest?");
	command_y += 2;

	Gotoxy(command_x, command_y);
	printf(" > (S)uspect - testimony");
	command_y += 2;

	Gotoxy(command_x, command_y);
	printf("   (C)lue");
	command_y += 2;
		
	Gotoxy(command_x, command_y);
	printf("   (J)ames"); 
	command_y += 2;
	
	Gotoxy(command_x, command_y);
	printf("   (I)nformation"); 
	command_y += 2;

	Gotoxy(command_x, command_y);
	command_y -= 8;

	//print the left chance of the player (0 = GameOver)
	DetectiveChancePrint();

	//set menu loop as true
	int MenuLoop = 1;

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
		case ENTER: //when select choice selection option
			if (command_y == 30) //when choose testimony
			{
				SuspectListDetection();
				MenuLoop = 0; //quit menu loop
				
			}
			else if (command_y == 32) //when choose clues
			{
				ClueListDetection();
				MenuLoop = 0; //quit menu loop
			}
			else if (command_y == 34) //when choose James
			{
				JamesListDetection();
				JamesAndInfo = 1; //JamesAndInfo = true
				MenuLoop = 0; //quit menu loop
			}
			else if (command_y == 36) //when choose information
			{
				InfoListDetection();
				JamesAndInfo = 1; //JamesAndInfo = true
				MenuLoop = 0; //quit menu loop
			}
			break;
		}

	}
}