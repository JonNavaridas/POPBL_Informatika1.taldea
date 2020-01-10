#include "torre.h"
#include "graphics.h"
#include "ebentoak.h"
#include "soinua.h"
#include "text.h"
#include "imagen.h"
#include <stdio.h> 
#include <Windows.h>


struct Torres { int torre1, torre2, torre3, torre4, torre5, torre6, torre7, torre8, torre9, torre10; };

struct Irudia
{
    int id1, id2, id3, id4, id5, id6, id7, id8, id9, id10;
};
struct Irudiamenus
{
    int  idmenu1, idmenu2, idmenu3, idmenu4;
};

POSIZIOA pos;

void funtzioa()
{
    struct Torres torres;
    struct Irudia irudia;
    int dirua= 50000, irten = 0;

    torres.torre1 = 0;
    torres.torre2 = 0;
    torres.torre3 = 0;
    torres.torre4 = 0;
    torres.torre5 = 0;
    torres.torre6 = 0;
    torres.torre7 = 0;
    torres.torre8 = 0;
    torres.torre9 = 0;
    torres.torre10 = 0;
    irudia.id1 = 0;
    irudia.id2 = 0;
    irudia.id3 = 0;
    irudia.id4 = 0;
    irudia.id5 = 0;
    irudia.id6 = 0;
    irudia.id7 = 0;
    irudia.id8 = 0;
    irudia.id9 = 0;
    irudia.id10 = 0;

    while (irten == 0)
    {
        dirua = funtzioa1(dirua, &torres, &irudia);
    }
}

