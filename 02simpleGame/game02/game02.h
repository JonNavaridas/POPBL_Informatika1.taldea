#ifndef GAME10_H
#define GAME10_H
#include "ourTypes.h"

//Comienzo juego
int jokoaAurkeztu(void);
//Niveles
EGOERA jokatu1(void);
EGOERA jokatu2(void);
//Finales
void  jokoAmaierakoa1(EGOERA egoera);
void  jokoAmaierakoa2(EGOERA egoera);
//Cosas de Enaitz (No importante)
int JOKOA_jokalariaIrudiaSortu();
EGOERA JOKOA_egoera(JOKO_ELEMENTUA jokalaria, JOKO_ELEMENTUA oztopoa);
POSIZIOA ERREALITATE_FISIKOA_mugimendua(POSIZIOA posizioa);
//Creditos
void kredituak();

#endif