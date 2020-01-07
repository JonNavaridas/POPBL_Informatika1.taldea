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

            if ((pos.x > 49) && (pos.x < 93) && (pos.y > 370) && (pos.y < 412))
            {
                b = 30;
                c = 324;

                torres.torre1 = torre1(torres.torre1, a, b, c, irudia.id1);
                irudia.id1 = irudia.irudia;
                irudia.irudia = 0;

                irten = 1;
            }
            else if ((pos.x > 135) && (pos.x < 182) && (pos.y > 552) && (pos.y < 596))
            {
                b = 117;
                c = 507;

                torres.torre2 = torre1(torres.torre2, a, b, c, irudia.id2);
                irudia.id2 = irudia.irudia;
                irudia.irudia = 0;

                irten = 1;
            }
            else if ((pos.x > 181) && (pos.x < 225) && (pos.y > 53) && (pos.y < 93))
            {
                b = 160;
                c = 8;

                torres.torre3 = torre1(torres.torre3, a, b, c, irudia.id3);
                irudia.id3 = irudia.irudia;
                irudia.irudia = 0;

                irten = 1;
            }
            else  if ((pos.x > 227) && (pos.x < 291) && (pos.y > 233) && (pos.y < 273))
            {
                b = 205;
                c = 190;

                torres.torre4 = torre1(torres.torre4, a, b, c, irudia.id4);
                irudia.id4 = irudia.irudia;
                irudia.irudia = 0;

                irten = 1;
            }
            else if ((pos.x > 268) && (pos.x < 313) && (pos.y > 52) && (pos.y < 92))
            {
                b = 246;
                c = 7;

                torres.torre5 = torre1(torres.torre5, a, b, c, irudia.id5);
                irudia.id5 = irudia.irudia;
                irudia.irudia = 0;

                irten = 1;
            }
            else if ((pos.x > 530) && (pos.x < 575) && (pos.y > 234) && (pos.y < 274))
            {
                b = 509;
                c = 191;

                torres.torre6 = torre1(torres.torre6, a, b, c, irudia.id6);
                irudia.id6 = irudia.irudia;
                irudia.irudia = 0;

                irten = 1;
            }
            else if ((pos.x > 664) && (pos.x < 709) && (pos.y > 416) && (pos.y < 456))
            {
                b = 639;
                c = 368;

                torres.torre7 = torre1(torres.torre7, a, b, c, irudia.id7);
                irudia.id7 = irudia.irudia;
                irudia.irudia = 0;
                irten = 1;
            }
            else if ((pos.x > 838) && (pos.x < 883) && (pos.y > 234) && (pos.y < 274))
            {
                b = 818;
                c = 190;

                torres.torre8 = torre1(torres.torre8, a, b, c, irudia.id8);
                irudia.id8 = irudia.irudia;
                irudia.irudia = 0;

                irten = 1;
            }
            else if ((pos.x > 883) && (pos.x < 928) && (pos.y > 416) && (pos.y < 456))
            {
                b = 862;
                c = 372;

                torres.torre9 = torre1(torres.torre9, a, b, c, irudia.id9);
                irudia.id9 = irudia.irudia;
                irudia.irudia = 0;

                irten = 1;
            }
            else if ((pos.x > 924) && (pos.x < 969) && (pos.y > 233) && (pos.y < 263))
            {
                b = 907;
                c = 188;

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
    int ebentu, irten = 0;

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

                else if ((pos.x > 307) && (pos.x < 405) && (pos.y > 414) && (pos.y < 471))
                {
                    irudiakMarraztu();
                    pantailaBerriztu();
               
                    torre = mejorar(torre, a, id, b, c);
                    irudiaKendu(irudia.idmenu3);
                    irudiakMarraztu();
                    pantailaBerriztu();

                    irten = 1;
                }

                else if ((pos.x > 307) && (pos.x < 405) && (pos.y > 358) && (pos.y < 414))
                {
                    irudiakMarraztu();
                    pantailaBerriztu();

                    torre = vender(torre, a, id, b, c);

                    irten = 1;
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

int mejorar(int torre, int a, int id, int b, int c)
{
    int ebentu, irten = 0;
    irudia.idmenu3 = irudiaKargatu(".\\img\\menus\\menu3.1.bmp");
    irudiaMugitu(irudia.idmenu3, 290, 341);
    irudiakMarraztu();
    pantailaBerriztu();


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
                torre = vender(torre, a, id, b, c);
                irten = 1;
            }
        }      
        } 

            return torre;
}

int vender(int torre, int a, int id, int b, int c)
{
    int ebentu, irten = 0, borrar = 1;

    
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