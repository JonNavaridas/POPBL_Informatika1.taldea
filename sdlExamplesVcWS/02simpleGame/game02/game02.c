#include "game02.h"
#include "imagen.h"
#include "graphics.h"
#include "ebentoak.h"
#include "text.h"
#include "soinua.h"
#include <stdio.h>
#include <windows.h>

#define ONGI_ETORRI_MEZUA "Sakatu return hasteko..."
#define JOKOA_SOUND ".\\sound\\132TRANCE_02.wav"
#define JOKOA_PLAYER_IMAGE ".\\img\\invader.bmp"
#define JOKOA_SOUND_WIN ".\\sound\\BugleCall.wav"
#define JOKOA_SOUND_LOOSE ".\\sound\\terminator.wav" 
#define BUKAERA_SOUND_1 ".\\sound\\128NIGHT_01.wav"
#define BUKAERA_IMAGE ".\\img\\gameOver_1.bmp"

void sarreraMezuaIdatzi();
int JOKOA_jokalariaIrudiaSortu();
//void zirkuluaBistaratu(int xRef, int yRef);
void JOKOA_lerroHBatMargotu(int x, int y, int x1, int y1);
void JOKOA_lerroVBatMargotu(int x, int y, int x1, int y1);
EGOERA JOKOA_egoera(JOKO_ELEMENTUA jokalaria, JOKO_ELEMENTUA oztopoa);
POSIZIOA ERREALITATE_FISIKOA_mugimendua(POSIZIOA posizioa);
//int  BUKAERA_menua(EGOERA egoera);
int BUKAERA_irudiaBistaratu();

void jokoaAurkeztu(void)
{
  int ebentu = 0;

  sarreraMezuaIdatzi();
  do
  {
    ebentu = ebentuaJasoGertatuBada();
  } while (ebentu != TECLA_RETURN);
  pantailaGarbitu();
  pantailaBerriztu();
}

void sarreraMezuaIdatzi()
{
  pantailaGarbitu();
  textuaIdatzi(225, 200, ONGI_ETORRI_MEZUA);
  pantailaBerriztu();
}

EGOERA jokatu(void) 
{
  int mugitu = 0; //boolean
  EGOERA  egoera = JOLASTEN;
  int ebentu = 0;
  JOKO_ELEMENTUA zirkulua, jokalaria;
  POSIZIOA aux;
  zirkulua.pos.x = 200;
  zirkulua.pos.y = 200;
  //Uint32 time01 = SDL_GetTicks(), time02;

  jokalaria.pos.x = 0;
  jokalaria.pos.y = 200;

  audioInit();
  loadTheMusic(JOKOA_SOUND);
  playMusic();
  jokalaria.id = JOKOA_jokalariaIrudiaSortu();
  do {
    Sleep(2);
    aux = ERREALITATE_FISIKOA_mugimendua(zirkulua.pos);
    zirkulua.pos.y = aux.y;
    pantailaGarbitu();
    arkatzKoloreaEzarri(0, 0, 0xFF);
    zirkuluaMarraztu(zirkulua.pos.x, zirkulua.pos.y, 20);
    irudiaMugitu(jokalaria.id, jokalaria.pos.x, jokalaria.pos.y);
    irudiakMarraztu();
    pantailaBerriztu();
    ebentu = ebentuaJasoGertatuBada();
    if (ebentu == SAGU_BOTOIA_ESKUMA || ebentu == SAGU_BOTOIA_EZKERRA) 
    {
      mugitu = 1; //true
    }
    if (zirkulua.pos.y + 30 > 478) {
      zirkulua.pos.y = 0 + 30;
    }
    if (mugitu) {
      aux = ERREALITATE_FISIKOA_mugimendua(jokalaria.pos);
      jokalaria.pos.x = aux.x;
    }
    egoera = JOKOA_egoera(jokalaria, zirkulua);
  } while (egoera == JOLASTEN);
  irudiaKendu(jokalaria.id);
  toggleMusic();
  audioTerminate();
  pantailaGarbitu();
  pantailaBerriztu();
  return egoera;
}

EGOERA JOKOA_egoera(JOKO_ELEMENTUA jokalaria, JOKO_ELEMENTUA oztopoa) {
  EGOERA  ret = JOLASTEN;
  if (jokalaria.pos.x >oztopoa.pos.x - 20 && jokalaria.pos.x <oztopoa.pos.x + 20 && jokalaria.pos.y >oztopoa.pos.y - 20 && jokalaria.pos.y <oztopoa.pos.y + 20) {
    ret = IRABAZI;
  }
  else if (jokalaria.pos.x > 600) {
    ret = GALDU;
  }
  return ret;
}

int JOKOA_jokalariaIrudiaSortu() 
{
  int martzianoId = -1;
  martzianoId = irudiaKargatu(JOKOA_PLAYER_IMAGE);
  irudiaMugitu(martzianoId, 10, 239);
  pantailaGarbitu();
  irudiakMarraztu();
  pantailaBerriztu();
  return martzianoId;

}


POSIZIOA ERREALITATE_FISIKOA_mugimendua(POSIZIOA posizioa) {
  posizioa.y = posizioa.y + 1;
  posizioa.x = posizioa.x + 1;
  return posizioa;
}

int  jokoAmaierakoa(EGOERA egoera)
{
  int ebentu = 0, id;
  int idAudioGame;

  loadTheMusic(BUKAERA_SOUND_1);
  if (egoera == IRABAZI) {
    idAudioGame = loadSound(JOKOA_SOUND_WIN);
    playSound(idAudioGame);
  }
  else {
    idAudioGame = loadSound(JOKOA_SOUND_LOOSE);
    playSound(idAudioGame);
  }
  id=BUKAERA_irudiaBistaratu();
  do 
  {
    ebentu = ebentuaJasoGertatuBada();
  } while ((ebentu!= TECLA_RETURN) && (ebentu!= SAGU_BOTOIA_ESKUMA));
  audioTerminate();
  irudiaKendu(id);
  return (ebentu != TECLA_RETURN) ? 1 : 0;
}

int BUKAERA_irudiaBistaratu() {
  int id = -1;
  id = irudiaKargatu(BUKAERA_IMAGE);
  irudiaMugitu(id, 200, 200);
  pantailaGarbitu();
  irudiakMarraztu();
  pantailaBerriztu();
  return id;
}

