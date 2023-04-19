/**
	\file        Main.c
	\project     London1884
	\author      primary - Minho Chae
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/


#include"Header.h"
#include"Variable.h"

//game main loop fuction
int main(void)
{
	//set console environmant
	ConsoleEdit();
	Cursor(0);

	if (GamePlayCount == 0) //prints only when the player plays game first time
	{
		GameStart(); 
	}

	GameMenu(); 

	if (GameQuit == 0) //if player select quit in game main menu, skip intro and adventure game loop
	{
		GameIntro();

		AdventureGameLoop();
	}

	return 0;
}