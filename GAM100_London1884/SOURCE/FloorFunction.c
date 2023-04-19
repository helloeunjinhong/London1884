/**
	\file        FloorFunction.c
	\project     London1884
	\author      primary - Doyeong Yi
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/

#include"Header.h"
#include"Define.h"
#include"Variable.h"

int room_floor;

void FloorFunction() {

	switch (room) {
	case CRUISE_DECK: //case for deck
		room_floor = 0;
		break;
	case CRUISE_1F: //case for floor 1
		room_floor = 1;
		break;
	case CRUISE_2F: //case for floor 2
		room_floor = 2;
		break;
	}
}