/**
	\file        GameClear.c
	\project     London1884
	\author      primary - Minho Chae
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/


#include"Header.h"
#include"Define.h"
#include"Variable.h"


static const char * game_clear_text[] =
{
	"MM'\"\"\"\"\"`MM                                 MM'\"\"\"\"'YMM dP                            ",
	"M' .mmm. `M                                 M' .mmm. `M 88                            ",
	"M  MMMMMMMM .d8888b. 88d8b.d8b. .d8888b.    M  MMMMMooM 88 .d8888b. .d8888b. 88d888b. ",
	"M  MMM   `M 88'  `88 88'`88'`88 88ooood8    M  MMMMMMMM 88 88ooood8 88'  `88 88'  `88 ",
	"M. `MMM' .M 88.  .88 88  88  88 88.  ...    M. `MMM' .M 88 88.  ... 88.  .88 88       ",
	"MM.     .MM `88888P8 dP  dP  dP `88888P'    MM.     .dM dP `88888P' `88888P8 dP       ",
	"MMMMMMMMMMM                                 MMMMMMMMMMM                               ",
};

//print game clear screen
void GameClearScreen()
{
	system("cls");

	Color(white, black);

	int clear_x = 18;
	int clear_y = 22;

	for (int game_clear_text_row = 0; game_clear_text_row < _countof(game_clear_text); game_clear_text_row++)
	{
		Gotoxy(clear_x, clear_y);
		printf("%s\n", game_clear_text[game_clear_text_row]);
		clear_y++;
	}

	Sleep(3000);
}

//print credit
void Credit()
{
	int x = 29;
	int y = 18;

	system("cls");

	CloseSound();

	CreditBackGroundMusic();

	Gotoxy(x, y);
	printf("                        DEVELOPED BY                       \n\n");
	y += 5;
	Gotoxy(x, y);
	printf("                         MINHO CHAE                        \n");
	y += 3;
	Gotoxy(x, y);
	printf("                         DOYEONG YI                        \n");
	y += 3;
	Gotoxy(x, y);
	printf("                         EUNJIN HONG                        \n");
	y += 3;
	Gotoxy(x, y);
	printf("                         HOCHAN JANG                        \n");

	Sleep(5000);

	y = 11;

	system("cls");

	Gotoxy(x, y);
	printf("       TECHNICAL LEAD AND AUDIO LEAD AND PROGRAMMER        \n\n");
	y += 3;
	Gotoxy(x, y);
	printf("                         MINHO CHAE                        \n\n\n");
	y += 6;
	Gotoxy(x, y);
	printf("                  DIRECTOR AND PROGRAMMER                  \n\n");
	y += 3;
	Gotoxy(x, y);
	printf("                         DOYEONG YI                        \n\n\n");
	y += 6;
	Gotoxy(x, y);
	printf("                STORY DESIGNER AND PROGRMMER               \n\n");
	y += 3;
	Gotoxy(x, y);
	printf("                         EUNJIN HONG                       \n\n\n");
	y += 6;
	Gotoxy(x, y);
	printf("                TECHNICAL LEAD AND PROGRAMMER              \n\n");
	y += 3;
	Gotoxy(x, y);
	printf("                         HOCHAN JANG                       \n\n\n");

	Sleep(5000);

	y = 25;

	system("cls");

	Gotoxy(x, y);
	printf("                         INSTRUCTOR                        \n\n");
	y += 3;
	Gotoxy(x, y);
	printf("                          DAVID LY                         \n\n\n");

	Sleep(5000);

	y = 15;

	system("cls");

	Gotoxy(x, y);
	printf("                          PRESIDENT                        \n\n");
	y += 3;
	Gotoxy(x, y);
	printf("                        CLAUDE COMAIR                      \n\n\n");
	y += 7;
	Gotoxy(x, y);
	printf("                          EXECUTIVES                        \n\n");
	y += 3;
	Gotoxy(x, y);
	printf("                          JASON CHU                        \n");
	y += 2;
	Gotoxy(x, y);
	printf("                          JOHN BAUER                        \n");
	y += 2;
	Gotoxy(x, y);
	printf("                       SAMIR ABOU SAMRA                     \n");
	y += 2;
	Gotoxy(x, y);
	printf("                            XIN LI                          \n");
	y += 2;
	Gotoxy(x, y);
	printf("                         PRASANNA GHALI                      \n");
	y += 2;
	Gotoxy(x, y);
	printf("                          RAYMOND YAN                       \n");
	y += 2;
	Gotoxy(x, y);
	printf("                         ERIK MOHRMANN                      \n");

	Sleep(5000);

	y = 10;

	system("cls");

	Gotoxy(x, y);
	printf("               DIGIPEN INSTITUTE OF TECHNOLOGY              \n");
	y += 2;
	Gotoxy(x, y);
	printf("                          PRESENTS                          \n\n");
	y += 10;
	Gotoxy(x, y);
	printf("                      A BMO PRODUCTION                      \n");
	y += 3;
	Gotoxy(x, y);
	printf("                        \"LONDON 1884\"                       \n\n");
	y += 10;
	Gotoxy(x, y);
	printf("                       WWW.DIGIPEN.EDU                      \n\n");
	y += 4;
	Gotoxy(x, y);
	printf("All content (C) 2018 DigiPen (USA) Corparation, all rights reserved.\n");
	y += 2;
	Gotoxy(x, y);
	printf("                (c) 2018. BMO All rights reserved.              \n");

	Sleep(5000);

	CloseSound();

	system("cls");
}

/* function that prints game clear screen and credit, 
  initializes the status of the game, and returns to the first screen of the game */
void GameClear()
{
	CloseSound();

	GameClearScreen();

	Credit();

	playing_loop = 0;
}