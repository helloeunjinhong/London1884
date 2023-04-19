/**
	\file        SuspectOlivia.c
	\project     London1884
	\author      primary - Eunjin Hong
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/
#include"Header.h"
#include"Variable.h"

//set olivia_talk_status to 0
int olivia_talk_status = 0;

//print Olivia dialogue
void Talk_Olivia()
{
	if (olivia_talk_status == 0)
	{
		FemaleTalkSound();

		TextChange();
		printf(" Olivia : Oh hello there. Are you finding something? \n");
		getchar();
		TextChange();
		printf(" You : Nothing much. I just want to know about any information last night. \n");
		getchar();
		TextChange();
		printf(" Olivia : I'm just a cook here, so I don't have any information that will be helpful. \n");
		getchar();
		TextChange();
		printf(" Olivia : Well that guy, named James maybe? \n");
		getchar();
		TextChange();
		printf(" Olivia : He was at the lobby last night. \n");
		getchar();
		TextChange();
		printf(" Olivia : But then, it looks like he went upstairs with Ronald. \n");
		getchar();
		TextChange();
		printf(" Olivia : Then after few minutes only Ronald came back. \n");
		getchar();
		TextChange();
		printf(" Olivia : I was curious what they talked about. \n");
		getchar();
		TextChange();
		printf(" You : Okay. Anything more? \n");
		getchar();
		TextChange();
		printf(" Olivia : I don't know this will be relevant with this case.\n");
		getchar();
		TextChange();
		printf(" Olivia : one of the knives got missing yesterday afternoon. \n");
		getchar();
		TextChange();
		printf(" Olivia : It's still missing, but you know. That guy didn't use the knife to suicide. \n");
		getchar();
		TextChange();
		printf(" You : It could be something important. Anything more? \n");
		getchar();
		TextChange();
		printf(" Olivia : Nothing much. I was staying in this kitchen till 3 AM. \n");
		getchar();
		TextChange();
		printf(" Olivia : There was nothing special. Maid was cleaning the lobby... and that's all. \n");
		getchar();
		TextChange();
		printf(" Olivia : I went back to my room and rest. \n");
		getchar();
		TextChange();
		printf(" You : I think that's enough. Thank you for your support! \n");
		getchar();
		TextChange();
		printf(" Olivia : If it was helpful for you, I'm fine with that. \n\n");


		printf(" >>Press enter to end the conversation.");
		getchar();
		TextChange();

		WritingClueSound();
		printf(" (Olivia has been added to the suspect list!)");

		olivia_talk_status++; //set olivia talk status = 1
		talk_count++;	//add talk count 1
		MiniMenu();
	}

	//when you already talked with olivia, repeat the olivia
	else if (brian_talk_status != 0)
	{
		FemaleTalkSound();

		TextChange();
		printf(" Olivia : Wish this will never happen again. \n\n");

		printf(" (You have already spoken to Olivia.) \n\n");

		printf(" >>Press enter to end the conversation.");
		getchar();
		TextChange();
		MiniMenu();
	}
}