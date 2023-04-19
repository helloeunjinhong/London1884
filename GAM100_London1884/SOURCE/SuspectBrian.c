/**
	\file        SuspectBrian.c
	\project     London1884
	\author      primary - Eunjin Hong
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/

#include"Header.h"
#include"Variable.h"

//set brian_talk_status to 0
int brian_talk_status = 0; 

//print Brian dialogue
void Talk_Brian()	
{
	if (brian_talk_status == 0)
	{
		MaleTalkSound();

		TextChange();
		printf(" You : Who are you? \n");
		getchar();
		TextChange();
		printf(" Brian : My name is Brian, sailor of this ship. \n");
		getchar();
		TextChange();
		printf(" Brian : I'm the morning time patrol. \n");
		getchar();
		TextChange();
		printf(" Brian : I heard her scream so I ran here to see the situation. \n");
		getchar();
		TextChange();
		printf(" Brian : Didn't know someone will die on this ship.. \n");
		getchar();
		TextChange();
		printf(" You : What an unlucky day. I just want you to help me with my job. \n");
		getchar();
		TextChange();
		printf(" You : Aren't there anything you remember about the victim? \n");
		getchar();
		TextChange();
		printf(" Brian : Well, it wasn't my working hours. So I don't know that much. \n");
		getchar();
		TextChange();
		printf(" Brian : I was resting in the bunker room. \n");
		getchar();
		TextChange();
		printf(" Brian : But during I was going to restroom, I found him at the bar. \n");
		getchar();
		TextChange();
		printf(" Brian : It was around 1 o'clock. \n");
		getchar();
		TextChange();
		printf(" Brian : He kind a looked fully drunk. \n");
		getchar();
		TextChange();
		printf(" Brian : But, you know. There are many people whose alcoholic. \n");
		getchar();
		TextChange();
		printf(" You : Okay. I think this is enough. Thank you for your support. \n\n");


		printf(" >>Press enter to end the conversation.");
		getchar();
		TextChange();

		WritingClueSound();
		printf(" (Brian has been added to the suspect list!)");

		brian_talk_status++; //set brian talk status = 1
		talk_count++;		//add talk count 1
		MiniMenu();		    //print minimenu
	}
	else if (brian_talk_status != 0)	//when you already talked with brian, repeat the same line.
	{
		MaleTalkSound();

		TextChange();
		printf(" Brian : I still can't believe this will happen... \n\n");

		printf(" (You have already spoken to Brian.) \n\n");

		printf(" >>Press enter to end the conversation.");
		getchar();
		TextChange();
		MiniMenu();
	}
}