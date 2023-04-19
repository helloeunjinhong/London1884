/**
	\file        Define.h
	\project     London1884
	\author      primary - Minho Chae
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/

#pragma once
#define WIN32_LEAN_AND_LEAN

#pragma warning(push, 0)
//arrow key & select define
#define UP 72
#define LEFT 75
#define DOWN 80
#define RIGHT 77
#define ENTER 13

//key for arcade
#define FIRE 32
#define RELOAD 114
#define RANDOM_MAX 5

//command define
#define MENU 'm'
#define QUIT 'q'
#define CHEAT 'c'

//room size define 
#define LENGTH 116
#define HEIGHT 25

//room define
#define CRUISE_DECK 1
#define LOBBY_RESTAURANT 2
#define CRUISE_1F 3
#define CRUISE_2F 4
#define WAREHOUSE_1F 5
#define SAILOR_ROOM 6
#define WAREHOUSE_2F 7
#define CRIME_SCENE 8
#define MAID_ROOM 9
#define EMPTY_ROOM_UP 10
#define EMPTY_ROOM_DOWN 11
#define ROOM_CAMEO_1 12
#define ROOM_CAMEO_2 13
#define ROOM_PRODAVID 14
#define ROOM_PROKEVIN 15
#define ROOM_JOHN 16


//piano sound define
#define DO 97
#define RE 115
#define MI 100
#define FA 102
#define SOL 103
#define LA 104
#define SI 106
#define HIGHDO 107

//object define
#define UNKNOWN '0'
#define WALL '1'
#define SEA '2'
#define STAIR '3'
#define MAID_ROOM_DOOR '4'
#define SAILOR_ROOM_DOOR '5'
#define WAREHOUSE_DOOR '6'

#define WOODPLATE 'w'
#define PLAYER 'P'
#define PIANO 'n'
#define CRUISE_GUID_MAP 'g'
#define STAIR_PASSAGE_1 'q'
#define STAIR_PASSAGE_2 'Q'
#define LOBBY_PASSAGE 'L'
#define SAILOR_ROOM_PASSAGE 'S'
#define MAID_ROOM_PASSAGE 'M'
#define WAREHOUSE_PASSAGE 'H'
#define CRIME_SCENE_PASSAGE 'C'
#define EMPTY_ROOM_UP_PASSAGE '~'
#define EMPTY_ROOM_DOWN_PASSAGE '`'
#define CAMEO1_ROOM_PASSAGE '['
#define CAMEO2_ROOM_PASSAGE ']'
#define PRODAVID_ROOM_PASSAGE '}'
#define PROKEVIN_ROOM_PASSAGE '{'
#define JOHN_ROOM_PASSAGE '_'
#define LOCKER '|'
#define EMMALOCKER 'p'
#define TIMETABLELOCKER 't'
#define WAREHOUSEKEYLOCKER 'h'
#define BED_RED ';'
#define BED_WHITE ':'
#define TABLE '/'
#define JAMESTABLE '<'
#define TABLE '/'
#define CAFETABLE '>'
#define WINE_BARREL '?'
#define ARCADEMACHINE '*'

//suspect define
#define EMMA 'E'
#define RONALD 'R'
#define STEVEN 'V'
#define BRIAN 'B'
#define GEORGE 'G'
#define OLIVIA 'O'
#define PAUL 'A'
#define EDWARD 'e'
#define MARK 'K'
#define JOHN 'o'
 
//non suspect define
#define KEVIN 'z'
#define DAVID 'D'
#define RUDY 'x'
#define MINHO ','
#define DOYEONG '.'
#define JULIA ')'
#define CAL '('
#define MALON 'a'
#define JIMMY '&'
#define HAGYEONG '$'
#define MINKI 'I'

//clue define
#define ROPE 'r'
#define KNIFE 'k'
#define FAMILY_PHOTO 'f'
#define VICTIM 'v'

//detection define

#define CLUE_ROPE 0
#define CLUE_KNIFE 1
#define CLUE_TIMETABLE 2
#define CLUE_FP 3
#define CLUE_VICTIM 4
#define CLUE_CP 5
#define CLUE_MARK 6

#define BRIAN_1 7
#define BRIAN_2 8
#define BRIAN_3 9
#define BRIAN_4 10
#define BRIAN_5 11
#define BRIAN_6 12

#define EDWARD_1 13
#define EDWARD_2 14

#define EMMA_1 15
#define EMMA_2 16
#define EMMA_3 17

#define GEORGE_1 18
#define GEORGE_2 19

#define JOHN_1 20

#define OLIVIA_1 21
#define OLIVIA_2 22

#define PAUL_1 23
#define PAUL_2 24
#define PAUL_3 25
#define PAUL_4 26

#define RONALD_1 27
#define RONALD_2 28
#define RONALD_3 29

#define STEVEN_1 30
#define STEVEN_2 31
#define STEVEN_3 32
#define STEVEN_4 33

#pragma warning(pop)