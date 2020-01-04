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


int main(int argc, char * str[]) {
  int jarraitu = 0, ebentu, irten = 0;
  EGOERA egoera, egoera2;
 
  if (sgHasieratu() == -1) 
  {
    fprintf(stderr, "Unable to set 640x480 video: %s\n", SDL_GetError());
    return 1;
  }
 
  do
  {
	ebentu = jokoaAurkeztu();
    if (ebentu == TECLA_1)
	{
        egoera = jokatu1();
        jokoAmaierakoa1(egoera);
          
        if (egoera == IRABAZI)
           {
               egoera2 = jokatu2();
               jokoAmaierakoa2(egoera2);
               irten = 1;
           }
		else { irten = 1; }
	}

    else
    {
		if (ebentu == TECLA_3) { kredituak(); }
    }
  } while (ebentu != TECLA_ESCAPE && irten == 0);
  sgItxi();
  return 0;
}