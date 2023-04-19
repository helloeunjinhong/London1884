/**
	\file        SuspectGeorge.c
	\project     London1884
	\author      primary - Eunjin Hong
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/
#include"Header.h"
#include"Variable.h"

//set george_talk_status to 0
int george_talk_status = 0;

//print George dialogue
void Talk_George()		
{
	if (george_talk_status == 0)
	{
		MaleTalkSound();

		TextChange();
		printf(" George : Oh, good morning. \n");
		getchar();
		TextChange();
		printf(" You : Good morning. \n");
		getchar();
		TextChange();
		printf(" You : Looks like you're a bartender of this ship. \n");
		getchar();
		TextChange();
		printf(" George : Yes I am. Any help? \n");
		getchar();
		TextChange();
		printf(" You : Nothing much, but only few questions. \n");
		getchar();
		TextChange();
		printf(" You : Any information about the victim or last night? \n");
		getchar();
		TextChange();
		printf(" George : Well, I actually met him last night. \n");
		getchar();
		TextChange();
		printf(" George : He came to this bar, spending his own time. \n");
		getchar();
		TextChange();
		printf(" George : Looked like he was not in a good situation. \n");
		getchar();
		TextChange();
		printf(" George : After fully drunk, the sailor came and sent him to his room. \n");
		getchar();
		TextChange();
		printf(" George : He was so drunk that he couldn't even walk properly. \n");
		getchar();
		TextChange();
		printf(" You : Do you know who that sailor was? \n");
		getchar();
		TextChange();
		printf(" George : It was Brian. Looks like he was on his way to bathroom. \n");
		getchar();
		TextChange();
		printf(" You : Nothing more? \n");
		getchar();
		TextChange();
		printf(" George : Well, when the bar is empty, I went to the bar carriage. \n");
		getchar();
		TextChange();
		printf(" George : It is one of my work. It is right next to this bar. \n");
		getchar();
		TextChange();
		printf(" George : Well I heard someone using the stairs though. Around 2AM. \n");
		getchar();
		TextChange();
		printf(" You : I think that's enough. Thank you for your support. \n");


		printf(" >>Press enter to end the conversation.");
		getchar();
		TextChange();

		WritingClueSound();
		printf(" (George has been added to the suspect list!)");

		george_talk_status++; //set george talk status = 1
		talk_count++;		//add talk count 1
		MiniMenu();
	}
	else if (george_talk_status != 0)	//when you already talked with George, repeat the same line.
	{
		MaleTalkSound();

		TextChange();
		printf(" George : Need to be caredful to alcoholic. \n\n");

		printf(" (You have already spoken to George.) \n\n");

		printf(" >>Press enter to end the conversation.");
		getchar();
		TextChange();
		MiniMenu();
	}
}