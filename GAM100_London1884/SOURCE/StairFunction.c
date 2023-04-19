/**
	\file        StairFunction.c
	\project     London1884
	\author      primary - Eunjin Hong, secondary - Doyeong Yi 
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/

#include"Header.h"
#include"Define.h"
#include"Variable.h"


//stair passage 1 function
void StairPassage_1_Function(int* x, int* y, int _x, int _y)
{
	StairSound(); //play stair sound

	system("cls");

	if (room == LOBBY_RESTAURANT) //when the player goes up the stairs
	{
		ROOM[*y][*x] = PLAYER; //create player in a location where player using stair
		ROOM[7][22] = WOODPLATE; //delete location of player created in the lobby passage
		ROOM[7][36] = WOODPLATE;

		memcpy(lobby_restaurant_update, ROOM, sizeof(lobby_restaurant_update)); //send changed information of room 2

		lobby_restaurant_count++;

		room = CRUISE_1F; //set room number to 3 to load room3
	}
	else if (room == CRUISE_1F) //when the player goes down the stairs
	{
		ROOM[*y][*x] = PLAYER; //create player in a location where player using stair
		ROOM[14][38] = WOODPLATE; //delete location of player created in the stair passage 2
		ROOM[7][28] = WOODPLATE; //delete location of player created in the 1F warehouse passage
		ROOM[18][24] = WOODPLATE; //delete location of player created in the sailor room passage 
		ROOM[6][24] = WOODPLATE; //delete location of player created in the maid room passage 

		ROOM[10][45] = WOODPLATE; //delete location of player created in the emptyroom
		ROOM[10][56] = WOODPLATE; //delete location of player created in the emptyroom
		ROOM[10][67] = WOODPLATE; //delete location of player created in the emptyroom
		ROOM[10][78] = WOODPLATE; //delete location of player created in the emptyroom
		ROOM[10][89] = WOODPLATE; //delete location of player created in the emptyroom
		ROOM[10][100] = WOODPLATE; //delete location of player created in the emptyroom

		ROOM[14][56] = WOODPLATE; //delete location of player created in the emptyroom
		ROOM[14][67] = WOODPLATE; //delete location of player created in the emptyroom
		ROOM[14][78] = WOODPLATE; //delete location of player created in the emptyroom
		ROOM[14][89] = WOODPLATE; //delete location of player created in the emptyroom
		ROOM[14][100] = WOODPLATE; //delete location of player created in the emptyroom

		memcpy(cruise_1F_update, ROOM, sizeof(cruise_1F_update)); //send changed information of room 3

		cruise_1F_count++;

		room = LOBBY_RESTAURANT; //set room number to 2 to load room2
	}
	AdventureGameLoop(); //call adventure game loop for printing new room
}

//stair passage 2 function
void StairPassage_2_Function(int* x, int* y, int _x, int _y)
{
	StairSound(); //play stair sound

	system("cls");

	if (room == CRUISE_1F) //when the player goes up the stairs
	{
		ROOM[*y][*x] = PLAYER;  //create player in a location where player using stair
		ROOM[9][31] = WOODPLATE; //delete location of player created in the stair passage 1
		ROOM[7][28] = WOODPLATE; //delete location of player created in the 1F warehouse passage
		ROOM[18][24] = WOODPLATE; //delete location of player created in the sailor room passage 
		ROOM[6][24] = WOODPLATE; //delete location of player created in the maid room passage 

		ROOM[10][45] = WOODPLATE; //delete location of player created in the emptyroom
		ROOM[10][56] = WOODPLATE; //delete location of player created in the emptyroom
		ROOM[10][67] = WOODPLATE; //delete location of player created in the emptyroom
		ROOM[10][78] = WOODPLATE; //delete location of player created in the emptyroom
		ROOM[10][89] = WOODPLATE; //delete location of player created in the emptyroom
		ROOM[10][100] = WOODPLATE; //delete location of player created in the emptyroom

		ROOM[14][56] = WOODPLATE; //delete location of player created in the emptyroom
		ROOM[14][67] = WOODPLATE; //delete location of player created in the emptyroom
		ROOM[14][78] = WOODPLATE; //delete location of player created in the emptyroom
		ROOM[14][89] = WOODPLATE; //delete location of player created in the emptyroom
		ROOM[14][100] = WOODPLATE; //delete location of player created in the emptyroom

		memcpy(cruise_1F_update, ROOM, sizeof(cruise_1F_update)); //send changed information of room 3

		cruise_1F_count++; 

		room = CRUISE_2F; //set room number to 4 to load room4
	}
	else if (room == CRUISE_2F) //when the player goes down the stairs
	{
		ROOM[*y][*x] = PLAYER;  //create Player in a location where player using stair
		ROOM[7][28] = WOODPLATE; //delete location of player created in the 2F warehouse passage
		ROOM[10][56] = WOODPLATE; //delete location of player created in the crime scene passage

		ROOM[10][45] = WOODPLATE; //delete location of player created in the emptyroom
		ROOM[10][67] = WOODPLATE; //delete location of player created in the emptyroom
		ROOM[10][78] = WOODPLATE; //delete location of player created in the emptyroom

		ROOM[14][56] = WOODPLATE; //delete location of player created in the crime scene passage
		ROOM[14][67] = WOODPLATE; //delete location of player created in the emptyroom
		ROOM[14][78] = WOODPLATE; //delete location of player created in the emptyroom

		memcpy(cruise_2F_update, ROOM, sizeof(cruise_2F_update)); //send changed information of room 4

		cruise_2F_count++; 

		room = CRUISE_1F; //set room number to 3 to load room3
	}
	AdventureGameLoop(); //call adventure game loop for printing new room
}