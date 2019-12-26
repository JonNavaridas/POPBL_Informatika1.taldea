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


int main(int argc, char * str[]) {
  int jarraitu = 0, ebentu;
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
       // do
      //  {
            egoera = jokatu1();
           /* jarraitu =*/ jokoAmaierakoa1(egoera);
           if (egoera == IRABAZI)
           {
               egoera2 = jokatu2();
               jokoAmaierakoa2(egoera2);
           }
           
       // } while (jarraitu);
        //jarraitu = 0;
}
    else
    {
        if(ebentu == TECLA_3)
        {
            kredituak();
        }
    }
  } while (/*!jarraitu && */(ebentu != TECLA_ESCAPE));
  sgItxi();
  return 0;
}

