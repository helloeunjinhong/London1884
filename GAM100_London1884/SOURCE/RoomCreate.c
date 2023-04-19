/**
	\file        RoomCreate.c
	\project     London1884
	\author      primary - Do Yeong Yi
	\copyright   ¢®¡ÆAll content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¢®¡¾
*/
#include"Header.h"
#include"Define.h"
#include"Variable.h"


//creat & print room 
void RoomCreate(int* x, int* y)
{
	int height, width; //location of object

	for (height = 0; height < 25; height++) 
	{
		for (width = 0; width < 116; width++)
		{
			char temp = ROOM[height][width]; //object

			if (temp == UNKNOWN) //unknown
			{
				//print object
				Color(darkgray, darkgray);
				printf(" ");
			}		

			if (temp == WALL) //wall
			{
				//print object
				Color(white, white);
				printf("#");
			}

			if (temp == WOODPLATE) //woodplate
			{
				//print object
				Color(brown, brown);
				printf(" ");
			}

			if (temp == SEA) //sea
			{
				//print object
				Color(blue, lightblue);
				printf(")");
			}

			if (temp == MAID_ROOM_DOOR || temp == SAILOR_ROOM_DOOR || temp == WAREHOUSE_DOOR) //locked door
			{
				//print object
				Color(white, brown);
				printf("#");
			}

			if (temp == PIANO) //piano
			{
				//print object
				Color(white, black);
				printf("-");
			}

			if (temp == CRUISE_GUID_MAP) //cruise guid map
			{
				//print object
				Color(black, white);
				printf("#");
			}

			if (temp == ROPE || temp == KNIFE || temp == FAMILY_PHOTO) //clues
			{
				//print object
				Color(white, brown);
				printf("*");
			}

			if (temp == VICTIM) //victim(clue)
			{
				//print object
				Color(black, red);
				printf("\"");
			}

			if (temp == STAIR) //stair
			{
				//print object
				Color(black,brown);
				printf("-");
			}

			if (temp == STAIR_PASSAGE_1 || temp == STAIR_PASSAGE_2) //stair passages
			{
				//print object
				Color(black, brown);
				printf("=");
			}

			if (temp == LOBBY_PASSAGE) //lobby passage
			{
				//print object
				Color(white, brown);
				printf(" ");
			}
			
			if (temp == SAILOR_ROOM_PASSAGE) //sailor Room
			{
				//print object
				Color(white, brown);
				printf(" ");
			}

			if (temp == MAID_ROOM_PASSAGE) //maid room
			{
				//print object
				Color(white, brown);
				printf(" ");
			}

			if (temp == WAREHOUSE_PASSAGE) //wareHouse
			{
				//print object
				Color(white, brown);
				printf(" ");
			}
			
			if (temp == CRIME_SCENE_PASSAGE) //crime scene
			{
				//print object
				Color(white, brown);
				printf(" ");
			}

			if (temp == EMPTY_ROOM_UP_PASSAGE) //empty room
			{
				//print object
				Color(white, brown);
				printf(" ");
			}

			if (temp == EMPTY_ROOM_DOWN_PASSAGE) //empty room
			{
				//print object
				Color(white, brown);
				printf(" ");
			}

			if (temp == CAMEO1_ROOM_PASSAGE) //cameo room
			{
				//print object
				Color(brown, brown);
				printf(" ");
			}

			if (temp == CAMEO2_ROOM_PASSAGE) //cameo room
			{
				//print object
				Color(brown, brown);
				printf(" ");
			}

			if (temp == PRODAVID_ROOM_PASSAGE) //professors's room
			{
				//print object
				Color(brown, brown);
				printf(" ");
			}

			if (temp == PROKEVIN_ROOM_PASSAGE) //professors's room
			{
				//print object
				Color(brown, brown);
				printf(" ");
			}

			if (temp == JOHN_ROOM_PASSAGE) //John's room
			{
				//print object
				Color(brown, brown);
				printf(" ");
			}

			if (temp == LOCKER) //locker
			{
				//print object
				Color(black, yellow);
				printf("|");
			}

			if (temp == EMMALOCKER) //locker
			{
				//print object
				Color(black, yellow);
				printf("|");
			}

			if (temp == TIMETABLELOCKER) //locker
			{
				//print object
				Color(black, yellow);
				printf("|");
			}

			if (temp == WAREHOUSEKEYLOCKER) //locker
			{
				//print object
				Color(black, yellow);
				printf("|");
			}

			if (temp == BED_RED) //bed
			{
				//print object
				Color(lightgray, lightgray);
				printf(" ");
			}

			if (temp == BED_WHITE) //bed
			{
				//print object
				Color(white, red);
				printf("-");
			}

			if (temp == TABLE) //table
			{
				//print object
				Color(black, yellow);
				printf("-");
			}

			if (temp == JAMESTABLE) //table
			{
				//print object
				Color(black, yellow);
				printf("*");
			}

			if (temp == CAFETABLE) //table
			{
				//print object
				Color(lightgray, lightgray);
				printf(" ");
			}

			if (temp == WINE_BARREL) //winebarrel
			{
				//print object
				Color(black, yellow);
				printf("!");
			}

			if (temp == ARCADEMACHINE) 
			{
				//print object
				Color(red, red);
				printf(" ");
			}

			if (temp == BRIAN || temp == EMMA || temp == STEVEN || temp == RONALD || temp == GEORGE || temp == OLIVIA || temp == PAUL || temp == EDWARD || temp == JOHN) //suspect
			{
				//print object
				Color(black, white);
				printf("\"");
			}

			if (temp == KEVIN || temp == DAVID || temp == RUDY || temp == JULIA || temp == CAL || temp == MALON || temp == JIMMY || temp == MINHO || temp == DOYEONG || temp == HAGYEONG || temp == MINKI) //non suspect
			{
				//print object
				Color(black, white);
				printf("\"");
			}

			if (temp == MARK)
			{
				Color(black, blue);
				printf("\"");
			}

			if (temp == PLAYER) //player
			{
				//location of player
				*x = width;
				*y = height;

				//print object
				Color(black, green);
				printf("\"");
			}

		}
		printf("\n"); //change print line
	}
	Color(white, black); //back to text color setting
}