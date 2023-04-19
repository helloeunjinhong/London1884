/**
	\file        SuspectMark.c
	\project     London1884
	\author      primary - Eunjin Hong
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/

#include"Header.h"
#include"Variable.h"
#include"Define.h"

//set mark_talk_status to 0
int mark_talk_status = 0;

//print Mark dialogue
void Talk_Mark()
{
	if (mark_talk_status == 0)
	{
		MaleTalkSound();

		TextChange();
		printf(" You : Hello captain mark. \n");
		getchar();
		TextChange();
		printf(" Mark : Oh hello, detective. Looks like you're running around finding a killer. \n");
		getchar();
		TextChange();
		printf(" Mark : Is there anything I could help you? \n");
		getchar();
		TextChange();
		printf(" You : As you're a captain of this ship, I want some informations of it. \n");
		getchar();
		TextChange();
		printf(" Mark : It's just an ordinary ship. \n");
		getchar();
		TextChange();
		printf(" Mark : There are sailors, maid named Emma, a cook, bartender... That's all \n");
		getchar();
		TextChange();
		printf(" You : Any informations of the workers then? \n");
		getchar();
		TextChange();
		printf(" Mark : Nothing much. \n");
		getchar();
		TextChange();
		printf(" Mark : maid cleans up this ship from dinner till noon. \n");
		getchar();
		TextChange();
		printf(" Mark : after noon till dinner is her only break time. \n");
		getchar();
		TextChange();
		printf(" Mark : Sailors have their timetable, working in turn. \n");
		getchar();
		TextChange();
		printf(" Mark : They work as a patrol. \n");
		getchar();
		TextChange();
		printf(" Mark : They're the only people who could open the warehouse. \n");
		getchar();
		TextChange();
		printf(" Mark : So if you're sick or need something, you should ask to the sailor. \n");
		getchar();
		TextChange();
		printf(" Mark : Cook and bartender mostly stay's at their place. \n");
		getchar();
		TextChange();
		printf(" Mark : If they don't, who takes care the passengers meal and drinks? \n");
		getchar();
		TextChange();
		printf(" Mark : So I think it is hard for them if people is around the bar or the lounge. \n");
		getchar();
		TextChange();
		printf(" Mark : I think this is all I can say. \n");
		getchar();
		TextChange();
		printf(" Mark : Sorry for not being so helpful. \n");
		getchar();
		TextChange();
		printf(" Mark : If you need more help, please talk to me again. \n\n");


		printf(" >>Press enter to end the conversation.");
		getchar();
		TextChange();

		WritingClueSound();
		printf(" (information of workers on ship has been added to clue list!)");

		clue_count++; //add clue count 1
		mark_talk_status++; //set mark talk status = 1
		MiniMenu();
	}

	//When you already talked with mark, repeat the same line
	else if (mark_talk_status != 0)
	{
		MaleTalkSound();

		TextChange();
		printf(" Mark : Is there something more I could help you? \n\n");

		//activate the menu for going to the detection step
		GoDetection();
	}
}

//goin detection option function
void GoDetection()
{
	TextChange();

	//print selection option
	Color(white, black);
	Gotoxy(command_x, command_y);
	printf(" >>Is there anything you want him to help?\n\n");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf(" > Ask him to gather the passengers of this ship");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf("   There is nothing to help");
	command_y -= 2;

	int GoDetectionLoop = 1; //set go detection loop as true

	//menu loop
	while (GoDetectionLoop)
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
			if (command_y < 32) //when the selection arrow is not at the bottom
			{
				//move down arrow position
				Gotoxy(command_x, command_y);
				printf("  ");
				command_y += 2;
				Gotoxy(command_x, command_y);
				printf(" >");
			}
			break;
		case ENTER: //when select going detection option
			if (command_y == 30) //when choose 'Ask him~'
			{
				if (talk_count >= 9 && clue_count >= 7) //if player gathered all of clues and suspects.
				{

					Sleep(1000); //wait for 1 second

					DetectionGameLoop(); //activate detection game loop

					GoDetectionLoop = 0; //quit going detection menu loop
				}
				else if (talk_count < 9 && clue_count < 7) //if player didn't gathered all of clues and suspects
				{
					TextChange();

					printf(" Mark : Looks like there is something more you need to find. \n");

					getchar();
					//go back
					TextChange();
					MiniMenu();

					GoDetectionLoop = 0; //quit going detection menu loop
				}
			}
			else if (command_y == 32) //when choose 'Nothing to help'
			{
				TextChange();

				MiniMenu();

				GoDetectionLoop = 0; //quit going detection menu loop
			}
			break;
		}
	}
}