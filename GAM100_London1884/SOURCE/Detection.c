/**
	\file        Detection.c
	\project     London1884
	\author      primary - Eunjin Hong
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/
#include "Header.h"
#include"Define.h"
#include"Variable.h"


//set detective loop variable as true
int wholedetectiveLoop = 1;
int detectiveLoop1 = 1;
int detectiveLoop2 = 1;
int detectiveLoop3 = 1;
int detectiveLoop4 = 1;
int detectiveLoop5 = 1;
int detectiveLoop6 = 1;
int detectiveLoop7 = 1;
int detectiveLoop8 = 1;
int detectiveLoop9 = 1;
int detectiveLoop10 = 1;
int detectiveLoop11 = 1;
int detectiveLoop12 = 1;
int detectiveLoop13 = 1;


//intialize each variable
int choice = -1;
int picNum = 1;
int chance = 3;
int JamesAndInfo = 0;

void DetectionGameLoop()
{
	choice = -1;
	picNum = 1;
	JamesAndInfo = 0;
	chance = 3;
	CloseSound();

	TitleBackGroundMusic();

	system("cls");

	Sleep(2000);

	//print picNum case 1
	PrintPicture();

	//print dialogue of detection
	printf("\n");
	printf("You : Thank you for gathering here. \n\n");
	printf("Enter to Continue");
	getchar();

	TextChangeDetection();
	printf("\n");
	printf("You : I gathered you people because we need a talk about this case. \n\n");
	printf("Enter to Continue");
	getchar();

	TextChangeDetection();
	printf("\n");
	printf("Steven : Where¡¯s Edward? \n\n");
	printf("Enter to Continue");
	getchar();

	TextChangeDetection();
	printf("\n");
	printf("Brian : He said he is too sick to come. Is it okay detective? \n\n");
	printf("Enter to Continue");
	getchar();

	TextChangeDetection();
	printf("\n");
	printf("You : I¡¯m okay with that. Well where should we start first . . . \n\n");
	printf("Enter to Continue");
	getchar();

	TextChangeDetection();
	printf("\n");
	printf("Paul : I thought it was suicide. \n\n");
	printf("Enter to Continue");
	getchar();

	TextChangeDetection();
	printf("\n");
	printf("Paul : You said his head was hanging by the rope. \n\n");
	printf("Enter to Continue");
	getchar();

	TextChangeDetection();
	printf("\n");
	printf("Emma : Yes it is true ¡¦  \n\n");
	printf("Enter to Continue");
	getchar();

	TextChangeDetection();
	printf("\n");
	printf("John : It is just time of waste talking about how he died. I¡¯m sure he killed himself.\n\n");
	printf("Enter to Continue");
	getchar();

	TextChangeDetection();
	printf("\n");
	printf("You : No it is not a suicide. I¡¯m sure about this. \n\n");
	printf("Enter to Continue");
	getchar();

	TextChangeDetection();
	printf("\n");
	printf("John : What¡¯s the proof? \n\n");
	printf("Enter to Continue");
	getchar();

	TextChangeDetection();
	printf("\n");
	printf("You : What was the proof of it¡¦ \n\n");
	printf("Enter to Continue");
	getchar();

	DetectionLoop1();

	//if whole detective loop is true print dialogue
	if (wholedetectiveLoop)
	{
		TextChangeDetection();
		printf("\n");
		printf("Brian : Isn¡¯t it just a bruise of the rope? \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("You : When you look close to it, its hand-shaped. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("You : You can know that it is killed by someone else by hand, and then it was made-up to look like a suicide.\n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("Steven : Well ¡¦. Looks like it is a murder, not a suicide.\n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("Ronald : Then isn¡¯t it easy? There will be someone who asked a sailor for the rope.\n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("Ronald : That person will be the killer.\n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("You : Calm down please. Before finding that, we need to find out when he died. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("You : Olivia : How are you going to find that? \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("You : Well ... There was someone who heard the sound... \n\n");
		printf("Enter to Continue");

	}

	//activate Detection Loop2
	DetectionLoop2();

	//if whole detective loop is true print dialogue
	if (wholedetectiveLoop)
	{
		TextChangeDetection();
		printf("\n");
		printf("You : Not only that, he was alive until that time. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("You : There was someone who heard another noise around that time which could be the murderer... \n\n");
		printf("Enter to Continue");
	}

	//activate detection loop3
	DetectionLoop3();

	//if whole detective loop is true print dialogue
	if (wholedetectiveLoop)
	{
		TextChangeDetection();
		printf("\n");
		printf("Olivia : Well looks like it is around 2AM. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("Brian : The men bathroom is only on third floor, so there will be no reason for him to use stairs. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("Ronald : Wait, wasn¡¯t his room got locked? \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("Ronald : Then how did the murderer get inside his room? \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("Ronald : Isn¡¯t a person who can open the passenger rooms a murderer ? \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("Paul : I don¡¯t think there will be a person who could freely open someone¡¯s room. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("You : There actually is¡¦. Only one person... \n\n");
		printf("Enter to Continue");

	}

	//activate detection loop 4
	DetectionLoop4();
	
	//if whole detective loop is true print dialogue
	if (wholedetectiveLoop)
	{
		TextChangeDetection();
		printf("\n");
		printf("Emma : I am saying, I am not the murderer here. It¡¯s true, you need to believe me. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("You : She is not a murderer, this is true. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("Ronald : How can you know that? \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("You : (It is sure that she is not a murderer,¡¦ There was someone who saw her¡¦ at the other place \n\n");
		printf("Enter to Continue");
	}

	//activate detection loop 5
	DetectionLoop5();

	//if whole detective loop is true print dialogue
	if (wholedetectiveLoop)
	{
		TextChangeDetection();
		printf("\n");
		printf("Brian : I know they both are not in some special relationship. So I don¡¯t think she is lying. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("Steven : I think Olivia is not also a murderer, as they both were on the first floor ¡¦ \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("Paul : Looks like we need to find who ever met James last night first. I guess \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("Ronald : Well, then I¡¯m not a murderer either. Because I never met him last night. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("You : What? \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("Ronald : I said I never met him last night. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("Ronald : I was spending my whole time at lobby, then went back to my room for sleep. That¡¯s all.\n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("You : ( I know he is lying right now ¡¦What was that thing in victims room which was related to him ...)\n\n");
		printf("Enter to Continue");
	}

	//activate detection loop6
	DetectionLoop6();

	//if whole detective loop is true print dialogue
	if (wholedetectiveLoop)
	{
		TextChangeDetection();
		printf("\n");
		printf("You : I never said you¡¯re the murderer. I¡¯m just saying you were lying. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("You : Actually there is one more. You actually do talked with James for few minutes. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("Ronald : How can you know that? \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("You : ( There was someone who saw James talking with somebody¡¦)\n\n");
		printf("Enter to Continue");
	}

	//activate detection loop 7
	DetectionLoop7();

	//if whole detective loop is true print dialogue
	if (wholedetectiveLoop)
	{
		TextChangeDetection();
		printf("\n");
		printf("Ronald : Didn¡¯t you look wrong? It was late night , there is a possibility he misunderstood someone else to me.\n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("You : No, it is you. I¡¯m sure about this. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("You : (There was someone who knows about that contract paper¡¦)\n\n");
		printf("Enter to Continue");
	}

	//activate detection loop 8
	DetectionLoop8();

	//if whole detective loop is true print dialogue
	if (wholedetectiveLoop)
	{
		picNum = 1;
		system("cls");
		PrintPicture();

		TextChangeDetection();
		printf("\n");
		printf("Ronald : Yes, it is true. But seriously, I didn¡¯t kill him. I promise. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("Brian : What? Why did you lie then? That is way too fishy. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("Paul : I think he was just scared to get suspected. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("Paul : I actually understand though. Because that contract was pretty important to James. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("Paul : If he rejects it, it is almost like killing him. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("You : We are still in a talk, I want you not to lie another time. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("Ronald : I¡¯ll promise. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("Emma : Looks like Ronald had met James last night. Anyone else? \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("You : I think most of the people here met with him. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("Brian : Steven, you said you saw him talking with Ronald. Aren¡¯t there anything else? \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("Steven : I was the patrol until midnight. So I don¡¯t know after those hours. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("Steven : Well I saw him going upstairs after that. Looks like he was going to the bar. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("Paul : Wasn¡¯t he going to his room? \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("George : No, sure I saw him came to the bar. He spend his time at there until 1 AM. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("George : Then Brian had took him to his room. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("Brian : When I went upstairs for bathroom, I saw him fully drunk.\n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("Brian : Looks like he couldn¡¯t walk properly. So I took him to his room. \n\n");
		printf("Enter to Continue");
		getchar();

		picNum = 3;
		system("cls");
		PrintPicture();

		TextChangeDetection();
		printf("\n");
		printf("John : Aren¡¯t you the person, who took him to his room, and then killed him. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("Brian : No, I didn¡¯t, seriously. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("Brian : I just took him to his room, and went back to my room. That¡¯s all. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("John : I¡¯m sure he¡¯s lying. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("You : (He is not lying. I know someone who saw Brian came back) \n\n");
		printf("Enter to Continue");
	}

	//activate detection loop 9
	DetectionLoop9();

	//if whole detective loop is true print dialogue
	if (wholedetectiveLoop)
	{
		TextChangeDetection();
		printf("\n");
		printf("Olivia : But are you sure that he died around 2 AM ? It was just the noise of door opening. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("You : George heard someone using the stairs around 2 AM. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("You : I think that means the murderer was using the stairs for something. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("Olivia : For what? \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("You : I think it is for ... \n\n");
		printf("Enter to Continue");
	}

	//activate detection loop 10
	DetectionLoop10();

	//if whole detective loop is true print dialogue
	if (wholedetectiveLoop)
	{
		TextChangeDetection();
		printf("\n");
		printf("You : ... I think we should check who has clear alibi. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("You : First, Emma and Olivia was staying at the lobby during that time. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("You : George was at the bar, hearing the sound around 2AM someone using the stairs. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("You : Looks like one of the sailor is the murderer. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("Brian : Wait, what about them? Paul, John and Ronald? \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("You : I¡¯m sure they¡¯re not the suspects. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("Steven : Why? \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("You : Because ... \n\n");
		printf("Enter to Continue");
	}

	//activate detection loop 11
	DetectionLoop11();

	//if whole detective loop is true print dialogue
	if (wholedetectiveLoop)
	{
		TextChangeDetection();
		printf("\n");
		printf("You : But previously, We know Brian is not a killer here. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("George : But it was around 1 AM. There will be a possibility for him to get our from the room at 2 AM. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("George : Wasn¡¯t he the patrol? \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("Brian : I was not a patrol at that time... \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("You : He's right. He was not a patrol. The patrol was... \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("You : (There was a thing that could let us know who was the patrol...) \n\n");
		printf("Enter to Continue");
	}

	//activate detection loop 12
	DetectionLoop12();

	//if whole detective loop is true print dialogue
	if (wholedetectiveLoop)
	{
		TextChangeDetection();
		printf("\n");
		printf("You : In summary, the murderer was working as a patrol around 2AM. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("You : Then he know that the victim, James room door was open, for coincidence. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("You : The murderer was already planning to kill him, already having a knife. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("You : However, he decided to use a trick. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("You : He went downstairs, which is what the noise George heard. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("You : He opened the warehouse, cutted the rope with a knife. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("You : After that, he went back upstairs, going into his room. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("You : Then he started choking his neck with his hands, which is why the bruises appeared. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("You : Next, he hanged his neck with a rope, to look like a suicide scene. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("Brian : Does that mean ... Edward is a murderer? But he was sick! \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("Ronald : Looks like that's why he is absent right now. \n\n");
		printf("Enter to Continue");
		getchar();

		TextChangeDetection();
		printf("\n");
		printf("You : (Really? I don't think he's a murderer.... I know why....) \n\n");
		printf("Enter to Continue");
		getchar();
	}

	//activate detection loop 13
	DetectionLoop13();

	if (wholedetectiveLoop == 1) //if player has cleared the whole detection part
	{
		GameClear();
	}
	else if (wholedetectiveLoop == 0) //if player has failed the detection part
	{
		Fail();
	}
}

//function of detection loop
void DetectionLoop1()
{
	while (detectiveLoop1) //while detection loop is true
	{
		ChoiceMenu(); //activate choice menu selection
		if (JamesAndInfo == 1)
		{
			
		}
		else
		{
			switch (choice)
			{
			case 4:		//if player choose write answer
				TextChangeDetection();
				printf("\n");
				printf("You : Are there anyone who checked the neck of the victim? \n\n");
				printf("Enter to Continue");
				getchar();
				TextChangeDetection();
				printf("\n");
				printf("You : If you look his neck around, there is a bruise around his neck.\n\n");
				printf("Enter to Continue");
				getchar();
				detectiveLoop1 = 0; //set detective loop false
				break;
			default:	//if player choose wrong answer
				TextChangeDetection();
				chance -= 1;
				printf("\n");
				printf("John : What does that mean?\n\n");
				printf("Enter to Continue");
				getchar();
				DetectionFail();
				TextChangeDetection();
				printf("\n");
				printf("You: I think I was wrong about something. It is sure not a suicide . . .\n\n");
				DetectionLoop1(); //repeat detection loop
				break;
			}
			
		}
		JamesAndInfo = 0; //set James And Info False
	}
}

//function of detection loop
void DetectionLoop2()
{
	while (detectiveLoop2) //while detection loop is true
	{
		ChoiceMenu(); //activate choice menu selection
		if (JamesAndInfo == 1)
		{
			
		}
		else
		{
			switch (choice)
			{
			case 20: //if player choose write answer
				TextChangeDetection();
				printf("\n");
				printf("You : I heard that Johns heard the door sound around 2 AM. \n\n");
				printf("Enter to Continue");
				getchar();
				TextChangeDetection();
				printf("\n");
				printf("You : That must be the time when the murderer got inside to his room. Is it right?\n\n");
				printf("Enter to Continue");
				getchar();
				TextChangeDetection();
				printf("\n");
				printf("John : Well ¡¦ It is true.\n\n");
				printf("Enter to Continue");
				getchar();
				detectiveLoop2 = 0; //set detective loop false
				break;
			default:
				TextChangeDetection(); //if player choose wrong answer
				chance -= 1;
				printf("\n");
				printf("Olivia : Could that be a proof? I can't understand. \n\n");
				printf("Enter to Continue");
				getchar();
				DetectionFail();
				TextChangeDetection();
				printf("\n");
				printf("You: Huh? It's not... There was someone who heard the sound from his room... \n\n");
				DetectionLoop2(); //repeat detection loop
				break;
			}
		}
		JamesAndInfo = 0; //set JamesAndInfo false
	}
}

//function of detection loop
void DetectionLoop3()
{
	while (detectiveLoop3)//while detection loop is true
	{
		ChoiceMenu();//activate choice menu selection
		if (JamesAndInfo == 1)
		{
			
		}
		
		else
		{
			switch (choice)
			{
			case 19: //if player choose write answer
				TextChangeDetection();
				printf("\n");
				printf("You : George said he heard the noise who is using stairs around that timeline. \n\n");
				printf("Enter to Continue");
				getchar();
				TextChangeDetection();
				printf("\n");
				printf("George : Yes, I did said that.\n\n");
				printf("Enter to Continue");
				getchar();
				TextChangeDetection();
				printf("\n");
				printf("John : Didn¡¯t you see who that was? \n\n");
				printf("Enter to Continue");
				getchar();
				TextChangeDetection();
				printf("\n");
				printf("George : I¡¯m sorry, I can¡¯t check one by one. The only thing I know clearly is that I heard that noise. \n\n");
				printf("Enter to Continue");
				getchar();
				detectiveLoop3 = 0; //set detective loop false
				break;
			default: //if player choose wrong answer
				TextChangeDetection(); 
				chance -= 1;
				printf("\n");
				printf("Emma : I don't think that could be a proof...\n\n");
				printf("Enter to Continue");
				getchar();
				DetectionFail();
				TextChangeDetection();
				printf("\n");
				printf("You: Damn it!, there must be \"someone\" who heard another noise around 2AM...\n\n");
				DetectionLoop3(); //repeat detection loop
				break;
			}
		}
		JamesAndInfo = 0; //set JamesAndInfo false
	}
}

//function of detection loop
void DetectionLoop4()
{
	while (detectiveLoop4)//while detection loop is true
	{
		ChoiceMenu(); //activate choice menu selection
		if (JamesAndInfo == 1)
		{
			
		}

		else
		{
			switch (choice)
			{
			case 16: //if player choose write answer
				TextChangeDetection();
				printf("\n");
				printf("You : Well, the maid of this ship, she has the public key, which could open the rooms of passengers¡¦ \n\n");
				printf("Enter to Continue");
				getchar();
				TextChangeDetection();
				printf("\n");
				printf("Emma : What? Wait, I¡¯m not the murderer here! I was cleaning the lobby at that time. \n\n");
				printf("Enter to Continue");
				getchar();
				TextChangeDetection();
				printf("\n");
				printf("Ronald : I can¡¯t believer her. Isn¡¯t she the first person who find James dead body? \n\n");
				printf("Enter to Continue");
				getchar();
				TextChangeDetection();
				printf("\n");
				printf("Ronald : It could be just acting that she¡¯s not the killer. \n\n");
				printf("Enter to Continue");
				getchar();
				detectiveLoop4 = 0; //set detective loop false
				break;
			default: //if player choose wrong answer
				TextChangeDetection();
				chance -= 1;
				printf("Paul : I don't think he/she is able to open the doors...\n");
				printf("Enter to Continue");
				getchar();
				DetectionFail();
				TextChangeDetection();
				printf("You: Damn it!, there must be \"something\" to prove it!");
				DetectionLoop4(); //repeat detection loop
				break;
			}
		}
		JamesAndInfo = 0; //set JamesAndInfo false
	}

}

//function of detection loop
void DetectionLoop5()
{
	while (detectiveLoop5) //while detection loop is true
	{
		ChoiceMenu(); //activate choice menu selection
		if (JamesAndInfo == 1)
		{
			
		}

		else
		{

			switch (choice)
			{
			case 21: //if player choose write answer
				TextChangeDetection();
				printf("\n");
				printf("You : Olivia, who works at the kitchen next to the lobby, said she saw Emma cleaning the lobby till 3AM. \n\n");
				printf("Enter to Continue");
				getchar();
				TextChangeDetection();
				printf("\n");
				printf("You : This means she is not someone who killed him around 2 AM.\n\n");
				printf("Enter to Continue");
				getchar();
				TextChangeDetection();
				printf("\n");
				printf("Olivia : Welp, that¡¯s true.\n\n");
				printf("Enter to Continue");
				getchar();
				TextChangeDetection();
				printf("\n");
				printf("Ronald : What if it¡¯s a lie? \n\n");
				printf("Enter to Continue");
				getchar();

				detectiveLoop5 = 0; //set detective loop false
				break;
			default: //if player choose wrong answer
				TextChangeDetection();
				chance -= 1;
				printf("Julia: Come on! Don't give me anything weird!\n");
				printf("Enter to Continue");
				getchar();
				DetectionFail();
				TextChangeDetection();
				printf("You: Oh! The most basic cause is...");
				DetectionLoop5(); //repeat detection loop
				break;
			}
		}
		JamesAndInfo = 0; //set JamesAndInfo false
	}
}

//function of detection loop
void DetectionLoop6()
{
	while (detectiveLoop6) //while detection loop is true
	{
		ChoiceMenu(); //activate choice menu selection
		if (JamesAndInfo == 1)
		{

		}
		else
		{
			switch (choice)
			{
			case 5: //if player choose write answer
				TextChangeDetection();
				printf("\n");
				printf("You : Please don¡¯t lie Ronald. I know you met with James. \n\n");
				printf("Enter to Continue");
				getchar();
				TextChangeDetection();
				printf("\n");
				printf("You : Here¡¯s the contract paper. There¡¯s your name on this contract.\n\n");
				printf("Enter to Continue");
				getchar();
				TextChangeDetection();
				printf("\n");
				printf("You : Here¡¯s the contract paper.There¡¯s your name on this contract.\n\n");
				printf("Enter to Continue");
				getchar();
				TextChangeDetection();
				picNum = 2;
				system("cls");
				PrintPicture();
				printf("\n");
				printf("Ronald : Don¡¯t say that piece of paper with my name means I¡¯m a murderer. \n\n");
				printf("Enter to Continue");
				getchar();
				detectiveLoop6 = 0; //set detective loop false
				break;
			default: //if player choose wrong answer
				TextChangeDetection();
				chance -= 1;
				printf("\n");
				printf("Ronald : Are you serious? \n\n");
				printf("Enter to Continue");
				getchar();
				DetectionFail();
				TextChangeDetection();
				printf("\n");
				printf("You : I made a mistake... But there was a thing which I could find on the victims room ...\n\n");
				DetectionLoop6(); //repeat detection loop
				break;
			}

		}
		JamesAndInfo = 0; //set JamesAndInfo false
	}
}

//function of detection loop
void DetectionLoop7()
{
	while (detectiveLoop7) //while detection loop is true
	{
		ChoiceMenu();
		if (JamesAndInfo == 1) //activate choice menu selection
		{

		}
		else
		{
			switch (choice)
			{
			case 32: //if player choose write answer
				TextChangeDetection();
				printf("\n");
				printf("You : Steven said he saw James talking with someone at 1st stairs. \n\n");
				printf("Enter to Continue");
				getchar();
				TextChangeDetection();
				printf("\n");
				printf("Steven : Oh, I remember. You were talking with him last night.\n\n");
				printf("Enter to Continue");
				getchar();
				detectiveLoop7 = 0; //set detective loop false
				break;
			default: //if player choose wrong answer
				TextChangeDetection();
				chance -= 1;
				printf("\n");
				printf("Ronald : Are you serious? \n\n");
				printf("Enter to Continue");
				getchar();
				DetectionFail();
				TextChangeDetection();
				printf("\n");
				printf("You: I think I was wrong about something. But there was someone who saw him . . .\n\n");
				DetectionLoop7(); //repeat detection loop
				break;
			}

		}
		JamesAndInfo = 0; //set JamesAndInfo false
	}
}

//function of detection loop
void DetectionLoop8()
{
	while (detectiveLoop8) //while detection loop is true
	{
		ChoiceMenu(); //activate choice menu selection
		if (JamesAndInfo == 1)
		{

		}
		else
		{
			switch (choice)
			{
			case 26: //if player choose write answer
				TextChangeDetection();
				printf("\n");
				printf("You : Paul said James originally planned to talk with you that night. \n\n");
				printf("Enter to Continue");
				getchar();
				TextChangeDetection();
				printf("\n");
				printf("Ronald : ....\n\n");
				printf("Enter to Continue");
				getchar();
				TextChangeDetection();
				printf("\n");
				printf("You : It¡¯s your one last chance. You met James last night.\n\n");
				printf("Enter to Continue");
				getchar();
				TextChangeDetection();
				printf("\n");
				printf("Ronald : ...\n\n");
				printf("Enter to Continue");
				getchar();
				TextChangeDetection();
				printf("\n");
				printf("Ronald : ..\n\n");
				printf("Enter to Continue");
				getchar();
				TextChangeDetection();
				printf("\n");
				printf("Ronald : .\n\n");
				printf("Enter to Continue");
				getchar();
				detectiveLoop8 = 0; //set detective loop false
				break;
			default: //if player choose wrong answer
				TextChangeDetection();
				chance -= 1;
				printf("\n");
				printf("Ronald : Are you serious? \n\n");
				printf("Enter to Continue");
				getchar();
				DetectionFail();
				TextChangeDetection();
				printf("\n");
				printf("You: I made a mistake! But I'm sure there was someone who knows. . .\n\n");
				DetectionLoop8(); //repeat detection loop
				break;
			}

		}
		JamesAndInfo = 0; //set JamesAndInfo false
	}
}

//function of detection loop
void DetectionLoop9()
{
	while (detectiveLoop9) //while detection loop is true
	{
		ChoiceMenu(); //activate choice menu selection
		if (JamesAndInfo == 1)
		{

		}
		else
		{
			switch (choice)
			{
			case 14: //if player choose write answer
				picNum = 1;
				system("cls");
				PrintPicture();

				TextChangeDetection();
				printf("\n");
				printf("You : Actually he is telling the truth. \n\n");
				printf("Enter to Continue");
				getchar();
				TextChangeDetection();
				printf("\n");
				printf("You : Another sailor named Edward said he heard Brian going out and came back in few minutes. \n\n");
				printf("Enter to Continue");
				getchar();
				TextChangeDetection();
				printf("\n");
				printf("You : Moreover, George said previously, he stayed at the bar until 1 AM. \n\n");
				printf("Enter to Continue");
				TextChangeDetection();
				printf("\n");
				printf("You : We talked that he died around 2AM few minutes ago. \n\n");
				printf("Enter to Continue");
				getchar();
				TextChangeDetection();
				printf("\n");
				printf("You : I know you¡¯re uncomfortable about this situation, but I want you not to hesitate. \n\n");
				printf("Enter to Continue");
				getchar();
				detectiveLoop9 = 0; //set detective loop false
				break;
			default: //if player choose wrong answer
				TextChangeDetection();
				chance -= 1;
				printf("\n");
				printf("John : Are you sure? \n\n");
				printf("Enter to Continue");
				getchar();
				DetectionFail();
				TextChangeDetection();
				printf("\n");
				printf("You: Looks like I got it wrong.. There was someone who said he was Brian...\n\n");
				DetectionLoop9(); //repeat detection loop
				break;
			}

		}
		JamesAndInfo = 0; //set JamesAndInfo false
	}
}

//function of detection loop
void DetectionLoop10()
{
	while (detectiveLoop10) //while detection loop is true
	{
		ChoiceMenu(); //activate choice menu selection
		if (JamesAndInfo == 1)
		{

		}
		else
		{
			switch (choice)
			{ 
			case 0://if player choose write answer
				TextChangeDetection();
				printf("\n");
				printf("You : He went to second floor to take the rope from the warehouse. \n\n");
				printf("Enter to Continue");
				getchar();
				TextChangeDetection();
				printf("\n");
				printf("You : It looks like he used a knife to cut the rope of it. \n\n");
				printf("Enter to Continue");
				getchar();
				TextChangeDetection();
				printf("\n");
				printf("Olivia : knife? \n\n");
				printf("Enter to Continue");
				TextChangeDetection();
				printf("\n");
				printf("You : You said one of the night gone missing afternoon. I think that knife was from the kitchen.\n\n");
				printf("Enter to Continue");
				getchar();
				TextChangeDetection();
				printf("\n");
				printf("Olivia : But it was afternoon, not midnight. \n\n");
				printf("Enter to Continue");
				getchar();
				TextChangeDetection();
				printf("\n");
				printf("You : I think the murderer was planning to kill him before that night ... \n\n");
				printf("Enter to Continue");
				getchar();
				detectiveLoop10 = 0; //set detective loop false
				break;
			default: //if player choose wrong answer
				TextChangeDetection();
				chance -= 1;
				printf("\n");
				printf("Olivia : Sorry, but I can't understand what you're meaning \n\n");
				printf("Enter to Continue");
				getchar();
				DetectionFail();
				TextChangeDetection();
				printf("\n");
				printf("You: Looks like I got it wrong.. There was a thing he used when killing him.. on 1st floor...\n\n");
				DetectionLoop10(); //repeat detection loop
				break;
			}

		}
		JamesAndInfo = 0; //set JamesAndInfo false
	}
}

//function of detection loop
void DetectionLoop11()
{
	while (detectiveLoop11) //while detection loop is true
	{
		ChoiceMenu(); //activate choice menu selection
		if (JamesAndInfo == 1)
		{

		}
		else
		{
			switch (choice)
			{
			case 6: //if player choose write answer
				TextChangeDetection();
				printf("\n");
				printf("You : Captain said only sailors could open the warehouse.  \n\n");
				printf("Enter to Continue");
				getchar();
				TextChangeDetection();
				printf("\n");
				printf("You : The rope is only located in the warehouse, moreover it was cutted from the knife.\n\n");
				printf("Enter to Continue");
				getchar();
				TextChangeDetection();
				printf("\n");
				printf("You : So I'm sure the murderer used the 1st floors warehouse's rope. \n\n");
				printf("Enter to Continue");
				TextChangeDetection();
				printf("\n");
				printf("You : The murderer used the stairs for the rope, it is a person who could open, and lock the warehouse.\n\n");
				printf("Enter to Continue");
				getchar();
				TextChangeDetection();
				printf("\n");
				printf("You : Which are sailors.\n\n");
				printf("Enter to Continue");
				getchar();
				detectiveLoop11 = 0; //set detective loop false
				break;
			default: //if player choose wrong answer
				TextChangeDetection();
				chance -= 1;
				printf("\n");
				printf("Steven : This is not time for jokes... \n\n");
				printf("Enter to Continue");
				getchar();
				DetectionFail();
				TextChangeDetection();
				printf("\n");
				printf("You: It's not...? But I'm sure there was someone who told me about the sailors... \n\n");
				DetectionLoop11(); //repeat detection loop
				break;
			}

		}
		JamesAndInfo = 0; //set JamesAndInfo false
	}
}

//function of detection loop
void DetectionLoop12()
{
	while (detectiveLoop12) //while detection loop is true
	{
		ChoiceMenu(); //activate choice menu selection
		if (JamesAndInfo == 1)
		{

		}
		else
		{
			switch (choice)
			{
			case 2: //if player choose write answer
				TextChangeDetection();
				printf("\n");
				printf("You : On this time-table, the patrol till 3AM was Edward. \n\n");
				printf("Enter to Continue");
				getchar();
				TextChangeDetection();
				printf("\n");
				printf("Brian : Isn¡¯t he absent here? \n\n");
				printf("Enter to Continue");
				getchar();
				TextChangeDetection();
				printf("\n");
				printf("Ronald : Wait, what about the door? How did he opened it? \n\n");
				printf("Enter to Continue");
				TextChangeDetection();
				printf("\n");
				printf("You : When you took him to his room, did you locked his room Brian?\n\n");
				printf("Enter to Continue");
				getchar();
				TextChangeDetection();
				printf("\n");
				printf("Brian : Actually, I can¡¯t remember it¡¦.\n\n");
				printf("Enter to Continue");
				getchar();
				TextChangeDetection();
				printf("\n");
				printf("You : You said he was totally drunk. I think that's why he didn't lock his room. \n\n");
				printf("Enter to Continue");
				getchar();
				detectiveLoop12 = 0; //set detective loop false
				break;
			default: //if player choose wrong answer
				TextChangeDetection();
				chance -= 1;
				printf("\n");
				printf("Emma : I'm sorry. But I don't think that could be an evidence... \n\n");
				printf("Enter to Continue");
				getchar();
				DetectionFail();
				TextChangeDetection();
				printf("\n");
				printf("You: Looks like I'm wrong. But there was a thing that let us know which time who was the patrol.. \n\n");
				DetectionLoop12(); //repeat detection loop
				break;
			}

		}
		JamesAndInfo = 0; //set JamesAndInfo false
	}
}

//function of detection loop
void DetectionLoop13()
{
	while (detectiveLoop13) //while detection loop is true
	{
		ChoiceMenu(); //activate choice menu selection
		if (JamesAndInfo == 1)
		{

		}
		else
		{
			switch (choice)
			{
			case 13: //if player choose write answer
				TextChangeDetection();
				printf("\n");
				printf("You : ..Edward is not a murderer. Steven is. \n\n");
				printf("Enter to Continue");
				getchar();
				TextChangeDetection();
				printf("\n");
				printf("Brian : What? \n\n");
				printf("Enter to Continue");
				getchar();
				TextChangeDetection();
				printf("\n");
				printf("You : Steven had changed his working time with Edward. Becuase Edward was sick. \n\n");
				printf("Enter to Continue");
				TextChangeDetection();
				printf("\n");
				printf("Brian : I know he often replaced his working hours...\n\n");
				printf("Enter to Continue");
				getchar();
				TextChangeDetection();
				printf("\n");
				printf("Brian : But ... \n\n");
				printf("Enter to Continue");
				getchar();
				TextChangeDetection();
				printf("\n");
				printf("You : Is it right? \n\n");
				printf("Enter to Continue");
				getchar();
				TextChangeDetection();
				printf("\n");
				printf("Steven : ..... \n\n");
				printf("Enter to Continue");
				getchar();
				TextChangeDetection();
				printf("\n");
				printf("Steven : ... \n\n");
				printf("Enter to Continue");
				getchar();
				printf("\n");
				printf("Steven : .. \n\n");
				printf("Enter to Continue");
				getchar();
				getchar();
				printf("\n");
				printf("Steven : Yes, I did kill him.. \n\n");
				printf("Enter to Continue");
				getchar();
				detectiveLoop13 = 0; //set detective loop false
				break;
			default: //if player choose wrong answer
				TextChangeDetection();
				chance -= 1;
				printf("\n");
				printf("Paul : It's no time for jokes.... \n\n");
				printf("Enter to Continue");
				getchar();
				DetectionFail();
				TextChangeDetection();
				printf("\n");
				printf("You: Damn it.. But I feel really uncomfortable about this..And I know why.. \n\n");
				DetectionLoop13(); //repeat detection loop
				break;
			}

		}
		JamesAndInfo = 0; //set JamesAndInfo false
	}
}
