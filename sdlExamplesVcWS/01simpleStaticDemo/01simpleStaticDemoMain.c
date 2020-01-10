#include "graphics.h"
#include "ebentoak.h"
#include "soinua.h"
#include "text.h"
#include "imagen.h"
#include "torre.h"
#include <stdio.h>

#define SOINU_KOP 5
char * soundFiles[] = { ".\\sound\\128GBVHR_01.wav", ".\\sound\\128NIGHT_01.wav", ".\\sound\\132TRANCE_02.wav",
                        ".\\sound\\BugleCall.wav",  ".\\sound\\terminator.wav" };


typedef struct S_GURE_GAUZAK
{
  int idSounds[SOINU_KOP];
  int idIrudi;
}GURE_GAUZAK;

GURE_GAUZAK gureGauzak;

int hasieratu(void);

int main(int argc, char * str[]) 
{
  int ebentu = 0, irten=0, dirua = 10000;

  hasieratu();
  while(irten == 0)
  {
       funtzioa();
   
    if (ebentu == TECLA_ESCAPE) irten = 1;
  }
  audioTerminate();
  sgItxi();
  return 0;
}


int hasieratu(void)
{


  if (sgHasieratu() == -1)
  {
    fprintf(stderr, "Unable to set 640x480 video: %s\n", SDL_GetError());
    return 0;
  }
  
  gureGauzak.idIrudi=irudiaKargatu(".\\img\\mapas\\map.bmp");
  
  irudiaMugitu(gureGauzak.idIrudi, 0, 0);
  irudiakMarraztu();
  pantailaBerriztu();
  return 0;
}


