/**
	\file        ObjectFunction.c
	\project     London1884
	\author      primary - Do Yeong Yi
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/

#include"Header.h"
#include"Define.h"
#include"Variable.h"

void InteractiveBed() //interactive with bed
{
	TextChange(); //clean text screen

	//description about bed
	Gotoxy(command_x, command_y);
	printf(" It's a bed. It seems that it has not been long since it was used. ");
	command_y += 2;	Gotoxy(command_x, command_y);
	printf(" >>Do you want to investigate?");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf(" >(Y)es");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf("  (N)o");
	command_y -= 2;

	int bed_loop = 1; //set bed loop as true

					   //bed loop
	while (bed_loop)
	{
		switch (getch())
		{
		case UP:
			if (command_y > 32) //when the selection arrow is not at the top
			{
				Gotoxy(command_x, command_y);
				printf("  ");
				command_y -= 2;
				Gotoxy(command_x, command_y);
				printf(" >");
			}
			break;
		case DOWN:
			if (command_y < 34) //when the selection arrow is not at the bottom
			{
				Gotoxy(command_x, command_y);
				printf("  ");
				command_y += 2;
				Gotoxy(command_x, command_y);
				printf(" >");
			}
			break;
		case ENTER: //when select selection option
			if (command_y == 32) //when choose play
			{
				TextChange(); //clean text screen

				Gotoxy(command_x, command_y);
				printf(" It is nothing to special. \n");
				command_y += 2;
				//print end message
				Gotoxy(command_x, command_y);
				printf(" >>Press enter to continue.");
				getchar();
				command_y -= 2;
				TextChange(); //clean text screen


				TextChange(); //clean text screen

				MiniMenu(); //print mini menu

				bed_loop = 0; //quit bed loop

			}
			else if (command_y == 34) //when choose quit
			{
				TextChange(); //clean text screen

				MiniMenu(); //print mini menu

				bed_loop = 0; //quit bed loop
			}
			break;
		}
	}
}

void InteractiveTable() //interactive with table
{
	TextChange(); //clean text screen

				  //description about table
	Gotoxy(command_x, command_y);
	printf(" It's a table. nothing seem special. ");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf(" >>Do you want to investigate?");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf(" >(Y)es");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf("  (N)o");
	command_y -= 2;

	int table_loop = 1; //set table loop as true

					  //table loop
	while (table_loop)
	{
		switch (getch())
		{
		case UP:
			if (command_y > 32) //when the selection arrow is not at the top
			{
				Gotoxy(command_x, command_y);
				printf("  ");
				command_y -= 2;
				Gotoxy(command_x, command_y);
				printf(" >");
			}
			break;
		case DOWN:
			if (command_y < 34) //when the selection arrow is not at the bottom
			{
				Gotoxy(command_x, command_y);
				printf("  ");
				command_y += 2;
				Gotoxy(command_x, command_y);
				printf(" >");
			}
			break;
		case ENTER: //when select selection option
			if (command_y == 32) //when choose play
			{
				TextChange(); //clean text screen

				Gotoxy(command_x, command_y);
				printf(" It is nothing to special. \n");
				command_y += 2;
				//print end message
				Gotoxy(command_x, command_y);
				printf(" >>Press enter to continue.");
				getchar();
				command_y -= 2;
				TextChange(); //clean text screen


				TextChange(); //clean text screen

				MiniMenu(); //print mini menu

				table_loop = 0; //quit table loop

			}
			else if (command_y == 34) //when choose quit
			{
				TextChange(); //clean text screen

				MiniMenu(); //print mini menu

				table_loop = 0; //quit table loop
			}
			break;
		}
	}
}

void InteractiveWineBarrel() //interactive with wine barrel
{
	TextChange(); //clean text screen

				  //description about wine barrel
	Gotoxy(command_x, command_y);
	printf(" It's a wine barrel. It is made of ork wood. ");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf(" >>Do you want to investigate?");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf(" >(Y)es");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf("  (N)o");
	command_y -= 2;

	int wine_loop = 1; //set wine loop as true

					  //wine loop
	while (wine_loop)
	{
		switch (getch())
		{
		case UP:
			if (command_y > 32) //when the selection arrow is not at the top
			{
				Gotoxy(command_x, command_y);
				printf("  ");
				command_y -= 2;
				Gotoxy(command_x, command_y);
				printf(" >");
			}
			break;
		case DOWN:
			if (command_y < 34) //when the selection arrow is not at the bottom
			{
				Gotoxy(command_x, command_y);
				printf("  ");
				command_y += 2;
				Gotoxy(command_x, command_y);
				printf(" >");
			}
			break;
		case ENTER: //when select selection option
			if (command_y == 32) //when choose play
			{
				TextChange(); //clean text screen

				Gotoxy(command_x, command_y);
				printf(" It is nothing to special. \n");
				command_y += 2;
				//print end message
				Gotoxy(command_x, command_y);
				printf(" >>Press enter to continue.");
				getchar();
				command_y -= 2;
				TextChange(); //clean text screen


				TextChange(); //clean text screen

				MiniMenu(); //print mini menu

				wine_loop = 0; //quit wine loop

			}
			else if (command_y == 34) //when choose quit
			{
				TextChange(); //clean text screen

				MiniMenu(); //print mini menu

				wine_loop = 0; //wine piano loop
			}
			break;
		}
	}
}

void InteractiveLocker() //interactive with locker
{
	TextChange(); //clean text screen

				  //description about closet
	Gotoxy(command_x, command_y);
	printf(" It's a locker. nothing seem important. ");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf(" >>Do you want to investigate?");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf(" >(Y)es");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf("  (N)o");
	command_y -= 2;

	int locker_loop = 1; //set locker loop as true

					  //locker loop
	while (locker_loop)
	{
		switch (getch())
		{
		case UP:
			if (command_y > 32) //when the selection arrow is not at the top
			{
				Gotoxy(command_x, command_y);
				printf("  ");
				command_y -= 2;
				Gotoxy(command_x, command_y);
				printf(" >");
			}
			break;
		case DOWN:
			if (command_y < 34) //when the selection arrow is not at the bottom
			{
				Gotoxy(command_x, command_y);
				printf("  ");
				command_y += 2;
				Gotoxy(command_x, command_y);
				printf(" >");
			}
			break;
		case ENTER: //when select selection option
			if (command_y == 32) //when choose play
			{
				TextChange(); //clean text screen

				Gotoxy(command_x, command_y);
				printf(" It is nothing to special. \n");
				command_y += 2;
				//print end message
				Gotoxy(command_x, command_y);
				printf(" >>Press enter to continue.");
				getchar();
				command_y -= 2;
				TextChange(); //clean text screen


				TextChange(); //clean text screen

				MiniMenu(); //print mini menu

				locker_loop = 0; //quit locker loop

			}
			else if (command_y == 34) //when choose quit
			{
				TextChange(); //clean text screen

				MiniMenu(); //print mini menu

				locker_loop = 0; //quit locker loop
			}
			break;
		}
	}
}

void InteractiveJamesTable() //interactive with table
{
	TextChange(); //clean text screen

				  //description about table
	Gotoxy(command_x, command_y);
	printf(" It's a table. A piece of paper is sitting on it. ");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf(" >>Do you want to investigate?");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf(" >(Y)es");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf("  (N)o");
	command_y -= 2;

	int jamestable_loop = 1; //set table loop as true

						//table loop
	while (jamestable_loop)
	{
		switch (getch())
		{
		case UP:
			if (command_y > 32) //when the selection arrow is not at the top
			{
				Gotoxy(command_x, command_y);
				printf("  ");
				command_y -= 2;
				Gotoxy(command_x, command_y);
				printf(" >");
			}
			break;
		case DOWN:
			if (command_y < 34) //when the selection arrow is not at the bottom
			{
				Gotoxy(command_x, command_y);
				printf("  ");
				command_y += 2;
				Gotoxy(command_x, command_y);
				printf(" >");
			}
			break;
		case ENTER: //when select selection option
			if (command_y == 32) //when choose play
			{
				TextChange(); //clean text screen
					//check the existence of clue
				Clue();

				MiniMenu(); //print mini menu
				jamestable_loop = 0; //quit table loop

			}
			else if (command_y == 34) //when choose quit
			{
				TextChange(); //clean text screen

				MiniMenu(); //print mini menu

				jamestable_loop = 0; //quit table loop
			}
			break;
		}
	}
}

void InteractiveEmmaLocker() //interactive with locker
{
	TextChange(); //clean text screen

				  //description about locker
	if (public_key == 0)
	{
		Gotoxy(command_x, command_y);
		printf(" It's a locker. There is key hang on handle");
	}
	else
	{
		Gotoxy(command_x, command_y);
		printf(" It's a locker.");
	}
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf(" >>Do you want to investigate?");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf(" >(Y)es");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf("  (N)o");
	command_y -= 2;

	int emmalocker_loop = 1; //set locker loop as true

							 //locker loop
	while (emmalocker_loop)
	{
		switch (getch())
		{
		case UP:
			if (command_y > 32) //when the selection arrow is not at the top
			{
				Gotoxy(command_x, command_y);
				printf("  ");
				command_y -= 2;
				Gotoxy(command_x, command_y);
				printf(" >");
			}
			break;
		case DOWN:
			if (command_y < 34) //when the selection arrow is not at the bottom
			{
				Gotoxy(command_x, command_y);
				printf("  ");
				command_y += 2;
				Gotoxy(command_x, command_y);
				printf(" >");
			}
			break;
		case ENTER: //when select selection option
			if (command_y == 32) //when choose play
			{

				TextChange(); //clean text screen
				if (public_key == 0)
				{
					Item();

					MiniMenu(); //print mini menu
					emmalocker_loop = 0; //quit locker loop
				}
				else
				{

					printf(" It is nothing seem special.");
					MiniMenu(); //print mini menu
					emmalocker_loop = 0; //quit locker loop
				}
			}
			else if (command_y == 34) //when choose quit
			{
				TextChange(); //clean text screen

				MiniMenu(); //print mini menu

				emmalocker_loop = 0; //quit locker loop
			}
			break;
		}
	}
}

void InteractiveTimetableLocker() //interactive with locker
{
	TextChange(); //clean text screen

				  //description about locker
	Gotoxy(command_x, command_y);
	printf(" It's a locker. A chart on the side of locker.");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf(" >>Do you want to investigate?");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf(" >(Y)es");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf("  (N)o");
	command_y -= 2;

	int timetablelocker_loop = 1; //set table loop as true

							 //table loop
	while (timetablelocker_loop)
	{
		switch (getch())
		{
		case UP:
			if (command_y > 32) //when the selection arrow is not at the top
			{
				Gotoxy(command_x, command_y);
				printf("  ");
				command_y -= 2;
				Gotoxy(command_x, command_y);
				printf(" >");
			}
			break;
		case DOWN:
			if (command_y < 34) //when the selection arrow is not at the bottom
			{
				Gotoxy(command_x, command_y);
				printf("  ");
				command_y += 2;
				Gotoxy(command_x, command_y);
				printf(" >");
			}
			break;
		case ENTER: //when select selection option
			if (command_y == 32) //when choose play
			{
					Clue();

					MiniMenu(); //print mini menu
					timetablelocker_loop = 0; //quit locker loop
			}
			else if (command_y == 34) //when choose quit
			{
				TextChange(); //clean text screen

				MiniMenu(); //print mini menu

				timetablelocker_loop = 0; //quit locker loop
			}
			break;
		}
	}
}

void InteractiveWarehouseKeyLocker() //interactive with locker
{
	TextChange(); //clean text screen

				  //description about locker
	if (warehouse_key == 0)
	{
		Gotoxy(command_x, command_y);
		printf(" It's a locker. There is key hang on handle");
	}
	else
	{
		Gotoxy(command_x, command_y);
		printf(" It's a locker.");
	}
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf(" >>Do you want to investigate?");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf(" >(Y)es");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf("  (N)o");
	command_y -= 2;

	int warehousekeylocker_loop = 1; //set locker loop as true

							 //locker loop
	while (warehousekeylocker_loop)
	{
		switch (getch())
		{
		case UP:
			if (command_y > 32) //when the selection arrow is not at the top
			{
				Gotoxy(command_x, command_y);
				printf("  ");
				command_y -= 2;
				Gotoxy(command_x, command_y);
				printf(" >");
			}
			break;
		case DOWN:
			if (command_y < 34) //when the selection arrow is not at the bottom
			{
				Gotoxy(command_x, command_y);
				printf("  ");
				command_y += 2;
				Gotoxy(command_x, command_y);
				printf(" >");
			}
			break;
		case ENTER: //when select selection option
			if (command_y == 32) //when choose play
			{

				TextChange(); //clean text screen
				if (warehouse_key == 0)
				{
					Item();

					MiniMenu(); //print mini menu
					warehousekeylocker_loop = 0; //quit locker loop
				}
				else
				{

					printf(" It is nothing seem special.");
					MiniMenu(); //print mini menu
					warehousekeylocker_loop = 0; //quit locker loop
				}
			}
			else if (command_y == 34) //when choose quit
			{
				TextChange(); //clean text screen

				MiniMenu(); //print mini menu

				warehousekeylocker_loop = 0; //quit locker loop
			}
			break;
		}
	}
}