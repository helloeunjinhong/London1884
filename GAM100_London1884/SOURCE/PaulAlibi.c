/**
	\file        PaulAlibi.c
	\project     London1884
	\author      primary - Jangho chan
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/

#include"Header.h"
#include"Define.h"
#include"Variable.h"
#include"Paul.h"

void PaulAlibi()
{
	NoteOpenSound();
	// Sount Effact
	TextChange();
	// clear text part

	Gotoxy(command_x, command_y);
	printf("> ");
	PrintFirstPaulAlibi();
	command_y += 2;
	//print Alibi one line

	Gotoxy(command_x, command_y);
	printf("  ");
	PrintSecondPaulAlibi();
	command_y += 2;
	//print Alibi one line

	Gotoxy(command_x, command_y);
	printf("  ");
	PrintThirdPaulAlibi();
	command_y += 2;
	//print Alibi one line

	Gotoxy(command_x, command_y);
	printf("  ");
	PrintFourthPaulAlibi();
	command_y += 2;
	//print Alibi one line

	Gotoxy(command_x, command_y);
	printf("   (R)eturn to menu");
	command_y -= 8;
	//print return menu

	int PaulLoop = 1;
	// Loop check value
	while (PaulLoop)
	{
		switch (getch())
		{
			// check position of '>' 
			//Move position of '>'
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
			if (command_y < 36)
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
				choice = 23;

				TextChange();
				PaulLoop = 0;
				NoteCloseSound();
			}
			else if (command_y == 30)
			{
				choice = 24;
				TextChange();
				PaulLoop = 0;
				NoteCloseSound();
			}
			else if (command_y == 32)
			{
				choice = 25;
				TextChange();
				PaulLoop = 0;
				NoteCloseSound();
			}
			else if (command_y == 34)
			{
				choice = 26;
				TextChange();
				PaulLoop = 0;
				NoteCloseSound();
			}
			else if (command_y == 36)
			{
				TextChange();
				PaulLoop = 0;
				JamesAndInfo = 1; // check james , info , goto menu
				NoteCloseSound();
			}


			break;
		}

	}
}