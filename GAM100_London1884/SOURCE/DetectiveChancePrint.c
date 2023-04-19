/**
	\file        DetectiveChancePrint.c
	\project     London1884
	\author      primary - Do Yeong Yi
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/

#include"Header.h"
#include"Define.h"
#include"Variable.h"

int chance; 

//function about counting the number of chances
void DetectiveChancePrint() {
	printf("Chance: ");

	//if chance == 3
	switch (chance) {
	case 3:

		//printf three white squares
		for (int i = 0; i < 3; i++)
		{
			Color(white, white);
			printf("#");
			Color(black, black);
			printf("#");
		}
		Color(white, black);
		break;

	//if chance == 2
	case 2:

		//printf two white squares
		for (int i = 0; i < 2; i++)
		{
			Color(white, white);
			printf("#");
			Color(black, black);
			printf("#");
		}
		Color(white, black);
		break;

	//if chance == 1
	case 1:

		//printf one white squares
		for (int i = 0; i < 1; i++)
		{
			Color(white, white);
			printf("#");
			Color(black, black);
			printf("#");
		}
		Color(white, black);
		break;
	}

}