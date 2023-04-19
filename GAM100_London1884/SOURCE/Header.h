/**
	\file        Header.h
	\project     London1884
	\author      primary - Minho Chae
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/

#pragma once
#define WIN32_LEAN_AND_LEAN

#pragma warning(push, 0)
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h> 
#include <stdbool.h> 
#include <string.h>
#include <mmsystem.h>
#include <time.h>

#pragma comment(lib,"winmm") 

#include"Util.h"
#include"Adventure.h"
#include"RoomCreate.h"
#include"RoomDescription.h"
#include"RoomUpdate.h"
#include"MiniMenu.h"
#include"ItemFunctions.h"
#include"Inventory.h"
#include"Main.h"
#include"Menu.h"
#include"ClueList.h"
#include"GameStart.h"
#include"GameOver.h"
#include"SuspectList.h"
#include"SuspectBrian.h"
#include"SuspectEmma.h"
#include"SuspectRonald.h"
#include"SuspectSteven.h"
#include"SuspectPaul.h"
#include"SuspectEdward.h"
#include"SuspectOlivia.h"
#include"SuspectJohn.h"
#include"SuspectGeorge.h"
#include"SuspectMark.h"

#include"Piano.h"
#include"Sound.h"
#include"ClueFunctions.h"
#include"MoveFunction.h"
#include"DoorFunction.h"
#include"PassageFunction.h"
#include"StairFunction.h"
#include"Cheat.h"
#include"CruiseGuideMap.h"
#include"GameIntro.h"
#include"FloorFunction.h"

#include"Detection.h"
#include"DetectionPicture.h"
#include"DetectionChoice.h"
#include"ClueListDetection.h"
#include"SuspectListDetection.h"
#include"NonSuspectFunction.h"
#include"DetectiveChancePrint.h"
#include"DetectionGameover.h"
#include"GameFail.h"
#include"GameClear.h"
#include"GameMenu.h"
#include"Main.h"
#include"ObjectFunction.h"
#include"InfoListDetection.h"
#include"JamesListDetection.h"
#include"DetectionWrongAnswer.h"

#include"Brian.h"
#include"BrianAlibi.h"
#include"Edward.h"
#include"EdwardAlibi.h"
#include"Emma.h"
#include"EmmaAlibi.h"
#include"George.h"
#include"GeorgeAlibi.h"
#include"Info.h"
#include"James.h"
#include"John.h"
#include"JohnAlibi.h"
#include"Olivia.h"
#include"OliviaAlibi.h"
#include"Paul.h"
#include"PaulAlibi.h"
#include"Ronald.h"
#include"RonaldAlibi.h"
#include"Steven.h"
#include"StevenAlibi.h"
#include"Arcade.h"
#pragma warning(pop)