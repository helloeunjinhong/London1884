/**
	\file        SuspectEmma.c
	\project     London1884
	\author      primary - Eunjin Hong
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/
#include"Header.h"
#include"Variable.h"

//set emma_talk_status to 0
int emma_talk_status = 0;

//print Emma dialogue
void Talk_Emma()
{
	if (emma_talk_status == 0)		
	{
		FemaleTalkSound();

		TextChange();
		printf(" You : Oh hello, look like you're a worker of this ship. \n");
		getchar();
		TextChange();
		printf(" Emma : Hello... My name is Emma. \n");
		getchar();
		TextChange();
		printf(" You : I heard you're the first person who find the dead body of the victim. \n");
		getchar();
		TextChange();
		printf(" You : Could I ask you how you found his body specifically? \n");
		getchar();
		TextChange();
		printf(" Emma: Well, I was just trying to do my work. Morning, I knocked his room. \n");
		getchar();
		TextChange();
		printf(" Emma : What an unlucky day. I just want you to help me with my job. \n");
		getchar();
		TextChange();
		printf(" Emma : It was around 9:30 AM. \n");
		getchar();
		TextChange();
		printf(" Emma : But it was still locked, so I just used the public key. \n");
		getchar();
		TextChange();
		printf(" You : Public key? \n");
		getchar();
		TextChange();
		printf(" Emma : Yes. It is used to open passenger's room. \n");
		getchar();
		TextChange();
		printf(" Emma : Sometimes there are some passengers accidently lock their room and left. \n");
		getchar();
		TextChange();
		printf(" You : Oh... Is it okay to borrow those keys? \n");
		getchar();
		TextChange();
		printf(" Emma : The public key is in the maid's room. So I'll give you the maid's room key. \n\n\n");

		KeySound();
		printf(" You gained up the maid room key!\n\n");

		printf(" (maid room key has been added to the inventory!)");

		maid_room_key += 1;		//gain item 'Maid room key'
		item_count += 1;		//add item count 1

		getchar();
		TextChange();
		printf(" You : What did you do last night then? \n");
		getchar();
		TextChange();
		printf(" Emma : I was cleaning the lobby. Midnight till noon is my cleaning hours. \n");
		getchar();
		TextChange();
		printf(" You : Okay, thank you for your support. \n\n");



		printf(" >>Press enter to end the conversation.");
		getchar();
		TextChange();

		WritingClueSound();
		printf(" (Emma has been added to the suspect list!)");

		emma_talk_status++;	 //set emma talk status = 1
		talk_count++;		//add talk count 1
		MiniMenu();	
	}
	else if (emma_talk_status != 0)		//when you aready talked with emma, print repeating line
	{
		FemaleTalkSound();

		TextChange();
		printf(" Emma : I wish this was a dream .... \n\n");

		printf(" (You have already spoken to Emma.) \n\n");

		printf(" >>Press enter to end the conversation.");
		getchar();
		TextChange();
		MiniMenu();
	}
}