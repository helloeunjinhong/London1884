/**
	\file        Variable.h
	\project     London1884
	\author      primary - Minho Chae
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/

#pragma once
#include"Header.h"
#include"Define.h"

#define WIN32_LEAN_AND_LEAN

#pragma warning(push, 0)
extern int room;
extern int room_floor;

extern int cruise_deck_count;
extern int lobby_restaurant_count;
extern int cruise_1F_count;
extern int cruise_2F_count;
extern int warehouse_1F_count;
extern int sailor_room_count;
extern int warehouse_2F_count;
extern int crime_scene_count;
extern int maid_room_count;
extern int empty_room_up_count;
extern int empty_room_down_count;
extern int cameo1_room_count;
extern int cameo2_room_count;
extern int david_room_count;
extern int kevin_room_count;
extern int john_room_count;

extern char ROOM[HEIGHT][LENGTH];
extern char cruise_deck[HEIGHT][LENGTH];
extern char lobby_restaurant[HEIGHT][LENGTH];
extern char cruise_1F[HEIGHT][LENGTH];
extern char cruise_2F[HEIGHT][LENGTH];
extern char warehouse_1F[HEIGHT][LENGTH];
extern char sailor_room[HEIGHT][LENGTH];
extern char warehouse_2F[HEIGHT][LENGTH];
extern char crime_scene[HEIGHT][LENGTH];
extern char maid_room[HEIGHT][LENGTH];
extern char empty_room_up[HEIGHT][LENGTH];
extern char empty_room_down[HEIGHT][LENGTH];
extern char cameo1_room[HEIGHT][LENGTH];
extern char cameo2_room[HEIGHT][LENGTH];
extern char david_room[HEIGHT][LENGTH];
extern char kevin_room[HEIGHT][LENGTH];
extern char john_room[HEIGHT][LENGTH];

extern char cruise_deck_update[HEIGHT][LENGTH];
extern char lobby_restaurant_update[HEIGHT][LENGTH];
extern char cruise_1F_update[HEIGHT][LENGTH];
extern char cruise_2F_update[HEIGHT][LENGTH];
extern char warehouse_1F_update[HEIGHT][LENGTH];
extern char saillor_room_update[HEIGHT][LENGTH];
extern char warehouse_2F_update[HEIGHT][LENGTH];
extern char crime_scene_update[HEIGHT][LENGTH];
extern char maid_room_update[HEIGHT][LENGTH];
extern char empty_room_up_update[HEIGHT][LENGTH];
extern char empty_room_down_update[HEIGHT][LENGTH];
extern char cameo1_room_update[HEIGHT][LENGTH];
extern char cameo2_room_update[HEIGHT][LENGTH];
extern char david_room_update[HEIGHT][LENGTH];
extern char kevin_room_update[HEIGHT][LENGTH];
extern char john_room_update[HEIGHT][LENGTH];

extern int command_x;
extern int command_y;

extern char object;

extern int rope;
extern int knife;
extern int timetable;
extern int family_photo;
extern int victim;
extern int contract_paper;
extern int maid_room_key;
extern int public_key;
extern int warehouse_key;

extern int item_count;
extern int clue_count;

extern int talk_count;
extern int brian_talk_status;
extern int emma_talk_status;
extern int ronald_talk_status;
extern int steven_talk_status;
extern int paul_talk_status;
extern int edward_talk_status;
extern int edward_talk_status_timetable;
extern int olivia_talk_status;
extern int john_talk_status;
extern int george_talk_status;
extern int mark_talk_status;

extern int choice;
extern int picNum;
extern int change;

extern int playing_loop;
extern int game_loop;

extern int chance;
extern int GameQuit;
extern int GamePlayCount;

extern int detectiveLoop;
extern int playing_loop;

extern int detectiveLoop1;
extern int detectiveLoop2;
extern int detectiveLoop3;
extern int detectiveLoop4;
extern int detectiveLoop5;
extern int detectiveLoop6;
extern int detectiveLoop7;
extern int detectiveLoop8;
extern int detectiveLoop9;
extern int detectiveLoop10;
extern int detectiveLoop11;
extern int detectiveLoop12;
extern int detectiveLoop13;

extern int choice;
extern int picNum;
extern int chance;
extern int JamesAndInfo;

extern int wholedetectiveLoop;

extern int JamesAndInfo;
#pragma warning(pop)