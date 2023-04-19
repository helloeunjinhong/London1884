/**
	\file        DetectionGameover.c
	\project     London1884
	\author      primary - Eunjin Hong
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/
#include "Header.h"
#include"Define.h"
#include"Variable.h"

int chance; //call the variable chance


void DetectionFail() {
	const char * gameoverPic[] = {
"                                                                                                                   ",
"                                                                                                                   ",
"                                                                                                                   ",
"                                                                                                                   ",
"                                                                                                                   ",
"                                                                                                                   ",
"                                                                                                                   ",
"                                                                                                                   ",
"                                                                                                                   ",
"                                                                                                                   ",
"                                                                                                                   ",
"                                                                                                                   ",
"                                                                                                                   ",
"                                                                                                                   ",
"                                                                                                                   ",
"                                                                                                                   ",
"                                                                                                                   ",
"                                                                                                                   ",
"                                                                                                                   ",
"                                                                                                                   ",
"                                                                                                                   ",
"                                                                                                                   ",
"                                                                                                                   ",
"                                                                                                                   ",
"                                                                                                                   ",
	};
	
	//the screen when the chance = 0 (Game Over)

	if (chance == 0)
	{
		//initialize the detectiveLoops used in Detection.c
		detectiveLoop1 = 0;
		detectiveLoop2 = 0;
		detectiveLoop3 = 0;
		detectiveLoop4 = 0;
		detectiveLoop5 = 0;
		detectiveLoop6 = 0;
		detectiveLoop7 = 0;
		detectiveLoop8 = 0;
		detectiveLoop9 = 0;
		detectiveLoop10 = 0;
		detectiveLoop11 = 0;
		detectiveLoop12 = 0;
		detectiveLoop13 = 0;


		wholedetectiveLoop = 0;

		//clean the screen
		system("cls");

		//print the ascii art when player's chance == 0
		for (int i = 0; i < _countof(gameoverPic); i++)
		{
			printf("%s\n", gameoverPic[i]);
		}
		printf("You fail your duty...\n You felt guilty about this and lost your qualification as a detective...\n\n");
		printf("Enter to quit");
		getchar();

		//after inserting 'Enter', clean the screen
		system("cls");
	}
}