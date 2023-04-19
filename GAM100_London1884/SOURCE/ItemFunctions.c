/**
	\file        ItemFunctions.c
	\project     London1884
	\author      primary - Eunjin Hong
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/


#include"Header.h"
#include"Variable.h"


//item acquisition status
int maid_room_key = 0;
int public_key = 0;
int warehouse_key = 0;


//function that prints description of item and changes acquisition status of item
void Item()
{
	TextChange(); 

	Color(white, black); 

	if (object == EMMA)
	{
		KeySound();

		printf(" You picked up the maid room key!\n\n\n");
		printf(" (maid room key has been added to the inventory!)");

		maid_room_key += 1; 

		item_count += 1; 
	}

	if (object == EMMALOCKER)
	{
		KeySound(); 

		printf(" You picked up the public key!\n\n\n");
		printf(" (public key has been added to the inventory!)");

		public_key += 1; 

		item_count += 1; 
	}

	if (object == WAREHOUSEKEYLOCKER)
	{
		KeySound(); 

		printf(" You picked up the warehouse key!\n\n\n");
		printf(" (warehouse has been added to the inventory!)");

		warehouse_key += 1;

		item_count += 1; 
	}
	MiniMenu(); 

}