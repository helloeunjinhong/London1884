/**
	\file        RonaldAlibi.c
	\project     London1884
	\author      primary - Jangho chan
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/

#include"Header.h"
#include"Define.h"
#include"Variable.h"
#include"Ronald.h"

void RonaldAlibi()
{
	NoteOpenSound();
	// Sount Effact
	TextChange();
	// clear text part

	Gotoxy(command_x, command_y);
	printf("> ");
	PrintFirstRonaldAlibi();
	command_y += 2;
	//print Alibi one line

	Gotoxy(command_x, command_y);
	printf("  ");
	PrintSecondRonaldAlibi();
	command_y += 2;
	//print Alibi one line

	Gotoxy(command_x, command_y);
	printf("  ");
	PrintThirdRonaldAlibi();
	command_y += 2;
	//print Alibi one line

	Gotoxy(command_x, command_y);
	printf("   (R)eturn to menu");
	command_y -= 6;
	//print return menu

	int RonaldLoop = 1;
	// Loop check value
	while (RonaldLoop)
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
			if (command_y < 34)
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
				choice = 27;

				TextChange();
				RonaldLoop = 0;
				NoteCloseSound();
			}
			else if (command_y == 30)
			{
				choice = 28;
				TextChange();
				RonaldLoop = 0;
				NoteCloseSound();
			}
			else if (command_y == 32)
			{
				choice = 29;
				TextChange();
				RonaldLoop = 0;
				NoteCloseSound();
			}
			else if (command_y == 34)
			{
				TextChange();
				RonaldLoop = 0;
				JamesAndInfo = 1; // check james , info , goto menu
				NoteCloseSound();
			}



			break;
		}

	}
}