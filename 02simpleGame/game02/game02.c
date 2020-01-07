#include "game02.h"
#include "imagen.h"
#include "graphics.h"
#include "ebentoak.h"
#include "text.h"
#include "soinua.h"
#include <stdio.h>
#include <windows.h>
#include "olatuak.h"

#define ONGI_ETORRI_MEZUA "Sakatu return hasteko..."
#define JOKOA_SOUND ".\\sound\\pol-battle-march-long.wav"
#define JOKOA_PLAYER_IMAGE ".\\img\\imagen\\Pepino2.bmp"
#define JOKOA_SOUND_WIN ".\\sound\\win.wav"
#define JOKOA_SOUND_LOOSE ".\\sound\\fail.wav"
//#define BUKAERA_SOUND_1 ".\\sound\\128NIGHT_01.wav"
//#define BUKAERA_IMAGE ".\\img\\gameOver_1.bmp"
#define BACKGROUND_IMAGE ".\\img\\imagen\\Map copia.bmp"
#define JOKOA_PLAYER_IMAGE2 ".\\img\\imagen\\pepinaco copia.bmp"
#define JOKOA_PLAYER_IMAGE3 ".\\img\\imagen\\pepino copia.bmp"

#define MUSICA_MENU ".\\sound\\inicio.wav"
#define FONDO_INCIO ".\\img\\mapa.bmp"
#define FONDO_MENU ".\\img\\mapa_desenfoque.bmp"
#define CREDITOS ".\\img\\creditos.bmp"
#define IMG_IRABAZI ".\\img\\irabazi.bmp"
#define IMG_GALDU ".\\img\\galdu.bmp"


//void sarreraMezuaIdatzi();
int JOKOA_jokalariaIrudiaSortu();
int JOKOA_jokalaria2IrudiaSortu();
int JOKOA_jokalaria3IrudiaSortu();
int FONDOA_irudiaBistaratu();

void kredituak();
int HASIERA_irudiaBistaratu(void);

//void zirkuluaBistaratu(int xRef, int yRef);
//void JOKOA_lerroHBatMargotu(int x, int y, int x1, int y1);
//void JOKOA_lerroVBatMargotu(int x, int y, int x1, int y1);
EGOERA JOKOA_egoera(JOKO_ELEMENTUA jokalaria, JOKO_ELEMENTUA oztopoa);
POSIZIOA ERREALITATE_FISIKOA_mugimendua(POSIZIOA posizioa);
POSIZIOA ERREALITATE_FISIKOA2_mugimendua(POSIZIOA posizioa);

POSIZIOA ERREALITATE_FISIKOA3_mugimendua(POSIZIOA posizioa);

POSIZIOA ERREALITATE_FISIKOA4_mugimendua(POSIZIOA posizioa);

POSIZIOA ERREALITATE_FISIKOA5_mugimendua(POSIZIOA posizioa);

POSIZIOA ERREALITATE_FISIKOA6_mugimendua(POSIZIOA posizioa);

//int  BUKAERA_menua(EGOERA egoera);
//int BUKAERA_irudiaBistaratu();

