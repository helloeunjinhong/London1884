/**
	\file        RoomUpdate.c
	\project     London1884
	\author      primary - Do Yeong Yi
	\copyright   ¢®¡ÆAll content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¢®¡¾
*/

#include"Header.h"
#include"Define.h"
#include"Variable.h"


//room count
int cruise_deck_count = 0;
int lobby_restaurant_count = 0;
int cruise_1F_count = 0;
int cruise_2F_count = 0;
int warehouse_1F_count = 0;
int sailor_room_count = 0;
int warehouse_2F_count = 0;
int crime_scene_count = 0;
int maid_room_count = 0;
int empty_room_up_count = 0;
int empty_room_down_count = 0;
int cameo1_room_count = 0;
int cameo2_room_count = 0;
int david_room_count = 0;
int kevin_room_count = 0;
int john_room_count = 0;



//room update function
void RoomUpdate()
{
	if (room == CRUISE_DECK) //when the room to be called is cruise deck
	{
		if (cruise_deck_count == 0) //original state of cruise deck
			memcpy(ROOM, cruise_deck, sizeof(ROOM)); //send original state of room to ROOM
		if (cruise_deck_count > 0) //changed cruise deck
			memcpy(ROOM, cruise_deck_update, sizeof(ROOM)); //send changed room to ROOM
	}
	else if (room == 2) //when the room to be called is lobbay & restaurant
	{
		if (lobby_restaurant_count == 0) //original state of lobbay & restaurant
			memcpy(ROOM, lobby_restaurant, sizeof(ROOM)); //send original state of room to ROOM
		if (lobby_restaurant_count > 0) //changed lobbay & restaurant
			memcpy(ROOM, lobby_restaurant_update, sizeof(ROOM)); //send changed room to ROOM
	}
	else if (room == 3) //when the room to be called is 1F
	{
		if (cruise_1F_count == 0) //original state of 1F
			memcpy(ROOM, cruise_1F, sizeof(ROOM)); //send original state of room to ROOM
		if (cruise_1F_count > 0) //changed 1F
			memcpy(ROOM, cruise_1F_update, sizeof(ROOM)); //send changed room to ROOM
	}
	else if (room == 4) //when the room to be called is 2F
	{
		if (cruise_2F_count == 0) //original state of 2F
			memcpy(ROOM, cruise_2F, sizeof(ROOM)); //send original state of room to ROOM
		if (cruise_2F_count > 0) //changed 2F 
			memcpy(ROOM, cruise_2F_update, sizeof(ROOM)); //send changed room to ROOM
	}
	else if (room == 5) //when the room to be called is warehouse 1F
	{
		if (warehouse_1F_count == 0) //original state of warehouse 1F
			memcpy(ROOM, warehouse_1F, sizeof(ROOM)); //send original state of room to ROOM
		if (warehouse_1F_count > 0) //changed warehouse 1F
			memcpy(ROOM, warehouse_1F_update, sizeof(ROOM)); //send changed room to ROOM
	}
	else if (room == 6) //when the room to be called is sailor room
	{
		if (sailor_room_count == 0) //original state of sailor room
			memcpy(ROOM, sailor_room, sizeof(ROOM)); //send original state of room to ROOM
		if (sailor_room_count > 0) //changed sailor room
			memcpy(ROOM, saillor_room_update, sizeof(ROOM)); //send changed room to ROOM
	}
	else if (room == 7) //when the room to be called is warehouse 2F
	{
		if (warehouse_2F_count == 0) //original state of warehouse 2F
			memcpy(ROOM, warehouse_2F, sizeof(ROOM)); //send original state of room to ROOM
		if (warehouse_2F_count > 0) //changed warehouse 2F
			memcpy(ROOM, warehouse_2F_update, sizeof(ROOM)); //send changed room to ROOM
	}
	else if (room == 8) //when the room to be called is crime scene
	{
		if (crime_scene_count == 0) //original state of room8
			memcpy(ROOM, crime_scene, sizeof(ROOM)); //send original state of room to ROOM
		if (crime_scene_count > 0) //changed room8
			memcpy(ROOM, crime_scene_update, sizeof(ROOM)); //send changed room to ROOM
	}
	else if (room == 9) //when the room to be called is maid room
	{
		if (maid_room_count == 0) //original state of maid room
			memcpy(ROOM, maid_room, sizeof(ROOM)); //send original state of room to ROOM
		if (maid_room_count > 0) //changed maid room
			memcpy(ROOM, maid_room_update, sizeof(ROOM)); //send changed room to ROOM
	}
	else if (room == 10) //when the room to be called is empty room
	{
		if (empty_room_up_count == 0) //original state of empty room
			memcpy(ROOM, empty_room_up, sizeof(ROOM)); //send original state of room to ROOM
		if (empty_room_up_count > 0) //changed empty room
			memcpy(ROOM, empty_room_up_update, sizeof(ROOM)); //send changed room to ROOM
	}
	else if (room == 11) //when the room to be called is empty room
	{
		if (empty_room_down_count == 0) //original state of empty room
			memcpy(ROOM, empty_room_down, sizeof(ROOM)); //send original state of room to ROOM
		if (empty_room_down_count > 0) //changed empty room
			memcpy(ROOM, empty_room_down_update, sizeof(ROOM)); //send changed room to ROOM
	}
	else if (room == 12) //when the room to be called is cameo room
	{
		if (cameo1_room_count == 0) //original state of cameo room
			memcpy(ROOM, cameo1_room, sizeof(ROOM)); //send original state of room to ROOM
		if (cameo1_room_count > 0) //changed cameo room
			memcpy(ROOM, cameo1_room_update, sizeof(ROOM)); //send changed room to ROOM
	}
	else if (room == 13) //when the room to be called is cameo room
	{
		if (cameo2_room_count == 0) //original state of cameo room
			memcpy(ROOM, cameo2_room, sizeof(ROOM)); //send original state of room to ROOM
		if (cameo2_room_count > 0) //changed cameo room
			memcpy(ROOM, cameo2_room_update, sizeof(ROOM)); //send changed room to ROOM
	}
	else if (room == 14) //when the room to be called is Pro.David's room
	{
		if (david_room_count == 0) //original state of Pro.David's room
			memcpy(ROOM, david_room, sizeof(ROOM)); //send original state of room to ROOM
		if (david_room_count > 0) //changed Pro.David's room
			memcpy(ROOM, david_room_update, sizeof(ROOM)); //send changed room to ROOM
	}
	else if (room == 15) //when the room to be called is Pro.Kevin's room
	{
		if (kevin_room_count == 0) //original state of Pro.Kevin's room
			memcpy(ROOM, kevin_room, sizeof(ROOM)); //send original state of room to ROOM
		if (kevin_room_count > 0) //changed Pro.Kevin's room
			memcpy(ROOM, kevin_room_update, sizeof(ROOM)); //send changed room to ROOM
	}
	else if (room == 16) //when the room to be called is John's room
	{
		if (john_room_count == 0) //original state of John's room
			memcpy(ROOM, john_room, sizeof(ROOM)); //send original state of room to ROOM
		if (john_room_count > 0) //changed John's room
			memcpy(ROOM, john_room_update, sizeof(ROOM)); //send changed room to ROOM
	}
}