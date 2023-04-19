/**
	\file        GeorgeAlibi.c
	\project     London1884
	\author      primary - Jangho chan
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/

#include"Header.h"
#include"Define.h"
#include"Variable.h"
#include"George.h"

void GeorgeAlibi()
{
	// Sount Effact
	NoteOpenSound();
	// clear text part
	TextChange();

	//print Alibi one line
	Gotoxy(command_x, command_y);
	printf("> ");
	PrintFirstGeorgeAlibi();
	command_y += 2;

	//print Alibi one line
	Gotoxy(command_x, command_y);
	printf("  ");
	PrintSecondGeorgeAlibi();
	command_y += 2;

	//print return menu
	Gotoxy(command_x, command_y);
	printf("   (R)eturn to menu");
	command_y -= 4;

	// Loop check value
	int GeorgeLoop = 1;
	while (GeorgeLoop)
	{
		// check position of '>' 
		//Move position of '>'
		switch (getch())
		{
		case UP:
			if (command_y > 28)
			{
				Gotoxy(command_x, command_y);
				printf(" ");
				command_y -= 2;
				Gotoxy(command_x, command_y);
				printf(">");
			}
			break;
		case DOWN:
			if (command_y < 32)
			{
				Gotoxy(command_x, command_y);
				printf(" ");
				command_y += 2;
				Gotoxy(command_x, command_y);
				printf(">");
			}
			break;
			// give value each choice
		case ENTER:
			if (command_y == 28)
			{
				choice = 18;

				TextChange();
				GeorgeLoop = 0;
				NoteCloseSound();
			}
			else if (command_y == 30)
			{
				choice = 19;
				TextChange();
				GeorgeLoop = 0;
				NoteCloseSound();
			}
			else if (command_y == 32)
			{
				TextChange();
				GeorgeLoop = 0;
				JamesAndInfo = 1; // check james , info , goto menu
				NoteCloseSound();
			}


			break;
		}

	}
}