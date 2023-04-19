/**
	\file        Cheat.c
	\project     London1884
	\author      primary - Minho Chae
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/


#include"Header.h"
#include"Define.h"
#include"Variable.h"


//function that obtains all the necessary elements for the transition to the detection part
void Cheat()
{
	TextChange();

	rope = 1;
	knife = 1;
	timetable = 1;
	family_photo = 1;
	victim = 1;
	contract_paper = 1;
	maid_room_key = 1;
	public_key = 1;
	warehouse_key = 1;
	mark_talk_status = 1;

	item_count = 3;
	clue_count = 7;

	talk_count = 9;
	brian_talk_status = 1;
	emma_talk_status = 1;
	steven_talk_status = 1;
	ronald_talk_status = 1;
	paul_talk_status = 1;
	edward_talk_status = 1;
	olivia_talk_status = 1;
	john_talk_status = 1;
	george_talk_status = 1;

	printf(" You used the cheat key! Now you can move on to the detection part.");

	MiniMenu();
}