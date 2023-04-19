/**
	\file        ClueListDetection.c
	\project     London1884
	\author      primary - Do Yeong Yi
				 secondary - Ho Chan Jang, Eunjin Hong
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/
#include"Header.h"
#include"Define.h"
#include"Variable.h"

//Clue option function
void ClueListDetection()
{
	NoteOpenSound();
	TextChange();

	//if player has found none of the clues = prints nothing
	if (clue_count == 0)
	{
		printf(" You have not found any clues yet! \n\n\n");
		printf(" >>Press enter to quit clue list");

		getchar();
		TextChange();
		NoteCloseSound();
		
	}
	else
	{
		NoteOpenSound();

		TextChange();

		//print clue selection option

		Color(white, black);

		if (rope == 1) //if rope is included in the clue list
		{
			Gotoxy(command_x, command_y);
			printf(">rope - The end of the rope is rough. \n\n\n");
			command_y += 2;
		}
		if (knife == 1) //if knife is included in the clue list
		{
			Gotoxy(command_x, command_y);
			printf(" knife - Maybe it was used to cut the rope.' \n\n\n");
			command_y += 2;
		}
		if (timetable == 1) //if timetable is included in the clue list
		{
			Gotoxy(command_x, command_y);
			printf(" timetable - The crew's working hours are written on it. \n\n\n");
			command_y += 2;
		}
		if (family_photo == 1) //if family photo is included in the clue list
		{
			Gotoxy(command_x, command_y);
			printf(" family photo - There are some people in the picture. I can see Steven's face among them.\n");
			printf("               These people look like his parents and his sister.\n\n\n");
			command_y += 2;
		}

		if (victim == 1) //if victim is included in the clue list
		{
			Gotoxy(command_x, command_y);
			printf(" victim - The man's neck hangs from a rope connected to the ceiling.\n");
			printf("         He has bruises on his body.\n\n\n");
			command_y += 2;
		}

		if (contract_paper == 1) //if contract paper is included in the clue list
		{
			Gotoxy(command_x, command_y);
			printf(" contract paper - The name of victim and name 'ronald' are written in the contract paper. \n\n");
			command_y += 2;
		}

		if (mark_talk_status != 0) //if mark's information is included in the clue list
		{
			printf(" Mark's information - Only sailors could use the warehouse. Maid work from dinner till noon. \n");
			printf("	                 Cook and bartender mostly stays at their place.\n\n\n\n");
			command_y += 2;
		}

		Gotoxy(command_x, command_y);
		printf("   (R)eturn to menu");	
		command_y -= 14;

		int ClueLoop = 1; //set Clue Loop as true
		while (ClueLoop)
		{
			switch (getch())
			{
			case UP:
				if (command_y > 28) //when the selection arrow is not at the top
				{
					//move up arrow position
					Gotoxy(command_x, command_y);
					printf(" ");
					command_y -= 2;
					Gotoxy(command_x, command_y);
					printf(">");
				}
				break;
			case DOWN:
				if (command_y < 42) //when the selection arrow is not at the bottom
				{
					//move down arrow position
					Gotoxy(command_x, command_y);
					printf(" ");
					command_y += 2;
					Gotoxy(command_x, command_y);
					printf(">");
				}
				break;
			case ENTER: //when select selection option
				if (command_y == 28) //when choose rope
				{
					choice = 0; // rope is choice = 0
					TextChange();
					NoteCloseSound();
					ClueLoop = 0; //quit clue loop 
					
				}
				else if (command_y == 30) //when choose knife
				{
					choice = 1; // knife is choice = 1
					TextChange();
					NoteCloseSound();
					ClueLoop = 0; // quit clue loop
					
				}
				else if (command_y == 32) //when choose timetable
				{
					choice = 2; // timetable is choice = 2
					TextChange();
					NoteCloseSound();
					ClueLoop = 0; // quit clue loop
					
				}
				else if (command_y == 34) //when choose family photo
				{
					choice = 3; // family photo is choice = 3
					TextChange();
					NoteCloseSound();
					ClueLoop = 0; //quit clue loop
					
				}
				else if (command_y == 36) //when choose victim
				{
					choice = 4; // victim is choice = 4
					TextChange();
					NoteCloseSound();
					ClueLoop = 0; //quit clue loop
					
				}
				else if (command_y == 38) //when choose contract paper
				{
					choice = 5; //contract paper is choice = 5
					TextChange();
					NoteCloseSound();
					ClueLoop = 0; //quit clue loop
					
				}
				else if (command_y == 40) //when choose mark's information
				{
					choice = 6; // mark's info is choice = 6
					TextChange();
					NoteCloseSound();
					ClueLoop = 0; //quit clue loop
				}
				else if (command_y == 42) //when choose return
				{
					TextChange();
					NoteCloseSound();
					ClueLoop = 0; //quit clue loop
					JamesAndInfo = 1; //set James and Info as true
				}
				break;
			}
		}
	}
}