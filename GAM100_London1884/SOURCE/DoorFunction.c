/**
	\file        DoorFunction.c
	\project     London1884
	\author      primary - Eunjin Hong 
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/

#include"Header.h"
#include"Define.h"
#include"Variable.h"


//maid room door function
void MaidRoomDoorFunction(int* x, int* y, int _x, int _y)
{
	if (maid_room_key > 0) //check existence of maid room key
	{
		//delete loced door and make maid room passage
		ROOM[*y + _y][*x + _x] = MAID_ROOM_PASSAGE;
		Color(brown, brown);
		Gotoxy(*x + _x, *y + _y);
		printf(" ");

		TextChange();

		printf(" Door is open now!");

		DoorOpenSound();
	}
	else
	{
		TextChange();

		printf(" This door is locked. You can open the door with the maid room key.");

		LockedDoorSound();
	}
	MiniMenu();
}

//sailor room door function
void SailorRoomDoorFunction(int* x, int* y, int _x, int _y)
{
	if (public_key > 0) //check existence of sailor room key
	{
		//delete loced door and make sailor room passage
		ROOM[*y + _y][*x + _x] = SAILOR_ROOM_PASSAGE;
		Color(brown, brown);
		Gotoxy(*x + _x, *y + _y);
		printf(" ");

		TextChange();

		printf(" Door is open now!");

		DoorOpenSound();
	}
	else
	{
		TextChange(); 

		printf(" This door is locked. You can open the door with the public key."); 

		LockedDoorSound();
	}
	MiniMenu(); 
}

//warehouse door function
void WarehouseDoorFunction(int* x, int* y, int _x, int _y)
{
	if (warehouse_key > 0) //check existence of warehouse key
	{
		//delete loced door and make warehouse passage
		ROOM[*y + _y][*x + _x] = WAREHOUSE_PASSAGE;
		Color(brown, brown);
		Gotoxy(*x + _x, *y + _y);
		printf(" ");

		TextChange(); 

		printf(" Door is open now!"); 

		DoorOpenSound(); 
	}
	else
	{
		TextChange(); 

		printf(" This door is locked. You can open the door with the warehouse key."); 

		LockedDoorSound(); 
	}
	MiniMenu(); 
}