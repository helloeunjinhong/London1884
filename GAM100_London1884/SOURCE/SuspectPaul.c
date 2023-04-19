/**
	\file        SuspectPaul.c
	\project     London1884
	\author      primary - Eunjin Hong
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/
#include"Header.h"
#include"Variable.h"

//set paul_talk_status to 0
int paul_talk_status = 0;

//print Paul dialogue
void Talk_Paul()
{
	if (paul_talk_status == 0)
	{
		MaleTalkSound();

		TextChange();
		printf(" You : Hello, I want to just ask you only few questions. \n");
		getchar();
		TextChange();
		printf(" You : First of all, can I know your name and job? \n");
		getchar();
		TextChange();
		printf(" Paul : I'm Paul, James fellow worker. \n");
		getchar();
		TextChange();
		printf(" You : Does that mean you had a relationship with James? \n");
		getchar();
		TextChange();
		printf(" Paul: Yes. Not long enough. \n");
		getchar();
		TextChange();
		printf(" You : Can I know what the victim, James do last night, if you were with him. \n");
		getchar();
		TextChange();
		printf(" Paul : I don't know much because I was mostly in my room. \n");
		getchar();
		TextChange();
		printf(" Paul : However, he do had a plan to talk with Ronald. \n");
		getchar();
		TextChange();
		printf(" Paul : It was very important. I heard he bet his whole thing. \n");
		getchar();
		TextChange();
		printf(" Paul : That means if he fails, he will be totally broke. \n");
		getchar();
		TextChange();
		printf(" Paul : Looks like he failed the contract with him... \n");
		getchar();
		TextChange();
		printf(" Paul : Didn't know he would choose this decision... \n");
		getchar();
		TextChange();
		printf(" You : Okay. Thank you. I think that's enough. \n");
		getchar();
		TextChange();
		printf(" You : Anything you did last night? \n");
		getchar();
		TextChange();
		printf(" Paul : I was in my room. Whole day. \n");
		getchar();
		TextChange();
		printf(" Paul : I had a sea sick. So I almost spend my time in room. \n");


		printf(" >>Press enter to end the conversation.");
		getchar();
		TextChange();

		WritingClueSound();
		printf(" (Paul has been added to the suspect list!)");

		paul_talk_status++; //set paul talk status = 1
		talk_count++;  //add talk count 1
		MiniMenu();
	}

	//when you already talked with paul, repeat the same line
	else if (paul_talk_status != 0)
	{
		MaleTalkSound();

		TextChange();
		printf(" Paul : Still don't feel so well... \n\n");

		printf(" (You have already spoken to Paul.) \n\n");

		printf(" >>Press enter to end the conversation.");
		getchar();
		TextChange();
		MiniMenu();
	}
}