int jokoaAurkeztu(void)
{
    int ebentu = 0, idFONDOINICIO;

    idFONDOINICIO = HASIERA_irudiaBistaratu();


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
    irudiakMarraztu();
    pantailaBerriztu();



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

/*void sarreraMezuaIdatzi()
{
  pantailaGarbitu();
  textuaIdatzi(650, 350, ONGI_ETORRI_MEZUA);
  pantailaBerriztu();
}*/

EGOERA jokatu1(void)
{
    int mugitu = 0,kont1=0; //boolean
        EGOERA  egoera = JOLASTEN;
        int ebentu = 0;
        JOKO_ELEMENTUA zirkulua, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, fondoa2;
        POSIZIOA aux, aux2, aux3, aux4, aux5, aux6, aux7, aux8, aux9, aux10, aux11, aux12, aux13, aux14, aux15, aux16, aux17, aux18, aux19, aux20, aux21, aux22, aux23, aux24, aux25, aux26, aux27, aux28, aux29, aux30, aux31, aux32, aux33, aux34, aux35, aux36, aux37, aux38, aux39, aux40, aux41, aux42, aux43, aux44, aux45, aux46, aux47, aux48, aux49, aux50, aux51, aux52, aux53, aux54, aux55, aux56, aux57, aux58, aux59, aux60;
        zirkulua.pos.x = 200;
        zirkulua.pos.y = 200;
        //Uint32 time01 = SDL_GetTicks(), time02;

        P1.pos.x = -10;
        P1.pos.y = 480;

        P2.pos.x = -40;
        P2.pos.y = 480;

        P3.pos.x = -70;
        P3.pos.y = 480;

        P4.pos.x = -100;
        P4.pos.y = 480;

        P5.pos.x = -130;
        P5.pos.y = 480;

        P6.pos.x = -160;
        P6.pos.y = 480;

        P7.pos.x = -190;
        P7.pos.y = 480;

        P8.pos.x = -220;
        P8.pos.y = 480;

        P9.pos.x = -250;
        P9.pos.y = 480;

        P10.pos.x = -280;
        P10.pos.y = 480;

        P11.pos.x = -310;
        P11.pos.y = 480;

        P12.pos.x = -340;
        P12.pos.y = 480;

        P13.pos.x = -370;
        P13.pos.y = 480;

        P14.pos.x = -400;
        P14.pos.y = 480;

        P15.pos.x = -430;
        P15.pos.y = 480;

        P16.pos.x = -460;
        P16.pos.y = 480;

        P17.pos.x = -490;
        P17.pos.y = 480;

        P18.pos.x = -520;
        P18.pos.y = 480;

        P19.pos.x = -550;
        P19.pos.y = 480;

        P20.pos.x = -580;
        P20.pos.y = 480;

        P21.pos.x = -610;
        P21.pos.y = 480;

        P22.pos.x = -640;
        P22.pos.y = 480;

        P23.pos.x = -670;
        P23.pos.y = 480;

        P24.pos.x = -540;
        P24.pos.y = 480;

        P25.pos.x = -730;
        P25.pos.y = 480;

        P26.pos.x = -760;
        P26.pos.y = 480;

        P27.pos.x = -790;
        P27.pos.y = 480;

        P28.pos.x = -820;
        P28.pos.y = 480;

        P29.pos.x = -850;
        P29.pos.y = 480;

        P30.pos.x = -880;
        P30.pos.y = 480;

        fondoa2.pos.x = 0;
        fondoa2.pos.y = 0;

        audioInit();
        loadTheMusic(JOKOA_SOUND);
        playMusic();
        fondoa2.id = FONDOA_irudiaBistaratu();
        P1.id = JOKOA_jokalariaIrudiaSortu();
        P2.id = JOKOA_jokalariaIrudiaSortu();
        P3.id = JOKOA_jokalariaIrudiaSortu();
        P4.id = JOKOA_jokalariaIrudiaSortu();
        P5.id = JOKOA_jokalariaIrudiaSortu();
        P6.id = JOKOA_jokalariaIrudiaSortu();
        P7.id = JOKOA_jokalariaIrudiaSortu();
        P8.id = JOKOA_jokalariaIrudiaSortu();
        P9.id = JOKOA_jokalariaIrudiaSortu();
        P10.id = JOKOA_jokalariaIrudiaSortu();
        P11.id = JOKOA_jokalaria2IrudiaSortu();
        P12.id = JOKOA_jokalaria2IrudiaSortu();
        P13.id = JOKOA_jokalaria2IrudiaSortu();
        P14.id = JOKOA_jokalaria2IrudiaSortu();
        P15.id = JOKOA_jokalaria2IrudiaSortu();
        P16.id = JOKOA_jokalaria2IrudiaSortu();
        P17.id = JOKOA_jokalaria2IrudiaSortu();
        P18.id = JOKOA_jokalaria2IrudiaSortu();
        P19.id = JOKOA_jokalaria2IrudiaSortu();
        P20.id = JOKOA_jokalaria2IrudiaSortu();
        P21.id = JOKOA_jokalaria3IrudiaSortu();
        P22.id = JOKOA_jokalaria3IrudiaSortu();
        P23.id = JOKOA_jokalaria3IrudiaSortu();
        P24.id = JOKOA_jokalaria3IrudiaSortu();
        P25.id = JOKOA_jokalaria3IrudiaSortu();
        P26.id = JOKOA_jokalaria3IrudiaSortu();
        P27.id = JOKOA_jokalaria3IrudiaSortu();
        P28.id = JOKOA_jokalaria3IrudiaSortu();
        P29.id = JOKOA_jokalaria3IrudiaSortu();
        P30.id = JOKOA_jokalaria3IrudiaSortu();
        do {
            kont1++;
            Sleep(2);
            aux = ERREALITATE_FISIKOA_mugimendua(zirkulua.pos);
            zirkulua.pos.y = aux.y;
            pantailaGarbitu();
            arkatzKoloreaEzarri(0, 0, 0xFF);
            zirkuluaMarraztu(zirkulua.pos.x, zirkulua.pos.y, 20);
            if(kont1<20000){

             Olatua1(P1, P2, P3, P4, P5, P6);

            }
            if(kont1 > 20000 && kont1 < 40000){
            
            Olatua2(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10);
            }

            if (kont1 > 40000 && kont1 < 60000) {


             Olatua3(P21, P22, P23, P24, P25, P26);

            }
           
            /* irudiaMugitu(P11.id, jokalaria.pos.x, jokalaria.pos.y);
             irudiaMugitu(P12.id, jokalaria.pos.x, jokalaria.pos.y);
             irudiaMugitu(P13.id, jokalaria.pos.x, jokalaria.pos.y);
             irudiaMugitu(P14.id, jokalaria.pos.x, jokalaria.pos.y);
             irudiaMugitu(P15.id, jokalaria.pos.x, jokalaria.pos.y);
             irudiaMugitu(P16.id, jokalaria.pos.x, jokalaria.pos.y);
             irudiaMugitu(P17.id, jokalaria.pos.x, jokalaria.pos.y);
             irudiaMugitu(P18.id, jokalaria.pos.x, jokalaria.pos.y);
             irudiaMugitu(P19.id, jokalaria.pos.x, jokalaria.pos.y);
             irudiaMugitu(P20.id, jokalaria.pos.x, jokalaria.pos.y);
             irudiaMugitu(P21.id, jokalaria.pos.x, jokalaria.pos.y);
             irudiaMugitu(P22.id, jokalaria.pos.x, jokalaria.pos.y);
             irudiaMugitu(P23.id, jokalaria.pos.x, jokalaria.pos.y);
             irudiaMugitu(P24.id, jokalaria.pos.x, jokalaria.pos.y);
             irudiaMugitu(P25.id, jokalaria.pos.x, jokalaria.pos.y);
             irudiaMugitu(P26.id, jokalaria.pos.x, jokalaria.pos.y);
             irudiaMugitu(P27.id, jokalaria.pos.x, jokalaria.pos.y);
             irudiaMugitu(P28.id, jokalaria.pos.x, jokalaria.pos.y);
             irudiaMugitu(P29.id, jokalaria.pos.x, jokalaria.pos.y);
             irudiaMugitu(P30.id, jokalaria.pos.x, jokalaria.pos.y);*/
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
                aux = ERREALITATE_FISIKOA_mugimendua(P1.pos);
                aux2 = ERREALITATE_FISIKOA2_mugimendua(P1.pos);
                aux3 = ERREALITATE_FISIKOA_mugimendua(P2.pos);
                aux4 = ERREALITATE_FISIKOA2_mugimendua(P2.pos);
                aux5 = ERREALITATE_FISIKOA_mugimendua(P3.pos);
                aux6 = ERREALITATE_FISIKOA2_mugimendua(P3.pos);
                aux7 = ERREALITATE_FISIKOA_mugimendua(P4.pos);
                aux8 = ERREALITATE_FISIKOA2_mugimendua(P4.pos);
                aux9 = ERREALITATE_FISIKOA_mugimendua(P5.pos);
                aux10 = ERREALITATE_FISIKOA2_mugimendua(P5.pos);
                aux11 = ERREALITATE_FISIKOA_mugimendua(P6.pos);
                aux12 = ERREALITATE_FISIKOA2_mugimendua(P6.pos);
                aux13 = ERREALITATE_FISIKOA_mugimendua(P7.pos);
                aux14 = ERREALITATE_FISIKOA2_mugimendua(P7.pos);
                aux15 = ERREALITATE_FISIKOA_mugimendua(P8.pos);
                aux16 = ERREALITATE_FISIKOA2_mugimendua(P8.pos);
                aux17 = ERREALITATE_FISIKOA_mugimendua(P9.pos);
                aux18 = ERREALITATE_FISIKOA2_mugimendua(P9.pos);
                aux19 = ERREALITATE_FISIKOA_mugimendua(P10.pos);
                aux20 = ERREALITATE_FISIKOA2_mugimendua(P10.pos);
                aux21 = ERREALITATE_FISIKOA5_mugimendua(P11.pos);
                aux22 = ERREALITATE_FISIKOA6_mugimendua(P11.pos);
                aux23 = ERREALITATE_FISIKOA5_mugimendua(P12.pos);
                aux24 = ERREALITATE_FISIKOA6_mugimendua(P12.pos);
                aux25 = ERREALITATE_FISIKOA5_mugimendua(P13.pos);
                aux26 = ERREALITATE_FISIKOA6_mugimendua(P13.pos);
                aux27 = ERREALITATE_FISIKOA5_mugimendua(P14.pos);
                aux28 = ERREALITATE_FISIKOA6_mugimendua(P14.pos);
                aux29 = ERREALITATE_FISIKOA5_mugimendua(P15.pos);
                aux30 = ERREALITATE_FISIKOA6_mugimendua(P15.pos);
                aux31 = ERREALITATE_FISIKOA5_mugimendua(P16.pos);
                aux32 = ERREALITATE_FISIKOA6_mugimendua(P16.pos);
                aux33 = ERREALITATE_FISIKOA5_mugimendua(P17.pos);
                aux34 = ERREALITATE_FISIKOA6_mugimendua(P17.pos);
                aux35 = ERREALITATE_FISIKOA5_mugimendua(P18.pos);
                aux36 = ERREALITATE_FISIKOA6_mugimendua(P18.pos);
                aux37 = ERREALITATE_FISIKOA5_mugimendua(P19.pos);
                aux38 = ERREALITATE_FISIKOA6_mugimendua(P19.pos);
                aux39 = ERREALITATE_FISIKOA5_mugimendua(P20.pos);
                aux40 = ERREALITATE_FISIKOA6_mugimendua(P20.pos);
                aux41 = ERREALITATE_FISIKOA3_mugimendua(P21.pos);
                aux42 = ERREALITATE_FISIKOA4_mugimendua(P21.pos);
                aux43 = ERREALITATE_FISIKOA3_mugimendua(P22.pos);
                aux44 = ERREALITATE_FISIKOA4_mugimendua(P22.pos);
                aux45 = ERREALITATE_FISIKOA3_mugimendua(P23.pos);
                aux46 = ERREALITATE_FISIKOA4_mugimendua(P23.pos);
                aux47 = ERREALITATE_FISIKOA3_mugimendua(P24.pos);
                aux48 = ERREALITATE_FISIKOA4_mugimendua(P24.pos);
                aux49 = ERREALITATE_FISIKOA3_mugimendua(P25.pos);
                aux50 = ERREALITATE_FISIKOA4_mugimendua(P25.pos);
                aux51 = ERREALITATE_FISIKOA3_mugimendua(P26.pos);
                aux52 = ERREALITATE_FISIKOA4_mugimendua(P26.pos);
                aux53 = ERREALITATE_FISIKOA3_mugimendua(P27.pos);
                aux54 = ERREALITATE_FISIKOA4_mugimendua(P27.pos);
                aux55 = ERREALITATE_FISIKOA3_mugimendua(P28.pos);
                aux56 = ERREALITATE_FISIKOA4_mugimendua(P28.pos);
                aux57 = ERREALITATE_FISIKOA3_mugimendua(P29.pos);
                aux58 = ERREALITATE_FISIKOA4_mugimendua(P29.pos);
                aux59 = ERREALITATE_FISIKOA3_mugimendua(P30.pos);
                aux60 = ERREALITATE_FISIKOA4_mugimendua(P30.pos);

                if (aux.x < 200) P1.pos.x = aux.x;
                if (aux3.x < 200) P2.pos.x = aux3.x;
                if (aux5.x < 200) P3.pos.x = aux5.x;
                if (aux7.x < 200) P4.pos.x = aux7.x;
                if (aux9.x < 200) P5.pos.x = aux9.x;
                if (aux11.x < 200) P6.pos.x = aux11.x;
                if (aux13.x < 200) P7.pos.x = aux13.x;
                if (aux15.x < 200) P8.pos.x = aux15.x;
                if (aux17.x < 200) P9.pos.x = aux17.x;
                if (aux19.x < 200) P10.pos.x = aux19.x;
                if (aux21.x < 200) P11.pos.x = aux21.x;
                if (aux23.x < 200) P12.pos.x = aux23.x;
                if (aux25.x < 200) P13.pos.x = aux25.x;
                if (aux27.x < 200) P14.pos.x = aux27.x;
                if (aux29.x < 200) P15.pos.x = aux29.x;
                if (aux31.x < 200) P16.pos.x = aux31.x;
                if (aux33.x < 200) P17.pos.x = aux33.x;
                if (aux35.x < 200) P18.pos.x = aux35.x;
                if (aux37.x < 200) P19.pos.x = aux37.x;
                if (aux39.x < 200) P20.pos.x = aux39.x;
                if (aux41.x < 200) P21.pos.x = aux41.x;
                if (aux43.x < 200) P22.pos.x = aux43.x;
                if (aux45.x < 200) P23.pos.x = aux45.x;
                if (aux47.x < 200) P24.pos.x = aux47.x;
                if (aux49.x < 200) P25.pos.x = aux49.x;
                if (aux51.x < 200) P26.pos.x = aux51.x;
                if (aux53.x < 200) P27.pos.x = aux53.x;
                if (aux55.x < 200) P28.pos.x = aux55.x;
                if (aux57.x < 200) P29.pos.x = aux57.x;
                if (aux59.x < 200) P30.pos.x = aux59.x;

                if (aux.x == 200) P1.pos.y = aux.y;
                if (aux3.x == 200) P2.pos.y = aux3.y;
                if (aux5.x == 200) P3.pos.y = aux5.y;
                if (aux7.x == 200) P4.pos.y = aux7.y;
                if (aux9.x == 200) P5.pos.y = aux9.y;
                if (aux11.x == 200) P6.pos.y = aux11.y;
                if (aux13.x == 200) P7.pos.y = aux13.y;
                if (aux15.x == 200) P8.pos.y = aux15.y;
                if (aux17.x == 200) P9.pos.y = aux17.y;
                if (aux19.x == 200) P10.pos.y = aux19.y;
                if (aux21.x == 200) P11.pos.y = aux21.y;
                if (aux23.x == 200) P12.pos.y = aux23.y;
                if (aux25.x == 200) P13.pos.y = aux25.y;
                if (aux27.x == 200) P14.pos.y = aux27.y;
                if (aux29.x == 200) P15.pos.y = aux29.y;
                if (aux31.x == 200) P16.pos.y = aux31.y;
                if (aux33.x == 200) P17.pos.y = aux33.y;
                if (aux35.x == 200) P18.pos.y = aux35.y;
                if (aux37.x == 200) P19.pos.y = aux37.y;
                if (aux39.x == 200) P20.pos.y = aux39.y;
                if (aux41.x == 200) P21.pos.y = aux41.y;
                if (aux43.x == 200) P22.pos.y = aux43.y;
                if (aux45.x == 200) P23.pos.y = aux45.y;
                if (aux47.x == 200) P24.pos.y = aux47.y;
                if (aux49.x == 200) P25.pos.y = aux49.y;
                if (aux51.x == 200) P26.pos.y = aux51.y;
                if (aux53.x == 200) P27.pos.y = aux53.y;
                if (aux55.x == 200) P28.pos.y = aux55.y;
                if (aux57.x == 200) P29.pos.y = aux57.y;
                if (aux59.x == 200) P30.pos.y = aux59.y;


                if (aux.x >= 200 && aux.x < 640 && aux.y < 100) P1.pos.x = aux.x;
                if (aux3.x >= 200 && aux3.x < 640 && aux3.y < 100) P2.pos.x = aux3.x;
                if (aux5.x >= 200 && aux5.x < 640 && aux5.y < 100) P3.pos.x = aux5.x;
                if (aux7.x >= 200 && aux7.x < 640 && aux7.y < 100) P4.pos.x = aux7.x;
                if (aux9.x >= 200 && aux9.x < 640 && aux9.y < 100) P5.pos.x = aux9.x;
                if (aux11.x >= 200 && aux11.x < 640 && aux11.y < 100) P6.pos.x = aux11.x;
                if (aux13.x >= 200 && aux13.x < 640 && aux13.y < 100) P7.pos.x = aux13.x;
                if (aux15.x >= 200 && aux15.x < 640 && aux15.y < 100) P8.pos.x = aux15.x;
                if (aux17.x >= 200 && aux17.x < 640 && aux17.y < 100) P9.pos.x = aux17.x;
                if (aux19.x >= 200 && aux19.x < 640 && aux19.y < 100) P10.pos.x = aux19.x;
                if (aux21.x >= 200 && aux21.x < 640 && aux21.y < 100) P11.pos.x = aux21.x;
                if (aux23.x >= 200 && aux23.x < 640 && aux23.y < 100) P12.pos.x = aux23.x;
                if (aux25.x >= 200 && aux25.x < 640 && aux25.y < 100) P13.pos.x = aux25.x;
                if (aux27.x >= 200 && aux27.x < 640 && aux27.y < 100) P14.pos.x = aux27.x;
                if (aux29.x >= 200 && aux29.x < 640 && aux29.y < 100) P15.pos.x = aux29.x;
                if (aux31.x >= 200 && aux31.x < 640 && aux31.y < 100) P16.pos.x = aux31.x;
                if (aux33.x >= 200 && aux33.x < 640 && aux33.y < 100) P17.pos.x = aux33.x;
                if (aux35.x >= 200 && aux35.x < 640 && aux35.y < 100) P18.pos.x = aux35.x;
                if (aux37.x >= 200 && aux37.x < 640 && aux37.y < 100) P19.pos.x = aux37.x;
                if (aux39.x >= 200 && aux39.x < 640 && aux39.y < 100) P20.pos.x = aux39.x;
                if (aux41.x >= 200 && aux41.x < 640 && aux41.y < 100) P21.pos.x = aux41.x;
                if (aux43.x >= 200 && aux43.x < 640 && aux43.y < 100) P22.pos.x = aux43.x;
                if (aux45.x >= 200 && aux45.x < 640 && aux45.y < 100) P23.pos.x = aux45.x;
                if (aux47.x >= 200 && aux47.x < 640 && aux47.y < 100) P24.pos.x = aux47.x;
                if (aux49.x >= 200 && aux49.x < 640 && aux49.y < 100) P25.pos.x = aux49.x;
                if (aux51.x >= 200 && aux51.x < 640 && aux51.y < 100) P26.pos.x = aux51.x;
                if (aux53.x >= 200 && aux53.x < 640 && aux53.y < 100) P27.pos.x = aux53.x;
                if (aux55.x >= 200 && aux55.x < 640 && aux55.y < 100) P28.pos.x = aux55.x;
                if (aux57.x >= 200 && aux57.x < 640 && aux57.y < 100) P29.pos.x = aux57.x;
                if (aux59.x >= 200 && aux59.x < 640 && aux59.y < 100) P30.pos.x = aux59.x;

                if (aux.x == 640) P1.pos.y = aux2.y;
                if (aux3.x == 640) P2.pos.y = aux4.y;
                if (aux5.x == 640) P3.pos.y = aux6.y;
                if (aux7.x == 640) P4.pos.y = aux8.y;
                if (aux9.x == 640) P5.pos.y = aux10.y;
                if (aux11.x == 640) P6.pos.y = aux12.y;
                if (aux13.x == 640) P7.pos.y = aux14.y;
                if (aux15.x == 640) P8.pos.y = aux16.y;
                if (aux17.x == 640) P9.pos.y = aux18.y;
                if (aux19.x == 640) P10.pos.y = aux20.y;
                if (aux21.x == 640) P11.pos.y = aux22.y;
                if (aux23.x == 640) P12.pos.y = aux24.y;
                if (aux25.x == 640) P13.pos.y = aux26.y;
                if (aux27.x == 640) P14.pos.y = aux28.y;
                if (aux29.x == 640) P15.pos.y = aux30.y;
                if (aux31.x == 640) P16.pos.y = aux32.y;
                if (aux33.x == 640) P17.pos.y = aux34.y;
                if (aux35.x == 640) P18.pos.y = aux36.y;
                if (aux37.x == 640) P19.pos.y = aux38.y;
                if (aux39.x == 640) P20.pos.y = aux40.y;
                if (aux41.x == 640) P21.pos.y = aux42.y;
                if (aux43.x == 640) P22.pos.y = aux44.y;
                if (aux45.x == 640) P23.pos.y = aux46.y;
                if (aux47.x == 640) P24.pos.y = aux48.y;
                if (aux49.x == 640) P25.pos.y = aux50.y;
                if (aux51.x == 640) P26.pos.y = aux52.y;
                if (aux53.x == 640) P27.pos.y = aux54.y;
                if (aux55.x == 640) P28.pos.y = aux56.y;
                if (aux57.x == 640) P29.pos.y = aux58.y;
                if (aux59.x == 640) P30.pos.y = aux60.y;

                if (aux.x >= 640 && aux.x < 920 && aux.y > 500) P1.pos.x = aux.x;
                if (aux3.x >= 640 && aux3.x < 920 && aux3.y > 500) P2.pos.x = aux3.x;
                if (aux5.x >= 640 && aux5.x < 920 && aux5.y > 500) P3.pos.x = aux5.x;
                if (aux7.x >= 640 && aux7.x < 920 && aux7.y > 500) P4.pos.x = aux7.x;
                if (aux9.x >= 640 && aux9.x < 920 && aux9.y > 500) P5.pos.x = aux9.x;
                if (aux11.x >= 640 && aux11.x < 920 && aux11.y > 500) P6.pos.x = aux11.x;
                if (aux13.x >= 640 && aux13.x < 920 && aux13.y > 500) P7.pos.x = aux13.x;
                if (aux15.x >= 640 && aux15.x < 920 && aux15.y > 500) P8.pos.x = aux15.x;
                if (aux17.x >= 640 && aux17.x < 920 && aux17.y > 500) P9.pos.x = aux17.x;
                if (aux19.x >= 640 && aux19.x < 920 && aux19.y > 500) P10.pos.x = aux19.x;
                if (aux21.x >= 640 && aux21.x < 920 && aux21.y > 500) P11.pos.x = aux21.x;
                if (aux23.x >= 640 && aux23.x < 920 && aux23.y > 500) P12.pos.x = aux23.x;
                if (aux25.x >= 640 && aux25.x < 920 && aux25.y > 500) P13.pos.x = aux25.x;
                if (aux27.x >= 640 && aux27.x < 920 && aux27.y > 500) P14.pos.x = aux27.x;
                if (aux29.x >= 640 && aux29.x < 920 && aux29.y > 500) P15.pos.x = aux29.x;
                if (aux31.x >= 640 && aux31.x < 920 && aux31.y > 500) P16.pos.x = aux31.x;
                if (aux33.x >= 640 && aux33.x < 920 && aux33.y > 500) P17.pos.x = aux33.x;
                if (aux35.x >= 640 && aux35.x < 920 && aux35.y > 500) P18.pos.x = aux35.x;
                if (aux37.x >= 640 && aux37.x < 920 && aux37.y > 500) P19.pos.x = aux37.x;
                if (aux39.x >= 640 && aux39.x < 920 && aux39.y > 500) P20.pos.x = aux39.x;
                if (aux41.x >= 640 && aux41.x < 920 && aux41.y > 500) P21.pos.x = aux41.x;
                if (aux43.x >= 640 && aux43.x < 920 && aux43.y > 500) P22.pos.x = aux43.x;
                if (aux45.x >= 640 && aux45.x < 920 && aux45.y > 500) P23.pos.x = aux45.x;
                if (aux47.x >= 640 && aux47.x < 920 && aux47.y > 500) P24.pos.x = aux47.x;
                if (aux49.x >= 640 && aux49.x < 920 && aux49.y > 500) P25.pos.x = aux49.x;
                if (aux51.x >= 640 && aux51.x < 920 && aux51.y > 500) P26.pos.x = aux51.x;
                if (aux53.x >= 640 && aux53.x < 920 && aux53.y > 500) P27.pos.x = aux53.x;
                if (aux55.x >= 640 && aux55.x < 920 && aux55.y > 500) P28.pos.x = aux55.x;
                if (aux57.x >= 640 && aux57.x < 920 && aux57.y > 500) P29.pos.x = aux57.x;
                if (aux59.x >= 640 && aux59.x < 920 && aux59.y > 500) P30.pos.x = aux59.x;
                
                if (aux.x == 920) P1.pos.y = aux.y;
                if (aux3.x == 920) P2.pos.y = aux3.y;
                if (aux5.x == 920) P3.pos.y = aux5.y;
                if (aux7.x == 920) P4.pos.y = aux7.y;
                if (aux9.x == 920) P5.pos.y = aux9.y;
                if (aux11.x == 920) P6.pos.y = aux11.y;
                if (aux13.x == 920) P7.pos.y = aux13.y;
                if (aux15.x == 920) P8.pos.y = aux15.y;
                if (aux17.x == 920) P9.pos.y = aux17.y;
                if (aux19.x == 920) P10.pos.y = aux19.y;
                if (aux21.x == 920) P11.pos.y = aux21.y;
                if (aux23.x == 920) P12.pos.y = aux23.y;
                if (aux25.x == 920) P13.pos.y = aux25.y;
                if (aux27.x == 920) P14.pos.y = aux27.y;
                if (aux29.x == 920) P15.pos.y = aux29.y;
                if (aux31.x == 920) P16.pos.y = aux31.y;
                if (aux33.x == 920) P17.pos.y = aux33.y;
                if (aux35.x == 920) P18.pos.y = aux35.y;
                if (aux37.x == 920) P19.pos.y = aux37.y;
                if (aux39.x == 920) P20.pos.y = aux39.y;
                if (aux41.x == 920) P21.pos.y = aux41.y;
                if (aux43.x == 920) P22.pos.y = aux43.y;
                if (aux45.x == 920) P23.pos.y = aux45.y;
                if (aux47.x == 920) P24.pos.y = aux47.y;
                if (aux49.x == 920) P25.pos.y = aux49.y;
                if (aux51.x == 920) P26.pos.y = aux51.y;
                if (aux53.x == 920) P27.pos.y = aux53.y;
                if (aux55.x == 920) P28.pos.y = aux55.y;
                if (aux57.x == 920) P29.pos.y = aux57.y;
                if (aux59.x == 920) P30.pos.y = aux59.y;

                if (aux.x >= 920 && aux.x < 1109 && aux.y < 300) P1.pos.x = aux.x;
                if (aux3.x >= 920 && aux3.x < 1109 && aux3.y < 300) P2.pos.x = aux3.x;
                if (aux5.x >= 920 && aux5.x < 1109 && aux5.y < 300) P3.pos.x = aux5.x;
                if (aux7.x >= 920 && aux7.x < 1109 && aux7.y < 300) P4.pos.x = aux7.x;
                if (aux9.x >= 920 && aux9.x < 1109 && aux9.y < 300) P5.pos.x = aux9.x;
                if (aux11.x >= 920 && aux11.x < 1109 && aux11.y < 300) P6.pos.x = aux11.x;
                if (aux13.x >= 920 && aux13.x < 1109 && aux13.y < 300) P7.pos.x = aux13.x;
                if (aux15.x >= 920 && aux15.x < 1109 && aux15.y < 300) P8.pos.x = aux15.x;
                if (aux17.x >= 920 && aux17.x < 1109 && aux17.y < 300) P9.pos.x = aux17.x;
                if (aux19.x >= 920 && aux19.x < 1109 && aux19.y < 300) P10.pos.x = aux19.x;
                if (aux21.x >= 920 && aux21.x < 1109 && aux21.y < 300) P11.pos.x = aux21.x;
                if (aux23.x >= 920 && aux23.x < 1109 && aux23.y < 300) P12.pos.x = aux23.x;
                if (aux25.x >= 920 && aux25.x < 1109 && aux25.y < 300) P13.pos.x = aux25.x;
                if (aux27.x >= 920 && aux27.x < 1109 && aux27.y < 300) P14.pos.x = aux27.x;
                if (aux29.x >= 920 && aux29.x < 1109 && aux29.y < 300) P15.pos.x = aux29.x;
                if (aux31.x >= 920 && aux31.x < 1109 && aux31.y < 300) P16.pos.x = aux31.x;
                if (aux33.x >= 920 && aux33.x < 1109 && aux33.y < 300) P17.pos.x = aux33.x;
                if (aux35.x >= 920 && aux35.x < 1109 && aux35.y < 300) P18.pos.x = aux35.x;
                if (aux37.x >= 920 && aux37.x < 1109 && aux37.y < 300) P19.pos.x = aux37.x;
                if (aux39.x >= 920 && aux39.x < 1109 && aux39.y < 300) P20.pos.x = aux39.x;
                if (aux41.x >= 920 && aux41.x < 1109 && aux41.y < 300) P21.pos.x = aux41.x;
                if (aux43.x >= 920 && aux43.x < 1109 && aux43.y < 300) P22.pos.x = aux43.x;
                if (aux45.x >= 920 && aux45.x < 1109 && aux45.y < 300) P23.pos.x = aux45.x;
                if (aux47.x >= 920 && aux47.x < 1109 && aux47.y < 300) P24.pos.x = aux47.x;
                if (aux49.x >= 920 && aux49.x < 1109 && aux49.y < 300) P25.pos.x = aux49.x;
                if (aux51.x >= 920 && aux51.x < 1109 && aux51.y < 300) P26.pos.x = aux51.x;
                if (aux53.x >= 920 && aux53.x < 1109 && aux53.y < 300) P27.pos.x = aux53.x;
                if (aux55.x >= 920 && aux55.x < 1109 && aux55.y < 300) P28.pos.x = aux55.x;
                if (aux57.x >= 920 && aux57.x < 1109 && aux57.y < 300) P29.pos.x = aux57.x;
                if (aux59.x >= 920 && aux59.x < 1109 && aux59.y < 300) P30.pos.x = aux59.x;

                if (kont1 % 30000 == 0)
                {

                    P1.pos.x = -10;
                    P1.pos.y = 480;

                    P2.pos.x = -40;
                    P2.pos.y = 480;

                    P3.pos.x = -70;
                    P3.pos.y = 480;

                    P4.pos.x = -100;
                    P4.pos.y = 480;

                    P5.pos.x = -130;
                    P5.pos.y = 480;

                    P6.pos.x = -160;
                    P6.pos.y = 480;

                    P7.pos.x = -190;
                    P7.pos.y = 480;

                    P8.pos.x = -220;
                    P8.pos.y = 480;

                    P9.pos.x = -250;
                    P9.pos.y = 480;

                    P10.pos.x = -280;
                    P10.pos.y = 480;

                    P11.pos.x = -310;
                    P11.pos.y = 480;

                    P12.pos.x = -340;
                    P12.pos.y = 480;

                    P13.pos.x = -370;
                    P13.pos.y = 480;

                    P14.pos.x = -400;
                    P14.pos.y = 480;

                    P15.pos.x = -430;
                    P15.pos.y = 480;

                    P16.pos.x = -460;
                    P16.pos.y = 480;

                    P17.pos.x = -490;
                    P17.pos.y = 480;

                    P18.pos.x = -520;
                    P18.pos.y = 480;

                    P19.pos.x = -550;
                    P19.pos.y = 480;

                    P20.pos.x = -580;
                    P20.pos.y = 480;

                    P21.pos.x = -610;
                    P21.pos.y = 480;

                    P22.pos.x = -640;
                    P22.pos.y = 480;

                    P23.pos.x = -670;
                    P23.pos.y = 480;

                    P24.pos.x = -540;
                    P24.pos.y = 480;

                    P25.pos.x = -730;
                    P25.pos.y = 480;

                    P26.pos.x = -760;
                    P26.pos.y = 480;

                    P27.pos.x = -790;
                    P27.pos.y = 480;

                    P28.pos.x = -820;
                    P28.pos.y = 480;

                    P29.pos.x = -850;
                    P29.pos.y = 480;

                    P30.pos.x = -880;
                    P30.pos.y = 480;
                
                
                
                }
            
               
            }

            egoera = JOKOA_egoera(P1, zirkulua);
        } while (egoera == JOLASTEN);
        irudiaKendu(P1.id);
        irudiaKendu(fondoa2.id);
        toggleMusic();
        audioTerminate();
        pantailaGarbitu();
        pantailaBerriztu();
        return 0;
    
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
  else if (jokalaria.pos.x > 1500) {
    ret = GALDU;
  }
  return ret;
}

