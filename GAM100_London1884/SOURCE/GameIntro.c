/**
	\file        GameIntro.c
	\project     London1884
	\author      primary - Minho Chae
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/


#include"Header.h"
#include"Define.h"
#include"Variable.h"

//function that prints game notification messages and story descriptions
void GameIntro()
{
	GameIntroMessage(); 

	GameIntroStory();

	GameBackGroundMusic();  
}

//print game start description
void GameIntroMessage()
{
	system("cls"); 

	Sleep(1000);

	Gotoxy(10, 15);
	TypeSound();
	printf("\n\n\n         This is fiction. "); 
	Sleep(600);
	TypeSound();
	printf("The groups, "); 
	Sleep(600);
	TypeSound();
	printf("the people, "); 
	Sleep(600);
	TypeSound();
	printf("the events "); 
	Sleep(600);
	TypeSound();
	printf("in this work "); 
	Sleep(600);
	TypeSound();
	printf("have nothing "); 
	Sleep(600);
	TypeSound();
	printf("to do with "); 
	Sleep(600);
	TypeSound();
	printf("reality."); 

	Sleep(2000);

	system("cls");
}

//print game story
void GameIntroStory()
{
	system("cls");

	Sleep(1000);

	Gotoxy(16, 15);
	printf(" Detective BMO is given a cruise ticket in return for solving Ronald's case before.");
	Gotoxy(23, 17);
	printf("While enjoying the trip, James, one of the passengers in the cruise,");
	Gotoxy(32, 19);
	printf("was found dead with a rope hanging from his neck.");
	Gotoxy(19, 21);
	printf("Everyone thinks his death is suicide, but detective BMO has many doubts here....");

	Gotoxy(46, 30);
	printf(">> Press enter to continue");
	getchar();

	system("cls");
}