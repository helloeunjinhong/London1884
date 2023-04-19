/**
	\file        BrianAlibi.c
	\project     London1884
	\author      primary - Jangho chan
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/

#include"Header.h"
#include"Define.h"
#include"Variable.h"
#include"Brian.h"

void BrianAlibi()
{
	NoteOpenSound(); // Sount Effact

	TextChange(); // clear text part

	//print Alibi one line
	Gotoxy(command_x, command_y);
	printf("> ");
	PrintFirstBrianAlibi();
	command_y += 2; 

	//print Alibi one line
	Gotoxy(command_x, command_y);
	printf("  ");
	PrintSecondBrianAlibi();
	command_y += 2;

	//print Alibi one line
	Gotoxy(command_x, command_y);
	printf("  ");
	PrintThirdBrianAlibi();
	command_y += 2;

	//print Alibi one line
	Gotoxy(command_x, command_y);
	printf("  ");
	PrintFourthBrianAlibi();
	command_y += 2;

	//print Alibi one line
	Gotoxy(command_x, command_y);
	printf("  ");
	PrintFirstBrianTestimony();
	command_y += 2;
	
	//print Alibi one line
	Gotoxy(command_x, command_y);
	printf("  ");
	PrintSecondBrianTestimony();
	command_y += 2;

	//print return menu
	Gotoxy(command_x, command_y);
	printf("   (R)eturn to menu");
	command_y -= 12;
	
	// Loop check value
	int BrianLoop = 1;
	while (BrianLoop)
	{
		// check position of '>'  
		switch (getch())
		{
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
			if (command_y < 40)
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
				choice = 7;

				TextChange();
				BrianLoop = 0;
				NoteCloseSound();
			}
			else if (command_y == 30)
			{
				choice = 8;
				TextChange();
				BrianLoop = 0;
				NoteCloseSound();
			}
			else if (command_y == 32)
			{
				choice = 9;
				TextChange();
				BrianLoop = 0;
				NoteCloseSound();
			}
			else if (command_y == 34)
			{
				choice = 10;
				TextChange();
				BrianLoop = 0;
				NoteCloseSound();
			}
			else if (command_y == 36)
			{
				choice = 11;
				TextChange();
				BrianLoop = 0;
				NoteCloseSound();
			}
			else if (command_y == 38)
			{
				choice = 12;
				TextChange();
				BrianLoop = 0;
				NoteCloseSound();
			}
			else if (command_y == 40)
			{
				TextChange();
				BrianLoop = 0;
				JamesAndInfo = 1; // check james , info , goto menu
				NoteCloseSound();
			}
			break;
		}

	}
}