int funtzioa1(int dirua, struct Torres* torres, struct Irudia* irudia)
{
    int irten = 0, ebentu, T = 0;

    int b[20];

    while(irten == 0)
    {
        ebentu = ebentuaJasoGertatuBada();

        if (ebentu == SAGU_BOTOIA_EZKERRA)
        {
            pos = saguarenPosizioa();

            if ((pos.x > 54) && (pos.x < 101) && (pos.y > 380) && (pos.y < 427))
            {
                // menu1 elegitzeko
                    //1
                b[0] = 60;
                b[1] = 342;
                    //2
                b[2] = 13;
                b[3] = 392;
                    //3
                    b[4] = 108;
                    b[5] = 392;
                    //4
                    b[6] = 60;
                    b[7] = 440;

                 // menu2 elegitzeko
                    //saldu
                   b[8]= 13;
                    b[9] = 392;
                    //mejoratu
                    b[10] = 108;
                    b[11] = 392;

                 //menu1 X,Y
                    b[12] = -6;
                    b[13] = 328;

                 //menu2 X,Y
                    b[14] = 9;
                    b[15] = 344;

                    //torre X,Y
                    b[16] = 29;
                    b[17] = 339;

                T = funtzioa2(torres->torre1, dirua, irudia->id1, b);
                if ((*torres).torre1 == 0)
                    (*irudia).id1 = b[19];

                (*torres).torre1 = T;


                irten = 1;
            }
            else if ((pos.x > 148) && (pos.x < 197) && (pos.y > 577) && (pos.y < 625))
            {
                // menu1 elegitzeko
                    //1
                b[0] = 156;
                b[1] = 532;
                //2
                b[2] = 108;
                b[3] = 582;
                //3
                b[4] = 204;
                b[5] = 582;
                //4
                b[6] = 157;
                b[7] = 629;

                // menu2 elegitzeko
                   //saldu
                b[8] = 108;
                b[9] = 582;
                //mejoratu
                b[10] = 204;
                b[11] = 582;

                //menu1 X,Y
                b[12] = 92;
                b[13] = 518;

                //menu2 X,Y
                b[14] = 101;
                b[15] = 535;

                //torre X,Y
                b[16] = 125;
                b[17] = 534;

                T = funtzioa2(torres->torre2, dirua, irudia->id2, b);
                if ((*torres).torre2 == 0)
                    (*irudia).id2 = b[19];

                (*torres).torre2 = T;

                irten = 1;
            }
            else if ((pos.x > 197) && (pos.x < 244) && (pos.y > 54) && (pos.y < 104))
            {
                // menu1 elegitzeko
                    //1
                b[0] = 202;
                b[1] = 13;
                //2
                b[2] = 155;
                b[3] = 62;
                //3
                b[4] = 250;
                b[5] = 60;
                //4
                b[6] = 202;
                b[7] = 110;

                // menu2 elegitzeko
                   //saldu
                b[8] = 155;
                b[9] = 62;
                //mejoratu
                b[10] = 250;
                b[11] = 60;

                //menu1 X,Y
                b[12] = 138;
                b[13] = -6;

                //menu2 X,Y
                b[14] = 150;
                b[15] = 9;

                //torre X,Y
                b[16] = 171;
                b[17] = 7;

                T = funtzioa2(torres->torre3, dirua, irudia->id3, b);
                if ((*torres).torre3 == 0)
                    (*irudia).id3 =b[19];

                (*torres).torre3 = T;
                irten = 1;
            }
            else  if ((pos.x > 247) && (pos.x < 293) && (pos.y > 244) && (pos.y < 290))
            {
                // menu1 elegitzeko
                    //1
                    b[0] = 250;
                    b[1] = 200;
                //2

                    b[2] = 202;
                    b[3] = 248;
                //3
                    b[4] = 297;
                    b[5] = 249;
                //4
                    b[6] = 250;
                    b[7] = 295;

                // menu2 elegitzeko
                   //saldu
                    b[8] = 202;
                    b[9] = 248;
                //mejoratu
                    b[10] = 297;
                    b[11] = 249;

                //menu1 X,Y
                b[12] = 190;
                b[13] = 186;

                //menu2 X,Y
                b[14] = 200;
                b[15] = 203;

                //torre X,Y
                b[16] = 220;
                b[17] = 201;
 
                T = funtzioa2(torres->torre4, dirua, irudia->id4, b);
                if ((*torres).torre4 == 0)
                    (*irudia).id4 = b[19];

                (*torres).torre4 = T;
                irten = 1;
            }
            else if ((pos.x > 291) && (pos.x < 338) && (pos.y > 54) && (pos.y < 104))
            {            
                // menu1 elegitzeko
                  //1
                b[0] = 297;
                b[1] = 10;
                //2
                b[2] = 250;
                b[3] = 60;
                //3
                b[4] = 345;
                b[5] = 60;
                //4
                b[6] = 292;
                b[7] = 108;

                // menu2 elegitzeko
                   //saldu
                b[8] = 250;
                b[9] = 60;
                //mejoratu
                b[10] = 345;
                b[11] = 60;

                //menu1 X,Y
                b[12] = 228;
                b[13] = -6;

                //menu2 X,Y
                b[14] = 246;
                b[15] = 9;

                //torre X,Y
                b[16] = 265;
                b[17] = 5;

               T= funtzioa2(torres->torre5, dirua, irudia->id5, b);
                if ((*torres).torre5 == 0)
                    (*irudia).id5 = b[19];

                (*torres).torre5 = T;

                irten = 1;
            }
            else if ((pos.x > 577) && (pos.x < 626) && (pos.y > 230) && (pos.y < 279))
            {          
                // menu1 elegitzeko
             //1
                b[0] = 583;
                b[1] = 203;
                //2
                b[2] = 536;
                b[3] = 254;
                //3
                b[4] = 631;
                b[5] = 252;
                //4
                b[6] = 585;
                b[7] = 300;

                // menu2 elegitzeko
                   //saldu
                b[8] = 536;
                b[9] = 254;
                //mejoratu
                b[10] = 631;
                b[11] = 252;

                //menu1 X,Y
                b[12] = 512;
                b[13] = 186;

                //menu2 X,Y
                b[14] = 528;
                b[15] = 200;

                //torre X,Y
                b[16] = 551;
                b[17] = 203;
     
                T = funtzioa2(torres->torre6, dirua, irudia->id6, b);
                if ((*torres).torre6 == 0)
                    (*irudia).id6 = b[19];

                (*torres).torre6 = T;
                irten = 1;
            }
            else if ((pos.x > 723) && (pos.x < 772) && (pos.y > 435) && (pos.y < 484))
            {        
                // menu1 elegitzeko
         //1
                b[0] = 776;
                b[1] = 392;
                //2
                b[2] = 678;
                b[3] = 441;
                //3
                b[4] = 774;
                b[5] = 440;
                //4
                b[6] = 726;
                b[7] = 487;

                // menu2 elegitzeko
                   //saldu
                b[8] = 678;
                b[9] = 441;
                //mejoratu
                b[10] = 774;
                b[11] = 440;

                //menu1 X,Y
                b[12] = 664;
                b[13] = 374;

                //menu2 X,Y
                b[14] = 675;
                b[15] = 390;

                //torre X,Y
                b[16] = 694;
                b[17] = 388;

                T = funtzioa2(torres->torre7, dirua, irudia->id7, b);
                if ((*torres).torre7 == 0)
                    (*irudia).id7 = b[19];

                (*torres).torre7 = T;
                irten = 1;
            }
            else if ((pos.x > 909) && (pos.x < 958) && (pos.y > 243) && (pos.y < 292))
            { 
                // menu1 elegitzeko
                //1
                b[0] = 917;
                b[1] = 202;
                //2
                b[2] = 870;
                b[3] = 250;
                //3
                b[4] = 965;
                b[5] = 250;
                //4
                b[6] = 918;
                b[7] = 297;

                // menu2 elegitzeko
                   //saldu
                b[8] = 870;
                b[9] = 250;
                //mejoratu
                b[10] = 965;
                b[11] = 250;

                //menu1 X,Y
                b[12] = 853;
                b[13] = 182;

                //menu2 X,Y
                b[14] = 863;
                b[15] = 202;

                //torre X,Y
                b[16] = 883;
                b[17] = 197;

                T= funtzioa2(torres->torre8, dirua, irudia->id8, b);
                if ((*torres).torre8 == 0)
                    (*irudia).id8 = b[19];

                (*torres).torre8 = T;
                irten = 1;
            }
            else if ((pos.x > 960) && (pos.x < 1008) && (pos.y > 434) && (pos.y < 483))
            {
                // menu1 elegitzeko
 //1
                b[0] = 964;
                b[1] = 391;
                //2
                b[2] = 917;
                b[3] = 442;
                //3
                b[4] = 1013;
                b[5] = 441;
                //4
                b[6] = 966;
                b[7] = 488;

                // menu2 elegitzeko
                   //saldu
                b[8] = 917;
                b[9] = 442;
                //mejoratu
                b[10] = 1013;
                b[11] = 441;

                //menu1 X,Y
                b[12] = 900;
                b[13] = 375;

                //menu2 X,Y
                b[14] = 914;
                b[15] = 391;

                //torre X,Y
                b[16] = 935;
                b[17] = 392;

                T = funtzioa2(torres->torre9, dirua, irudia->id9, b);
                if ((*torres).torre9 == 0)
                    (*irudia).id9 = b[19];

                (*torres).torre9 = T;
                irten = 1;
            }
            else if ((pos.x > 1005) && (pos.x < 1054) && (pos.y > 244) && (pos.y < 293))
            {
                // menu1 elegitzeko
//1
                b[0] = 1012;
                b[1] = 202;
                //2
                b[2] = 965;
                b[3] = 252;
                //3
                b[4] = 1061;
                b[5] = 253;
                //4
                b[6] = 1012;
                b[7] = 300;

                // menu2 elegitzeko
                   //saldu
                b[8] = 965;
                b[9] = 252;
                //mejoratu
                b[10] = 1061;
                b[11] = 253;

                //menu1 X,Y
                b[12] = 948;
                b[13] = 182;

                //menu2 X,Y
                b[14] = 960;
                b[15] = 200;

                //torre X,Y
                b[16] = 980;
                b[17] = 200;

                T= funtzioa2(torres->torre10, dirua, (*irudia).id10, b);
                if ((*torres).torre10 == 0)
                    (*irudia).id10 = b[19];

                (*torres).torre10 = T;
                irten = 1;
            }
        }
    }
    return dirua;
}

