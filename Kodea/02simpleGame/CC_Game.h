#ifndef CC_GAME_H
#define CC_GAME_H

#include "ourTypes.h"

int jokoaAurkeztu(void);
// Jokoa
EGOERA jokatu1();
// Irabazi edo galdu pantaila
void jokoAmaierakoa1(EGOERA egoera);
// Pantailan agertzen diren kontagailuak (dirua, bizitza eta denbora)
void kontagailua(int kont, int Posx, int Posy);

// Etsien irudiak sortu
int JOKOA_jokalariaIrudiaSortu(int pepinoId);
int JOKOA_jokalaria2IrudiaSortu(int pepinacoId);
int JOKOA_jokalaria3IrudiaSortu(int rapinilloId);
// Mapa sortu
int FONDOA_irudiaBistaratu();

// Hasierako pantailak sortu eta kargatu
void kredituak();
void howto();
int HASIERA_irudiaBistaratu(void);

// Irabazi edo galdu duzen detektatu
EGOERA JOKOA_egoera(int kont1, int lifeTotal);

// Pepinoen mugimendu nagusiak
POSIZIOA ERREALITATE_FISIKOA_mugimendua(POSIZIOA posizioa, int stop);
POSIZIOA ERREALITATE_FISIKOA2_mugimendua(POSIZIOA posizioa, int stop);
POSIZIOA ERREALITATE_FISIKOA3_mugimendua(POSIZIOA posizioa, int stop);
POSIZIOA ERREALITATE_FISIKOA4_mugimendua(POSIZIOA posizioa, int stop);
POSIZIOA ERREALITATE_FISIKOA5_mugimendua(POSIZIOA posizioa, int stop);
POSIZIOA ERREALITATE_FISIKOA6_mugimendua(POSIZIOA posizioa, int stop);

#endif