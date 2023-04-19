/**
	\file        JamesListDetection.c
	\project     London1884
	\author      primary - Ho Chang Jang
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/

#include"Header.h"
#include"Define.h"
#include"Variable.h"
#include"James.h"

//James option function
void JamesListDetection()
{
	NoteOpenSound();

	//print information of James
	TextChange();
	Gotoxy(command_x, command_y);
	printf("  ");
	PrintFirstJamesInfo();
	command_y += 2;

	Gotoxy(command_x, command_y);
	printf("  ");
	PrintSecondJamesInfo();
	command_y += 2;

	Gotoxy(command_x, command_y);
	printf("  ");
	PrintThirdJamesInfo();
	command_y += 2;

	Gotoxy(command_x, command_y);
	printf("  ");
	PrintFourthJamesInfo();
	command_y += 2;

	Gotoxy(command_x, command_y);
	printf("  ");
	PrintFifthJamesInfo();
	command_y += 2;


	Gotoxy(command_x, command_y);
	printf(">  (R)eturn to menu");
	command_y -= 10;

	int JamesLoop = 1; //set JamesLoop as true
	while (JamesLoop)
	{
		switch (getch())
		{
		case ENTER:
			
			TextChange();
			JamesLoop = 0; //set JamesLoop as false
			NoteCloseSound();

			break;
		}

	}
}