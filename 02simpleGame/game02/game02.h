#ifndef GAME10_H
#define GAME10_H

#include "ourTypes.h"

int jokoaAurkeztu(void);
EGOERA jokatu1();
//EGOERA jokatu2(void);
void  jokoAmaierakoa1(EGOERA egoera);
//void  jokoAmaierakoa2(EGOERA egoera);
void kontagailua(int kont, int Posx, int Posy);

int JOKOA_jokalariaIrudiaSortu(int pepinoId);
int JOKOA_jokalaria2IrudiaSortu(int pepinacoId);
int JOKOA_jokalaria3IrudiaSortu(int rapinilloId);
int FONDOA_irudiaBistaratu();

void kredituak();
void howto();
int HASIERA_irudiaBistaratu(void);

EGOERA JOKOA_egoera(int kont1, int lifeTotal);
POSIZIOA ERREALITATE_FISIKOA_mugimendua(POSIZIOA posizioa);
POSIZIOA ERREALITATE_FISIKOA2_mugimendua(POSIZIOA posizioa);
POSIZIOA ERREALITATE_FISIKOA3_mugimendua(POSIZIOA posizioa);
POSIZIOA ERREALITATE_FISIKOA4_mugimendua(POSIZIOA posizioa);
POSIZIOA ERREALITATE_FISIKOA5_mugimendua(POSIZIOA posizioa);
POSIZIOA ERREALITATE_FISIKOA6_mugimendua(POSIZIOA posizioa);
POSIZIOA inicializarAuxiliares(void);

#endif