#include "game02.h"
#include "imagen.h"
#include "graphics.h"
#include "ebentoak.h"
#include "text.h"
#include "soinua.h"
#include <stdio.h>
#include <windows.h>

#define SAKATU_RETURN "Sakatu return hasteko..."
#define IZENBURUA "Cucumbers CATasthrophy"
#define JOKOA_SOUND ".\\sound\\132TRANCE_02.wav"
#define JOKOA_PLAYER_IMAGE ".\\img\\invader.bmp"
#define JOKOA_SOUND_WIN ".\\sound\\win.wav"
#define JOKOA_SOUND_LOOSE ".\\sound\\fail.wav" 
#define BUKAERA_SOUND_1 ".\\sound\\128NIGHT_01.wav"
#define BUKAERA_IMAGE ".\\img\\gameOver_1.bmp"
#define MUSICA_MENU ".\\sound\\inicio.wav"
#define FONDO_INCIO ".\\img\\mapa.bmp"
#define FONDO_MENU ".\\img\\mapa_desenfoque.bmp"
#define CREDITOS ".\\img\\creditos.bmp"
#define IMG_IRABAZI ".\\img\\irabazi.bmp"
#define IMG_GALDU ".\\img\\galdu.bmp"

//void sarreraMezuaIdatzi();
void IzenburuaMezuaIdatzi();
int JOKOA_jokalariaIrudiaSortu();
//void zirkuluaBistaratu(int xRef, int yRef);
void JOKOA_lerroHBatMargotu(int x, int y, int x1, int y1);
void JOKOA_lerroVBatMargotu(int x, int y, int x1, int y1);
EGOERA JOKOA_egoera(JOKO_ELEMENTUA jokalaria, JOKO_ELEMENTUA oztopoa);
POSIZIOA ERREALITATE_FISIKOA_mugimendua(POSIZIOA posizioa);
//int  BUKAERA_menua(EGOERA egoera);
int BUKAERA_irudiaBistaratu();
void kredituak();

int jokoaAurkeztu(void)
{
  int ebentu = 0, idFONDOINICIO;
 
  idFONDOINICIO = HASIERA_irudiaBistaratu();
 // sarreraMezuaIdatzi();
 // IzenburuaMezuaIdatzi();
  
  audioInit();
  loadTheMusic(MUSICA_MENU);
  playMusic();
  
  do
  {
    ebentu = ebentuaJasoGertatuBada();
  } while (ebentu != TECLA_1 && ebentu != TECLA_2 && ebentu != TECLA_3 && ebentu != TECLA_ESCAPE);
  pantailaGarbitu();
  irudiaKendu(idFONDOINICIO);
  pantailaBerriztu();
  audioTerminate();
  return ebentu;
}

void kredituak()
{
    int ebentu = 0, idFONDO;

    idFONDO = irudiaKargatu(CREDITOS);    
    irudiaMugitu(idFONDO, 0, 0);
    //  pantailaGarbitu();
    irudiakMarraztu();
    pantailaBerriztu();

    //textuaGaituIzenburua();
    //textuaIdatziIzenburua(100, 100, "Jouness Louiz, Oier Baños, Sergio Villain, Jon Navaridas eta Joseba Izaguirre");
    //pantailaBerriztu();

   // sarreraMezuaIdatzi();
    //IzenburuaMezuaIdatzi();

    audioInit();
    loadTheMusic(MUSICA_MENU);
    playMusic();
    do
    {
        ebentu = ebentuaJasoGertatuBada();
    } while (ebentu != TECLA_ESCAPE);

    pantailaGarbitu();
    irudiaKendu(idFONDO);
    pantailaBerriztu();
    audioTerminate();
}

/*
void sarreraMezuaIdatzi()
{
  textuaGaitu();
 // pantailaGarbitu();
  textuaIdatzi(225, 200, SAKATU_RETURN);
  pantailaBerriztu();
}
*/

void IzenburuaMezuaIdatzi()
{
    //pantailaGarbitu();
    textuaGaituIzenburua();
    textuaIdatziIzenburua(100, 100, IZENBURUA);
    pantailaBerriztu();
}

EGOERA jokatu1(void) 
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

EGOERA jokatu2(void)
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
    do
    {
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
        if (zirkulua.pos.y + 30 > 478)
        {
            zirkulua.pos.y = 0 + 30;
        }
        if (mugitu)
        {
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

//int  jokoAmaierakoa1(EGOERA egoera)
void  jokoAmaierakoa1(EGOERA egoera)
{
  int ebentu = 0, id;
  int idAudioGame;

  //loadTheMusic(BUKAERA_SOUND_1);
  if (egoera == IRABAZI) {
      idAudioGame = loadSound(JOKOA_SOUND_WIN);
      playSound(idAudioGame);
      id = irudiaKargatu(IMG_IRABAZI);
      irudiaMugitu(id, 0, 0);
      pantailaGarbitu();
      irudiakMarraztu();
      pantailaBerriztu();
  }
  else {
      idAudioGame = loadSound(JOKOA_SOUND_LOOSE);
      playSound(idAudioGame);
      id = irudiaKargatu(IMG_GALDU);
      irudiaMugitu(id, 0, 0);
      pantailaGarbitu();
      irudiakMarraztu();
      pantailaBerriztu();
  }
 // id=BUKAERA_irudiaBistaratu();
  do 
  {
    ebentu = ebentuaJasoGertatuBada();
  } while ((ebentu!= TECLA_RETURN)/* && (ebentu!= SAGU_BOTOIA_ESKUMA)*/);
  audioTerminate();
  irudiaKendu(id);
 // return (ebentu != TECLA_RETURN) ? 1 : 0;
}

void  jokoAmaierakoa2(EGOERA egoera)
{
    int ebentu = 0, id = -1;
    int idAudioGame;

   // loadTheMusic(BUKAERA_SOUND_1);
    if (egoera == IRABAZI)
    {
        idAudioGame = loadSound(JOKOA_SOUND_WIN);
        playSound(idAudioGame);
        id = irudiaKargatu(IMG_IRABAZI);
        irudiaMugitu(id, 0, 0);
        pantailaGarbitu();
        irudiakMarraztu();
        pantailaBerriztu();
    }
    else
    {
        idAudioGame = loadSound(JOKOA_SOUND_LOOSE);
        playSound(idAudioGame);
        id = irudiaKargatu(IMG_GALDU);
        irudiaMugitu(id, 0, 0);
        pantailaGarbitu();
        irudiakMarraztu();
        pantailaBerriztu();
    }
   // id = BUKAERA_irudiaBistaratu();
    do
    {
        ebentu = ebentuaJasoGertatuBada();
    } while ((ebentu != TECLA_RETURN) /*&& (ebentu != SAGU_BOTOIA_ESKUMA)*/);
    audioTerminate();
    irudiaKendu(id);
  //  return (ebentu != TECLA_RETURN) ? 1 : 0;
}

/*int BUKAERA_irudiaBistaratu() {
  int id = -1;

  id = irudiaKargatu(BUKAERA_IMAGE);
  irudiaMugitu(id, 200, 200);
  pantailaGarbitu();
  irudiakMarraztu();
  pantailaBerriztu();
  return id;
}*/

int HASIERA_irudiaBistaratu()
{
    int id = -1;
    id = irudiaKargatu(FONDO_INCIO);
    irudiaMugitu(id, 0, 0);
  //  pantailaGarbitu();
    irudiakMarraztu();
    pantailaBerriztu();
    return id;
}

