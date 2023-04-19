/**
	\file        SuspectListDetection.c
	\project     London1884
	\author      primary - Do Yeong Yi
				 secondary - Ho Chan Jang
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/
#include"Header.h"
#include"Define.h"
#include"Variable.h"


//Suspect list option function
void SuspectListDetection()
{
	NoteOpenSound();

	TextChange();

	//print selection option
	Color(white, black);
	Gotoxy(command_x, command_y);
	printf(" >>Which you want to suggest?");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf(">  Brian");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf("   Edward");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf("   Emma");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf("   George");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf("   John");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf("   Olivia");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf("   Paul");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf("   Ronald");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf("   Steven");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf("   (R)eturn to menu");
	command_y -= 18;

	int SuspectLoop = 1; //set suspect menu loop as true

	//suspect menu loop
	while (SuspectLoop)
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
			if (command_y < 48) //when the selection arrow is not at the bottom
			{
				//move down arrow position
				Gotoxy(command_x, command_y);
				printf("  ");
				command_y += 2;
				Gotoxy(command_x, command_y);
				printf(" >");
			}
			break;
		case ENTER: //when select selection option
			if (command_y == 30) //when choose Brian
			{
				SuspectLoop = 0; //quit menu loop
				BrianAlibi(); 
			}
			else if (command_y == 32) //when choose Edward
			{
				SuspectLoop = 0;//quit menu loop
				EdwardAlibi(); 
			}
			else if (command_y == 34) //when choose Emma
			{
				SuspectLoop = 0;//quit menu loop
				EmmaAlibi(); 
			}
			else if (command_y == 36) //when choose George
			{
				SuspectLoop = 0;//quit menu loop
				GeorgeAlibi(); 
			}
			else if (command_y == 38) //when choose John
			{
				SuspectLoop = 0;//quit menu loop
				JohnAlibi(); 
			}
			else if (command_y == 40) //when choose Olivia
			{
				SuspectLoop = 0;//quit menu loop
				OliviaAlibi(); 
			}
			else if (command_y == 42) //when choose Paul
			{
				SuspectLoop = 0;//quit menu loop
				PaulAlibi(); 
			}
			else if (command_y == 44) //when choose Ronald
			{
				SuspectLoop = 0; //quit menu loop
				RonaldAlibi(); 
			}
			else if (command_y == 46) //when choose Steven
			{
				SuspectLoop = 0;//quit menu loop
				StevenAlibi(); 
			}
			else if (command_y == 48) //when choose Return
			{
				TextChange();
				NoteCloseSound();
				SuspectLoop = 0; //quit menu loop
				JamesAndInfo = 1; //set JamesAndInfo true
			}
			break;
			
		}
	}
}
