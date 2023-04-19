/**
	\file        SuspectJohn.c
	\project     London1884
	\author      primary - Eunjin Hong
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/

#include"Header.h"
#include"Variable.h"

//set john_talk_status to 0
int john_talk_status = 0;

//print John dialogue
void Talk_John()
{
	if (john_talk_status == 0)	
	{
		MaleTalkSound();

		TextChange();
		printf(" John : Who are you? \n");
		getchar();
		TextChange();
		printf(" John : Do you know it is rude to get inside someone's room in sudden. \n");
		getchar();
		TextChange();
		printf(" You : Sorry, but should keep doing my job. \n");
		getchar();
		TextChange();
		printf(" You : I want you to answer my few questions. \n");
		getchar();
		TextChange();
		printf(" John : Just finish it already. \n");
		getchar();
		TextChange();
		printf(" You : Anything you know about the victim last night? \n");
		getchar();
		TextChange();
		printf(" John : I'm sorry, but I don't know anything about him. \n");
		getchar();
		TextChange();
		printf(" John : The only thing I know is that he killed himself. \n");
		getchar();
		TextChange();
		printf(" John : How pathetic decision he did today. \n");
		getchar();
		TextChange();
		printf(" You : Well... Anything more? \n");
		getchar();
		TextChange();
		printf(" John : I don't know. The only thing I know is he was alive around 2 AM. \n");
		getchar();
		TextChange();
		printf(" You : What does that mean? \n");
		getchar();
		TextChange();
		printf(" John : You know my room is close to him. I could here the doors opening. \n");
		getchar();
		TextChange();
		printf(" John : I heard a door opening around 2 AM. After 5 minutes another. \n");
		getchar();
		TextChange();
		printf(" John : Maybe he went to bathroom before killing himself. \n");
		getchar();
		TextChange();
		printf(" John : What a funny guy he is. \n");
		getchar();
		TextChange();
		printf(" John : Who would go to a bathroom before commiting suicide. \n");
		getchar();
		TextChange();
		printf(" You : I think that's enough. Thank you for your support. \n\n");


		printf(" >>Press enter to end the conversation.");
		getchar();
		TextChange();

		WritingClueSound();
		printf(" (John has been added to the suspect list!)");

		john_talk_status++; //set john talk status = 1
		talk_count++;	//add talk count 1
		MiniMenu();		
	}

	//when you already talked with john, repeat the same line.
	else if (john_talk_status != 0)		
	{
		MaleTalkSound();

		TextChange();
		printf(" John : Enough bothering. \n\n");

		printf(" (You have already spoken to John.) \n\n");

		printf(" >>Press enter to end the conversation.");
		getchar();
		TextChange();
		MiniMenu();
	}
}