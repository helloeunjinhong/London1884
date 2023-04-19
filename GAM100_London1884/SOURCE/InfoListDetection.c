/**
	\file        InfoListDetection.c
	\project     London1884
	\author      primary - Ho Chang Jang
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/
#include"Header.h"
#include"Define.h"
#include"Variable.h"
#include"Info.h"

//Information option function
void InfoListDetection()
{
	NoteOpenSound();

	TextChange();

	//print informations about the victim
	Gotoxy(command_x, command_y);
	printf("  ");
	PrintFirstInfo();
	command_y += 2;

	Gotoxy(command_x, command_y);
	printf("  ");
	PrintSecondInfo();
	command_y += 2;


	Gotoxy(command_x, command_y);
	printf(">  (R)eturn to menu");
	command_y -= 4;

	int InfoLoop = 1; //set InfoLoop as true
	while (InfoLoop)
	{
		switch (getch())
		{
		case ENTER:

			TextChange();
			InfoLoop = 0; //set InfoLoop as false
			NoteCloseSound();

			break;
		}

	}
}