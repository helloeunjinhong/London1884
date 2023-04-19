/**
	\file        EmmaAlibi.c
	\project     London1884
	\author      primary - Jangho chan
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/

#include"Header.h"
#include"Define.h"
#include"Variable.h"
#include"Emma.h"

void EmmaAlibi()
{
	NoteOpenSound();
	// Sount Effact
	TextChange();
	// clear text part

	Gotoxy(command_x, command_y);
	printf("> ");
	PrintFirstEmmaAlibi();
	command_y += 2;
	//print Alibi one line

	Gotoxy(command_x, command_y);
	printf("  ");
	PrintSecondEmmaAlibi();
	command_y += 2;
	//print Alibi one line

	Gotoxy(command_x, command_y);
	printf("  ");
	PrintThirdEmmaAlibi();
	command_y += 2;
	//print Alibi one line


	Gotoxy(command_x, command_y);
	printf("   (R)eturn to menu");
	command_y -= 6;
	//print return menu

	int EmmaLoop = 1;
	// Loop check value
	while (EmmaLoop)
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
				choice = 15;

				TextChange();
				EmmaLoop = 0;
				NoteCloseSound();
			}
			else if (command_y == 30)
			{
				choice = 16;
				TextChange();
				EmmaLoop = 0;
				NoteCloseSound();
			}
			else if (command_y == 32)
			{
				choice = 17;
				TextChange();
				EmmaLoop = 0;
				NoteCloseSound();
			}
			else if (command_y == 34)
			{
				TextChange();
				EmmaLoop = 0;
				JamesAndInfo = 1; // check james , info , goto menu
				NoteCloseSound();
			}
	
			break;
		}

	}
}