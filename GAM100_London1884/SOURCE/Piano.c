/**
	\file        Piano.c
	\project     London1884
	\author      primary - Minho Chae
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/

#include"Header.h"
#include"Define.h"
#include"Variable.h"


//piano function
void Piano()
{
	TextChange();

	//print selection option
	Gotoxy(command_x, command_y);
	printf(" It's a piano.");
	command_y +=2;
	Gotoxy(command_x, command_y);
	printf(" >>Do you want to play the piano?");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf(" >(Y)es");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf("  (N)o");
	command_y -= 2;

	int PianoLoop = 1; //set piano loop to true

	//piano loop
	while (PianoLoop)
	{
		switch (getch())
		{
		case UP:
			if (command_y > 32) //when the selection arrow is not at the top
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
			if (command_y < 34) //when the selection arrow is not at the bottom
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
			if (command_y == 32) //when choose play
			{
				TextChange();

				Gotoxy(command_x, command_y);
				printf(" |   |   | |   |   |     |   |   | |   | |   |   |       \n");
				printf(" |   |   | |   |   |     |   |   | |   | |   |   |       \n");
				printf(" |   |   | |   |   |     |   |   | |   | |   |   |       \n");
				printf(" |   |___| |___|   |     |   |___| |___| |___|   |       \n");
				printf(" |     |     |     |     |     |     |     |     |       \n");
				printf(" |     |     |     |     |     |     |     |     |       \n");
				printf(" |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |       \n");
				printf(" |_____|_____|_____|_____|_____|_____|_____|_____| \n\n\n\n");
				printf("      >>Press enter to stop playing the piano");

				int PianoPlayLoop = 1; //set piano play loop as true

				//pian play loop
				while (PianoPlayLoop)
				{
					switch (getch())
					{
					case DO:
						sndPlaySoundA(TEXT("PianoSound\\DO.wav"),SND_ASYNC | SND_NODEFAULT | SND_PURGE);
						break;
					case RE:
						sndPlaySoundA(TEXT("PianoSound\\RE.wav"), SND_ASYNC | SND_NODEFAULT | SND_PURGE);
						break;
					case MI:
						sndPlaySoundA(TEXT("PianoSound\\MI.wav"), SND_ASYNC | SND_NODEFAULT | SND_PURGE);
						break;
					case FA:
						sndPlaySoundA(TEXT("PianoSound\\FA.wav"), SND_ASYNC | SND_NODEFAULT | SND_PURGE);
						break;
					case SOL:
						sndPlaySoundA(TEXT("PianoSound\\SOL.wav"), SND_ASYNC | SND_NODEFAULT | SND_PURGE);
						break;
					case LA:
						sndPlaySoundA(TEXT("PianoSound\\LA.wav"), SND_ASYNC | SND_NODEFAULT | SND_PURGE);
						break;
					case SI:
						sndPlaySoundA(TEXT("PianoSound\\SI.wav"), SND_ASYNC | SND_NODEFAULT | SND_PURGE);
						break;
					case HIGHDO:
						sndPlaySoundA(TEXT("PianoSound\\DO(high).wav"), SND_ASYNC | SND_NODEFAULT | SND_PURGE);
						break;
					case ENTER:
						PianoPlayLoop = 0; //quit piano play loop
						break;
					}

				}

				TextChange(); 

				MiniMenu(); 

				PianoLoop = 0; //quit piano loop

			}
			else if (command_y == 34) //when choose quit
			{
				TextChange(); 

				MiniMenu(); 

				PianoLoop = 0; //quit piano loop
			}
			break;
		}

	}

}
