/**
	\file        SuspectRonald.c
	\project     London1884
	\author      primary - Eunjin Hong
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/

#include"Header.h"
#include"Variable.h"

//set ronald_talk_status to 0
int ronald_talk_status = 0;

//print Ronald dialogue
void Talk_Ronald()
{
	if (ronald_talk_status == 0)
	{
		MaleTalkSound();

		TextChange();
		printf(" Ronald :");
		printf(" Hello, what an unlucky day for you and me. \n");
		getchar();
		TextChange();
		printf(" You :");
		printf(" No matter, sir. \n");
		getchar();
		TextChange();
		printf(" You :");
		printf(" You know my job, so I wish you to help me a bit. \n");
		getchar();
		TextChange();
		printf(" Ronald :");
		printf(" Of course, but don't think I'm a killer. \n");
		getchar();
		TextChange();
		printf(" You :");
		printf(" Just one question. What did you do last night? \n");
		getchar();
		TextChange();
		printf(" Ronald :");
		printf(" All I did was playing card games with my friend John. \n");
		getchar();
		TextChange();
		printf(" Ronald :");
		printf(" That's all. After that I went to sleep. It was already midnight. \n");
		getchar();
		TextChange();
		printf(" You :");
		printf(" Never met James? \n");
		getchar();
		TextChange();
		printf(" Ronald :");
		printf(" Well..... Yes. Can't remember either I met him or not. \n");
		getchar();
		TextChange();
		printf(" Ronald :");
		printf(" You know, it was a busy night. \n");
		getchar();
		TextChange();
		printf(" You :");
		printf(" Okay, thank you sir. \n\n");


		printf(" >>Press enter to end the conversation.");
		getchar();
		TextChange();

		WritingClueSound();
		printf(" (Ronald has been added to the suspect list!)");

		ronald_talk_status++; //set ronald talk status = 1
		talk_count++;	//add talk count 1
		MiniMenu();
	}

	//when you already talked with ronald, repeat the same line.
	else if (ronald_talk_status != 0)
	{
		MaleTalkSound();

		TextChange();
		printf(" Ronald :");
		printf(" Good luck. \n\n");

		printf(" (You have already spoken to Ronald.) \n\n");

		printf(" >>Press enter to end the conversation.");
		getchar();
		TextChange();
		MiniMenu();
	}
}