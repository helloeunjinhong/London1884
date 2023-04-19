/**
	\file        JohnAlibi.c
	\project     London1884
	\author      primary - Jangho chan
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/

#include"Header.h"
#include"Define.h"
#include"Variable.h"
#include"John.h"

void JohnAlibi()
{
	NoteOpenSound();
	// Sount Effact
	TextChange();
	// clear text part

	Gotoxy(command_x, command_y);
	printf("> ");
	PrintFirstJohnAlibi();
	command_y += 2;
	//print Alibi one line


	Gotoxy(command_x, command_y);
	printf("   (R)eturn to menu");
	command_y -= 2;
	//print return menu

	int GeorgeLoop = 1;
	// Loop check value
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
			if (command_y < 30)
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
				choice = 20;

				TextChange();
				GeorgeLoop = 0;
				NoteCloseSound();
			}
			else if (command_y == 30)
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