#include "torre.h"
#include "graphics.h"
#include "ebentoak.h"
#include "soinua.h"
#include "text.h"
#include "imagen.h"

struct torres { int torres, torre1, torre2, torre3, torre4, torre5, torre6, torre7, torre8, torre9, torre10; }torres;


struct irudia
{
    int irudia, idmenu1, idmenu2, idmenu3, idmenu4, id1, id2, id3, id4, id5, id6, id7, id8, id9, id10;
};
struct irudia irudia;

POSIZIOA pos;

int torre(int a)
{
    int c = 0, b = 0, irten = 0, ebentu;

    while(irten == 0)
    {
        ebentu = ebentuaJasoGertatuBada();

        if (ebentu == SAGU_BOTOIA_EZKERRA)
        {
            pos = saguarenPosizioa();

            if ((pos.x > 54) && (pos.x < 101) && (pos.y > 370) && (pos.y < 412))
            {
                b = 23;
                c = 339;

                torres.torre1 = torre1(torres.torre1, a, b, c, irudia.id1);
                irudia.id1 = irudia.irudia;
                irudia.irudia = 0;

                irten = 1;
            }
            else if ((pos.x > 148) && (pos.x < 197) && (pos.y > 577) && (pos.y < 625))
            {
                b = 122;
                c = 534;

                torres.torre2 = torre1(torres.torre2, a, b, c, irudia.id2);
                irudia.id2 = irudia.irudia;
                irudia.irudia = 0;

                irten = 1;
            }
            else if ((pos.x > 197) && (pos.x < 244) && (pos.y > 54) && (pos.y < 104))
            {
                b = 171;
                c = 7;

                torres.torre3 = torre1(torres.torre3, a, b, c, irudia.id3);
                irudia.id3 = irudia.irudia;
                irudia.irudia = 0;

                irten = 1;
            }
            else  if ((pos.x > 247) && (pos.x < 293) && (pos.y > 244) && (pos.y < 290))
            {
                b = 220;
                c = 201;

                torres.torre4 = torre1(torres.torre4, a, b, c, irudia.id4);
                irudia.id4 = irudia.irudia;
                irudia.irudia = 0;

                irten = 1;
            }
            else if ((pos.x > 291) && (pos.x < 338) && (pos.y > 54) && (pos.y < 104))
            {
                b = 265;
                c = 5;

                torres.torre5 = torre1(torres.torre5, a, b, c, irudia.id5);
                irudia.id5 = irudia.irudia;
                irudia.irudia = 0;

                irten = 1;
            }
            else if ((pos.x > 577) && (pos.x < 626) && (pos.y > 230) && (pos.y < 279))
            {
                b = 551;
                c = 203;

                torres.torre6 = torre1(torres.torre6, a, b, c, irudia.id6);
                irudia.id6 = irudia.irudia;
                irudia.irudia = 0;

                irten = 1;
            }
            else if ((pos.x > 723) && (pos.x < 772) && (pos.y > 435) && (pos.y < 484)
            {
                b = 694;
                c = 388;

                torres.torre7 = torre1(torres.torre7, a, b, c, irudia.id7);
                irudia.id7 = irudia.irudia;
                irudia.irudia = 0;
                irten = 1;
            }
            else if ((pos.x > 909) && (pos.x < 958) && (pos.y > 243) && (pos.y < 292))
            {
                b = 883;
                c = 197;

                torres.torre8 = torre1(torres.torre8, a, b, c, irudia.id8);
                irudia.id8 = irudia.irudia;
                irudia.irudia = 0;

                irten = 1;
            }
            else if ((pos.x > 960) && (pos.x < 909) && (pos.y > 434) && (pos.y < 483))
            {
                b = 935;
                c = 392;

                torres.torre9 = torre1(torres.torre9, a, b, c, irudia.id9);
                irudia.id9 = irudia.irudia;
                irudia.irudia = 0;

                irten = 1;
            }
            else if ((pos.x > 1005) && (pos.x < 1054) && (pos.y > 244) && (pos.y < 293))
            {
                b = 980;
                c = 196;

                torres.torre10 = torre1(torres.torre10, a, b, c, irudia.id10);
                irudia.id10 = irudia.irudia;
                irudia.irudia = 0;

                irten = 1;
            }
           
        }
    }

    return a;
}

int torre1(int torre, int a, int b, int c, int id)
{
    int ebentu, irten = 0, saldu = 0, mejoratu = 0;

    if (torre == 0)
    {
        irudia.idmenu1 = irudiaKargatu(".\\img\\menus\\menu1.bmp");
        irudiaMugitu(irudia.idmenu1, 290, 341);
        irudiakMarraztu();
        pantailaBerriztu();
        irudiaKendu(irudia.idmenu1);
     
        torre = comprar(a, b, c, id);
        irudiakMarraztu();
        pantailaBerriztu();
    }
    else
    {
        irudia.idmenu2 = irudiaKargatu(".\\img\\menus\\menu2.bmp");
        irudiaMugitu(irudia.idmenu2, 290, 341);
        irudiakMarraztu();
        pantailaBerriztu();
        irudiaKendu(irudia.idmenu2);


        while (irten == 0)
        {
            ebentu = ebentuaJasoGertatuBada();
            if (ebentu == SAGU_BOTOIA_EZKERRA)
            {
                pos = saguarenPosizioa();

                if ((pos.x > 305) && (pos.x < 402) && (pos.y > 464) && (pos.y < 508))
                {
                    irten = 1;
                    irudiakMarraztu();
                    pantailaBerriztu();
                }
                while (irten == 0)
                {
                    if (((pos.x > 307) && (pos.x < 405) && (pos.y > 414) && (pos.y < 471)) || (mejoratu == 1))
                    {
                        mejoratu = 0;
                        irudiakMarraztu();
                        pantailaBerriztu();

                        torre = mejorar(torre, a, id, b, c, saldu);

                        if (saldu == 0)
                        irten = 1;
                    }

                    else if (((pos.x > 307) && (pos.x < 405) && (pos.y > 358) && (pos.y < 414)) || (saldu == 1))
                    {
                        saldu = 0;
                        irudiakMarraztu();
                        pantailaBerriztu();

                        torre = vender(torre, a, id, b, c);

                        if (saldu == 0)
                        irten = 1;
                    }
                }
            }
        } 
    }

    return torre;
}

int comprar(int a, int b, int c, int id)
{
    int torre = 0, ebentu, irten = 0, borrar = 1;

  while (irten == 0)
  {
      ebentu = ebentuaJasoGertatuBada();
        if (ebentu == SAGU_BOTOIA_EZKERRA)
        {
            pos = saguarenPosizioa();

            if ((pos.x > 305) && (pos.x < 401) && (pos.y > 464) && (pos.y < 508))
            {
         
                irten = 1;
            }
            else if ((pos.x > 311) && (pos.x < 374) && (pos.y > 363) && (pos.y < 451))
            {
                if (a >= 100)
                {
                    a = a - 100;
                    torre = 3;
                    id = imagen(id, b, c, torre, borrar);
                    irudia.irudia = id;
                }
                else
                {
                    textuaGaitu();
                    pantailaGarbitu();
                    textuaIdatzi(10, 80, "Ez daukazu nahiko dirurik");
                    pantailaBerriztu();
          
                }

                irten = 1;
            }
            else if ((pos.x > 374) && (pos.x < 433) && (pos.y > 363) && (pos.y < 451))
            {
                if (a >= 40)
                {
                    a = a - 40;
                    torre = 1;
                    id = imagen(id, b, c, torre, borrar);                   
                    irudia.irudia = id;
                }
                else {
                    textuaGaitu();
                    pantailaGarbitu();
                    textuaIdatzi(10, 80, "Ez daukazu nahiko dirurik");
                    pantailaBerriztu();

                }
   
                irten = 1;
            }
            else if ((pos.x > 433) && (pos.x < 491) && (pos.y > 363) && (pos.y < 451))
            {
                if (a >= 60)
                {
                    torre = 2;
                    a = a - 60;
                   id = imagen(id, b, c, torre, borrar);
                    irudia.irudia = id;
                }
                else
                {
                    textuaGaitu();
                    pantailaGarbitu();
                    textuaIdatzi(10, 80, "Ez daukazu nahiko dirurik");
                    pantailaBerriztu();
                }
                irten = 1;
            }
           
        }
  }
      return torre;
}

int mejorar(int torre, int a, int id, int b, int c, int saldu)
{
    int ebentu, irten = 0;
    irudia.idmenu3 = irudiaKargatu(".\\img\\menus\\menu3.1.bmp");
    irudiaMugitu(irudia.idmenu3, 290, 341);
    irudiakMarraztu();
    pantailaBerriztu();
    irudiaKendu(irudia.idmenu3);

    while(irten == 0)
    {
        ebentu = ebentuaJasoGertatuBada();
        if (ebentu == SAGU_BOTOIA_EZKERRA)
        {
            pos = saguarenPosizioa();
            if ((pos.x > 413) && (pos.x < 515) && (pos.y > 474) && (pos.y < 522))
            {
                switch (torre)
                {
                case 1:
                    if (a > 40)
                    {
                        a = a - 40;
                    }
                    else
                    {
                        textuaIdatzi(10, 80, "Ez daukazu nahiko dirurik");
                        pantailaBerriztu();
                    }
                    break;
                case 2:
                    if (a > 60)
                    {
                        a = a - 60;
                    }
                    else
                    {
                        textuaIdatzi(10, 80, "Ez daukazu nahiko dirurik");
                        pantailaBerriztu();
                    }
                    break;
                case 3:
                    if (a > 100)
                    {
                        a = a - 100;
                    }
                    else   
                    {
                        textuaIdatzi(10, 80, "Ez daukazu nahiko dirurik");
                    pantailaBerriztu();
                    }
                    break;
                default:
                    break;
                }
                irten = 1;
            }
            else if ((pos.x > 307) && (pos.x < 473) && (pos.y > 474) && (pos.y < 520))

                irten = 1;
            else if ((pos.x > 473) && (pos.x < 515) && (pos.y > 474) && (pos.y < 520))
            {
                irudiakMarraztu();
                pantailaBerriztu();
                saldu = 1;
                irten = 1;
                return saldu;
            }
        }      
        } 

            return torre;
}

int vender(int torre, int a, int id, int b, int c, int mejoratu)
{
    int ebentu, irten = 0, borrar;

    
    irudia.idmenu4 = irudiaKargatu(".\\img\\menus\\menu3.2.bmp");
    irudiaMugitu(irudia.idmenu4, 290, 341);
    pantailaGarbitu();
    irudiakMarraztu();
    pantailaBerriztu();
 
    while(irten == 0)
    {
        ebentu = ebentuaJasoGertatuBada();
        if (ebentu == SAGU_BOTOIA_EZKERRA)
        {
            pos = saguarenPosizioa();
            if ((pos.x > 473) && (pos.x < 515) && (pos.y > 474) && (pos.y < 520))
            {

                borrar = 0;
                switch (torre)
                {
                case 1:
                    a = a + 20;
                   id = imagen(id, b, c, torre, borrar);

                    break;
                case 2:
                    a = a + 30;
                    imagen(id, b, c, torre, borrar);

                    break;
                case 3:
                    a = a + 50;
                    imagen(id, b, c, torre, borrar);

                    break;
                default:
                    break;
                }              
                irten = 1;
                torre = 0;
            
            }
            else if ((pos.x > 307) && (pos.x < 473) && (pos.y > 474) && (pos.y < 520))

                irten = 1;
            else if ((pos.x > 413) && (pos.x < 515) && (pos.y > 474) && (pos.y < 522))
            {
                irudiakMarraztu();
                pantailaBerriztu();
                torre = mejorar(torre, a, id, b, c);
                irten = 1;

            }
        }
    }
    return torre;
}

int imagen(int id, int b, int c, int torre, int borrar)
{

    if (borrar != 0)
    {
        switch (torre)
        {
        case 1:
            id = irudiaKargatu(".\\img\\torres\\1.bmp");
            irudiaMugitu(id, b, c);
            irudiakMarraztu();
            pantailaGarbitu();
            pantailaBerriztu();
            break;
        case 2:
            id = irudiaKargatu(".\\img\\torres\\2.bmp");
            irudiaMugitu(id, b, c);
            irudiakMarraztu();
            pantailaGarbitu();
            pantailaBerriztu();
            break;
        case 3:
            id = irudiaKargatu(".\\img\\torres\\3.bmp");
            irudiaMugitu(id, b, c);
            irudiakMarraztu();
            pantailaGarbitu();
            pantailaBerriztu();
            break;
        default:
            break;
        }
    }
    else 
    {
        irudiaKendu(id);
        pantailaBerriztu();
    }

     return id;
}