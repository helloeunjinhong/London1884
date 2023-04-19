/**
	\file        SuspectSteven.c
	\project     London1884
	\author      primary - Eunjin Hong
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/
#include"Header.h"
#include"Variable.h"

//set steven_talk_status to 0
int steven_talk_status = 0;

//print steven dialogue
void Talk_Steven()
{
	if (steven_talk_status == 0)
	{
		MaleTalkSound();

		TextChange();
		printf(" Steven :");
		printf(" Oh, hello sir. My name is Steven. Sailor of this ship. \n");
		getchar();
		TextChange();
		printf(" You : Hello Steven. Just few questions. \n");
		getchar();
		TextChange();
		printf(" You : I want to know what you did last night. \n");
		getchar();
		TextChange();
		printf(" Steven : I was working as a patrol. Walking around the ship. \n");
		getchar();
		TextChange();
		printf(" You : Anything you found about the victim? \n");
		getchar();
		TextChange();
		printf(" Steven : Well, I saw him talking with some man. \n");
		getchar();
		TextChange();
		printf(" You : A man? \n");
		getchar();
		TextChange();
		printf(" Steven : Yes. It was near 1st floor stairs. \n");
		getchar();
		TextChange();
		printf(" Steven : After short talk, he went to 2nd floor and the other man went to the lobby. \n");
		getchar();
		TextChange();
		printf(" Steven : That's the only thing I saw about him. \n");
		getchar();
		TextChange();
		printf(" Steven : It was around 11PM. And my patrol working hours are until 12 o'clock. \n");
		getchar();
		TextChange();
		printf(" Steven : I went back to the bunker room after midnight. \n");
		getchar();
		TextChange();
		printf(" You : Okay. Thank you for your support. \n");
		getchar();
		TextChange();
		printf(" Steven : Good luck Sir. \n\n");


		printf(" >>Press enter to end the conversation.");
		getchar();
		TextChange();

		WritingClueSound();
		printf(" (Steven has been added to the suspect list!)");

		steven_talk_status++; //set steven talk status = 1
		talk_count++;	   //add talk count 1
		MiniMenu();
	}

	//when you already talked with steven, repeat the same line
	else if (steven_talk_status != 0)
	{
		MaleTalkSound();

		TextChange();
		printf(" Steven : Wish there will be no more suicide on this ship... \n\n");

		printf(" (You have already spoken to Steven.) \n\n");

		printf(" >>Press enter to end the conversation.");
		getchar();
		TextChange();
		MiniMenu();
	}
}
