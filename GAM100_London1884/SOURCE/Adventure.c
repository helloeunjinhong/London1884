/**
	\file        Adventure.c
	\project     London1884
	\author      primary - Eunjin Hong 
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/

#include"Header.h"
#include"Define.h"
#include"Variable.h"

int playing_loop = 1;  // set playing loop to true

char object; //object

//position of text print
int command_x = 0;
int command_y = 28;

int room; //room num

room = CRUISE_DECK; //set room number to 1 to start in the first room


//main adventure game loop function
void AdventureGameLoop()
{
	int x, y; //position of player

	RoomUpdate(); //calling up updated room

	RoomCreate(&x, &y); //print room

	RoomDescription(); //print room description

	FloorFunction();

	MiniMenu(); //print mini menu

	//adventure game loop
	while (playing_loop)
	{
		switch (getch())
		{
		case UP:
			AdventureUpdate(&x, &y, 0, -1); //player moves up 
			break;
		case LEFT:
			AdventureUpdate(&x, &y, -1, 0); //player moves left
			break;
		case DOWN:
			AdventureUpdate(&x, &y, 0, 1); //player moves down
			break;
		case RIGHT:
			AdventureUpdate(&x, &y, 1, 0); //player moves right
			break;
		case MENU:
			Menu(); //menu option
			break;
		case QUIT:
			Quit(); //quit option
			break;
		case CHEAT:
			Cheat(); //cheat
			break;
		}
	}

}

//adventue updare fuction
void AdventureUpdate(int* x, int* y, int _x, int _y)
{
	Cursor(0); 

	object = ROOM[*y + _y][*x + _x]; 

	if (object == WOODPLATE)
	{
		MoveFunction(x, y, _x, _y);
	}

	else if (object == PLAYER)
	{
		DelectPlyerPositionFunction(x, y, _x, _y); 
	}

	else if (object == ROPE || object == KNIFE  || object == FAMILY_PHOTO || object == VICTIM)
	{
		Clue();
	}

	else if (object == PIANO)
	{
		Piano(); 
	}

	else if (object == MAID_ROOM_DOOR)
	{
		MaidRoomDoorFunction(x, y, _x, _y); 
	}

	else if (object == SAILOR_ROOM_DOOR)
	{
		SailorRoomDoorFunction(x, y, _x, _y); 
	}

	else if (object == WAREHOUSE_DOOR)
	{
		WarehouseDoorFunction(x, y, _x, _y); 
	}

	else if (object == BRIAN)
	{
		Talk_Brian(); 
	}

	else if (object == EMMA)
	{
		Talk_Emma(); 
	}

	else if (object == STEVEN)
	{
		Talk_Steven(); 
	}

	else if (object == RONALD)
	{
		Talk_Ronald(); 
	}

	else if (object == GEORGE)
	{
		Talk_George();
	}

	else if (object == OLIVIA)
	{
		Talk_Olivia();
	}

	else if (object == PAUL)
	{
		Talk_Paul();
	}

	else if (object == EDWARD)
	{
		Talk_Edward();
	}

	else if (object == MARK)
	{
		Talk_Mark();
	}

	else if (object == JOHN)
	{
		Talk_John();
	}
	
	else if (object == KEVIN)
	{
		Talk_Kevin();
	}
	
	else if (object == DAVID)
	{
		Talk_David();
	}
	
	else if (object == RUDY)
	{
		Talk_Rudy();
	}
	
	else if (object == JULIA)
	{
		Talk_Julia();
	}

	else if (object == CAL)
	{
		Talk_Cal();
	}
	
	else if (object == MALON)
	{
		Talk_Malon();
	}
	
	else if (object == JIMMY)
	{
		Talk_Jimmy();
	}

	else if (object == MINHO)
	{
		Talk_Minho();
	}

	else if (object == DOYEONG)
	{
		Talk_Doyeong();
	}

	else if (object == HAGYEONG)
	{
		Talk_Hagyeong();
	}

	else if (object == MINKI)
	{
		Talk_Minki();
	}

	else if (object == LOBBY_PASSAGE)
	{
		LobbyPassageFunction(x, y, _x, _y);
	}

	else if (object == STAIR_PASSAGE_1)
	{
		StairPassage_1_Function(x, y, _x, _y);
	}

	else if (object == STAIR_PASSAGE_2)
	{
	StairPassage_2_Function(x, y, _x, _y);
	}

	else if (object == CRIME_SCENE_PASSAGE)
	{
		CrimeScenePassageFunction(x, y, _x, _y); 
	}

	else if (object == SAILOR_ROOM_PASSAGE)
	{
		SailorRoomPassageFunction(x, y, _x, _y); 
	}

	else if (object == MAID_ROOM_PASSAGE)
	{
		MaidRoomPassageFunction(x, y, _x, _y); 
	}

	else if (object == WAREHOUSE_PASSAGE)
	{
		WarehousePassageFunction(x, y, _x, _y); 
	}

	else if (object == EMPTY_ROOM_UP_PASSAGE)
	{
		EmptyRoomPassageUpFunction(x, y, _x, _y); 
	}

	else if (object == EMPTY_ROOM_DOWN_PASSAGE)
	{
		EmptyRoomPassageDownFunction(x, y, _x, _y); 
	}

	else if (object == CAMEO1_ROOM_PASSAGE)
	{
		Cameo1RoomPassageFunction(x, y, _x, _y); 
	}

	else if (object == CAMEO2_ROOM_PASSAGE)
	{
		Cameo2RoomPassageFunction(x, y, _x, _y); 
	}

	else if (object == PRODAVID_ROOM_PASSAGE)
	{
		ProDavidRoomPassageFunction(x, y, _x, _y); 
	}

	else if (object == PROKEVIN_ROOM_PASSAGE)
	{
		ProKevinRoomPassageFunction(x, y, _x, _y); 
	}

	else if (object == JOHN_ROOM_PASSAGE)
	{
		JohnRoomPassageFunction(x, y, _x, _y); 
	}

	else if (object == CRUISE_GUID_MAP)
	{
		CruiseGuideMapFunction(x, y, _x, _y); 
	}

	else if (object == BED_RED || object == BED_WHITE)
	{
		InteractiveBed(); //bed
	}

	else if (object == TABLE)
	{
		InteractiveTable(); //table
	}

	else if (object == JAMESTABLE)
	{
		InteractiveJamesTable(); //table
	}

	else if (object == WINE_BARREL)
	{
		InteractiveWineBarrel(); //wine_barrel
	}

	else if (object == ARCADEMACHINE)
	{
		ArcadePermition();
	}

	else if (object == LOCKER)
	{
		InteractiveLocker(); //locker
	}

	else if (object == EMMALOCKER)
	{
		InteractiveEmmaLocker(); //locker
	}

	else if (object == TIMETABLELOCKER)
	{
		InteractiveTimetableLocker(); //locker
	}

	else if (object == WAREHOUSEKEYLOCKER)
	{
		InteractiveWarehouseKeyLocker(); //locker
	}

	else if (object == UNKNOWN || object == WALL)
	{

	}

	Sleep(100); //speed of player

	Color(white, black);
}