int JOKOA_jokalariaIrudiaSortu() 
{
  int martzianoId = -1;
  martzianoId = irudiaKargatu(JOKOA_PLAYER_IMAGE);
  irudiaMugitu(martzianoId, -70, 650);
  pantailaGarbitu();
  irudiakMarraztu();
  pantailaBerriztu();
  return martzianoId;

}

int JOKOA_jokalaria2IrudiaSortu()
{
    int pepinillo = -1;
    pepinillo = irudiaKargatu(JOKOA_PLAYER_IMAGE2);
    irudiaMugitu(pepinillo, -20, 650);
    pantailaGarbitu();
    irudiakMarraztu();
    pantailaBerriztu();
    return pepinillo;

}

int JOKOA_jokalaria3IrudiaSortu() {
    int pepino2 = -1;
    pepino2 = irudiaKargatu(JOKOA_PLAYER_IMAGE3);
    irudiaMugitu(pepino2, -10, 670);
    pantailaGarbitu();
    irudiakMarraztu();
    pantailaBerriztu();
    return pepino2;
}







POSIZIOA ERREALITATE_FISIKOA_mugimendua(POSIZIOA posizioa) {
  posizioa.y = posizioa.y - 0.5;
  posizioa.x = posizioa.x + 0.5;
  return posizioa;
}

