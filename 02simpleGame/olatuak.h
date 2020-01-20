#ifndef OLATUAK_H
#define OLATUAK_H

#include "CC_Game.h"
#include "OurTypes.h"

// Etsaien olatu desberdinak
void Olatua1(JOKO_ELEMENTUA P1, JOKO_ELEMENTUA P2, JOKO_ELEMENTUA P3, JOKO_ELEMENTUA P4, JOKO_ELEMENTUA P5, JOKO_ELEMENTUA P6, int enemy[]);
void Olatua2(JOKO_ELEMENTUA P1, JOKO_ELEMENTUA P2, JOKO_ELEMENTUA P3, JOKO_ELEMENTUA P4, JOKO_ELEMENTUA P5, JOKO_ELEMENTUA P6, JOKO_ELEMENTUA P7, JOKO_ELEMENTUA P8, JOKO_ELEMENTUA P9, JOKO_ELEMENTUA P10, int enemy[]);
void Olatua3(JOKO_ELEMENTUA P21, JOKO_ELEMENTUA P22, JOKO_ELEMENTUA P23, JOKO_ELEMENTUA P24, JOKO_ELEMENTUA P25, JOKO_ELEMENTUA P26, int enemy[]);
void Olatua7(JOKO_ELEMENTUA P21, JOKO_ELEMENTUA P22, JOKO_ELEMENTUA P23, JOKO_ELEMENTUA P24, JOKO_ELEMENTUA P25, JOKO_ELEMENTUA P26, JOKO_ELEMENTUA P6, JOKO_ELEMENTUA P1, JOKO_ELEMENTUA P2, JOKO_ELEMENTUA P3, JOKO_ELEMENTUA P4, JOKO_ELEMENTUA P5, int enemy[]);
void Olatua4(JOKO_ELEMENTUA P1, JOKO_ELEMENTUA P2, JOKO_ELEMENTUA P3, JOKO_ELEMENTUA P4, JOKO_ELEMENTUA P21, JOKO_ELEMENTUA P22, JOKO_ELEMENTUA P23, JOKO_ELEMENTUA P24, int enemy[]);
void Olatua5(JOKO_ELEMENTUA P11, JOKO_ELEMENTUA P12, int enemy[]);
void Olatua6(JOKO_ELEMENTUA P1, JOKO_ELEMENTUA P2, JOKO_ELEMENTUA P3, JOKO_ELEMENTUA P4, JOKO_ELEMENTUA P5, JOKO_ELEMENTUA P11, JOKO_ELEMENTUA P12, int enemy[]);
void Olatua8(JOKO_ELEMENTUA P21, JOKO_ELEMENTUA P22, JOKO_ELEMENTUA P23, JOKO_ELEMENTUA P24, JOKO_ELEMENTUA P25, JOKO_ELEMENTUA P26, JOKO_ELEMENTUA P27, JOKO_ELEMENTUA P28, JOKO_ELEMENTUA P29, JOKO_ELEMENTUA P30, int enemy[]);
void Olatua9(JOKO_ELEMENTUA P11, JOKO_ELEMENTUA P12, JOKO_ELEMENTUA P13, JOKO_ELEMENTUA P14, int enemy[]);
void Olatua10(JOKO_ELEMENTUA P21, JOKO_ELEMENTUA P22, JOKO_ELEMENTUA P23, JOKO_ELEMENTUA P24, JOKO_ELEMENTUA P25, JOKO_ELEMENTUA P26, JOKO_ELEMENTUA P1, JOKO_ELEMENTUA P2, JOKO_ELEMENTUA P3, JOKO_ELEMENTUA P4, JOKO_ELEMENTUA P5, JOKO_ELEMENTUA P6, JOKO_ELEMENTUA P11, JOKO_ELEMENTUA P12, JOKO_ELEMENTUA P13, JOKO_ELEMENTUA P14, int enemy[]);
void Olatua11(JOKO_ELEMENTUA P21, JOKO_ELEMENTUA P22, JOKO_ELEMENTUA P23, JOKO_ELEMENTUA P24, JOKO_ELEMENTUA P25, JOKO_ELEMENTUA P26, JOKO_ELEMENTUA P27, JOKO_ELEMENTUA P28, JOKO_ELEMENTUA P29, JOKO_ELEMENTUA P30, JOKO_ELEMENTUA P11, JOKO_ELEMENTUA P12, JOKO_ELEMENTUA P13, JOKO_ELEMENTUA P14, int enemy[]);
void Olatua13(JOKO_ELEMENTUA P21, JOKO_ELEMENTUA P22, JOKO_ELEMENTUA P23, JOKO_ELEMENTUA P15, JOKO_ELEMENTUA P16, JOKO_ELEMENTUA P24, JOKO_ELEMENTUA P25, JOKO_ELEMENTUA P26, JOKO_ELEMENTUA P27, JOKO_ELEMENTUA P28, JOKO_ELEMENTUA P29, JOKO_ELEMENTUA P30, JOKO_ELEMENTUA P11, JOKO_ELEMENTUA P12, JOKO_ELEMENTUA P13, JOKO_ELEMENTUA P14, JOKO_ELEMENTUA P1, JOKO_ELEMENTUA P2, JOKO_ELEMENTUA P3, JOKO_ELEMENTUA P4, JOKO_ELEMENTUA P5, JOKO_ELEMENTUA P6, JOKO_ELEMENTUA P7, JOKO_ELEMENTUA P8, JOKO_ELEMENTUA P9, JOKO_ELEMENTUA P10, int enemy[]);
void Olatua12(JOKO_ELEMENTUA P21, JOKO_ELEMENTUA P22, JOKO_ELEMENTUA P23, JOKO_ELEMENTUA P24, JOKO_ELEMENTUA P25, JOKO_ELEMENTUA P26, JOKO_ELEMENTUA P27, JOKO_ELEMENTUA P28, JOKO_ELEMENTUA P29, JOKO_ELEMENTUA P30, JOKO_ELEMENTUA P11, JOKO_ELEMENTUA P12, JOKO_ELEMENTUA P1, JOKO_ELEMENTUA P2, JOKO_ELEMENTUA P3, JOKO_ELEMENTUA P4, JOKO_ELEMENTUA P5, JOKO_ELEMENTUA P6, JOKO_ELEMENTUA P7, JOKO_ELEMENTUA P8, JOKO_ELEMENTUA P9, JOKO_ELEMENTUA P10, int enemy[]);
void Olatua14(JOKO_ELEMENTUA P15, JOKO_ELEMENTUA P16, JOKO_ELEMENTUA P17, JOKO_ELEMENTUA P18, JOKO_ELEMENTUA P19, JOKO_ELEMENTUA P20, JOKO_ELEMENTUA P21, JOKO_ELEMENTUA P22, JOKO_ELEMENTUA P23, JOKO_ELEMENTUA P24, JOKO_ELEMENTUA P25, JOKO_ELEMENTUA P26, JOKO_ELEMENTUA P27, JOKO_ELEMENTUA P28, JOKO_ELEMENTUA P29, JOKO_ELEMENTUA P30, JOKO_ELEMENTUA P11, JOKO_ELEMENTUA P12, JOKO_ELEMENTUA P13, JOKO_ELEMENTUA P14, JOKO_ELEMENTUA P1, JOKO_ELEMENTUA P2, JOKO_ELEMENTUA P3, JOKO_ELEMENTUA P4, JOKO_ELEMENTUA P5, JOKO_ELEMENTUA P6, JOKO_ELEMENTUA P7, JOKO_ELEMENTUA P8, JOKO_ELEMENTUA P9, JOKO_ELEMENTUA P10, int enemy[]);

