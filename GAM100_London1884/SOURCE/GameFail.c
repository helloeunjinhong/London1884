/**
	\file        GameFail.c
	\project     London1884
	\author      primary - Min Ho Chae
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/


#include"Header.h"
#include"Define.h"
#include"Variable.h"

static const char * fail_text[] =
{
	"MM\"\"\"\"\"\"\"\"`M          oo dP ",
	"MM  mmmmmmmM             88 ",
	"M'      MMMM .d8888b. dP 88 ",
	"MM  MMMMMMMM 88'  `88 88 88 ",
	"MM  MMMMMMMM 88.  .88 88 88 ",
	"MM  MMMMMMMM `88888P8 dP dP ",
	"MMMMMMMMMMMM                ",
};

//print game fail screen
void FailScreen()
{
	system("cls");

	Color(white, black);

	int clear_x = 42;
	int clear_y = 22;

	for (int fail_text_row = 0; fail_text_row < _countof(fail_text); fail_text_row++)
	{
		Gotoxy(clear_x, clear_y);
		printf("%s\n", fail_text[fail_text_row]);
		clear_y++;

	}
	Sleep(3000);
}

//after failing the game, shut down
void Fail()
{
	CloseSound();

	FailScreen();

	playing_loop = 0;

}