/**
	\file        NonSuspectFunction.c
	\project     London1884
	\author      primary - Do Yeong Yi
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/
#include"Header.h"
#include"Define.h"
#include"Variable.h"


//print Kevin dialogue
void Talk_Kevin() {
	MaleTalkSound();

 	TextChange();
	printf(" Kevin : If you know assembly langeuage, It is easy to fix errors.\n\n");
	getchar();
	TextChange();
	printf(" Kevin : Make sense?\n");
	printf(" >>Press enter to end the conversation.");
	getchar();
	TextChange();
	MiniMenu(); //print minimenu

}

//print David dialogue
void Talk_David() {
	MaleTalkSound();

	TextChange();
	printf(" David : I'm a teacher from America \n");
	getchar();
	TextChange();
	printf(" David : Are you interested in programming? \n\n");
	printf(" >>Press enter to end the conversation.");
	getchar();
	TextChange();
	MiniMenu();//print minimenu

}

//print Rudy dialogue
void Talk_Rudy() {
	MaleTalkSound();

	TextChange();
	printf(" Rudy : Do you need any help on programming? \n");
	getchar();

	TextChange();
	printf(" Rudy :I can help as much as I can. \n\n");
	printf(" >>Press enter to end the conversation.");
	getchar();
	TextChange();
	MiniMenu();//print minimenu

}

//print Julia dialogue
void Talk_Julia() {
	FemaleTalkSound();

	TextChange();
	printf(" Julia : There's an incident on the ship, so please don't wander around. \n\n");
	printf(" >>Press enter to end the conversation.");
	getchar();
	TextChange();
	MiniMenu();//print minimenu

}

//print Cal dialogue
void Talk_Cal() {
	MaleTalkSound();

	TextChange();
	printf(" Cal : Someone killed himself tonight. \n\n");
	printf(" >>Press enter to end the conversation.");
	getchar();
	TextChange();
	MiniMenu();//print minimenu

}

//print Malon dialogue
void Talk_Malon() {
	MaleTalkSound();

	TextChange();
	printf(" Malon : Really? That's really scary. \n\n");
	printf(" >>Press enter to end the conversation.");
	getchar();
	TextChange();
	MiniMenu();//print minimenu

}

//print Jimmy dialogue
void Talk_Jimmy() {

	TextChange();
	printf(" Jimmy : I like the blue and wide sea.\n\n");
	printf(" >>Press enter to end the conversation.");
	getchar();
	TextChange();
	MiniMenu();//print minimenu

}

//print Minho dialogue
void Talk_Minho() {

	TextChange();
	printf(" Minho(Main Programmer) : I am hungry. What should I eat?\n\n");
	printf(" >>Press enter to end the conversation.");
	getchar();
	TextChange();
	MiniMenu();//print minimenu
}

//print Doyeong dialogue
void Talk_Doyeong() {

	TextChange();
	printf(" Doyeong(Director): Wow! You are green! how did you like that?\n\n");
	printf(" >>Press enter to end the conversation.");
	getchar();
	TextChange();
	MiniMenu();//print minimenu
}

//print Hagyeong dialogue
void Talk_Hagyeong() {

	TextChange();
	printf(" Hagyeong: On my grandfather's honor, I'll solve this problem!\n\n");
	printf(" >>Press enter to end the conversation.");
	getchar();
	TextChange();
	MiniMenu();//print minimenu
}

//print Minki dialogue
void Talk_Minki() {

	TextChange();
	printf(" Minki: The song swept over my soul.\n\n");
	printf(" >>Press enter to end the conversation.");
	getchar();
	TextChange();
	MiniMenu();//print minimenu
}