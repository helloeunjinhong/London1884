/**
	\file        Util.c
	\project     London1884
	\author      primary - Minho Chae 
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡± 
*/

#include"Header.h"
#include"util.h"
#include"Variable.h"


//change size of console and name of console
void ConsoleEdit()
{
	system("mode con cols=116 lines=52");
	system("title London 1884");
}

//change cursor print
void Cursor(int n)
{
	HANDLE hConsole;
	CONSOLE_CURSOR_INFO ConsoleCursor;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	ConsoleCursor.bVisible = n;
	ConsoleCursor.dwSize = 1;

	SetConsoleCursorInfo(hConsole, &ConsoleCursor);
}

//change color
void Color(int forground, int background)
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	int code = forground + background * 16;
	SetConsoleTextAttribute(consoleHandle, code);
}

//set position of cursor 
void Gotoxy(int x, int y)
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(consoleHandle, pos);
}

//clean text screen
void TextChange()
{
	command_x = 0;
	command_y = 28;
	Gotoxy(command_x, command_y);
	Color(black, black);
	for (int i = 0; i < 23; i++)
	{
		printf("                                                                                                                 \n");
	}
	Gotoxy(command_x, command_y);
	Color(white, black);
}

//clean text screen detection part
void TextChangeDetection()
{
	command_x = 0;
	command_y = 25;
	Gotoxy(command_x, command_y);
	Color(black, black);
	for (int i = 0; i < 25; i++)
	{
		printf("                                                                                                                 \n");
	}
	Gotoxy(command_x, command_y);
	Color(white, black);
}