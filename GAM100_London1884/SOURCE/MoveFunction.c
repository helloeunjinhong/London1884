/**
	\file        MoveFunction.c
	\project     London1884
	\author      primary - Eunjin Hong 
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/

#include"Header.h"
#include"Define.h"
#include"Variable.h"


//move function
void MoveFunction(int* x, int* y, int _x, int _y)
{
	//delete previous location of player
	Color(brown, brown);
	Gotoxy(*x, *y);
	printf(" ");

	//print new location of player
	Color(black, green);
	Gotoxy(*x + _x, *y + _y);
	printf("\"");

	//new location of player
	*x += _x;
	*y += _y;
}


//function delete location of player
void DelectPlyerPositionFunction(int* x, int* y, int _x, int _y)
{
	//delete location of player
	Color(brown, brown);
	ROOM[*y + _y][*x + _x] = WOODPLATE;
	Gotoxy(*x + _x, *y + _y);
	printf(" ");
}

