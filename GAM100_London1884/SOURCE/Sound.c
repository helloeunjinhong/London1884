/**
	\file        Sound.c
	\project     London1884
	\author      primary - Minho Chae
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/

#include"Header.h"
#include"Variable.h"

void TitleBackGroundMusic()
{
	mciSendString("open \"BackGroundMusic\\Dances_and_Dames.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);
	mciSendString("play mp3 repeat", NULL, 0, NULL);
}

void GameBackGroundMusic()
{
	mciSendString("open \"BackGroundMusic\\Cool_Vibes_Film_Noire.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);
	mciSendString("play mp3 repeat", NULL, 0, NULL);
}

void CreditBackGroundMusic()
{
	mciSendString("open \"BackGroundMusic\\Credit.wav\" type mpegvideo alias wav", NULL, 0, NULL);
	mciSendString("play wav repeat", NULL, 0, NULL);
}

void DoorOpenSound()
{
	sndPlaySoundA(TEXT("SoundEffect\\DoorOpen.wav"), SND_ASYNC | SND_NODEFAULT | SND_PURGE);
}

void LockedDoorSound()
{
	sndPlaySoundA(TEXT("SoundEffect\\LockedDoor.wav"), SND_ASYNC | SND_NODEFAULT | SND_PURGE);
}

void NoteOpenSound()
{
	sndPlaySoundA(TEXT("SoundEffect\\NoteOpen.wav"), SND_ASYNC | SND_NODEFAULT | SND_PURGE);
}

void NoteCloseSound()
{
	sndPlaySoundA(TEXT("SoundEffect\\NoteClose.wav"), SND_ASYNC | SND_NODEFAULT | SND_PURGE);
}

void PocketSound()
{
	sndPlaySoundA(TEXT("SoundEffect\\Pocket.wav"), SND_ASYNC | SND_NODEFAULT | SND_PURGE);
}

void KeySound()
{
	sndPlaySoundA(TEXT("SoundEffect\\Key.wav"), SND_ASYNC | SND_NODEFAULT | SND_PURGE);
}

void MaleTalkSound()
{
	sndPlaySoundA(TEXT("SoundEffect\\MaleTalk.wav"), SND_ASYNC | SND_NODEFAULT | SND_PURGE);
}

void FemaleTalkSound()
{
	sndPlaySoundA(TEXT("SoundEffect\\FemaleTalk.wav"), SND_ASYNC | SND_NODEFAULT | SND_PURGE);
}

void WritingClueSound()
{
	sndPlaySoundA(TEXT("SoundEffect\\Writing(clue).wav"), SND_ASYNC | SND_NODEFAULT | SND_PURGE);
}

void StairSound()
{
	sndPlaySoundA(TEXT("SoundEffect\\Stair.wav"), SND_ASYNC | SND_NODEFAULT | SND_PURGE);
}

void DigipenLogoSound()
{
	sndPlaySoundA(TEXT("SoundEffect\\DigipenLogoSound.wav"), SND_ASYNC | SND_NODEFAULT | SND_PURGE);
}

void TeamLogoStartSound()
{
	sndPlaySoundA(TEXT("SoundEffect\\TeamLogoStartSound.wav"), SND_ASYNC | SND_NODEFAULT | SND_PURGE);
}

void TeamLogoFinishSound()
{
	sndPlaySoundA(TEXT("SoundEffect\\TeamLogoFinishSound.wav"), SND_ASYNC | SND_NODEFAULT | SND_PURGE);
}

void TypeSound()
{
	sndPlaySoundA(TEXT("SoundEffect\\TypeSound.wav"), SND_ASYNC | SND_NODEFAULT | SND_PURGE);
}

void PassageSound()
{
	sndPlaySoundA(TEXT("SoundEffect\\Passage.wav"), SND_ASYNC | SND_NODEFAULT | SND_PURGE);
}

void ButtonSound()
{
	sndPlaySoundA(TEXT("SoundEffect\\Button.wav"), SND_ASYNC | SND_NODEFAULT | SND_PURGE);
}

void BootUpSound()
{
	sndPlaySoundA(TEXT("SoundEffect\\BootUp.wav"), SND_ASYNC | SND_NODEFAULT | SND_PURGE);
}

void GunShotSound()
{
	sndPlaySoundA(TEXT("SoundEffect\\GunShot.wav"), SND_ASYNC | SND_NODEFAULT | SND_PURGE);
}

void GunHitSound()
{
	sndPlaySoundA(TEXT("SoundEffect\\GunHit.wav"), SND_ASYNC | SND_NODEFAULT | SND_PURGE);
}

void ReloadSound()
{
	sndPlaySoundA(TEXT("SoundEffect\\Reload.wav"), SND_ASYNC | SND_NODEFAULT | SND_PURGE);
}

void DryFireSound()
{
	sndPlaySoundA(TEXT("SoundEffect\\DryFire.wav"), SND_ASYNC | SND_NODEFAULT | SND_PURGE);
}

void CloseSound()
{
	mciSendString("close mp3", NULL, 0, NULL);
	mciSendString("close wav", NULL, 0, NULL);
}