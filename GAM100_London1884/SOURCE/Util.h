#include "Header.h"

#ifndef __COLOR_LIST_
#define __COLOR_LIST_

enum {
	black,
	blue,
	green,
	cyan,
	red,
	purple,
	brown,
	lightgray,
	darkgray,
	lightblue,
	lightgreen,
	lightcyan,
	lightred,
	lightpurple,
	yellow,
	white
};

#endif

void ConsoleEdit();

void Cursor(int n);

void Color(int, int);

void Gotoxy(int x, int y);

void TextChange();

void TextChangeDetection();