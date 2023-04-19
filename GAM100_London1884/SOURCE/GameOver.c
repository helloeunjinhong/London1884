/**
	\file        GameOver.c
	\project     London1884
	\author      primary - Minho Chae
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/


#include"Header.h"
#include"Define.h"
#include"Variable.h"


static const char * game_over_text[] =
{
	"MM'\"\"\"\"\"`MM                                 MMP\"\"\"\"\"YMM                            ",
	"M' .mmm. `M                                 M' .mmm. `M                            ",
	"M  MMMMMMMM .d8888b. 88d8b.d8b. .d8888b.    M  MMMMM  M dP   .dP .d8888b. 88d888b. ",
	"M  MMM   `M 88'  `88 88'`88'`88 88ooood8    M  MMMMM  M 88   d8' 88ooood8 88'  `88 ",
	"M. `MMM' .M 88.  .88 88  88  88 88.  ...    M. `MMM' .M 88 .88'  88.  ... 88       ",
	"MM.     .MM `88888P8 dP  dP  dP `88888P'    MMb     dMM 8888P'   `88888P' dP       ",
	"MMMMMMMMMMM                                 MMMMMMMMMMM                            ",
};

//function that initializes game and prints game over screen 
void GameOver()
{
	CloseSound();

	GameInitialize();

	GameOverScreen();

	main();
}

//print game over screen
void GameOverScreen()
{
	system("cls");

	Color(white, black);

	int over_x = 18;
	int over_y = 22;

	for (int game_over_text_row = 0; game_over_text_row < _countof(game_over_text); game_over_text_row++)
	{
		Gotoxy(over_x, over_y);
		printf("%s\n", game_over_text[game_over_text_row]);
		over_y++;
	}

	Sleep(3600);

	system("cls");

	Color(white, black);
	Gotoxy(10, 24);
	printf("When you have eliminated the impossible, whatever remains, however improbable, must be the truth.\n\n\n");
	printf("                                                  - Sherlock Holmes                                    ");

	Sleep(3600);

	system("cls");
}

//function that initialize the status of game
void GameInitialize()
{
	rope = 0;
	knife = 0;
	timetable = 0;
	family_photo = 0;
	victim = 0;
	contract_paper = 0;
	maid_room_key = 0;
	public_key = 0;
	warehouse_key = 0;

	item_count = 0;
	clue_count = 0;

	cruise_deck_count = 0;
	lobby_restaurant_count = 0;
	cruise_1F_count = 0;
	cruise_2F_count = 0;
	warehouse_1F_count = 0;
	sailor_room_count = 0;
	warehouse_2F_count = 0;
	crime_scene_count = 0;
	maid_room_count = 0;
	empty_room_up_count = 0;
	empty_room_down_count = 0;

	talk_count = 0;
	steven_talk_status = 0;
	brian_talk_status = 0;
	emma_talk_status = 0;
	ronald_talk_status = 0;
	edward_talk_status = 0;
	george_talk_status = 0;
	olivia_talk_status = 0;
	paul_talk_status = 0;
	mark_talk_status = 0;
	john_talk_status = 0;
	edward_talk_status_timetable = 0;

	room = CRUISE_DECK;

	command_x = 0;
	command_y = 28;

	detectiveLoop1 = 1;
	detectiveLoop2 = 1;
	detectiveLoop3 = 1;
	detectiveLoop4 = 1;
	detectiveLoop5 = 1;
	detectiveLoop6 = 1;
	detectiveLoop7 = 1;
	detectiveLoop8 = 1;
	detectiveLoop9 = 1;
	detectiveLoop10 = 1;
	detectiveLoop11 = 1;
	detectiveLoop12 = 1;
	detectiveLoop13 = 1;

	wholedetectiveLoop = 1;

}