int funtzioa2(int torres, int dirua, int irudia, int b[])
{
    struct Irudiamenus irudiamenus;
    int ebentu, irten = 0;

    if (torres == 0)
    {
        irudiamenus.idmenu1 = irudiaKargatu(".\\img\\menus\\menu1.bmp");
        irudiaMugitu(irudiamenus.idmenu1, b[12], b[13]);
        irudiakMarraztu();
        pantailaBerriztu();
        irudiaKendu(irudiamenus.idmenu1);
     
        torres = comprar(dirua, b);
        irudiakMarraztu();
        pantailaBerriztu();
    }
    else
    {
        irudiamenus.idmenu2 = irudiaKargatu(".\\img\\menus\\menu2.bmp");
        irudiaMugitu(irudiamenus.idmenu2, b[14], b[15]);
        irudiakMarraztu();
        pantailaBerriztu();
        irudiaKendu(irudiamenus.idmenu2);

        while (irten == 0) 
        {
            ebentu = ebentuaJasoGertatuBada();
        if (ebentu == SAGU_BOTOIA_EZKERRA)
        {
            pos = saguarenPosizioa();

            if ((pos.x > b[10]) && (pos.x < b[10] + 40) && (pos.y > b[11]) && (pos.y < b[11] + 40))
            {

              torres = mejorar(torres, dirua);

                irten = 1;
            }
            else if ((pos.x > b[8]) && (pos.x < b[8] + 40) && (pos.y > b[9]) && (pos.y < b[9] + 40))
            {
                torres = vender(torres, dirua, irudia);
             
                irten = 1;
            }
            else irten = 1;
        }                        
        } 
    }
    irudiakMarraztu();
    pantailaBerriztu();
    return torres;
}

