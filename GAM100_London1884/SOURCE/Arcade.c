/**
	\file        Arcade.c
	\project     London1884
	\author      primary - Do Yeong Yi
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/

#include"Header.h"
#include"Define.h"
#include"Variable.h"

int score = 0; //score
int bullet = 6; //bullet mount
int reload_chance = 2; //reload chance
int position_gun = 3; //gun position
int target_position; // target position


//permition function
void ArcadePermition()
{
	TextChange(); //clean text screen

				  //print selection options
	Gotoxy(command_x, command_y);
	printf(" It's a arcade game. It says \"Shooting Gallery\".");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf(" >>Do you want to play the game?");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf(" >(Y)es");
	command_y += 2;
	Gotoxy(command_x, command_y);
	printf("  (N)o");
	command_y -= 2;


	int arcade_loop = 1; //set arcade game loop as true

					   //arcade game loop
	while (arcade_loop)
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

				TextChange();
				arcade();

				TextChange(); //clean text screen
				MiniMenu(); //print mini menu
				arcade_loop = 0; //quit arcade loop

			}
			else if (command_y == 34) //when choose quit
			{
				TextChange(); //clean text screen

				MiniMenu(); //print mini menu

				arcade_loop = 0; //quit arcade loop
			}
			break;
		}

	}

}

 //ingame function
void arcade() {


	//print stage
	Gotoxy(command_x, command_y);
	printf(" |            SHOOTING            GALLERY               | \n");
	printf(" |______________________________________________________| \n");
	printf("                                                          \n");
	printf("                                                          \n");
	printf("                                                          \n");
	printf("                                                          \n");
	printf("                                                          \n");
	printf("                                                          \n");
	printf("                                                          \n");
	printf(" |______________________________________________________| \n");
	printf(" |______________________________________________________| \n");
	printf("   << ARROW KEY:MOVE SPACEBAR:SHOT  KEY(R): RELOAD  >>");
	command_y += 12; 
	int arcade_play_loop = 1; // 
	TargetPrint();
	while (arcade_play_loop)
	{
			ArcadeGunPrint(); //gun print
			TargetPrint(); //target print
			ArcadeInterface(); //interface print

			switch (getch())
			{
			case LEFT: //input left
				if (position_gun > -1)
				{
					position_gun -= 1;
				}
				break;
			case RIGHT: //input right
				if (position_gun < 5)
				{
					position_gun += 1;
				}
				break;
			case FIRE: //input space
				GunShot(); //shot function
				break;
			case RELOAD: //input 'r'
				Reload(); //reload function
				break;
			}
			if(bullet == 0)
			{
				if (reload_chance == 0)
				{
					arcade_play_loop = 0; //quit arcade loop
					ArcadeEnd();
				}
			}
	}

}

 //gun print function
void ArcadeGunPrint()
{
	Gotoxy(command_x, 40); //gun location
	if (position_gun == 5)
	{
		printf("                                                  _       \n");
		printf("                                                 |||      \n");
		printf("                                                 | |      \n");
		printf("                                                 |_|      \n");
		printf("                                                | | |     \n");
		printf("                                                |_|_|     \n");
		printf("                                                 \\|/      \n");
	}
	else if (position_gun == 4)
	{
		printf("                                     _                    \n");
		printf("                                    |||                   \n");
		printf("                                    | |                   \n");
		printf("                                    |_|                   \n");
		printf("                                   | | |                  \n");
		printf("                                   |_|_|                  \n");
		printf("                                    \\|/                   \n");
	}
	else if (position_gun == 3)
	{
		printf("                           _                              \n");
		printf("                          |||                             \n");
		printf("                          | |                             \n");
		printf("                          |_|                             \n");
		printf("                         | | |                            \n");
		printf("                         |_|_|                            \n");
		printf("                          \\|/                             \n");
	}
	else if (position_gun == 2)
	{
		printf("                 _                                        \n");
		printf("                |||                                       \n");
		printf("                | |                                       \n");
		printf("                |_|                                       \n");
		printf("               | | |                                      \n");
		printf("               |_|_|                                      \n");
		printf("                \\|/                                       \n");
	}
	else if (position_gun == 1)
	{
		printf("       _                                                  \n");
		printf("      |||                                                 \n");
		printf("      | |                                                 \n");
		printf("      |_|                                                 \n");
		printf("     | | |                                                \n");
		printf("     |_|_|                                                \n");
		printf("      \\|/                                                 \n");
	}
}

//shot function
void GunShot()
{
	if (bullet > 0)
	{
		GunShotSound();

		bullet -= 1;
		if (position_gun == target_position)
		{
			GunHitSound();
			Gotoxy(command_x, 30);
			Color(black, black);
			printf("                                                          \n");
			printf("                                                          \n");
			printf("                                                          \n");
			printf("                                                          \n");
			printf("                                                          \n");
			printf("                                                          \n");
			printf("                                                          \n");
			Color(white, black);
			score += 10;
			Sleep(300);
		}
	}
	else if (bullet == 0)
	{
		DryFireSound();

		printf("\n                        RELOAD!");
		bullet = 0;
	}
}

//reload function
void Reload()
{
	ReloadSound();

	if (bullet <= 0)
	{
		Sleep(1500);
		bullet = 6;
		reload_chance -= 1;
		printf("\n                               ");
	}
}

//print interface function
void ArcadeInterface()
{
	Gotoxy(command_x, 48); //interface location
	printf("   SCORE : %d\n", score);
	printf("   BULLET : %d\n", bullet);
	printf("   RELOAD CHANCE : %d", reload_chance);
}

//target print function
void TargetPrint()
{
	int target_loop = 1;
		srand((unsigned)time(NULL));
		target_position = 1 + rand() % RANDOM_MAX; //randomize number 
		Gotoxy(command_x, 30);//target location
		switch (target_position) {
		case 5:
			printf("                                               ____     \n");
			printf("                                              /    \\    \n");
			printf("                                             |  ||  |   \n");
			printf("                                              \\____/    \n");
			printf("                                                ||      \n");
			printf("                                                ||      \n");
			printf("                                                ||      \n");
			break;
		case 4:
			printf("                                  ____                  \n");
			printf("                                 /    \\                 \n");
			printf("                                |  ||  |                \n");
			printf("                                 \\____/                 \n");
			printf("                                   ||                   \n");
			printf("                                   ||                   \n");
			printf("                                   ||                   \n");
			break;
		case 3:
			printf("                         ____                            \n");
			printf("                        /    \\                           \n");
			printf("                       |  ||  |                          \n");
			printf("                        \\____/                           \n");
			printf("                          ||                             \n");
			printf("                          ||                             \n");
			printf("                          ||                             \n");
			break;
		case 2:
			printf("                ____                                      \n");
			printf("               /    \\                                     \n");
			printf("              |  ||  |                                    \n");
			printf("               \\____/                                     \n");
			printf("                 ||                                       \n");
			printf("                 ||                                       \n");
			printf("                 ||                                       \n");
			break;
		case 1:
			printf("      ____                                                \n");
			printf("     /    \\                                               \n");
			printf("    |  ||  |                                              \n");
			printf("     \\____/                                               \n");
			printf("       ||                                                 \n");
			printf("       ||                                                 \n");
			printf("       ||                                                 \n");
			break;
		}
}


void ArcadeEnd() {

	TextChange(); //clean text screen

	printf("\nOh, you got %d score! Thank for playing!\n\n", score);
	printf("Press enter to continue");
	
	score = 0;
	bullet = 6;
	reload_chance = 3;
	position_gun = 3; //initialization value

	getchar();
	TextChange(); //clean text screen
	MiniMenu(); //print mini menu



}