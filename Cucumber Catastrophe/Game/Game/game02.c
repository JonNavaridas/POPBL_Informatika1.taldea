#include "game02.h"
#include "imagen.h"
#include "graphics.h"
#include "ebentoak.h"
#include "text.h"
#include "soinua.h"
#include <stdio.h>
#include <windows.h>

//Fondo
#define BACKGROUND_IMAGEN "img\\imagen\\mockup.bmp"
//Sonidos
#define JOKOA_SOUND "sound\\128GBVHR_01.wav"

void backgroundCreate();

void jokoaAurkeztu(void)
{
  backgroundCreate();
  pantailaGarbitu();
  pantailaBerriztu();


}

void backgroundCreate(void)
{
  pantailaGarbitu();
  irudiaKargatu(BACKGROUND_IMAGEN);
  irudiakMarraztu();
  pantailaBerriztu();
}