int comprar(int dirua, int b[])
{
    int torre = 0, ebentu, irten = 0;

  while (irten == 0)
  {
      ebentu = ebentuaJasoGertatuBada();
        if (ebentu == SAGU_BOTOIA_EZKERRA)
        {

            pos = saguarenPosizioa();

            if ((pos.x > b[0]) && (pos.x < b[0] + 40) && (pos.y > b[1]) && (pos.y < b[1] + 40))
            {

                if (dirua >= 40)
                {
                    dirua = dirua - 40;
                    torre = 1;
                    ponerimagen(b, torre);
                }
                else
                {
                    textuaGaitu();
                    textuaIdatzi(10, 80, "Ez daukazu nahiko dirurik");
                }
                irten = 1;
            }
            else if ((pos.x > b[2]) && (pos.x < b[2] + 40) && (pos.y > b[3]) && (pos.y < b[3] + 40))
            {
                if (dirua >= 60)
                {
                    dirua = dirua - 60;
                    torre = 2;
                    ponerimagen(b, torre);
                }
                else {
                    textuaGaitu();
                    textuaIdatzi(10, 80, "Ez daukazu nahiko dirurik");
                }

                irten = 1;
            }
            else if ((pos.x > b[4]) && (pos.x < b[4] + 40) && (pos.y > b[5]) && (pos.y < b[5] + 40))
            {
                if (dirua >= 100)

                {
                    torre = 3;
                    dirua = dirua - 100;
                    ponerimagen(b, torre);
                }
                else
                {
                    textuaGaitu();
                    textuaIdatzi(10, 80, "Ez daukazu nahiko dirurik");
                }
                irten = 1;
            }
            else if ((pos.x > b[6]) && (pos.x < b[6] + 40) && (pos.y > b[7]) && (pos.y < b[7] + 40))
            {
                if (dirua >= 80)
                {
                    torre = 4;
                    dirua = dirua - 80;
                    ponerimagen(b, torre);
                }
                else
                {
                    textuaGaitu();
                    textuaIdatzi(10, 80, "Ez daukazu nahiko dirurik");
                }
                irten = 1;          
            }
            else irten = 1;
        }
  }
      return torre;
}

int mejorar(int torre, int dirua)
{
                switch (torre)
                {
                case 1:
                    if (dirua > 40)
                    {
                        dirua = dirua - 40;
                    }
                    else
                    {
                        textuaGaitu();
                        textuaIdatzi(10, 80, "Ez daukazu nahiko dirurik");
                    }
                    break;
                case 2:
                    if (dirua > 60)
                    {
                        dirua = dirua - 60;
                    }
                    else
                    {
                        textuaGaitu();
                        textuaIdatzi(10, 80, "Ez daukazu nahiko dirurik");
                    }
                    break;
                case 3:
                    if (dirua > 100)
                    {
                        dirua = dirua - 100;
                    }
                    else   
                    {
                        textuaGaitu();
                        textuaIdatzi(10, 80, "Ez daukazu nahiko dirurik");
                    }
                    break;
                case 4:
                    if (dirua > 80)
                    {
                        dirua = dirua - 80;
                    }
                    else
                    {
                        textuaGaitu();
                        textuaIdatzi(10, 80, "Ez daukazu nahiko dirurik");
                    }
                    break;

                default:
                    break;
                }
            return dirua;
}

int vender(int torre, int dirua, int irudia)
{
                switch (torre)
                {
                case 1:
                    dirua = dirua + 20;

                    break;
                case 2:
                    dirua = dirua + 30;

                    break;
                case 3:
                    dirua = dirua + 50;

                    break;
                case 4:
                    dirua = dirua + 40;

                    break;
                default:
                    break;
                }       
                irudiaKendu(irudia);
                pantailaBerriztu();
                torre = 0;          

    return torre;
}

void ponerimagen(int b[], int torre)
{
    switch (torre)
    {
    case 1:
        b[19] = irudiaKargatu(".\\img\\torres\\1.bmp");
        irudiaMugitu(b[19], b[16], b[17]);
        irudiakMarraztu();
        pantailaBerriztu();
        break;
    case 2:
        b[19] = irudiaKargatu(".\\img\\torres\\2.bmp");
        irudiaMugitu(b[19], b[16], b[17]);
        irudiakMarraztu();
        pantailaBerriztu();
        break;
    case 3:
        b[19] = irudiaKargatu(".\\img\\torres\\3.bmp");
        irudiaMugitu(b[19], b[16], b[17]);
        irudiakMarraztu();
        pantailaBerriztu();
        break;
    case 4:
        b[19] = irudiaKargatu(".\\img\\torres\\4.bmp");
        irudiaMugitu(b[19], b[16], b[17]);
        irudiakMarraztu();
        pantailaBerriztu();
        break;
    default:
        break;
    }
}
