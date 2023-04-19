/**
	\file        Inventory.c
	\project     London1884
	\author      primary - Minho Chae
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/

#include"Header.h"
#include"Define.h"
#include"Variable.h"


//item count
int item_count = 0;


//inventory function
void Inventory()
{
	TextChange();

	PocketSound();

	if (item_count == 0) //when player have not found any items yet
	{
		printf(" Your inventory is empty! \n\n\n");
		printf(" >>Press enter to quit inventory list");
		getchar();

		TextChange();

		PocketSound(); 

		Menu(); 
	}
	else //when player have found items
	{
		printf(" inventory :");
		Color(darkgray, black);
		printf(" |");

		//print collected items
		if (maid_room_key != 0)
		{
			Color(darkgray, black);
			printf(" maid room key |");
		}
		if (public_key != 0)
		{
			Color(darkgray, black);
			printf(" public key |");
		}
		if (warehouse_key != 0)
		{
			Color(darkgray, black);
			printf(" warehouse key |");
		}

		command_y += 3;

		//print selection option
		Color(white, black);
		Gotoxy(command_x, command_y);
		printf(" >>What is your command?");
		command_y += 2;
		Gotoxy(command_x, command_y);
		printf(" > (L)ook items");
		command_y += 2;
		Gotoxy(command_x, command_y);
		printf("   (Q)uit the inventory");
		command_y -= 2;

		int InventoryLoop = 1; //set inventory loop as true

		//inventory loop
		while (InventoryLoop)
		{
			switch (getch())
			{
			case UP:
				if (command_y > 33) //when the selection arrow is not at the top
				{
					//move up arrow position
					Gotoxy(command_x, command_y);
					printf("  ");
					command_y -= 2;
					Gotoxy(command_x, command_y);
					printf(" >");
				}
				break;
			case DOWN:
				if (command_y < 35) //when the selection arrow is not at the bottom
				{
					//move down arrow position
					Gotoxy(command_x, command_y);
					printf("  ");
					command_y += 2;
					Gotoxy(command_x, command_y);
					printf(" >");
				}
				break;
			case ENTER:
				if (command_y == 33)
				{
					PocketSound(); 

					TextChange(); 

					//print collected items with information
					Gotoxy(command_x, command_y);
					if (maid_room_key != 0)
						printf(" maid room key - You can open a locked maid room door with the key. \n\n\n");

					if (public_key != 0)
						printf(" public key - You can open a locked sailor's room door with the key. \n\n\n");

					if (warehouse_key != 0)
						printf(" warehouse key - You can open a locked warehouse door with the key. \n\n\n");

					printf("\n >>Press enter to quit the inventory");
					getchar();

					TextChange(); 

					PocketSound(); 

					InventoryLoop = 0; //quit inventory loop

					Menu(); 
				}
				else if (command_y == 35)
				{
					TextChange(); 

					PocketSound(); 

					InventoryLoop = 0; //quit inventory loop

					Menu(); 
				}
				break;
			}

		}

	}

}