/**
	\file        StevenAlibi.c
	\project     London1884
	\author      primary - Jangho chan
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/

#include"Header.h"
#include"Define.h"
#include"Variable.h"
#include"Steven.h"

void StevenAlibi()
{
	NoteOpenSound();
	// Sount Effact
	TextChange();
	// clear text part

	Gotoxy(command_x, command_y);
	printf("> ");
	PrintFirstStevenAlibi();
	command_y += 2;
	//print Alibi one line

	Gotoxy(command_x, command_y);
	printf("  ");
	PrintSecondStevenAlibi();
	command_y += 2;
	//print Alibi one line

	Gotoxy(command_x, command_y);
	printf("  ");
	PrintThirdStevenAlibi();
	command_y += 2;
	//print Alibi one line

	Gotoxy(command_x, command_y);
	printf("  ");
	PrintFourthStevenAlibi();
	command_y += 2;
	//print Alibi one line

	Gotoxy(command_x, command_y);
	printf("   (R)eturn to menu");
	command_y -= 8;
	//print return menu

	int StevenLoop = 1;
	// Loop check value
	while (StevenLoop)
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
				choice = 30;

				TextChange();
				StevenLoop = 0;
				NoteCloseSound();
			}
			else if (command_y == 30)
			{
				choice = 31;
				TextChange();
				StevenLoop = 0;
				NoteCloseSound();
			}
			else if (command_y == 32)
			{
				choice = 32;
				TextChange();
				StevenLoop = 0;
				NoteCloseSound();
			}
			else if (command_y == 34)
			{
				choice = 33;
				TextChange();
				StevenLoop = 0;
				NoteCloseSound();
			}
			else if (command_y == 36)
			{
				TextChange();
				StevenLoop = 0;
				JamesAndInfo = 1; // check james , info , goto menu
				NoteCloseSound();
			}


			break;
		}

	}
}