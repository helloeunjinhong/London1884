/**
	\file        GameMenu.c
	\project     London1884
	\author      primary - Minho Chae, secondary - Doyeong Yi 
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/


#include"Header.h"
#include"Define.h"
#include"Variable.h"


int GameMainMenuLoop = 1; //set GameMainMenuLoop to true
int GameQuit = 0; //set GameQuit to false
int GamePlayCount = 0; //set GamePlayCount to false


static const char * title_text[] =
{
	"                                                                                                                  ",
	"                                                                                                                  ",
	"                                                                                                                  ",
	"      $$\\                                $$\\                             $$\\   $$$$$$\\   $$$$$$\\  $$\\   $$\\ ",
	"      $$ |                               $$ |                          $$$$ | $$  __$$\\ $$  __$$\\ $$ |  $$ |     ",
	"      $$ |      $$$$$$\\  $$$$$$$\\   $$$$$$$ | $$$$$$\\  $$$$$$$\\        \\_$$ | $$ /  $$ |$$ /  $$ |$$ |  $$ |  ",
	"      $$ |     $$  __$$\\ $$  __$$\\ $$  __$$ |$$  __$$\\ $$  __$$\\         $$ |  $$$$$$  | $$$$$$  |$$$$$$$$ |   ",
	"      $$ |     $$ /  $$ |$$ |  $$ |$$ /  $$ |$$ /  $$ |$$ |  $$ |        $$ | $$  __$$< $$  __$$< \\_____$$ |      ",
	"      $$ |     $$ |  $$ |$$ |  $$ |$$ |  $$ |$$ |  $$ |$$ |  $$ |        $$ | $$ /  $$ |$$ /  $$ |      $$ |       ",
	"      $$$$$$$$\\\\$$$$$$  |$$ |  $$ |\\$$$$$$$ |\\$$$$$$  |$$ |  $$ |      $$$$$$\\\\$$$$$$  |\\$$$$$$  |      $$ |",
	"      \\________|\\______/ \\__|  \\__| \\_______| \\______/ \\__|  \\__|      \\______|\\______/  \\______/       \\__|",
	"                                                                                                                   ",
	"                                                                                                                   ",
};

static const char * title_image[] =
{
	"					            ,777 , 777,                      ",
	"				                   :,,,,,,,,,,,:                 ",
	"				                   :,,,,,,,,,,,:                 ",
	"				                  :,,,,,,,,,,,,,:                ",
	"				                  777777777777777                ",
	"			                       ?:,,,,,,,,,,,,,,,,,:?         ",
	"		                           ?,,,,,,,,,,,,,,,,,,,,,,,,,,,,?",
	"			                     77:,,,,,,,,,,,,,,,,,,,:77       ",
	"				                  7,~7777777777~,7               ",
	"				                  7,,,,,,,,,,,,,,7               ",
	"			                       ,,,,,,,,,,,,,,,,,,,,,,        ",
	"			                     7,,,,,,+7,,,,,,,,7+,,,,,,7      ",
	"			                     7,,,,,,,,7,,,,,,7,,,,,,, 7      ",
	"			                      7,,,,,,,.,,,,,,,,,,,,,,7       ",
	"			                       7,,,,,,,7,,,,7,,,,,,,7        ",
	"			                       7,,,,,,,,7,,7,,,,,,,,7        ",
	"			                      7,,,,,,,,,,77,,,,,,,,,,7       ",
	"			                       : ,,,,,,,,,,,,,,,,,, :        ",
	"					              ,,,,,,,,                       ",
};

//print game logo
void GameLogo()
{
	system("cls");

	for (int title_text_row = 0; title_text_row < _countof(title_text); title_text_row++)
	{
		Sleep(50);
		printf("%s\n", title_text[title_text_row]);
	}

	system("color 70"); Sleep(50);
	system("color 07"); Sleep(50);
	system("color 70"); Sleep(50);
	system("color 0f");

	printf("\n\n\n");

	for (int title_image_row = 0; title_image_row < _countof(title_image); title_image_row++)
	{
		printf("%s\n", title_image[title_image_row]);
	}

}

//function that prints the game main menu screen and recalls the main menu option function
void GameMenu()
{
	GamePlayCount++;

	TitleBackGroundMusic(); 

	GameLogo(); 

	GameMainMenuLoop = 1; 

	GameMenuOption(); 

	CloseSound(); 
}

//function that prints the main game menu and calls each menu according to the option
void GameMenuOption()
{
	int x = 50;
	int y = 38;

	Color(white, black);
	Gotoxy(x, y);
	printf(" >    Play");
	y += 2;
	Gotoxy(x, y);
	printf("   How to play");
	y += 2;
	Gotoxy(x, y);
	printf("     Credit");
	y += 2;
	Gotoxy(x, y);
	printf("      Quit");
	y -= 6;

	while (GameMainMenuLoop)
	{
		switch (getch())
		{
		case UP:
			if (y > 38)
			{
				Gotoxy(x, y);
				printf("  ");
				y -= 2;
				Gotoxy(x, y);
				printf(" >");
			}
			break;
		case DOWN:
			if (y < 44)
			{
				Gotoxy(x, y);
				printf("  ");
				y += 2;
				Gotoxy(x, y);
				printf(" >");
			}
			break;
		case ENTER: 
			if (y == 38) 
			{
				system("cls");

				GameMainMenuLoop = 0; 
			}
			else if (y == 40) 
			{
				system("cls");

				HowToPlay(); 
			}
			else if (y == 42) 
			{
				system("cls");

				MenuCredit(); 
			}
			else if (y == 44) 
			{
				system("cls");

				GameQuit = 1;

				GameMainMenuLoop = 0;
			}
			break;
		}
	}
}

//print how to play screen
void HowToPlay()
{
	int x = 10;
	int y = 10;

	Gotoxy(x, y);
	printf("Player should to move around the room to get clues and items to help solve the incident.");
	y += 2;
	Gotoxy(x, y);
	printf("With the clues obtained through this process, player should point out the suspect through questioning.");
	y += 6;
	x += 16;
	Gotoxy(x, y);
	printf(" < KEY INTRODUCTION >                < OBJECT INTRODUCTION >    ");
	y += 3;
	Gotoxy(x, y);
	printf("  ARROW KEY   : MOVE                  |||||     : STAIR         ");
	y += 2;
	Gotoxy(x, y);
	printf("      M       : MENU                    "); Color(black, white); printf("\""); Color(white, black);  printf("       : PEOPLE       ");
	y += 2;
	Gotoxy(x, y);
	printf("      Q       : QUIT                    *       : CLUE ");
	y += 2;
	Gotoxy(x, y);
	printf("                                                       ");
	x -= 24;
	y += 7;
	Gotoxy(x, y);
	printf("                         Tip I.   If you are ready to move on to the detection part,");
	y += 1;
	Gotoxy(x, y);
	printf("                                 you can talk to the captain and move on to the detection part.");
	y += 2;
	Gotoxy(x, y);
	printf("                         Tip II.  Suggesting incorrect evidence in the process of detection");
	y += 1;
	Gotoxy(x, y);
	printf("                                 reduces the number of opportunities remaining!");
	y += 2;
	Gotoxy(x, y);
	printf("                         Tip III. When talking to a suspect, pay attention to what they say!");
	y += 2;
	Gotoxy(x, y);
	printf("                         Tip IV.  The suspect doesn't always tell the truth.");
	x += 42;
	y += 5;

	Gotoxy(x, y);
	printf(">> Press enter to quit how to play");
	getchar();

	system("cls");

	main();
}

//print credit screen
void MenuCredit()
{
	Credit();

	TitleBackGroundMusic();

	main();
}