// Etsai bat akabatzean dirua lortu
int giveMoney(int enemy);
// Etsaien olatu nagusia
OLATUAK etsaiak(OLATUAK olatuak, int ebentu, TOWER_STRUCTURE structure, int lifeTotal);
// Etsaiak pantailatik kanpo atera
POSIZIOA restartPosition(POSIZIOA enemy, int kont, JOKO_ELEMENTUA id1, JOKO_ELEMENTUA id2, JOKO_ELEMENTUA id3, JOKO_ELEMENTUA id4, JOKO_ELEMENTUA id5, JOKO_ELEMENTUA id6, JOKO_ELEMENTUA id7, JOKO_ELEMENTUA id8, JOKO_ELEMENTUA id9, JOKO_ELEMENTUA id10, JOKO_ELEMENTUA id11, JOKO_ELEMENTUA id12, JOKO_ELEMENTUA id13, JOKO_ELEMENTUA id14, JOKO_ELEMENTUA id15, JOKO_ELEMENTUA id16, JOKO_ELEMENTUA id17, JOKO_ELEMENTUA id18, JOKO_ELEMENTUA id19, JOKO_ELEMENTUA id20, JOKO_ELEMENTUA id21, JOKO_ELEMENTUA id22, JOKO_ELEMENTUA id23, JOKO_ELEMENTUA id24, JOKO_ELEMENTUA id25, JOKO_ELEMENTUA id26, JOKO_ELEMENTUA id27, JOKO_ELEMENTUA id28, JOKO_ELEMENTUA id29, JOKO_ELEMENTUA id);

#endif