//---------------------------------------------------------------------------------
#include "imagen.h"
#include "graphics.h"
#include "ebentoak.h"
#include "text.h"
#include "soinua.h"
//---------------------------------------------------------------------------------
#include <stdio.h>
#include <windows.h>
#include "ourTypes.h"
#include "CC_Game.h"
#include "hasieratu.h"

//----------Cucumbers Catastrophe----------//
int main(int argc, char* str[])
{
	int jarraitu = 0, ebentu, musica = 0, id = -1;
	EGOERA egoera = 0;
	POSIZIOA sagupos;

	if (sgHasieratu() == -1)
	{
		fprintf(stderr, "Unable to set 640x480 video: %s\n", SDL_GetError());
		return 1;
	}
    // Loading pantalaren irudia jarri
	id = irudiaKargatu(LOAD);
	irudiaMugitu(id, 0, 0);
	irudiakMarraztu();
	pantailaBerriztu();
    // 800 milisegundu itxaron
	Sleep(800);
    // Loading pantailaren irudia kendu
	irudiaKendu(id);
	pantailaBerriztu();
    
	audioInit();
	do
	{    // Musika ez badago jarrita --> jarri
		if (musica == 0) {
			loadTheMusic(MUSICA_MENU);
			playMusic();
			musica = 1;
		}

		ebentu = jokoaAurkeztu();
        // Saguaren posizioa detektatu
		sagupos = saguarenPosizioa();
        // Jolastu botoia
		if ((sagupos.x > 180) && (sagupos.x < 440) && (sagupos.y > 340) && (sagupos.y < 380) && (ebentu == SAGU_BOTOIA_EZKERRA))
		{
            // Musika kendu eta jolastu
			audioTerminate();
			egoera = jokatu1();
            //Amaierako pantaila
			jokoAmaierakoa1(egoera);
			musica = 0;
		}
		else
		{
			// Kredituen pantailan sartu
			if ((sagupos.x > 700) && (sagupos.x < 900) && (sagupos.y > 400) && (sagupos.y < 450) && (ebentu == SAGU_BOTOIA_EZKERRA))
			{
				kredituak();
			}
			// Jokoari buruzko pantailetan sartu
			else if ((sagupos.x > 660) && (sagupos.x < 960) && (sagupos.y > 290) && (sagupos.y < 350) && (ebentu == SAGU_BOTOIA_EZKERRA))
			{
				howto();
			}
		}
	} while (ebentu != TECLA_ESCAPE);
	sgItxi();
	return 0;
}