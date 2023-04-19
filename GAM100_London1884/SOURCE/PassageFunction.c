/**
	\file        PassageFunction.c
	\project     London1884
	\author      primary - Eunjin Hong , secondary - Doyeong Yi
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/

#include"Header.h"
#include"Define.h"
#include"Variable.h"


//lobby passage function
void LobbyPassageFunction(int* x, int* y, int _x, int _y)
{
	PassageSound();

	system("cls");

	if (room == CRUISE_DECK) //when the player enters the room
	{
		ROOM[*y][*x] = PLAYER; //create player in a location where player using passage

		//delete location of player
		ROOM[12][13] = WOODPLATE;

		memcpy(cruise_deck_update, ROOM, sizeof(cruise_deck_update)); //send changed information of room 1

		cruise_deck_count++; //increase room1 count

		room = LOBBY_RESTAURANT;  //set room number to 2 to load room2
	}
	else if (room == LOBBY_RESTAURANT) //when the player leaves the room
	{
		ROOM[*y][*x] = PLAYER; //create player in a location where player using passage

		//delete location of player
		ROOM[17][13] = WOODPLATE;
		ROOM[7][36] = WOODPLATE;


		memcpy(lobby_restaurant_update, ROOM, sizeof(lobby_restaurant_update)); //send changed information of room 2

		lobby_restaurant_count++; 

		room = CRUISE_DECK; //set room number to 1 to load room1
	}
	AdventureGameLoop(); //call adventure game loop for printing new room
}

//crime scene passage function
void CrimeScenePassageFunction(int* x, int* y, int _x, int _y)
{
	PassageSound();

	system("cls");

	if (room == CRUISE_2F) //when the player enters the room
	{
		ROOM[*y][*x] = PLAYER; //create player in a location where player using passage

		//delete location of player
		ROOM[7][28] = WOODPLATE;
		ROOM[9][38] = WOODPLATE; 

		ROOM[10][45] = WOODPLATE; 
		ROOM[10][67] = WOODPLATE; 
		ROOM[10][78] = WOODPLATE; 

		ROOM[14][56] = WOODPLATE; 
		ROOM[14][67] = WOODPLATE; 
		ROOM[14][78] = WOODPLATE; 

		memcpy(cruise_2F_update, ROOM, sizeof(cruise_2F_update)); //send changed information of room 4

		cruise_2F_count++;

		room = CRIME_SCENE; //set room number to 8 to load room8
	}
	else if (room == CRIME_SCENE) //when the player leaves the room
	{
		ROOM[*y][*x] = PLAYER; //create player in a location where player using passage

		memcpy(crime_scene_update, ROOM, sizeof(crime_scene_update)); //send changed information of room 8

		crime_scene_count++;

		room = CRUISE_2F; //set room number to 4 to load room4
	}
	AdventureGameLoop(); //call adventure game loop for printing new room
}

//sailor room passage function
void SailorRoomPassageFunction(int* x, int* y, int _x, int _y)
{
	PassageSound();

	system("cls");

	if (room == CRUISE_1F) //when the player enters the room
	{
		ROOM[*y][*x] = PLAYER; //create player in a location where player using passage

		//delete location of player
		ROOM[14][38] = WOODPLATE; 
		ROOM[7][28] = WOODPLATE; 
		ROOM[9][31] = WOODPLATE; 
		ROOM[6][24] = WOODPLATE; 

		ROOM[10][45] = WOODPLATE; 
		ROOM[10][56] = WOODPLATE; 
		ROOM[10][67] = WOODPLATE; 
		ROOM[10][78] = WOODPLATE; 
		ROOM[10][89] = WOODPLATE; 
		ROOM[10][100] = WOODPLATE; 

		ROOM[14][56] = WOODPLATE;
		ROOM[14][67] = WOODPLATE;
		ROOM[14][78] = WOODPLATE;
		ROOM[14][89] = WOODPLATE; 
		ROOM[14][100] = WOODPLATE;

		memcpy(cruise_1F_update, ROOM, sizeof(cruise_1F_update)); //send changed information of room 3

		cruise_1F_count++;

		room = SAILOR_ROOM;
	}
	else if (room == SAILOR_ROOM) //when the player leaves the room
	{
		ROOM[*y][*x] = PLAYER; //create player in a location where player using passage

		memcpy(saillor_room_update, ROOM, sizeof(saillor_room_update)); //send changed information of room 6

		sailor_room_count++; //increase room6 count

		room = CRUISE_1F; //set room number to 3 to load room3
	}
	AdventureGameLoop(); //call adventure game loop for printing new room
}

//maid room passage function
void MaidRoomPassageFunction(int* x, int* y, int _x, int _y)
{
	PassageSound();

	system("cls");

	if (room == CRUISE_1F) //when the player enters the room
	{
		ROOM[*y][*x] = PLAYER;
		ROOM[14][38] = WOODPLATE; 
		ROOM[7][28] = WOODPLATE; 
		ROOM[9][31] = WOODPLATE;
		ROOM[18][24] = WOODPLATE; 

		ROOM[10][45] = WOODPLATE;
		ROOM[10][56] = WOODPLATE;
		ROOM[10][67] = WOODPLATE; 
		ROOM[10][78] = WOODPLATE;
		ROOM[10][89] = WOODPLATE; 
		ROOM[10][100] = WOODPLATE; 

		ROOM[14][56] = WOODPLATE; 
		ROOM[14][67] = WOODPLATE; 
		ROOM[14][78] = WOODPLATE; 
		ROOM[14][89] = WOODPLATE; 
		ROOM[14][100] = WOODPLATE; 

		memcpy(cruise_1F_update, ROOM, sizeof(cruise_1F_update)); //send changed information of room 3

		cruise_1F_count++; 

		room = MAID_ROOM; //set room number to 9 to load room9
	}
	else if (room == MAID_ROOM) //when the player leaves the room
	{
		ROOM[*y][*x] = PLAYER; //create player in a location where player using passage

		memcpy(maid_room_update, ROOM, sizeof(maid_room_update)); //send changed information of room 9

		maid_room_count++;

		room = CRUISE_1F; //set room number to 3 to load room3
	}
	AdventureGameLoop(); //call adventure game loop for printing new room
}

//warerhouse passage function
void WarehousePassageFunction(int* x, int* y, int _x, int _y)
{
	PassageSound();

	system("cls");

	if (room == CRUISE_1F) //when the player enters the room
	{
		ROOM[*y][*x] = PLAYER; //create player in a location where player using passage

		//delete location of player
		ROOM[9][31] = WOODPLATE;
		ROOM[14][38] = WOODPLATE; 
		ROOM[18][24] = WOODPLATE;
		ROOM[6][24] = WOODPLATE; 

		ROOM[10][45] = WOODPLATE; 
		ROOM[10][56] = WOODPLATE; 
		ROOM[10][67] = WOODPLATE; 
		ROOM[10][78] = WOODPLATE; 
		ROOM[10][89] = WOODPLATE; 
		ROOM[10][100] = WOODPLATE; 

		ROOM[14][56] = WOODPLATE; 
		ROOM[14][67] = WOODPLATE; 
		ROOM[14][78] = WOODPLATE; 
		ROOM[14][89] = WOODPLATE; 
		ROOM[14][100] = WOODPLATE; 

		memcpy(cruise_1F_update, ROOM, sizeof(cruise_1F_update)); //send changed information of room 3

		cruise_1F_count++; 

		room = WAREHOUSE_1F; //set room number to 5 to load room5
	}
	else if (room == CRUISE_2F) //when the player enters room
	{
		ROOM[*y][*x] = PLAYER; //create player in a location where player using passage

		//delete location of player
		ROOM[9][38] = WOODPLATE; 
		ROOM[10][56] = WOODPLATE; 

		ROOM[10][45] = WOODPLATE; 
		ROOM[10][67] = WOODPLATE; 
		ROOM[10][78] = WOODPLATE; 

		ROOM[14][56] = WOODPLATE;
		ROOM[14][67] = WOODPLATE; 
		ROOM[14][78] = WOODPLATE; 

		memcpy(cruise_2F_update, ROOM, sizeof(cruise_2F_update)); //send changed information of room 4

		cruise_2F_count++;

		room = WAREHOUSE_2F; //set room number to 7 to load room7
	}
	else if (room == WAREHOUSE_1F) //when the player leaves the room
	{
		ROOM[*y][*x] = PLAYER; //create player in a location where player using passage

		memcpy(warehouse_1F_update, ROOM, sizeof(warehouse_1F_update)); //send changed information of room 5

		warehouse_1F_count++;

		room = CRUISE_1F; //set room number to 3 to load room3
	}

	else if (room == WAREHOUSE_2F) //when the player leaves room
	{
		ROOM[*y][*x] = PLAYER; //create player in a location where player using passage

		memcpy(warehouse_2F_update, ROOM, sizeof(warehouse_2F_update)); //send changed information of room 7

		warehouse_2F_count++;

		room = CRUISE_2F; //set room number to 4 to load room4
	}
	AdventureGameLoop(); //call adventure game loop for printing new room
}

void EmptyRoomPassageUpFunction(int* x, int* y, int _x, int _y)
{
	PassageSound();

	system("cls");

	if (room == CRUISE_1F) //when the player enters the room
	{
		//delete location of player
		ROOM[9][31] = WOODPLATE;
		ROOM[7][28] = WOODPLATE; 
		ROOM[18][24] = WOODPLATE; 
		ROOM[6][24] = WOODPLATE; 
		ROOM[9][31] = WOODPLATE; 
		ROOM[14][38] = WOODPLATE; 

		ROOM[10][45] = WOODPLATE; 
		ROOM[10][56] = WOODPLATE; 
		ROOM[10][67] = WOODPLATE; 
		ROOM[10][78] = WOODPLATE; 
		ROOM[10][89] = WOODPLATE; 
		ROOM[10][100] = WOODPLATE; 

		ROOM[14][56] = WOODPLATE; 
		ROOM[14][67] = WOODPLATE; 
		ROOM[14][78] = WOODPLATE;
		ROOM[14][89] = WOODPLATE; 
		ROOM[14][100] = WOODPLATE; 

		ROOM[*y][*x] = PLAYER;  //create Player in a location where player using passage

		memcpy(cruise_1F_update, ROOM, sizeof(cruise_1F_update)); //send changed information of room 3

		cruise_1F_count++; 

		room = EMPTY_ROOM_UP; //set room number to 10 to load emptyroomup
	}
	else if (room == CRUISE_2F) //when the player enters the room
	{
		//delete location of player
		ROOM[7][28] = WOODPLATE; 
		ROOM[9][38] = WOODPLATE; 
		ROOM[10][56] = WOODPLATE; 

		ROOM[10][45] = WOODPLATE; 
		ROOM[10][67] = WOODPLATE; 
		ROOM[10][78] = WOODPLATE; 

		ROOM[14][56] = WOODPLATE; 
		ROOM[14][67] = WOODPLATE; 
		ROOM[14][78] = WOODPLATE; 

		ROOM[*y][*x] = PLAYER;  //create Player in a location where player using passage

		memcpy(cruise_2F_update, ROOM, sizeof(cruise_2F_update)); //send changed information of room 4

		cruise_2F_count++; //increase room4 count

		room = EMPTY_ROOM_UP; //set room number to 10 to load emptyroomup
	}
	else if (room == EMPTY_ROOM_UP) //when the player leaves the room
	{

		if (room_floor == 1)
		{
			ROOM[*y][*x] = PLAYER; //create Player in a location where player using passage

			room = CRUISE_1F; //set room number to 3 to load room3

			memcpy(empty_room_up_update, ROOM, sizeof(empty_room_up_update)); //send changed information of room 10

			empty_room_up_count++;

		}
		else if (room_floor == 2)
		{
			ROOM[*y][*x] = PLAYER; //create Player in a location where player using passage

			room = CRUISE_2F; //set room number to 4 to load room4

			memcpy(empty_room_up_update, ROOM, sizeof(empty_room_up_update)); //send changed information of room 10

			empty_room_up_count++; 

		}
	}
	AdventureGameLoop(); //call adventure game loop for printing new room
}

void EmptyRoomPassageDownFunction(int* x, int* y, int _x, int _y)
{
	PassageSound();

	system("cls");

	if (room == CRUISE_1F) //when the player enters the room
	{
		//delete location of player
		ROOM[9][31] = WOODPLATE;
		ROOM[7][28] = WOODPLATE; 
		ROOM[18][24] = WOODPLATE; 
		ROOM[6][24] = WOODPLATE;
		ROOM[9][31] = WOODPLATE; 
		ROOM[14][38] = WOODPLATE; 

		ROOM[10][45] = WOODPLATE; 
		ROOM[10][56] = WOODPLATE; 
		ROOM[10][67] = WOODPLATE; 
		ROOM[10][78] = WOODPLATE; 
		ROOM[10][89] = WOODPLATE; 
		ROOM[10][100] = WOODPLATE; 

		ROOM[14][56] = WOODPLATE; 
		ROOM[14][67] = WOODPLATE; 
		ROOM[14][78] = WOODPLATE; 
		ROOM[14][89] = WOODPLATE; 
		ROOM[14][100] = WOODPLATE; 



		ROOM[*y][*x] = PLAYER; //create Player in a location where player using passage 

		memcpy(cruise_1F_update, ROOM, sizeof(cruise_1F_update)); //send changed information of room 3

		cruise_1F_count++;

		room = EMPTY_ROOM_DOWN; //set room number to 10 to load emptyroomup
	}
	else if (room == CRUISE_2F) //when the player enters the room
	{
		//delete location of player
		ROOM[7][28] = WOODPLATE; 
		ROOM[9][38] = WOODPLATE; 
		ROOM[10][56] = WOODPLATE; 

		ROOM[10][45] = WOODPLATE; 
		ROOM[10][67] = WOODPLATE; 
		ROOM[10][78] = WOODPLATE; 

		ROOM[14][56] = WOODPLATE; 
		ROOM[14][67] = WOODPLATE; 
		ROOM[14][78] = WOODPLATE; 

		ROOM[*y][*x] = PLAYER; //create Player in a location where player using passage

		memcpy(cruise_2F_update, ROOM, sizeof(cruise_2F_update)); //send changed information of room 4

		cruise_2F_count++;

		room = EMPTY_ROOM_DOWN; //set room number to 11 to load emptyroomdown
	}
	else if (room == EMPTY_ROOM_DOWN) //when the player leaves the room
	{

		if (room_floor == 1)
		{
			ROOM[*y][*x] = PLAYER; //create Player in a location where player using passage 

			room = CRUISE_1F; //set room number to 3 to load room3

			memcpy(empty_room_down_update, ROOM, sizeof(empty_room_down_update)); //send changed information of room 11

			empty_room_down_count++;

		}
		else if (room_floor == 2)
		{
			ROOM[*y][*x] = PLAYER; //create Player in a location where player using passage

			room = CRUISE_2F; //set room number to 4 to load room4

			memcpy(empty_room_down_update, ROOM, sizeof(empty_room_down_update)); //send changed information of room 11

			empty_room_down_count++;
		}
	}
	AdventureGameLoop(); //call adventure game loop for printing new room
}

void Cameo1RoomPassageFunction(int* x, int* y, int _x, int _y)
{
	PassageSound();

	system("cls");

	if (room == CRUISE_1F) //when the player enters the room
	{
		//delete location of player
		ROOM[9][31] = WOODPLATE;
		ROOM[7][28] = WOODPLATE; 
		ROOM[18][24] = WOODPLATE; 
		ROOM[6][24] = WOODPLATE; 
		ROOM[9][31] = WOODPLATE; 
		ROOM[14][38] = WOODPLATE; 

		ROOM[10][45] = WOODPLATE; 
		ROOM[10][56] = WOODPLATE; 
		ROOM[10][67] = WOODPLATE; 
		ROOM[10][78] = WOODPLATE; 
		ROOM[10][89] = WOODPLATE; 
		ROOM[10][100] = WOODPLATE;

		ROOM[14][56] = WOODPLATE; 
		ROOM[14][67] = WOODPLATE; 
		ROOM[14][78] = WOODPLATE; 
		ROOM[14][89] = WOODPLATE; 
		ROOM[14][100] = WOODPLATE; 


		ROOM[*y][*x] = PLAYER; //create Player in a location where player using passage

		memcpy(cruise_1F_update, ROOM, sizeof(cruise_1F_update)); //send changed information of room 3

		cruise_1F_count++; 

		room = ROOM_CAMEO_1; //set room number to 12 to load cameo room
	}
	else if (room == ROOM_CAMEO_1) //when the player leaves the room
	{

		ROOM[*y][*x] = PLAYER; //create Player in a location where player using passage

		room = CRUISE_1F; //set room number to 3 to load room3

		memcpy(cameo1_room_update, ROOM, sizeof(cameo1_room_update)); //send changed information of room 12

		cameo1_room_count++;
	}
	AdventureGameLoop(); //call adventure game loop for printing new room
}

void Cameo2RoomPassageFunction(int* x, int* y, int _x, int _y)
{
	PassageSound();

	system("cls");

	if (room == CRUISE_1F) //when the player enters the room
	{
		//delete location of player
		ROOM[9][31] = WOODPLATE; 
		ROOM[7][28] = WOODPLATE; 
		ROOM[18][24] = WOODPLATE; 
		ROOM[6][24] = WOODPLATE; 
		ROOM[9][31] = WOODPLATE; 
		ROOM[14][38] = WOODPLATE; 

		ROOM[10][45] = WOODPLATE; 
		ROOM[10][56] = WOODPLATE; 
		ROOM[10][67] = WOODPLATE; 
		ROOM[10][78] = WOODPLATE; 
		ROOM[10][89] = WOODPLATE; 
		ROOM[10][100] = WOODPLATE; 

		ROOM[14][56] = WOODPLATE; 
		ROOM[14][67] = WOODPLATE; 
		ROOM[14][78] = WOODPLATE; 
		ROOM[14][89] = WOODPLATE; 
		ROOM[14][100] = WOODPLATE; 


		ROOM[*y][*x] = PLAYER; //create Player in a location where player using passage

		memcpy(cruise_1F_update, ROOM, sizeof(cruise_1F_update)); //send changed information of room 3

		cruise_1F_count++;

		room = ROOM_CAMEO_2; //set room number to 13 to load cameo room
	}
	else if (room == ROOM_CAMEO_2) //when the player leaves the room
	{

		ROOM[*y][*x] = PLAYER; //create Player in a location where player using passage

		room = CRUISE_1F; //set room number to 3 to load room3

		memcpy(cameo2_room_update, ROOM, sizeof(cameo2_room_update)); //send changed information of room 13

		cameo2_room_count++;
	}
	AdventureGameLoop(); //call adventure game loop for printing new room
}

void ProDavidRoomPassageFunction(int* x, int* y, int _x, int _y)
{
	PassageSound();

	system("cls");

	if (room == CRUISE_1F) //when the player enters the room
	{
		//delete location of player
		ROOM[9][31] = WOODPLATE; 
		ROOM[7][28] = WOODPLATE;
		ROOM[18][24] = WOODPLATE; 
		ROOM[6][24] = WOODPLATE; 
		ROOM[9][31] = WOODPLATE; 
		ROOM[14][38] = WOODPLATE; 

		ROOM[10][45] = WOODPLATE; 
		ROOM[10][56] = WOODPLATE; 
		ROOM[10][67] = WOODPLATE; 
		ROOM[10][78] = WOODPLATE; 
		ROOM[10][89] = WOODPLATE; 
		ROOM[10][100] = WOODPLATE; 

		ROOM[14][56] = WOODPLATE; 
		ROOM[14][67] = WOODPLATE; 
		ROOM[14][78] = WOODPLATE; 
		ROOM[14][89] = WOODPLATE; 
		ROOM[14][100] = WOODPLATE; 

		ROOM[*y][*x] = PLAYER; //create Player in a location where player using passage 

		memcpy(cruise_1F_update, ROOM, sizeof(cruise_1F_update)); //send changed information of room 3

		cruise_1F_count++;

		room = ROOM_PRODAVID; //set room number to 14 to load Pro.David room
	}

	else if (room == ROOM_PRODAVID) //when the player leaves the room
	{

		ROOM[*y][*x] = PLAYER; //create Player in a location where player using passage 

		room = CRUISE_1F; //set room number to 3 to load room3

		memcpy(david_room_update, ROOM, sizeof(david_room_update)); //send changed information of room 14

		david_room_count++; 
	}
	AdventureGameLoop(); //call adventure game loop for printing new room
}

void ProKevinRoomPassageFunction(int* x, int* y, int _x, int _y)
{
	PassageSound();

	system("cls");

	if (room == CRUISE_1F) //when the player enters the room
	{
		//delete location of player
		ROOM[9][31] = WOODPLATE;
		ROOM[7][28] = WOODPLATE; 
		ROOM[18][24] = WOODPLATE; 
		ROOM[6][24] = WOODPLATE; 
		ROOM[9][31] = WOODPLATE; 
		ROOM[14][38] = WOODPLATE; 

		ROOM[10][45] = WOODPLATE; 
		ROOM[10][56] = WOODPLATE; 
		ROOM[10][67] = WOODPLATE; 
		ROOM[10][78] = WOODPLATE; 
		ROOM[10][89] = WOODPLATE; 
		ROOM[10][100] = WOODPLATE; 

		ROOM[14][56] = WOODPLATE; 
		ROOM[14][67] = WOODPLATE; 
		ROOM[14][78] = WOODPLATE; 
		ROOM[14][89] = WOODPLATE; 
		ROOM[14][100] = WOODPLATE; 

		ROOM[*y][*x] = PLAYER; //create Player in a location where player using passage

		memcpy(cruise_1F_update, ROOM, sizeof(cruise_1F_update)); //send changed information of room 3

		cruise_1F_count++; 

		room = ROOM_PROKEVIN; //set room number to 15 to load Pro.Kevin room
	}
	else if (room == ROOM_PROKEVIN) //when the player leaves the room
	{

		ROOM[*y][*x] = PLAYER; //create Player in a location where player using passage

		room = CRUISE_1F; //set room number to 3 to load room3

		memcpy(kevin_room_update, ROOM, sizeof(kevin_room_update)); //send changed information of room 15

		kevin_room_count++;
	}
	AdventureGameLoop(); //call adventure game loop for printing new room
}

void JohnRoomPassageFunction(int* x, int* y, int _x, int _y)
{
	PassageSound();

	system("cls");

	if (room == CRUISE_2F) //when the player enters the room
	{
		//delete location of player
		ROOM[7][28] = WOODPLATE; 
		ROOM[9][38] = WOODPLATE; 
		ROOM[10][56] = WOODPLATE; 

		ROOM[10][45] = WOODPLATE;
		ROOM[10][67] = WOODPLATE; 
		ROOM[10][78] = WOODPLATE;

		ROOM[14][56] = WOODPLATE; 
		ROOM[14][67] = WOODPLATE; 
		ROOM[14][78] = WOODPLATE; 

		ROOM[*y][*x] = PLAYER; //create Player in a location where player using passage

		memcpy(cruise_2F_update, ROOM, sizeof(cruise_2F_update)); //send changed information of room 4

		cruise_2F_count++; 

		room = ROOM_JOHN; //set room number to 16 to load John room
	}
	else if (room == ROOM_JOHN) //when the player leaves the room
	{

		ROOM[*y][*x] = PLAYER; //create Player in a location where player using passage 

		room = CRUISE_2F; //set room number to 4 to load room4

		memcpy(john_room_update, ROOM, sizeof(john_room_update)); //send changed information of room 16

		john_room_count++;
	}
	AdventureGameLoop(); //call adventure game loop for printing new room
}