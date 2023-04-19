/**
	\file        SuspectList.c
	\project     London1884
	\author      primary - Minho Chae
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/

#include"Header.h"
#include"Define.h"
#include"Variable.h"


//talk count
int talk_count = 0;


//suspect list fuction
void SuspectList()
{
	NoteOpenSound(); 

	TextChange(); 

	if (talk_count == 0) //when player have not found any suspects yet
	{
		printf(" You have not found any suspects yet! \n\n\n");

		printf(" >>Press enter to quit susprct list");
		getchar();

		TextChange(); 

		NoteCloseSound(); 

		Menu(); 
	}
	else //when player have found suspects
	{
		printf(" suspects :");
		Color(darkgray, black);
		printf(" |");

		//print suspects who talked
		if (brian_talk_status != 0)
		{
			Color(darkgray, black);
			printf(" Brian |");
		}
		if (emma_talk_status != 0)
		{
			Color(darkgray, black);
			printf(" Emma |");
		}
		if (ronald_talk_status != 0)
		{
			Color(darkgray, black);
			printf(" Ronald |");
		}
		if (steven_talk_status != 0)
		{
			Color(darkgray, black);
			printf(" Steven |");
		}
		if (paul_talk_status != 0)
		{
			Color(darkgray, black);
			printf(" Paul |");
		}
		if (edward_talk_status_timetable != 0)
		{
			Color(darkgray, black);
			printf(" Edward |");
		}
		if (olivia_talk_status != 0)
		{
			Color(darkgray, black);
			printf(" Olivia |");
		}
		if (john_talk_status != 0)
		{
			Color(darkgray, black);
			printf(" John |");
		}
		if (george_talk_status != 0)
		{
			Color(darkgray, black);
			printf(" George |");
		}

		command_y += 3;

		//print selection option
		Color(white, black);
		Gotoxy(command_x, command_y);
		printf(" >>What is your command?");
		command_y += 2;
		Gotoxy(command_x, command_y);
		printf(" > (L)ook suspects");
		command_y += 2;
		Gotoxy(command_x, command_y);
		printf("   (Q)uit the suspect list");
		command_y -= 2;

		int SuspectLoop = 1; //set suspect loop as true

		//suspect loop
		while (SuspectLoop)
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
				if (command_y == 33) //when choose look suspects
				{
					NoteOpenSound();

					TextChange();

					//print suspects with simple informations
					Gotoxy(command_x, command_y);
					if (brian_talk_status != 0)
					{
						printf(" Brian -");
						printf(" Morning time patrol. He witnessed the James going from the restaurant to his room at 1 AM.\n");
						printf("        He said the James looked drunk.\n\n");
					}
					if (emma_talk_status != 0)
					{
						printf(" Emma -");
						printf(" She first saw the James who dead at 9:30 AM. \n");
						printf("        She was cleaning the lobby last night.\n\n");
					}
					if (steven_talk_status != 0)
					{
						printf(" Steven -");
						printf(" He worked as a patrol last night. He witnessed James talking with a man at 11 PM last night.\n\n");
					}
					if (ronald_talk_status != 0)
					{
						printf(" Ronald -");
						printf(" He played a card game with John last night. He said he had never met James last night.\n\n");
					}
					if (paul_talk_status != 0)
					{
						printf(" Paul -");
						printf(" Fellow worker with victim, James. Was in room whole day, knows about the contract. \n\n");
					}
					if (john_talk_status != 0)
					{
						printf(" John -");
						printf(" Heard door opening two times around 2AM. One around 2AM, after 5 minutes one more. \n\n");
					}
					if (edward_talk_status_timetable != 0)
					{
						printf(" Edward -");
						printf(" Sailor. Was sick last night. Changed working hours with Steven. \n");
						printf("	Heard Brian leaving the room and come back.\n\n");
					}
					if (olivia_talk_status != 0)
					{
						printf(" Olivia -");
						printf(" Cook. One of the knives got missing afternoon. \n");
						printf("	Stayed at kitchen till 3 AM. Saw Emma cleaning the lobby. \n\n");
					}
					if (george_talk_status != 0)
					{
						printf(" George -");
						printf(" Bartender. Saids victim got fully drunk and Brian sent him to his room.\n");
						printf("	Heard someone using stairs around 2AM.\n\n");
					}

					printf(" >>Press enter to quit suspect list");
					getchar();

					TextChange(); 

					NoteCloseSound(); 

					SuspectLoop = 0; //quit suspect loop

					Menu(); 
				}
				else if (command_y == 35) //when choose quit clue list
				{
					TextChange(); 

					NoteCloseSound();

					SuspectLoop = 0; //quit suspect loop

					Menu(); 
				}
				break;
			}

		}

	}

}