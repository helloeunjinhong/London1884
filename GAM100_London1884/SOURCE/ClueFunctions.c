/**
	\file        ClueFunctions.c
	\project     London1884
	\author      primary - Eunjin Hong
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/


#include"Header.h"
#include"Define.h"
#include"Variable.h"


//clue acquisition status
int rope = 0;
int knife = 0;
int timetable = 0;
int family_photo = 0;
int victim = 0;
int contract_paper = 0;


//function that prints description of clue and changes the acquisition status of clue
void Clue()
{
	TextChange(); 

	Color(white, black); 

	if (object == JAMESTABLE)
	{
		if (contract_paper == 0)
		{
			WritingClueSound(); 

			printf(" You found the contract paper! - The name of victim and name 'ronald' are written in the contract paper.\n\n\n");
			printf(" (contract paper has been added to the clue list!)");

			contract_paper += 1; 

			clue_count += 1; 
		}
		else
		{
			//print message
			printf(" It is a contract paper. You have already found this.");
		}
	}

	if (object == TIMETABLELOCKER)
	{
		//check the existence of clue
		if (timetable == 0)
		{
			WritingClueSound(); //play writing sound

			//print message
			printf(" You found the timetable! - The crew's working hours are written on it.\n\n\n");
			printf(" (timetable has been added to the clue list!)");

			timetable += 1; //change clue status

			clue_count += 1; //increase clue count
		}
		else
		{
			//print message
			printf(" It is a timatable. You have already found this.");
		}

	}

	if (object == ROPE)
	{	
		if (rope == 0) 
		{
			WritingClueSound(); 

			printf(" You found the rope! - The end of the rope is rough.\n\n\n");
			printf(" (rope has been added to the clue list!)");

			rope += 1; 
			clue_count += 1; 
		}
		else
		{	
			printf(" It is a rope. You have already found this.");
		}
	}

	if (object == KNIFE)
	{
		if (knife == 0) 
		{
			WritingClueSound(); 

			printf(" You found the knife! - Maybe it was used to cut the rope.'\n\n\n");
			printf(" (knife has been added to the clue list!)");

			knife += 1; 
			clue_count += 1; 
		}
		else
		{
			printf(" It is a knife. You have already found this.");
		}
	}


	if (object == FAMILY_PHOTO)
	{
		if (family_photo == 0)
		{
			WritingClueSound(); 

			printf(" You found the family photo! - There are some people in the picture. I can see Steven's face among them.\n");
			printf("                              These people look like his parents and his sister.\n\n\n");
			printf(" (family photo has been added to the clue list!)");

			family_photo += 1;
			clue_count += 1; 
		}
		else
		{
			printf(" It is a family photo. You have already found this.");
		}
	}

	if (object == VICTIM)
	{
		if (victim == 0)
		{
			WritingClueSound(); 

			printf(" You found the body of James! - The James's neck hangs from a rope connected to the ceiling.\n");
			printf("                                Upon closer examination, bruises was found in his body.\n\n\n");
			printf(" (the body of James has been added to the clue list!)");

			victim += 1;
			clue_count += 1; 
		}
		else
		{
			printf(" It is the body of victim. You have already saw this.");
		}
	}



	MiniMenu();
}