POSIZIOA ERREALITATE_FISIKOA2_mugimendua(POSIZIOA posizioa) {
    posizioa.y = posizioa.y + 0.5;
    posizioa.x = posizioa.x + 8;
    return posizioa;
}


POSIZIOA ERREALITATE_FISIKOA3_mugimendua(POSIZIOA posizioa) {
    posizioa.y = posizioa.y - 1;
    posizioa.x = posizioa.x + 1;
    return posizioa;
}

POSIZIOA ERREALITATE_FISIKOA4_mugimendua(POSIZIOA posizioa) {
    posizioa.y = posizioa.y + 1;
    posizioa.x = posizioa.x + 8;
    return posizioa;
}


POSIZIOA ERREALITATE_FISIKOA5_mugimendua(POSIZIOA posizioa) {
    posizioa.y = posizioa.y - 0.2;
    posizioa.x = posizioa.x + 0.2;
    return posizioa;
}

POSIZIOA ERREALITATE_FISIKOA6_mugimendua(POSIZIOA posizioa) {
    posizioa.y = posizioa.y + 0.2;
    posizioa.x = posizioa.x + 8;
    return posizioa;
}

void  jokoAmaierakoa1(EGOERA egoera)
{
    int ebentu = 0, id;
    int idAudioGame;

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
    do
    {
        ebentu = ebentuaJasoGertatuBada();
    } while ((ebentu != TECLA_RETURN));
    audioTerminate();
    irudiaKendu(id);
}

void  jokoAmaierakoa2(EGOERA egoera)
{
    int ebentu = 0, id = -1;
    int idAudioGame;

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
    do
    {
        ebentu = ebentuaJasoGertatuBada();
    } while ((ebentu != TECLA_RETURN));
    audioTerminate();
    irudiaKendu(id);
}



int HASIERA_irudiaBistaratu()
{
    int id = -1;
    id = irudiaKargatu(FONDO_INCIO);
    irudiaMugitu(id, 0, 0);
    irudiakMarraztu();
    pantailaBerriztu();
    return id;
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

int FONDOA_irudiaBistaratu() {
    int fondo = -1;
    fondo = irudiaKargatu(BACKGROUND_IMAGE);
    irudiaMugitu(fondo, 0, 0);
    pantailaGarbitu();
    irudiakMarraztu();
    pantailaBerriztu();
    return fondo;
}


