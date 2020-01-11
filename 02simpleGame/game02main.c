/*#include "orokorrak.h"
#include "sarrera.h"
#include "errealitateFisikoa.h"
#include "jokoa.h"
#include "bukaera.h"*/

//---------------------------------------------------------------------------------
#include "imagen.h"
#include "graphics.h"
#include "ebentoak.h"
#include "text.h"
#include "soinua.h"
//---------------------------------------------------------------------------------

#include <stdio.h>

#include "ourTypes.h"
#include "game02.h"

#define MUSICA_MENU ".\\sound\\inicio.wav"


int main(int argc, char* str[])
{
    int jarraitu = 0, ebentu/*, irten = 0*/;
    EGOERA egoera/*, egoera2*/;
    POSIZIOA sagupos;

    if (sgHasieratu() == -1)
    {
        fprintf(stderr, "Unable to set 640x480 video: %s\n", SDL_GetError());
        return 1;
    }

    audioInit();
    loadTheMusic(MUSICA_MENU);
    playMusic();

    do
    {
        
        ebentu = jokoaAurkeztu();
        sagupos = saguarenPosizioa();
        if ((sagupos.x > 180) && (sagupos.x < 440) && (sagupos.y > 340) && (sagupos.y < 380) && (ebentu == SAGU_BOTOIA_EZKERRA))
        {
            audioTerminate();
            egoera = jokatu1();
            jokoAmaierakoa1(egoera);
            

            /*if (egoera == IRABAZI)
            {
                egoera2 = jokatu2();
                jokoAmaierakoa2(egoera2);
                irten = 1;
            }
            else
            {
                irten = 1;
            }*/
        }
        else
        {
            if ((sagupos.x > 700) && (sagupos.x < 900) && (sagupos.y > 400) && (sagupos.y < 450) && (ebentu == SAGU_BOTOIA_EZKERRA))
            {
               
                kredituak();
                
            }
            else
                if ((sagupos.x > 660) && (sagupos.x < 960) && (sagupos.y > 290) && (sagupos.y < 350) && (ebentu == SAGU_BOTOIA_EZKERRA))
                {
                    howto();
                    
                }
        }
    
    } while (ebentu != TECLA_ESCAPE/* && irten == 0*/);
    sgItxi();
    return 0;
}


