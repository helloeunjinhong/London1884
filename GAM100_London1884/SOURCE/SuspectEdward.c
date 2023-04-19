/**
	\file        SuspectEdward.c
	\project     London1884
	\author      primary - Eunjin Hong
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/
#include"Header.h"
#include"Variable.h"

//set edward_talk_status to 0
int edward_talk_status = 0;

//set edward talk status (timetable) to 0 (This is actual status which affects the SuspectList
int edward_talk_status_timetable = 0;	

//print dailogue with Edward
void Talk_Edward()
{
	if (edward_talk_status == 0 && timetable == 0)	//if you talk with Edward first time, without item timetable
	{
		MaleTalkSound();

		TextChange();
		printf(" Edward : What? Why are you in this room? \n");
		getchar();
		TextChange();
		printf(" You : Sorry if I surprised you. \n");
		getchar();
		TextChange();
		printf(" You : I'll try my best not to bother you. I'm just doing my job. \n");
		getchar();
		TextChange();
		printf(" Edward : I'm not in a good condition now. \n");
		getchar();
		TextChange();
		printf(" Edward : Could you please end it up already? \n");
		getchar();
		TextChange();
		printf(" Edward : I have nothing to talk with you. \n");
		getchar();
		TextChange();
		printf(" (Looks like he doesn't want to talk right now...)\n\n");

		printf(" >>Press enter to end the conversation.");
		getchar();
		TextChange();

		edward_talk_status++; //set edward talk status = 1
		MiniMenu();
	}
	else if (edward_talk_status == 0 && timetable == 1)		//if you talk with edward first time, but with timetable.
	{
		MaleTalkSound();

		TextChange();
		printf(" Edward : What? Why are you in this room? \n");
		getchar();
		TextChange();
		printf(" You : Sorry if I surprised you. \n");
		getchar();
		TextChange();
		printf(" You : I'll try my best not to bother you. I'm just doing my job. \n");
		getchar();
		TextChange();
		printf(" Edward : I'm not in a good condition now. \n");
		getchar();
		TextChange();
		printf(" Edward : Could you please end it up already? \n");
		getchar();
		TextChange();
		printf(" Edward : I have nothing to talk with you. \n");
		getchar();
		TextChange();
		printf(" You : I found this timetable. Are you the patrol during daybreak? \n");
		getchar();
		TextChange();
		printf(" Edward : It is true. But not last time. \n");
		getchar();
		TextChange();
		printf(" You : What does that mean? \n");
		getchar();
		TextChange();
		printf(" Edward : I supposed to be the patrol during last night till AM 3:00 \n");
		getchar();
		TextChange();
		printf(" Edward : However I change it with Steven since I was sick. \n");
		getchar();
		TextChange();
		printf(" Edward : He always replaced my working hours everytime I was sick. \n");
		getchar();
		TextChange();
		printf(" Edward : So I was in this room from last daybreak till now. \n");
		getchar();
		TextChange();
		printf(" You : Okay ... Anymore about last night? \n");
		getchar();
		TextChange();
		printf(" Edward : Well ... I heard Brian left his room for few minutes. \n");
		getchar();
		TextChange();
		printf(" Edward : Few minutes after, he came back to bathroom. \n");
		getchar();
		TextChange();
		printf(" Edward : This is all I can say. \n");
		getchar();
		TextChange();
		printf(" You : Okay. Thank you for your support. \n\n");


		printf(" >>Press enter to end the conversation.");
		getchar();
		TextChange();

		WritingClueSound();
		printf(" (Edward has been added to the suspect list!)");

		edward_talk_status++;	//set edward talk status = 1
		edward_talk_status_timetable++;			//set edward talk status(timetable) = 1
		talk_count++;		//add talk count 1
		MiniMenu();
	}
	
	//already talked without timetable, then talk with him one more time with timetable
	else if (edward_talk_status == 1 && timetable == 1)		
	{
		MaleTalkSound();

		TextChange();
		printf(" You : I found this timetable. Are you the patrol during dawn? \n");
		getchar();
		TextChange();
		printf(" Edward : It is true. But not last time. \n");
		getchar();
		TextChange();
		printf(" You : What does that mean? \n");
		getchar();
		TextChange();
		printf(" Edward : I supposed to be the patrol during last night till AM 3:00 \n");
		getchar();
		TextChange();
		printf(" Edward : However Steven replaced the patrol for me. \n");
		getchar();
		TextChange();
		printf(" Edward : He always replaced my working hours everytime I was sick. \n");
		getchar();
		TextChange();
		printf(" Edward : So I was in this room from last daybreak till now. \n");
		getchar();
		TextChange();
		printf(" You : Okay ... Anymore about last night? \n");
		getchar();
		TextChange();
		printf(" Edward : Well ... I heard Brian left his room for few minutes. \n");
		getchar();
		TextChange();
		printf(" Edward : Looks like he went to bathroom. \n");
		getchar();
		TextChange();
		printf(" Edward : This is all I can say. \n");
		getchar();
		TextChange();
		printf(" You : Okay. Thank you for your support. \n\n");


		printf(" >>Press enter to end the conversation.");
		getchar();
		TextChange();

		WritingClueSound();
		printf(" (Edward has been added to the suspect list!)");

		edward_talk_status++;
		edward_talk_status_timetable++;     //add the status of talk+timetable, which will affect the suspectlist.
		talk_count++;
		MiniMenu();
	}
	else if ((edward_talk_status != 0 && timetable == 0) || (edward_talk_status != 1 && timetable == 1))	//repeating line.
	{
		MaleTalkSound();
		
		TextChange();
		printf(" Edward : I told you, I have nothing to talk with you. \n\n");

		printf(" (You have already spoken to Edward.) \n\n");

		printf(" >>Press enter to end the conversation.");
		getchar();
		TextChange();
		MiniMenu();
	}
}