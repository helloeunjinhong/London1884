/**
	\file        CruiseGuideMap.c
	\project     London1884
	\author      primary - Minho Chae
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/


#include"Header.h"
#include"Define.h"
#include"Variable.h"

//
void CruiseGuideMapFunction(int* x, int* y, int _x, int _y)
{
	ROOM[*y][*x] = PLAYER; //create player in a location where player using cruise guid map
	ROOM[17][13] = WOODPLATE; //delete location of player created in the stair passage 1
	ROOM[7][22] = WOODPLATE; //delete location of player created in the lobby passage

	memcpy(lobby_restaurant_update, ROOM, sizeof(lobby_restaurant_update));
	lobby_restaurant_count++; 

	TextChange();

	//print selection option
	Gotoxy(command_x, command_y);
	printf(" It's a cruise guide map.");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf(" >>Do you want to see the cruise guide map?");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf(" >(Y)es");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf("  (N)o");
	command_y -= 2;

	int MapLoop = 1; //set map loop to true

	//map loop
	while (MapLoop)
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
			if (command_y == 32) //when choose yes
			{
				system("cls");

				printf("\n\n\n\n"); 
				printf("                                                 <Lobby & Restaurant>                            \n");
				printf("                          _________  _____________________________________________________       \n");
				printf("                         |                  *                            |                |      \n");
				printf("                         |    |      current location                    |                |      \n");
				printf("                         |    |                                               restaurnt   |      \n");
				printf("                         |____|                                          |                |      \n");
				printf("                         |___|                                           |                |      \n");
				printf("                         |___|                                           |                |      \n");
				printf("                         |___|                                           |                |      \n");
				printf("                         |_______________________________________________|________________|      \n");
				printf("\n\n\n");
				printf("                                                      <Cruise 1F>                               \n");
				printf("                  _____________________________________________________________________________ \n");
				printf("                 |             |   |         |        |        |       |       |       |       |\n");
				printf("                 |  maid room  |   |warehouse|        |        |       |       |       |       |\n");
				printf("                 |             |   |_________|________|________|_______|_______|_______|_______|\n");
				printf("                 |_____________|   |      ___|                                                 |\n");
				printf("                 |             |   |___|  ___|                                                 |\n");
				printf("                 |             |   |___|  ___|                                                 |\n");
				printf("                 |             |   |___|     |                                                 |\n");
				printf("                 | sailor room |               _______ ________ _______ _______ _______ _______|\n");
				printf("                 |             |              |       |        |       |       |       |       |\n");
				printf("                 |             |              |       |        |       |       |       |       |\n");
				printf("                 |_____________|______________|_______|________|_______|_______|_______|_______|\n");
				printf("\n\n\n");
				printf("                                                      <Cruise 2F>                               \n");
				printf("                  _____________________________________________________________________________ \n");
				printf("                 |             |   |         |        |        |       |       |               |\n");
				printf("                 |  wine shed  |   |warehouse|        |        |       |       |               |\n");
				printf("                 |_____________|   |_________|________|________|_______|_______|               |\n");
				printf("                 |             |   |         |                                 |               |\n");
				printf("                 |             |   |     |___|                                 |               |\n");
				printf("                 |             |   |     |___|                                 |  captain room |\n");
				printf("                 |             |   |     |___|                                 |               |\n");
				printf("                 |     bar     |               _______ ________ _______ _______|               |\n");
				printf("                 |             |              |       |        |       |       |               |\n");
				printf("                 |             |              |       |        |       |       |               |\n");
				printf("                 |_____________|______________|_______|________|_______|_______|_______________|\n");
				printf("\n\n\n");
				printf("                                         >>Press enter to quit cruise guide map                   ");
				getchar();

				system("cls");

				MapLoop = 0; //quit map loop

				command_y -= 4;

				AdventureGameLoop(); //return to game
			}
			else if (command_y == 34) //when choose no
			{
				TextChange();

				MiniMenu();

				MapLoop = 0; //quit map loop
			}
			break;
		}

	}

}