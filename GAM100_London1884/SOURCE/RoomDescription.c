/**
	\file        RoomDescription.c
	\project     London1884
	\author      primary - Do Yeong Yi
	\copyright   ¢®¡ÆAll content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¢®¡¾
*/

#include"Header.h"
#include"Define.h"
#include"Variable.h"


//print room description
void RoomDescription()
{
	switch (room) {
	case CRUISE_DECK: //when player locaste in cruise deck
		printf("\n <Cruise Deck>"); //cruise deck description
		break;
	case LOBBY_RESTAURANT: //when player locaste in lobby & restaurant
		printf("\n <Cruise Lobby & Restaurant>"); //lobby & restaurant description
		break;
	case CRUISE_1F: //when player locaste in 1F 
		printf("\n <Cruise 1F>"); //1F description
		break;
	case CRUISE_2F: //when player locaste in 2F
		printf("\n <Cruise 2F>"); //2F description
		break;
	case WAREHOUSE_1F: //when player locaste in 1F warehouse
		printf("\n <Cruise 1F - Warehouse>"); //1F warehouse description
		break;
	case SAILOR_ROOM: //when player locaste in sailor's room  
		printf("\n <Cruise 1F - Sailors's room>"); //sailor's room description 
		break;
	case WAREHOUSE_2F: //when player locaste in 2F warehouse
		printf("\n <Cruise 2F - Warehouse>"); //2F warehouse description
		break;
	case CRIME_SCENE: //when player locaste in crime scene 
		printf("\n <Cruise 2F - Crime Scene>"); //crime scene description
		break;
	case MAID_ROOM: //when player locaste in maid's room
		printf("\n <Cruise 1F - Maid's room>"); //maid's room description
		break;
	case EMPTY_ROOM_UP: //when player locaste in empty room
		printf("\n <Empty room>"); //empty room description
		break;
	case EMPTY_ROOM_DOWN:
		printf("\n <Empty room>");
		break;
	case ROOM_CAMEO_1: //when player locaste in cameo's room
		printf("\n <Cameo room>"); //cameo room description
		break;
	case ROOM_CAMEO_2:
		printf("\n <Cameo room>");
		break;
	case ROOM_PRODAVID: //when player locaste in Pro.David's room
		printf("\n <David's room>"); //Pro.David's room description
		break;
	case ROOM_PROKEVIN: //when player locaste in Pro.Kevin's room
		printf("\n <Kevin's room>"); //Pro.Kevin's room description
		break;
	case ROOM_JOHN: //when player locaste in John's room
		printf("\n 	<John's room>"); //John's room description
		break;
	}
	MiniMenu();
}