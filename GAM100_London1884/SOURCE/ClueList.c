/**
	\file        ClueList.c
	\project     London1884
	\author      primary - Minho Chae
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/

#include"Header.h"
#include"Define.h"
#include"Variable.h"


int clue_count = 0; //clue count


//clue list function
void ClueList()
{
	NoteOpenSound();

	TextChange();

	if (clue_count == 0) //when player have not found any clues yet
	{
		printf(" You have not found any clues yet! \n\n\n");

		printf(" >>Press enter to quit clue list");
		getchar();

		TextChange(); 

		NoteCloseSound();

		Menu();
	}
	else //when player have found clues
	{
		printf(" clues :");

		Color(darkgray, black);
		printf(" |");

		//print collected clues
		if (rope != 0)
		{
			Color(darkgray, black);
			printf(" rope |");
		}
		if (knife != 0)
		{
			Color(darkgray, black);
			printf(" knife |");
		}
		if (timetable != 0)
		{
			Color(darkgray, black);
			printf(" timetable |");
		}
		if (family_photo != 0)
		{
			Color(darkgray, black);
			printf(" family photo |");
		}
		if (victim != 0)
		{
			Color(darkgray, black);
			printf(" victim |");
		}
		if (contract_paper != 0)
		{
			Color(darkgray, black);
			printf(" contract paper |");
		}
		if (mark_talk_status != 0)
		{
			Color(darkgray, black);
			printf(" Mark's information |");
		}

		command_y += 3;

		//print selection option
		Color(white, black);
		Gotoxy(command_x, command_y);
		printf(" >>What is your command?");
		command_y += 2;
		Gotoxy(command_x, command_y);
		printf(" > (L)ook clues");
		command_y += 2;
		Gotoxy(command_x, command_y);
		printf("   (Q)uit the clue list");
		command_y -= 2;

		int ClueLoop = 1; //set clue loop to true

		//clue loop
		while (ClueLoop)
		{
			switch (getch())
			{
			case UP:
				if (command_y > 33) //when the selection arrow is not at the top
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
				if (command_y < 35) //when the selection arrow is not at the bottom
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
				if (command_y == 33) //when choose look clues
				{
					NoteOpenSound(); 

					TextChange(); 

					//print collected clues with information
					Gotoxy(command_x, command_y);
					if (rope != 0)
						printf(" rope - The end of the rope is rough. \n\n");

					if (knife != 0)
						printf(" knife - Maybe it was used to cut the rope. \n\n");

					if (timetable != 0)
						printf(" timetable - The crew's working hours are written on it. \n\n");

					if (family_photo != 0)
					{
						printf(" family photo - There are some people in the picture. I can see Steven's face among them.\n\n");
					}
					if (victim != 0)
					{
						printf(" the body of James - The James's neck hangs from a rope connected to the ceiling.\n");
						printf("                    Upon closer examination, bruises was found in his body.\n\n");
					}
					if (contract_paper != 0)
						printf(" contract paper - The name of victim and name 'ronald' are written in the contract paper. \n\n");

					if (mark_talk_status != 0)
					{
						printf(" Mark's information - Only sailors could use the warehouse. Maid work from dinner till noon. \n");
						printf("	                 Cook and bartender mostly stays at their place.\n\n");
					}

					printf(" >>Press enter to quit clue list");
					getchar();

					TextChange(); 

					NoteCloseSound(); 

					ClueLoop = 0; //quit clue loop

					Menu(); 
				}
				else if (command_y == 35) //when choose quit the clue list
				{
					TextChange(); 

					NoteCloseSound();  

					ClueLoop = 0; //quit clue loop

					Menu(); 
				}
				break;
			}

		}

	}

}