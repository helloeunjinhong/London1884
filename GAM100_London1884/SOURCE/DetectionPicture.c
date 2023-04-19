/**
	\file        DetectionPicture.c
	\project     London1884
	\author      primary - Eunjin Hong
	\copyright   ¡°All content (c) 2018 DigiPen (USA) Corporation, all rights reserved.¡±
*/

#include"Header.h"
#include"Define.h"
#include"Variable.h"


//save the ascii art of picnum 1
const char * pic1[] = {
"             .BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB      B                                                               ",
"             BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB      B                                                               ",
"             BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB      Ls                                                              ",
"             BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB      .g                                                              ",
"BBBq         BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB5      .g                                                              ",
"BBBBBB       BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB       27                                                              ",
"BBBBBBBB     BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB       B                                                               ",
"BBBBBBBBB     BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBi      .Q                                                               ",
"BBBBBBBBBB    MBBBBBBBBBBBBBBBBBBBBBBBBBBBBB       B                                                                ",
"BBBBBBBBBB     BBBBBBBBBBBBBBBBBBBBBBBBBBBB       B                                                                 ",
"BBBBBBBBBBg     BBBBBBBBBBBBBBBBBBBBBBBBBB       B                                                  ::.             ",
"BBBBBBBBBBB      sBBBBBBBBBBBBBBBBBBBBBBB      vB                                               BBBBBBBBBBi         ",
"BBBBBBBBBBI        BBBBBBBBBBBBBBBBBBBB.     :Bv                                              BBBBBBBBBBBBBB.       ",
"BBBBBBBBBB           MBBBBBBBBBBBBBBB      Lg7                                               BBBBBBBBBBBBBBBB2      ",
"BBBBBBBBB5             BBBBBBBBBBBBU    7IL                                                 BBBBBBBBBBBBBBBBBB      ",
"BBBBBBBBM             BBBBBBBBBBBBB    BP                                                  uBBBBBBBBBBBBBBBBBBB     ",
"BBBBBBBi            BBBBBBBBBBBBBBv     :2U:                                               BBBBBBBBBBBBBBBBBBBB     ",
"BBBBBS            BBBBBBBBBBBBBBBBq        :1KJ                             uBBBBBBBB.     IBBBBBBBBBBBBBBBBBBB     ",
"BBP             BBBBBBBBBBBBBBBBBBBBBP         rX5r     UBBBBBBB          .BBBBBBBBBBBB     BBBBBBBBBBBBBBBBBB.     ",
"BB            BBBBBBBBBBBBBBBBBBBBBBBBBBd         .YKrMBBBBBBBBBBB        BBBBBBBBBBBBBB    .BBBBBBBBBBBBBBBBP      ",
"BB          BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBu          .DBBBBBBBBBBB      BBBBBBBBBBBBBBB7     BBBBBBBBBBBBBB        ",
"BBi        BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB          vBBBBBBBBBBq     BBBBBBBBBBBBBBBB      .BBBBBBBBBBBBi       ",
"BBB       BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB         BBBBBBBBBBB     BBBBBBBBBBBBBBBr           :BBBBBBBBBv     ",
"BBB      BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB        7BBBBBBBBBs      BBBBBBBBBBBBBB            .BBBBBBBBBBB    ",
"BBBP    BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB        BBBBBBBBB        BBBBBBBBBBBB            rBBBBBBBBBBBBBB  ",
};

//save the ascii art of picnum 2
const char * pic2[] = {
"              K:        .P         s       j      PBBBBBBBBBBBBBBBBBBBBBBBBBBBB                                    ",
":               .         ..        r      i     :BBBBBBBBBBBBBBBBBBBBBBBBBBBBBQ                                   ",
"  .:i:.           :i.       r:       u      v   sBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB                                  ",
"       :::.         .ii       r:      1     i  :BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB                                 ",
"           .:i.        ..       r:     Y       BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBv                                ",
"..              :i:.      ii.     r:          iBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB                                ",
"  ..:::..           .i:.     i:.   .          QBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB                                ",
"         .::::.         .::.   .i             BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.                               ",
"               ..:::..      .:.               BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB                                ",
"                      .:::.                   7BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB                                ",
"....                                           BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBX                                ",
"      ......::........                         vBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB                                 ",
"                        .                       MBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB                                  ",
"                                                 dBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB                                   ",
"........................                          iBBBBBBBBBBBBBBBBBBBBBBBBBBBB                                    ",
"                                                    SBBBBBBBBBBBBBBBBBBBBBBBB.                                     ",
"                      .....                           7BBBBBBBBBBBBBBBBBBBBr                                       ",
"    .......::........                                    :KBBBBBBBBBBBBBBBBBQ5:                                    ",
"...                         .                                BBBBBBBBBBBBBBBBBBBBBKi                               ",
"                      ..::..                               gBBBBBBBBBBBBBBBBBBBBBBBBBBBX:                          ", 
"               ..::::.       :i.                         QBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBS:                     ",
"         ..:::.         .:i:    .r.                    gBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBSi                ",
"  ..::::.           .:i:.    .i:                     EBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB               ",
":..             .:i.      .i:      :r   .:         KBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB:             ",
"            .:i.       .i:       :r    .v    :   IBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBS            ",
};

