/**
	\file        GameStart.c
	\project     London1884
	\author      primary - Minho Chae
	\copyright   “All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.”
*/


#include"Header.h"
#include"Define.h"


static const char * digipen_image[] =
{
	"                                                                                        ",
	"              ###  #######     #######    ###             ###  #######       ",
	"              ###  #########   ########                        ###   ###           ",
	"              ###  ##########  ###   ###  ###    #####    ###  ###   ###   ",
	"              ###  ########### ###   ###  ###  #########  ###  ###   ###  #####   ###### ",
	"              ###  ########### ###   ###  ###  ###   ###  ###  #######   ##   ##  ##   ##",
	"              ###  ##########  ###   ###  ###  ###   ###  ###  ###       #######  ##   ##",
	"              ###  #########   ########   ###  #########  ###  ###       ##       ##   ##",
	"              ###  #######     #######    ###    #######  ###  ###        #####   ##   ##        ",
	"     #######  ###                                    ###                              ",
	"   #########  ###                               ###  ###                 ",
	"  ##########  ###                                ######                     ",
	" ###########  ###                                                                  ",
	" ###########  ###                 _____ ___   ___ __  _  __ ___ __ __       _     _  _        ",
	"  ##########  ###            ||\\||_  | | | | | | |__ | ||__  | |__|  |_||\\|| ||  | || _|_|  ",
	"   #########  ###            || |__| | | | |_| | |__ |_||    | |__|__| || ||_||__|_||_| |     ",
	"     #######  ###                                                                  ",
	"                                                                        ",
};

static const char * team_logo_game_console[] =
{
	" ________________________________________________________    ",
	"|                                                        |   ",
	"|     ______________________________________________     |   ",
	"|    |                                              |    |   ",
	"|    |                                              |    |   ",
	"|    |                                              |    |   ",
	"|    |                                              |    |   ",
	"|    |                                              |    |   ",
	"|    |                                              |    |   ",
	"|    |                                              |    |   ",
	"|    |______________________________________________|    |   ",
	"|               __________________________               |   ",
	"|              |__________________________|              |   ",
	"|                                                        |   ",
	"|            ____                     ____               |   ",
	"|           |    |                   |    |              |   ",
	"|       ____|    |____          ____ |____| ____         |   ",
	"|      |              |        |    |      |    |        |   ",
	"|      |____      ____|        |____| ____ |____|        |   ",
	"|           |    |                   |    |              |   ",
	"|           |____|                   |____|              |   ",
	"|                                                        |   ",
	"|         ____  ____                                     |   ",
	"|        |____||____|                                    |   ",
	"|                                                        |   ",
	"|            (c) 2018. BMO All rights reserved.          |   ",
	"|________________________________________________________|   ",
};

static const char * team_logo_name[] =
{
	"oooooooooo.  ooo        ooooo   .oooooo.  ",
	"`888'   `Y8b `88.       .888'  d8P'  `Y8b ",
	" 888     888  888b     d'888  888      888",
	" 888oooo888'  8 Y88. .P  888  888      888",
	" 888    `88b  8  `888'   888  888      888",
	" 888    .88P  8    Y     888  `88b    d88'",
	"o888bood8P'  o8o        o888o  `Y8bood8P' ",
};


//function that prints game title and splash screen
void GameStart()
{
	SplashScreen();
}

int color_number = 31; //set color number


//print game splash screen
void SplashScreen()
{
	int x = 12;
	int y = 17;

	system("cls");

	Sleep(1000);

	DigipenLogoSound();

	system("color 0c");

	for (int digipen_image_row = 0; digipen_image_row < _countof(digipen_image); digipen_image_row++)
	{
		Gotoxy(x, y);
		printf("%s\n", digipen_image[digipen_image_row]);
		y++;
	}

	Color(white, black);

	Gotoxy(27, 37);
	printf("All content(c) 2018 DigiPen(USA) Corporation, all rights reserved.");
	
	Color(black, white);

	Sleep(3000);

	system("cls");

	system("color 07");

	x = 28;
	y = 13;

	TeamLogoStartSound();

	for (int team_logo_game_console_row = 0; team_logo_game_console_row < _countof(team_logo_game_console); team_logo_game_console_row++)
	{
		Gotoxy(x, y);
		printf("%s\n", team_logo_game_console[team_logo_game_console_row]);
		y++;
	}

	Sleep(1000);

	ButtonSound();

	Sleep(1000);

	x = 36;
	y = 16;

	for (int team_logo_name_row = 0; team_logo_name_row < _countof(team_logo_name); team_logo_name_row++)
	{
		Sleep(100);
		Gotoxy(x, y);
		printf("%c[1;%dm", 27, color_number);
		printf("%s\n", team_logo_name[team_logo_name_row]);
		printf("%c[0m\n", 27);
		color_number++;
		y++;
	}

	BootUpSound();

	color_number -= 7;

	Sleep(2000);

	TeamLogoFinishSound();
}