//save the ascii art of picnum 3
const char * pic3[] = {
"      .:.        ::                               :i   r.   .7                                .i        .::        ",
"        .r7r.     :s:          rEBBBBBBBK:         i   ..   :        .5BBBBBBBg7            .ji      :77:          ",
"            :7r.    iv      .BBBBBBBBBBBBBBd                       IBBBBBBBBBBBBBB:        vi    .i7r.             ",
"rii:.          :rr:        ZBBBBBBBBBBBBBBBBBY                   iBBBBBQPBBBBBBBBBBB          .i7i.          ..:iri",
"  ..:iiri::.      :i      BBBBBBBBBBBBKKBBBBBBb                 7BBBBSqjBBBBBBBBBBBBB        7i       ..:irri:..   ",
"          .:iiii:        5BBBBBBBBBBBBBBssBBBBB.                BBBBBBBLBBBBBBBBBBBBBB          .:iiri:..          ",
"                .        BBBBBBBBBBBBBBBBiRD7DBB               dBBBdXBB7BBBBBBBBBBBBBB         ::.                 ",
"                         BBBBBBBBBBBBBBBBIBBuBBB               BBBBPbBBM2BBBBBBBBBBBBB.                            ",
"iiiiiiiiiiiii:           BBBBBBBBBBBBBBBLBBB7BBB               PBBBBLBBBBBBBBBBBBBBBBB             iiiiii::::::....",
"                         1BBBBBBBBBBBBBBBBBBMBB.                BBBBgBBBBBBBBBBBBBBBBQ                      .......",
"                          BBBBBBBBBBBBBBBBBBBB2                 iBBBBBBBBBBBBBBBBBBBB                              ",
"                           2BBBBBBBBBBBBBBBBBr                   .BBBBBBBBBBBBBBBBBE                               ",
"                             BBBBBBBBBBBBBB5           .isbBBB.    YBBBBBBBBBBBBBB                                 ",
"                           :1BBBBBBBBBBQj.           BBBBBBBBBB       LMBBBBBBBBBBq:                               ",
"                      .uBBBBBBBBBBB               :BBBBBBB.                 BBBBBBBBBBBI:                          ",
"                    BBBBBBBBBBBBBBB1            :BBBBBBBBBB.               :BBBBBBBBBBBBBBB                        ",
"                  iBBBBBBBBBBBBBBBBB           QBBBBBBBBBBB:               BBBBBBBBBBBBBBBBBJ                      ",
"                 QBBBBBBBBBBBBBBBBBBB         RBBBBBBBBBB5                QBBBBBBBBBBBBBBBBBBB                     ",
"                JBBBBBBBBBBBBBBBBBBBB7        BBBBBBU                    .BBBBBBBBBBBBBBBBBBBBR                    ",
"                BBBBBBBBBBBBBBBBBBBBBB       1BBBBBB    7BBBPi           BBBBBBBBBBBBBBBBBBBBBB                    ",
"                BBBBBBBBBBBBBBBBBBBBBBQ      BBBBBBB   :BBBBBB.         sBBBBBBBBBBBBBBBBBBBBBB                    ",
"               iBBBBBBBBBBBBBBBBBBBBBBB1    :BBBBBBM   BBBBBv           RBBBBBBBBBBBBBBBBBBBBBBS                   ",
"               BBBBBBBBBBBBBBBBBBBBBBBBB1   BBBBBBBr   BBBBBBBBBr       BBBBBBBBBBBBBBBBBBBBBBBB                   ",
"               BBBBBBBBBBBBBBBBBBBBBBBBBBu  BBBBBBB   :BBBBBd7EBi       BBBBBBBBBBBBBBBBBBBBBBBB                   ",
"              :BBBBBBBBBBBBBBBBBBBBBBBBBBB:7BBBBBBB   PBBBBB            BBBBBBBBBBBBBBBBBBBBBBBBs                  ",
};

//print const char array pointer (1,2,3)
void PrintPicture()
{
	switch (picNum) {
	
	//print the 1st picture if the picnum = 1
	case 1:
		for (int i = 0; i < _countof(pic1); i++)
		{
			printf("%s\n", pic1[i]);
		}
		Color(white, black);
		break;

	//print the 2nd picture if the picnum = 2
	case 2:
		for (int i = 0; i < _countof(pic2); i++)
		{
			printf("%s\n", pic2[i]);
		}
		Color(white, black);
		break;

	//print the 3rd picture if the picnum = 3
	case 3:
		for (int i = 0; i < _countof(pic3); i++)
		{
			printf("%s\n", pic3[i]);
		}
		Color(white, black);
		break;
	}
}

