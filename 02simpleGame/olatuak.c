#include "game02.h"
#include "imagen.h"
#include "graphics.h"
#include "ebentoak.h"
#include "hasieratu.h"
#include "TowerBuild.h"
#include "text.h"
#include "soinua.h"
#include <stdio.h>
#include <windows.h>

void Olatua1(JOKO_ELEMENTUA P1, JOKO_ELEMENTUA P2, JOKO_ELEMENTUA P3, JOKO_ELEMENTUA P4, JOKO_ELEMENTUA P5, JOKO_ELEMENTUA P6) 
{
    irudiaMugitu(P1.id, P1.pos.x, P1.pos.y);
    irudiaMugitu(P2.id, P2.pos.x, P2.pos.y);
    irudiaMugitu(P3.id, P3.pos.x, P3.pos.y);
    irudiaMugitu(P4.id, P4.pos.x, P4.pos.y);
    irudiaMugitu(P5.id, P5.pos.x, P5.pos.y);
    irudiaMugitu(P6.id, P6.pos.x, P6.pos.y);
}

void Olatua2(JOKO_ELEMENTUA P1, JOKO_ELEMENTUA P2, JOKO_ELEMENTUA P3, JOKO_ELEMENTUA P4, JOKO_ELEMENTUA P5, JOKO_ELEMENTUA P6, JOKO_ELEMENTUA P7, JOKO_ELEMENTUA P8, JOKO_ELEMENTUA P9, JOKO_ELEMENTUA P10) 
{
    irudiaMugitu(P1.id, P1.pos.x, P1.pos.y);
    irudiaMugitu(P2.id, P2.pos.x, P2.pos.y);
    irudiaMugitu(P3.id, P3.pos.x, P3.pos.y);
    irudiaMugitu(P4.id, P4.pos.x, P4.pos.y);
    irudiaMugitu(P5.id, P5.pos.x, P5.pos.y);
    irudiaMugitu(P6.id, P6.pos.x, P6.pos.y);
    irudiaMugitu(P7.id, P7.pos.x, P7.pos.y);
    irudiaMugitu(P8.id, P8.pos.x, P8.pos.y);
    irudiaMugitu(P9.id, P9.pos.x, P9.pos.y);
    irudiaMugitu(P10.id, P10.pos.x, P10.pos.y);
}

void Olatua3 (JOKO_ELEMENTUA P21, JOKO_ELEMENTUA P22, JOKO_ELEMENTUA P23, JOKO_ELEMENTUA P24, JOKO_ELEMENTUA P25, JOKO_ELEMENTUA P26) 
{
    irudiaMugitu(P21.id, P21.pos.x, P21.pos.y);
    irudiaMugitu(P22.id, P22.pos.x, P22.pos.y);
    irudiaMugitu(P23.id, P23.pos.x, P23.pos.y);
    irudiaMugitu(P24.id, P24.pos.x, P24.pos.y);
    irudiaMugitu(P25.id, P25.pos.x, P25.pos.y);
    irudiaMugitu(P26.id, P26.pos.x, P26.pos.y);
}

void Olatua4(JOKO_ELEMENTUA P1, JOKO_ELEMENTUA P2, JOKO_ELEMENTUA P3, JOKO_ELEMENTUA P4, JOKO_ELEMENTUA P21, JOKO_ELEMENTUA P22, JOKO_ELEMENTUA P23, JOKO_ELEMENTUA P24) 
{
    irudiaMugitu(P1.id, P1.pos.x, P1.pos.y);
    irudiaMugitu(P2.id, P2.pos.x, P2.pos.y);
    irudiaMugitu(P3.id, P3.pos.x, P3.pos.y);
    irudiaMugitu(P4.id, P4.pos.x, P4.pos.y);
    irudiaMugitu(P21.id, P21.pos.x, P21.pos.y);
    irudiaMugitu(P22.id, P22.pos.x, P22.pos.y);
    irudiaMugitu(P23.id, P23.pos.x, P23.pos.y);
    irudiaMugitu(P24.id, P24.pos.x, P24.pos.y);
}

void Olatua5(JOKO_ELEMENTUA P11, JOKO_ELEMENTUA P12) 
{
    irudiaMugitu(P11.id, P11.pos.x, P11.pos.y);
    irudiaMugitu(P12.id, P12.pos.x, P12.pos.y);
}

void Olatua6(JOKO_ELEMENTUA P1, JOKO_ELEMENTUA P2, JOKO_ELEMENTUA P3, JOKO_ELEMENTUA P4, JOKO_ELEMENTUA P5, JOKO_ELEMENTUA P11, JOKO_ELEMENTUA P12) 
{
    irudiaMugitu(P1.id, P1.pos.x, P1.pos.y);
    irudiaMugitu(P2.id, P2.pos.x, P2.pos.y);
    irudiaMugitu(P3.id, P3.pos.x, P3.pos.y);
    irudiaMugitu(P4.id, P4.pos.x, P4.pos.y);
    irudiaMugitu(P5.id, P5.pos.x, P5.pos.y);
    irudiaMugitu(P11.id, P11.pos.x, P11.pos.y);
    irudiaMugitu(P12.id, P12.pos.x, P12.pos.y);
}

void Olatua7(JOKO_ELEMENTUA P21, JOKO_ELEMENTUA P22, JOKO_ELEMENTUA P23, JOKO_ELEMENTUA P24, JOKO_ELEMENTUA P25, JOKO_ELEMENTUA P26, JOKO_ELEMENTUA P6,JOKO_ELEMENTUA P1, JOKO_ELEMENTUA P2, JOKO_ELEMENTUA P3, JOKO_ELEMENTUA P4, JOKO_ELEMENTUA P5, JOKO_ELEMENTUA P11, JOKO_ELEMENTUA P12) 
{
    irudiaMugitu(P1.id, P1.pos.x, P1.pos.y);
    irudiaMugitu(P2.id, P2.pos.x, P2.pos.y);
    irudiaMugitu(P3.id, P3.pos.x, P3.pos.y);
    irudiaMugitu(P4.id, P4.pos.x, P4.pos.y);
    irudiaMugitu(P5.id, P5.pos.x, P5.pos.y);
    irudiaMugitu(P6.id, P6.pos.x, P6.pos.y);
    irudiaMugitu(P21.id, P21.pos.x, P21.pos.y);
    irudiaMugitu(P22.id, P22.pos.x, P22.pos.y);
    irudiaMugitu(P23.id, P23.pos.x, P23.pos.y);
    irudiaMugitu(P24.id, P24.pos.x, P24.pos.y);
    irudiaMugitu(P25.id, P25.pos.x, P25.pos.y);
    irudiaMugitu(P26.id, P26.pos.x, P26.pos.y);
}

void Olatua8(JOKO_ELEMENTUA P21, JOKO_ELEMENTUA P22, JOKO_ELEMENTUA P23, JOKO_ELEMENTUA P24, JOKO_ELEMENTUA P25, JOKO_ELEMENTUA P26, JOKO_ELEMENTUA P27, JOKO_ELEMENTUA P28, JOKO_ELEMENTUA P29, JOKO_ELEMENTUA P30) 
{
    irudiaMugitu(P21.id, P21.pos.x, P21.pos.y);
    irudiaMugitu(P22.id, P22.pos.x, P22.pos.y);
    irudiaMugitu(P23.id, P23.pos.x, P23.pos.y);
    irudiaMugitu(P24.id, P24.pos.x, P24.pos.y);
    irudiaMugitu(P25.id, P25.pos.x, P25.pos.y);
    irudiaMugitu(P26.id, P26.pos.x, P26.pos.y);
    irudiaMugitu(P27.id, P27.pos.x, P27.pos.y);
    irudiaMugitu(P28.id, P28.pos.x, P28.pos.y);
    irudiaMugitu(P29.id, P29.pos.x, P29.pos.y);
    irudiaMugitu(P30.id, P30.pos.x, P30.pos.y);
}

void Olatua9(JOKO_ELEMENTUA P11, JOKO_ELEMENTUA P12, JOKO_ELEMENTUA P13, JOKO_ELEMENTUA P14) 
{
    irudiaMugitu(P11.id, P11.pos.x, P11.pos.y);
    irudiaMugitu(P12.id, P12.pos.x, P12.pos.y);
    irudiaMugitu(P13.id, P13.pos.x, P13.pos.y);
    irudiaMugitu(P14.id, P14.pos.x, P14.pos.y);
}


void Olatua10(JOKO_ELEMENTUA P21, JOKO_ELEMENTUA P22, JOKO_ELEMENTUA P23, JOKO_ELEMENTUA P24, JOKO_ELEMENTUA P25, JOKO_ELEMENTUA P26,JOKO_ELEMENTUA P1, JOKO_ELEMENTUA P2, JOKO_ELEMENTUA P3, JOKO_ELEMENTUA P4, JOKO_ELEMENTUA P5, JOKO_ELEMENTUA P6, JOKO_ELEMENTUA P11, JOKO_ELEMENTUA P12, JOKO_ELEMENTUA P13, JOKO_ELEMENTUA P14) 
{
    irudiaMugitu(P1.id, P1.pos.x, P1.pos.y);
    irudiaMugitu(P2.id, P2.pos.x, P2.pos.y);
    irudiaMugitu(P3.id, P3.pos.x, P3.pos.y);
    irudiaMugitu(P4.id, P4.pos.x, P4.pos.y);
    irudiaMugitu(P5.id, P5.pos.x, P5.pos.y);
    irudiaMugitu(P6.id, P6.pos.x, P6.pos.y);
    irudiaMugitu(P11.id, P11.pos.x, P11.pos.y);
    irudiaMugitu(P12.id, P12.pos.x, P12.pos.y);
    irudiaMugitu(P13.id, P13.pos.x, P13.pos.y);
    irudiaMugitu(P21.id, P21.pos.x, P21.pos.y);
    irudiaMugitu(P22.id, P22.pos.x, P22.pos.y);
    irudiaMugitu(P23.id, P23.pos.x, P23.pos.y);
    irudiaMugitu(P24.id, P24.pos.x, P24.pos.y);
    irudiaMugitu(P25.id, P25.pos.x, P25.pos.y);
    irudiaMugitu(P26.id, P26.pos.x, P26.pos.y);
}

void Olatua11(JOKO_ELEMENTUA P21, JOKO_ELEMENTUA P22, JOKO_ELEMENTUA P23, JOKO_ELEMENTUA P24, JOKO_ELEMENTUA P25, JOKO_ELEMENTUA P26, JOKO_ELEMENTUA P27, JOKO_ELEMENTUA P28, JOKO_ELEMENTUA P29, JOKO_ELEMENTUA P30, JOKO_ELEMENTUA P11, JOKO_ELEMENTUA P12, JOKO_ELEMENTUA P13, JOKO_ELEMENTUA P14) 
{
    irudiaMugitu(P11.id, P11.pos.x, P11.pos.y);
    irudiaMugitu(P12.id, P12.pos.x, P12.pos.y);
    irudiaMugitu(P13.id, P13.pos.x, P13.pos.y);
    irudiaMugitu(P14.id, P14.pos.x, P14.pos.y);
    irudiaMugitu(P21.id, P21.pos.x, P21.pos.y);
    irudiaMugitu(P22.id, P22.pos.x, P22.pos.y);
    irudiaMugitu(P23.id, P23.pos.x, P23.pos.y);
    irudiaMugitu(P24.id, P24.pos.x, P24.pos.y);
    irudiaMugitu(P25.id, P25.pos.x, P25.pos.y);
    irudiaMugitu(P26.id, P26.pos.x, P26.pos.y);
    irudiaMugitu(P27.id, P27.pos.x, P27.pos.y);
    irudiaMugitu(P28.id, P28.pos.x, P28.pos.y);
    irudiaMugitu(P29.id, P29.pos.x, P29.pos.y);
    irudiaMugitu(P30.id, P30.pos.x, P30.pos.y);
}

void Olatua12(JOKO_ELEMENTUA P21, JOKO_ELEMENTUA P22, JOKO_ELEMENTUA P23, JOKO_ELEMENTUA P24, JOKO_ELEMENTUA P25, JOKO_ELEMENTUA P26, JOKO_ELEMENTUA P27, JOKO_ELEMENTUA P28, JOKO_ELEMENTUA P29, JOKO_ELEMENTUA P30, JOKO_ELEMENTUA P11, JOKO_ELEMENTUA P12, JOKO_ELEMENTUA P1, JOKO_ELEMENTUA P2, JOKO_ELEMENTUA P3, JOKO_ELEMENTUA P4, JOKO_ELEMENTUA P5, JOKO_ELEMENTUA P6, JOKO_ELEMENTUA P7, JOKO_ELEMENTUA P8, JOKO_ELEMENTUA P9, JOKO_ELEMENTUA P10)
{
	irudiaMugitu(P1.id, P1.pos.x, P1.pos.y);
	irudiaMugitu(P2.id, P2.pos.x, P2.pos.y);
	irudiaMugitu(P3.id, P3.pos.x, P3.pos.y);
	irudiaMugitu(P4.id, P4.pos.x, P4.pos.y);
	irudiaMugitu(P5.id, P5.pos.x, P5.pos.y);
	irudiaMugitu(P6.id, P6.pos.x, P6.pos.y);
	irudiaMugitu(P7.id, P7.pos.x, P7.pos.y);
	irudiaMugitu(P8.id, P8.pos.x, P8.pos.y);
	irudiaMugitu(P9.id, P9.pos.x, P9.pos.y);
	irudiaMugitu(P11.id, P11.pos.x, P11.pos.y);
	irudiaMugitu(P12.id, P12.pos.x, P12.pos.y);
	irudiaMugitu(P10.id, P10.pos.x, P10.pos.y);
	irudiaMugitu(P21.id, P21.pos.x, P21.pos.y);
	irudiaMugitu(P22.id, P22.pos.x, P22.pos.y);
	irudiaMugitu(P23.id, P23.pos.x, P23.pos.y);
	irudiaMugitu(P24.id, P24.pos.x, P24.pos.y);
	irudiaMugitu(P25.id, P25.pos.x, P25.pos.y);
	irudiaMugitu(P26.id, P26.pos.x, P26.pos.y);
	irudiaMugitu(P27.id, P27.pos.x, P27.pos.y);
	irudiaMugitu(P28.id, P28.pos.x, P28.pos.y);
	irudiaMugitu(P29.id, P29.pos.x, P29.pos.y);
	irudiaMugitu(P30.id, P30.pos.x, P30.pos.y);
}

void Olatua13(JOKO_ELEMENTUA P21, JOKO_ELEMENTUA P22, JOKO_ELEMENTUA P23, JOKO_ELEMENTUA P15, JOKO_ELEMENTUA P16, JOKO_ELEMENTUA P24, JOKO_ELEMENTUA P25, JOKO_ELEMENTUA P26, JOKO_ELEMENTUA P27, JOKO_ELEMENTUA P28, JOKO_ELEMENTUA P29, JOKO_ELEMENTUA P30, JOKO_ELEMENTUA P11, JOKO_ELEMENTUA P12, JOKO_ELEMENTUA P13, JOKO_ELEMENTUA P14, JOKO_ELEMENTUA P1, JOKO_ELEMENTUA P2, JOKO_ELEMENTUA P3, JOKO_ELEMENTUA P4, JOKO_ELEMENTUA P5, JOKO_ELEMENTUA P6, JOKO_ELEMENTUA P7, JOKO_ELEMENTUA P8, JOKO_ELEMENTUA P9, JOKO_ELEMENTUA P10) 
{
    irudiaMugitu(P1.id, P1.pos.x, P1.pos.y);
    irudiaMugitu(P2.id, P2.pos.x, P2.pos.y);
    irudiaMugitu(P3.id, P3.pos.x, P3.pos.y);
    irudiaMugitu(P4.id, P4.pos.x, P4.pos.y);
    irudiaMugitu(P5.id, P5.pos.x, P5.pos.y);
    irudiaMugitu(P6.id, P6.pos.x, P6.pos.y);
    irudiaMugitu(P7.id, P7.pos.x, P7.pos.y);
    irudiaMugitu(P8.id, P8.pos.x, P8.pos.y);
    irudiaMugitu(P9.id, P9.pos.x, P9.pos.y);
    irudiaMugitu(P11.id, P11.pos.x, P11.pos.y);
    irudiaMugitu(P12.id, P12.pos.x, P12.pos.y);
    irudiaMugitu(P13.id, P13.pos.x, P13.pos.y);
    irudiaMugitu(P14.id, P14.pos.x, P14.pos.y);
    irudiaMugitu(P15.id, P15.pos.x, P15.pos.y);
    irudiaMugitu(P16.id, P16.pos.x, P16.pos.y);
    irudiaMugitu(P10.id, P10.pos.x, P10.pos.y);
    irudiaMugitu(P21.id, P21.pos.x, P21.pos.y);
    irudiaMugitu(P22.id, P22.pos.x, P22.pos.y);
    irudiaMugitu(P23.id, P23.pos.x, P23.pos.y);
    irudiaMugitu(P24.id, P24.pos.x, P24.pos.y);
}

void Olatua14(JOKO_ELEMENTUA P15, JOKO_ELEMENTUA P16, JOKO_ELEMENTUA P17, JOKO_ELEMENTUA P18, JOKO_ELEMENTUA P19, JOKO_ELEMENTUA P20, JOKO_ELEMENTUA P21, JOKO_ELEMENTUA P22, JOKO_ELEMENTUA P23, JOKO_ELEMENTUA P24, JOKO_ELEMENTUA P25, JOKO_ELEMENTUA P26, JOKO_ELEMENTUA P27, JOKO_ELEMENTUA P28, JOKO_ELEMENTUA P29, JOKO_ELEMENTUA P30, JOKO_ELEMENTUA P11, JOKO_ELEMENTUA P12, JOKO_ELEMENTUA P13, JOKO_ELEMENTUA P14, JOKO_ELEMENTUA P1, JOKO_ELEMENTUA P2, JOKO_ELEMENTUA P3, JOKO_ELEMENTUA P4, JOKO_ELEMENTUA P5, JOKO_ELEMENTUA P6, JOKO_ELEMENTUA P7, JOKO_ELEMENTUA P8, JOKO_ELEMENTUA P9, JOKO_ELEMENTUA P10) 
{
    irudiaMugitu(P1.id, P1.pos.x, P1.pos.y);
    irudiaMugitu(P2.id, P2.pos.x, P2.pos.y);
    irudiaMugitu(P3.id, P3.pos.x, P3.pos.y);
    irudiaMugitu(P4.id, P4.pos.x, P4.pos.y);
    irudiaMugitu(P5.id, P5.pos.x, P5.pos.y);
    irudiaMugitu(P6.id, P6.pos.x, P6.pos.y);
    irudiaMugitu(P7.id, P7.pos.x, P7.pos.y);
    irudiaMugitu(P8.id, P8.pos.x, P8.pos.y);
    irudiaMugitu(P9.id, P9.pos.x, P9.pos.y);
    irudiaMugitu(P11.id, P11.pos.x, P11.pos.y);
    irudiaMugitu(P12.id, P12.pos.x, P12.pos.y);
    irudiaMugitu(P13.id, P13.pos.x, P13.pos.y);
    irudiaMugitu(P14.id, P14.pos.x, P14.pos.y);
    irudiaMugitu(P15.id, P15.pos.x, P15.pos.y);
    irudiaMugitu(P16.id, P16.pos.x, P16.pos.y);
    irudiaMugitu(P17.id, P17.pos.x, P17.pos.y);
    irudiaMugitu(P18.id, P18.pos.x, P18.pos.y);
    irudiaMugitu(P19.id, P19.pos.x, P19.pos.y);
    irudiaMugitu(P20.id, P20.pos.x, P20.pos.y);
    irudiaMugitu(P10.id, P10.pos.x, P10.pos.y);
    irudiaMugitu(P21.id, P21.pos.x, P21.pos.y);
    irudiaMugitu(P22.id, P22.pos.x, P22.pos.y);
    irudiaMugitu(P23.id, P23.pos.x, P23.pos.y);
    irudiaMugitu(P24.id, P24.pos.x, P24.pos.y);
    irudiaMugitu(P25.id, P25.pos.x, P25.pos.y);
    irudiaMugitu(P26.id, P26.pos.x, P26.pos.y);
    irudiaMugitu(P27.id, P27.pos.x, P27.pos.y);
    irudiaMugitu(P28.id, P28.pos.x, P28.pos.y);
    irudiaMugitu(P29.id, P29.pos.x, P29.pos.y);
    irudiaMugitu(P30.id, P30.pos.x, P30.pos.y);
}

OLATUAK etsaiak(OLATUAK olatuak, int ebentu, TOWER_STRUCTURE structure, int lifeTotal)
{
    int kont1 = 0, i, j;
    EGOERA  egoera = JOLASTEN;
	kont1 = olatuak.kont;
	structure.action = hasieratuAction();

    do {
        kont1++;
		for (i = 0; i < 30; i++) {
			olatuak.enemy[i] = hasieratuEnemyPos(olatuak, i);
			olatuak.enemyLife[i] = hasieratuBizitzak(i); 
		}

        if (kont1 <= 5000 && kont1 > 1) {
            Olatua1(olatuak.P1, olatuak.P2, olatuak.P3, olatuak.P4, olatuak.P5, olatuak.P6);
            if (olatuak.aux.x < 190) olatuak.P1.pos.x = olatuak.aux.x;
            if (olatuak.aux3.x < 190) olatuak.P2.pos.x = olatuak.aux3.x;
            if (olatuak.aux5.x < 190) olatuak.P3.pos.x = olatuak.aux5.x;
            if (olatuak.aux7.x < 190) olatuak.P4.pos.x = olatuak.aux7.x;
            if (olatuak.aux9.x < 190) olatuak.P5.pos.x = olatuak.aux9.x;
            if (olatuak.aux11.x < 190) olatuak.P6.pos.x = olatuak.aux11.x;
        }

        else if (kont1 > 5000 && kont1 <= 10000) {
            Olatua2(olatuak.P1, olatuak.P2, olatuak.P3, olatuak.P4, olatuak.P5, olatuak.P6, olatuak.P7, olatuak.P8, olatuak.P9, olatuak.P10);
            if (olatuak.aux.x < 190) olatuak.P1.pos.x = olatuak.aux.x;
            if (olatuak.aux3.x < 190) olatuak.P2.pos.x = olatuak.aux3.x;
            if (olatuak.aux5.x < 190) olatuak.P3.pos.x = olatuak.aux5.x;
            if (olatuak.aux7.x < 190) olatuak.P4.pos.x = olatuak.aux7.x;
            if (olatuak.aux9.x < 190) olatuak.P5.pos.x = olatuak.aux9.x;
            if (olatuak.aux11.x < 190) olatuak.P6.pos.x = olatuak.aux11.x;
            if (olatuak.aux13.x < 190) olatuak.P7.pos.x = olatuak.aux13.x;
            if (olatuak.aux15.x < 190) olatuak.P8.pos.x = olatuak.aux15.x;
            if (olatuak.aux17.x < 190) olatuak.P9.pos.x = olatuak.aux17.x;
            if (olatuak.aux19.x < 190) olatuak.P10.pos.x = olatuak.aux19.x;
        }

        else if (kont1 > 10000 && kont1 <= 13500) {
            Olatua3(olatuak.P21, olatuak.P22, olatuak.P23, olatuak.P24, olatuak.P25, olatuak.P26);
            if (olatuak.aux41.x < 190) olatuak.P21.pos.x = olatuak.aux41.x;
            if (olatuak.aux43.x < 190) olatuak.P22.pos.x = olatuak.aux43.x;
            if (olatuak.aux45.x < 190) olatuak.P23.pos.x = olatuak.aux45.x;
            if (olatuak.aux47.x < 190) olatuak.P24.pos.x = olatuak.aux47.x;
            if (olatuak.aux49.x < 190) olatuak.P25.pos.x = olatuak.aux49.x;
            if (olatuak.aux51.x < 190) olatuak.P26.pos.x = olatuak.aux51.x;
        }

        else if (kont1 > 13500 && kont1 <= 18500) {
            Olatua4(olatuak.P21, olatuak.P22, olatuak.P23, olatuak.P24, olatuak.P1, olatuak.P2, olatuak.P3, olatuak.P4);
            if (olatuak.aux.x < 190) olatuak.P1.pos.x = olatuak.aux.x;
            if (olatuak.aux3.x < 190) olatuak.P2.pos.x = olatuak.aux3.x;
            if (olatuak.aux5.x < 190) olatuak.P3.pos.x = olatuak.aux5.x;
            if (olatuak.aux7.x < 190) olatuak.P4.pos.x = olatuak.aux7.x;
            if (olatuak.aux41.x < 190) olatuak.P21.pos.x = olatuak.aux41.x;
            if (olatuak.aux43.x < 190) olatuak.P22.pos.x = olatuak.aux43.x;
            if (olatuak.aux45.x < 190) olatuak.P23.pos.x = olatuak.aux45.x;
            if (olatuak.aux47.x < 190) olatuak.P24.pos.x = olatuak.aux47.x;
        }

        else if (kont1 > 18500 && kont1 <= 28500) {
            Olatua5(olatuak.P11, olatuak.P12);
            if (olatuak.aux21.x < 190) olatuak.P11.pos.x = olatuak.aux21.x;
            if (olatuak.aux23.x < 190) olatuak.P12.pos.x = olatuak.aux23.x;

        }

        else if (kont1 > 28500 && kont1 <= 38500) {
            Olatua6(olatuak.P1, olatuak.P2, olatuak.P3, olatuak.P4, olatuak.P5, olatuak.P11, olatuak.P12);
            if (olatuak.aux.x < 190) olatuak.P1.pos.x = olatuak.aux.x;
            if (olatuak.aux3.x < 190) olatuak.P2.pos.x = olatuak.aux3.x;
            if (olatuak.aux5.x < 190) olatuak.P3.pos.x = olatuak.aux5.x;
            if (olatuak.aux7.x < 190) olatuak.P4.pos.x = olatuak.aux7.x;
            if (olatuak.aux9.x < 190) olatuak.P5.pos.x = olatuak.aux9.x;
            if (olatuak.aux21.x < 190) olatuak.P11.pos.x = olatuak.aux21.x;
            if (olatuak.aux23.x < 190) olatuak.P12.pos.x = olatuak.aux23.x;
        }

        else if (kont1 > 38500 && kont1 <= 43500) {
            Olatua7(olatuak.P1, olatuak.P2, olatuak.P3, olatuak.P4, olatuak.P5, olatuak.P6, olatuak.P27, olatuak.P28, olatuak.P21, olatuak.P22, olatuak.P23, olatuak.P24, olatuak.P25, olatuak.P26);
            if (olatuak.aux.x < 190) olatuak.P1.pos.x = olatuak.aux.x;
            if (olatuak.aux3.x < 190) olatuak.P2.pos.x = olatuak.aux3.x;
            if (olatuak.aux5.x < 190) olatuak.P3.pos.x = olatuak.aux5.x;
            if (olatuak.aux7.x < 190) olatuak.P4.pos.x = olatuak.aux7.x;
            if (olatuak.aux9.x < 190) olatuak.P5.pos.x = olatuak.aux9.x;
            if (olatuak.aux11.x < 190) olatuak.P6.pos.x = olatuak.aux11.x;
            if (olatuak.aux41.x < 190) olatuak.P21.pos.x = olatuak.aux41.x;
            if (olatuak.aux43.x < 190) olatuak.P22.pos.x = olatuak.aux43.x;
            if (olatuak.aux45.x < 190) olatuak.P23.pos.x = olatuak.aux45.x;
            if (olatuak.aux47.x < 190) olatuak.P24.pos.x = olatuak.aux47.x;
            if (olatuak.aux49.x < 190) olatuak.P25.pos.x = olatuak.aux49.x;
            if (olatuak.aux51.x < 190) olatuak.P26.pos.x = olatuak.aux51.x;
            if (olatuak.aux53.x < 190) olatuak.P27.pos.x = olatuak.aux53.x;
            if (olatuak.aux55.x < 190) olatuak.P28.pos.x = olatuak.aux55.x;
        }

        else if (kont1 > 43500 && kont1 <= 47000) {
            Olatua8(olatuak.P21, olatuak.P22, olatuak.P23, olatuak.P24, olatuak.P25, olatuak.P26, olatuak.P27, olatuak.P28, olatuak.P29, olatuak.P30);
            if (olatuak.aux41.x < 190) olatuak.P21.pos.x = olatuak.aux41.x;
            if (olatuak.aux43.x < 190) olatuak.P22.pos.x = olatuak.aux43.x;
            if (olatuak.aux45.x < 190) olatuak.P23.pos.x = olatuak.aux45.x;
            if (olatuak.aux47.x < 190) olatuak.P24.pos.x = olatuak.aux47.x;
            if (olatuak.aux49.x < 190) olatuak.P25.pos.x = olatuak.aux49.x;
            if (olatuak.aux51.x < 190) olatuak.P26.pos.x = olatuak.aux51.x;
            if (olatuak.aux53.x < 190) olatuak.P27.pos.x = olatuak.aux53.x;
            if (olatuak.aux55.x < 190) olatuak.P28.pos.x = olatuak.aux55.x;
            if (olatuak.aux57.x < 190) olatuak.P29.pos.x = olatuak.aux57.x;
            if (olatuak.aux59.x < 190) olatuak.P30.pos.x = olatuak.aux59.x;
        }

        else if (kont1 > 47000 && kont1 <= 57000) {
            Olatua9(olatuak.P11, olatuak.P12, olatuak.P13, olatuak.P14);
            if (olatuak.aux21.x < 190) olatuak.P11.pos.x = olatuak.aux21.x;
            if (olatuak.aux23.x < 190) olatuak.P12.pos.x = olatuak.aux23.x;
            if (olatuak.aux25.x < 190) olatuak.P13.pos.x = olatuak.aux25.x;
            if (olatuak.aux27.x < 190) olatuak.P14.pos.x = olatuak.aux27.x;
        }

        else if (kont1 > 57000 && kont1 <= 67000) {
            Olatua10(olatuak.P1, olatuak.P2, olatuak.P3, olatuak.P4, olatuak.P5, olatuak.P6, olatuak.P11, olatuak.P12, olatuak.P13, olatuak.P14, olatuak.P21, olatuak.P22, olatuak.P23, olatuak.P24, olatuak.P25, olatuak.P26);
            if (olatuak.aux.x < 190) olatuak.P1.pos.x = olatuak.aux.x;
            if (olatuak.aux3.x < 190) olatuak.P2.pos.x = olatuak.aux3.x;
            if (olatuak.aux5.x < 190) olatuak.P3.pos.x = olatuak.aux5.x;
            if (olatuak.aux7.x < 190) olatuak.P4.pos.x = olatuak.aux7.x;
            if (olatuak.aux9.x < 190) olatuak.P5.pos.x = olatuak.aux9.x;
            if (olatuak.aux11.x < 190) olatuak.P6.pos.x = olatuak.aux11.x;
            if (olatuak.aux21.x < 190) olatuak.P11.pos.x = olatuak.aux21.x;
            if (olatuak.aux23.x < 190) olatuak.P12.pos.x = olatuak.aux23.x;
            if (olatuak.aux25.x < 190) olatuak.P13.pos.x = olatuak.aux25.x;
            if (olatuak.aux41.x < 190) olatuak.P21.pos.x = olatuak.aux41.x;
            if (olatuak.aux43.x < 190) olatuak.P22.pos.x = olatuak.aux43.x;
            if (olatuak.aux45.x < 190) olatuak.P23.pos.x = olatuak.aux45.x;
            if (olatuak.aux47.x < 190) olatuak.P24.pos.x = olatuak.aux47.x;
            if (olatuak.aux49.x < 190) olatuak.P25.pos.x = olatuak.aux49.x;
            if (olatuak.aux51.x < 190) olatuak.P26.pos.x = olatuak.aux51.x;
        }

        else if (kont1 > 67000 && kont1 <= 77000) {
            Olatua11(olatuak.P21, olatuak.P22, olatuak.P23, olatuak.P24, olatuak.P25, olatuak.P26, olatuak.P27, olatuak.P28, olatuak.P29, olatuak.P30, olatuak.P11, olatuak.P12, olatuak.P13, olatuak.P14);
            if (olatuak.aux21.x < 190) olatuak.P11.pos.x = olatuak.aux21.x;
            if (olatuak.aux23.x < 190) olatuak.P12.pos.x = olatuak.aux23.x;
            if (olatuak.aux25.x < 190) olatuak.P13.pos.x = olatuak.aux25.x;
            if (olatuak.aux27.x < 190) olatuak.P14.pos.x = olatuak.aux27.x;
            if (olatuak.aux41.x < 190) olatuak.P21.pos.x = olatuak.aux41.x;
            if (olatuak.aux43.x < 190) olatuak.P22.pos.x = olatuak.aux43.x;
            if (olatuak.aux45.x < 190) olatuak.P23.pos.x = olatuak.aux45.x;
            if (olatuak.aux47.x < 190) olatuak.P24.pos.x = olatuak.aux47.x;
            if (olatuak.aux49.x < 190) olatuak.P25.pos.x = olatuak.aux49.x;
            if (olatuak.aux51.x < 190) olatuak.P26.pos.x = olatuak.aux51.x;
            if (olatuak.aux53.x < 190) olatuak.P27.pos.x = olatuak.aux53.x;
            if (olatuak.aux55.x < 190) olatuak.P28.pos.x = olatuak.aux55.x;
            if (olatuak.aux57.x < 190) olatuak.P29.pos.x = olatuak.aux57.x;
            if (olatuak.aux59.x < 190) olatuak.P30.pos.x = olatuak.aux59.x;
        }

        else if (kont1 > 77000 && kont1 <= 87000) {
            Olatua12(olatuak.P21, olatuak.P22, olatuak.P23, olatuak.P24, olatuak.P25, olatuak.P26, olatuak.P27, olatuak.P28, olatuak.P29, olatuak.P30, olatuak.P11, olatuak.P12, olatuak.P1, olatuak.P2, olatuak.P3, olatuak.P4, olatuak.P5, olatuak.P6, olatuak.P7, olatuak.P8, olatuak.P9, olatuak.P10);
            if (olatuak.aux.x < 190) olatuak.P1.pos.x = olatuak.aux.x;
            if (olatuak.aux3.x < 190) olatuak.P2.pos.x = olatuak.aux3.x;
            if (olatuak.aux5.x < 190) olatuak.P3.pos.x = olatuak.aux5.x;
            if (olatuak.aux7.x < 190) olatuak.P4.pos.x = olatuak.aux7.x;
            if (olatuak.aux9.x < 190) olatuak.P5.pos.x = olatuak.aux9.x;
            if (olatuak.aux11.x < 190) olatuak.P6.pos.x = olatuak.aux11.x;
            if (olatuak.aux13.x < 190) olatuak.P7.pos.x = olatuak.aux13.x;
            if (olatuak.aux15.x < 190) olatuak.P8.pos.x = olatuak.aux15.x;
            if (olatuak.aux17.x < 190) olatuak.P9.pos.x = olatuak.aux17.x;
            if (olatuak.aux19.x < 190) olatuak.P10.pos.x = olatuak.aux19.x;
            if (olatuak.aux21.x < 190) olatuak.P11.pos.x = olatuak.aux21.x;
            if (olatuak.aux23.x < 190) olatuak.P12.pos.x = olatuak.aux23.x;
            if (olatuak.aux41.x < 190) olatuak.P21.pos.x = olatuak.aux41.x;
            if (olatuak.aux43.x < 190) olatuak.P22.pos.x = olatuak.aux43.x;
            if (olatuak.aux45.x < 190) olatuak.P23.pos.x = olatuak.aux45.x;
            if (olatuak.aux47.x < 190) olatuak.P24.pos.x = olatuak.aux47.x;
            if (olatuak.aux49.x < 190) olatuak.P25.pos.x = olatuak.aux49.x;
            if (olatuak.aux51.x < 190) olatuak.P26.pos.x = olatuak.aux51.x;
            if (olatuak.aux53.x < 190) olatuak.P27.pos.x = olatuak.aux53.x;
            if (olatuak.aux55.x < 190) olatuak.P28.pos.x = olatuak.aux55.x;
            if (olatuak.aux57.x < 190) olatuak.P29.pos.x = olatuak.aux57.x;
            if (olatuak.aux59.x < 190) olatuak.P30.pos.x = olatuak.aux59.x;
        }

        else if (kont1 > 87000 && kont1 <= 97000) {
            Olatua13(olatuak.P21, olatuak.P22, olatuak.P23, olatuak.P24, olatuak.P25, olatuak.P26, olatuak.P27, olatuak.P28, olatuak.P29, olatuak.P30, olatuak.P11, olatuak.P12, olatuak.P13, olatuak.P14, olatuak.P15, olatuak.P16, olatuak.P1, olatuak.P2, olatuak.P3, olatuak.P4, olatuak.P5, olatuak.P6, olatuak.P7, olatuak.P8, olatuak.P9, olatuak.P10);
            if (olatuak.aux.x < 190) olatuak.P1.pos.x = olatuak.aux.x;
            if (olatuak.aux3.x < 190) olatuak.P2.pos.x = olatuak.aux3.x;
            if (olatuak.aux5.x < 190) olatuak.P3.pos.x = olatuak.aux5.x;
            if (olatuak.aux7.x < 190) olatuak.P4.pos.x = olatuak.aux7.x;
            if (olatuak.aux9.x < 190) olatuak.P5.pos.x = olatuak.aux9.x;
            if (olatuak.aux11.x < 190) olatuak.P6.pos.x = olatuak.aux11.x;
            if (olatuak.aux13.x < 190) olatuak.P7.pos.x = olatuak.aux13.x;
            if (olatuak.aux15.x < 190) olatuak.P8.pos.x = olatuak.aux15.x;
            if (olatuak.aux17.x < 190) olatuak.P9.pos.x = olatuak.aux17.x;
            if (olatuak.aux19.x < 190) olatuak.P10.pos.x = olatuak.aux19.x;
            if (olatuak.aux21.x < 190) olatuak.P11.pos.x = olatuak.aux21.x;
            if (olatuak.aux23.x < 190) olatuak.P12.pos.x = olatuak.aux23.x;
            if (olatuak.aux25.x < 190) olatuak.P13.pos.x = olatuak.aux25.x;
            if (olatuak.aux27.x < 190) olatuak.P14.pos.x = olatuak.aux27.x;
            if (olatuak.aux29.x < 190) olatuak.P15.pos.x = olatuak.aux29.x;
            if (olatuak.aux31.x < 190) olatuak.P16.pos.x = olatuak.aux31.x;
            if (olatuak.aux41.x < 190) olatuak.P21.pos.x = olatuak.aux41.x;
            if (olatuak.aux43.x < 190) olatuak.P22.pos.x = olatuak.aux43.x;
            if (olatuak.aux45.x < 190) olatuak.P23.pos.x = olatuak.aux45.x;
            if (olatuak.aux47.x < 190) olatuak.P24.pos.x = olatuak.aux47.x;
        }

        else if (kont1 > 97000 && kont1 < 110000) {
            Olatua14(olatuak.P21, olatuak.P22, olatuak.P23, olatuak.P24, olatuak.P25, olatuak.P26, olatuak.P27, olatuak.P28, olatuak.P29, olatuak.P30, olatuak.P11, olatuak.P12, olatuak.P13, olatuak.P14, olatuak.P15, olatuak.P16, olatuak.P17, olatuak.P18, olatuak.P19, olatuak.P20, olatuak.P1, olatuak.P2, olatuak.P3, olatuak.P4, olatuak.P5, olatuak.P6, olatuak.P7, olatuak.P8, olatuak.P9, olatuak.P10);
            if (olatuak.aux.x < 190) olatuak.P1.pos.x = olatuak.aux.x;
            if (olatuak.aux3.x < 190) olatuak.P2.pos.x = olatuak.aux3.x;
            if (olatuak.aux5.x < 190) olatuak.P3.pos.x = olatuak.aux5.x;
            if (olatuak.aux7.x < 190) olatuak.P4.pos.x = olatuak.aux7.x;
            if (olatuak.aux9.x < 190) olatuak.P5.pos.x = olatuak.aux9.x;
            if (olatuak.aux11.x < 190) olatuak.P6.pos.x = olatuak.aux11.x;
            if (olatuak.aux13.x < 190) olatuak.P7.pos.x = olatuak.aux13.x;
            if (olatuak.aux15.x < 190) olatuak.P8.pos.x = olatuak.aux15.x;
            if (olatuak.aux17.x < 190) olatuak.P9.pos.x = olatuak.aux17.x;
            if (olatuak.aux19.x < 190) olatuak.P10.pos.x = olatuak.aux19.x;
            if (olatuak.aux21.x < 190) olatuak.P11.pos.x = olatuak.aux21.x;
            if (olatuak.aux23.x < 190) olatuak.P12.pos.x = olatuak.aux23.x;
            if (olatuak.aux25.x < 190) olatuak.P13.pos.x = olatuak.aux25.x;
            if (olatuak.aux27.x < 190) olatuak.P14.pos.x = olatuak.aux27.x;
            if (olatuak.aux29.x < 190) olatuak.P15.pos.x = olatuak.aux29.x;
            if (olatuak.aux31.x < 190) olatuak.P16.pos.x = olatuak.aux31.x;
            if (olatuak.aux33.x < 190) olatuak.P17.pos.x = olatuak.aux33.x;
            if (olatuak.aux35.x < 190) olatuak.P18.pos.x = olatuak.aux35.x;
            if (olatuak.aux37.x < 190) olatuak.P19.pos.x = olatuak.aux37.x;
            if (olatuak.aux39.x < 190) olatuak.P20.pos.x = olatuak.aux39.x;
            if (olatuak.aux41.x < 190) olatuak.P21.pos.x = olatuak.aux41.x;
            if (olatuak.aux43.x < 190) olatuak.P22.pos.x = olatuak.aux43.x;
            if (olatuak.aux45.x < 190) olatuak.P23.pos.x = olatuak.aux45.x;
            if (olatuak.aux47.x < 190) olatuak.P24.pos.x = olatuak.aux47.x;
            if (olatuak.aux49.x < 190) olatuak.P25.pos.x = olatuak.aux49.x;
            if (olatuak.aux51.x < 190) olatuak.P26.pos.x = olatuak.aux51.x;
            if (olatuak.aux53.x < 190) olatuak.P27.pos.x = olatuak.aux53.x;
            if (olatuak.aux55.x < 190) olatuak.P28.pos.x = olatuak.aux55.x;
            if (olatuak.aux57.x < 190) olatuak.P29.pos.x = olatuak.aux57.x;
            if (olatuak.aux59.x < 190) olatuak.P30.pos.x = olatuak.aux59.x;
        }
        irudiakMarraztu();

        // Kontagailuak hemen (NO MOVER)
        kontagailua(kont1/100, 400, 50);
        kontagailua(lifeTotal, 950, 55);
        kontagailua(structure.money, 950, 90);

        pantailaBerriztu();

        olatuak.aux = ERREALITATE_FISIKOA_mugimendua(olatuak.P1.pos);
        olatuak.aux2 = ERREALITATE_FISIKOA2_mugimendua(olatuak.P1.pos);
        olatuak.aux3 = ERREALITATE_FISIKOA_mugimendua(olatuak.P2.pos);
        olatuak.aux4 = ERREALITATE_FISIKOA2_mugimendua(olatuak.P2.pos);
        olatuak.aux5 = ERREALITATE_FISIKOA_mugimendua(olatuak.P3.pos);
        olatuak.aux6 = ERREALITATE_FISIKOA2_mugimendua(olatuak.P3.pos);
        olatuak.aux7 = ERREALITATE_FISIKOA_mugimendua(olatuak.P4.pos);
        olatuak.aux8 = ERREALITATE_FISIKOA2_mugimendua(olatuak.P4.pos);
        olatuak.aux9 = ERREALITATE_FISIKOA_mugimendua(olatuak.P5.pos);
        olatuak.aux10 = ERREALITATE_FISIKOA2_mugimendua(olatuak.P5.pos);
        olatuak.aux11 = ERREALITATE_FISIKOA_mugimendua(olatuak.P6.pos);
        olatuak.aux12 = ERREALITATE_FISIKOA2_mugimendua(olatuak.P6.pos);
        olatuak.aux13 = ERREALITATE_FISIKOA_mugimendua(olatuak.P7.pos);
        olatuak.aux14 = ERREALITATE_FISIKOA2_mugimendua(olatuak.P7.pos);
        olatuak.aux15 = ERREALITATE_FISIKOA_mugimendua(olatuak.P8.pos);
        olatuak.aux16 = ERREALITATE_FISIKOA2_mugimendua(olatuak.P8.pos);
        olatuak.aux17 = ERREALITATE_FISIKOA_mugimendua(olatuak.P9.pos);
        olatuak.aux18 = ERREALITATE_FISIKOA2_mugimendua(olatuak.P9.pos);
        olatuak.aux19 = ERREALITATE_FISIKOA_mugimendua(olatuak.P10.pos);
        olatuak.aux20 = ERREALITATE_FISIKOA2_mugimendua(olatuak.P10.pos);
        olatuak.aux21 = ERREALITATE_FISIKOA5_mugimendua(olatuak.P11.pos);
        olatuak.aux22 = ERREALITATE_FISIKOA6_mugimendua(olatuak.P11.pos);
        olatuak.aux23 = ERREALITATE_FISIKOA5_mugimendua(olatuak.P12.pos);
        olatuak.aux24 = ERREALITATE_FISIKOA6_mugimendua(olatuak.P12.pos);
        olatuak.aux25 = ERREALITATE_FISIKOA5_mugimendua(olatuak.P13.pos);
        olatuak.aux26 = ERREALITATE_FISIKOA6_mugimendua(olatuak.P13.pos);
        olatuak.aux27 = ERREALITATE_FISIKOA5_mugimendua(olatuak.P14.pos);
        olatuak.aux28 = ERREALITATE_FISIKOA6_mugimendua(olatuak.P14.pos);
        olatuak.aux29 = ERREALITATE_FISIKOA5_mugimendua(olatuak.P15.pos);
        olatuak.aux30 = ERREALITATE_FISIKOA6_mugimendua(olatuak.P15.pos);
        olatuak.aux31 = ERREALITATE_FISIKOA5_mugimendua(olatuak.P16.pos);
        olatuak.aux32 = ERREALITATE_FISIKOA6_mugimendua(olatuak.P16.pos);
        olatuak.aux33 = ERREALITATE_FISIKOA5_mugimendua(olatuak.P17.pos);
        olatuak.aux34 = ERREALITATE_FISIKOA6_mugimendua(olatuak.P17.pos);
        olatuak.aux35 = ERREALITATE_FISIKOA5_mugimendua(olatuak.P18.pos);
        olatuak.aux36 = ERREALITATE_FISIKOA6_mugimendua(olatuak.P18.pos);
        olatuak.aux37 = ERREALITATE_FISIKOA5_mugimendua(olatuak.P19.pos);
        olatuak.aux38 = ERREALITATE_FISIKOA6_mugimendua(olatuak.P19.pos);
        olatuak.aux39 = ERREALITATE_FISIKOA5_mugimendua(olatuak.P20.pos);
        olatuak.aux40 = ERREALITATE_FISIKOA6_mugimendua(olatuak.P20.pos);
        olatuak.aux41 = ERREALITATE_FISIKOA3_mugimendua(olatuak.P21.pos);
        olatuak.aux42 = ERREALITATE_FISIKOA4_mugimendua(olatuak.P21.pos);
        olatuak.aux43 = ERREALITATE_FISIKOA3_mugimendua(olatuak.P22.pos);
        olatuak.aux44 = ERREALITATE_FISIKOA4_mugimendua(olatuak.P22.pos);
        olatuak.aux45 = ERREALITATE_FISIKOA3_mugimendua(olatuak.P23.pos);
        olatuak.aux46 = ERREALITATE_FISIKOA4_mugimendua(olatuak.P23.pos);
        olatuak.aux47 = ERREALITATE_FISIKOA3_mugimendua(olatuak.P24.pos);
        olatuak.aux48 = ERREALITATE_FISIKOA4_mugimendua(olatuak.P24.pos);
        olatuak.aux49 = ERREALITATE_FISIKOA3_mugimendua(olatuak.P25.pos);
        olatuak.aux50 = ERREALITATE_FISIKOA4_mugimendua(olatuak.P25.pos);
        olatuak.aux51 = ERREALITATE_FISIKOA3_mugimendua(olatuak.P26.pos);
        olatuak.aux52 = ERREALITATE_FISIKOA4_mugimendua(olatuak.P26.pos);
        olatuak.aux53 = ERREALITATE_FISIKOA3_mugimendua(olatuak.P27.pos);
        olatuak.aux54 = ERREALITATE_FISIKOA4_mugimendua(olatuak.P27.pos);
        olatuak.aux55 = ERREALITATE_FISIKOA3_mugimendua(olatuak.P28.pos);
        olatuak.aux56 = ERREALITATE_FISIKOA4_mugimendua(olatuak.P28.pos);
        olatuak.aux57 = ERREALITATE_FISIKOA3_mugimendua(olatuak.P29.pos);
        olatuak.aux58 = ERREALITATE_FISIKOA4_mugimendua(olatuak.P29.pos);
        olatuak.aux59 = ERREALITATE_FISIKOA3_mugimendua(olatuak.P30.pos);
        olatuak.aux60 = ERREALITATE_FISIKOA4_mugimendua(olatuak.P30.pos);
        
        if (olatuak.aux.x == 190) olatuak.P1.pos.y = olatuak.aux.y;
        if (olatuak.aux3.x == 190) olatuak.P2.pos.y = olatuak.aux3.y;
        if (olatuak.aux5.x == 190) olatuak.P3.pos.y = olatuak.aux5.y;
        if (olatuak.aux7.x == 190) olatuak.P4.pos.y = olatuak.aux7.y;
        if (olatuak.aux9.x == 190) olatuak.P5.pos.y = olatuak.aux9.y;
        if (olatuak.aux11.x == 190) olatuak.P6.pos.y = olatuak.aux11.y;
        if (olatuak.aux13.x == 190) olatuak.P7.pos.y = olatuak.aux13.y;
        if (olatuak.aux15.x == 190) olatuak.P8.pos.y = olatuak.aux15.y;
        if (olatuak.aux17.x == 190) olatuak.P9.pos.y = olatuak.aux17.y;
        if (olatuak.aux19.x == 190) olatuak.P10.pos.y = olatuak.aux19.y;
        if (olatuak.aux21.x == 190) olatuak.P11.pos.y = olatuak.aux21.y;
        if (olatuak.aux23.x == 190) olatuak.P12.pos.y = olatuak.aux23.y;
        if (olatuak.aux25.x == 190) olatuak.P13.pos.y = olatuak.aux25.y;
        if (olatuak.aux27.x == 190) olatuak.P14.pos.y = olatuak.aux27.y;
        if (olatuak.aux29.x == 190) olatuak.P15.pos.y = olatuak.aux29.y;
        if (olatuak.aux31.x == 190) olatuak.P16.pos.y = olatuak.aux31.y;
        if (olatuak.aux33.x == 190) olatuak.P17.pos.y = olatuak.aux33.y;
        if (olatuak.aux35.x == 190) olatuak.P18.pos.y = olatuak.aux35.y;
        if (olatuak.aux37.x == 190) olatuak.P19.pos.y = olatuak.aux37.y;
        if (olatuak.aux39.x == 190) olatuak.P20.pos.y = olatuak.aux39.y;
        if (olatuak.aux41.x == 190) olatuak.P21.pos.y = olatuak.aux41.y;
        if (olatuak.aux43.x == 190) olatuak.P22.pos.y = olatuak.aux43.y;
        if (olatuak.aux45.x == 190) olatuak.P23.pos.y = olatuak.aux45.y;
        if (olatuak.aux47.x == 190) olatuak.P24.pos.y = olatuak.aux47.y;
        if (olatuak.aux49.x == 190) olatuak.P25.pos.y = olatuak.aux49.y;
        if (olatuak.aux51.x == 190) olatuak.P26.pos.y = olatuak.aux51.y;
        if (olatuak.aux53.x == 190) olatuak.P27.pos.y = olatuak.aux53.y;
        if (olatuak.aux55.x == 190) olatuak.P28.pos.y = olatuak.aux55.y;
        if (olatuak.aux57.x == 190) olatuak.P29.pos.y = olatuak.aux57.y;
        if (olatuak.aux59.x == 190) olatuak.P30.pos.y = olatuak.aux59.y;
        
        if (olatuak.aux.x >= 190 && olatuak.aux.x < 660 && olatuak.aux.y < 120) olatuak.P1.pos.x = olatuak.aux.x;
        if (olatuak.aux3.x >= 190 && olatuak.aux3.x < 660 && olatuak.aux3.y < 120) olatuak.P2.pos.x = olatuak.aux3.x;
        if (olatuak.aux5.x >= 190 && olatuak.aux5.x < 660 && olatuak.aux5.y < 120) olatuak.P3.pos.x = olatuak.aux5.x;
        if (olatuak.aux7.x >= 190 && olatuak.aux7.x < 660 && olatuak.aux7.y < 120) olatuak.P4.pos.x = olatuak.aux7.x;
        if (olatuak.aux9.x >= 190 && olatuak.aux9.x < 660 && olatuak.aux9.y < 120) olatuak.P5.pos.x = olatuak.aux9.x;
        if (olatuak.aux11.x >= 190 && olatuak.aux11.x < 660 && olatuak.aux11.y < 120) olatuak.P6.pos.x = olatuak.aux11.x;
        if (olatuak.aux13.x >= 190 && olatuak.aux13.x < 660 && olatuak.aux13.y < 120) olatuak.P7.pos.x = olatuak.aux13.x;
        if (olatuak.aux15.x >= 190 && olatuak.aux15.x < 660 && olatuak.aux15.y < 120) olatuak.P8.pos.x = olatuak.aux15.x;
        if (olatuak.aux17.x >= 190 && olatuak.aux17.x < 660 && olatuak.aux17.y < 120) olatuak.P9.pos.x = olatuak.aux17.x;
        if (olatuak.aux19.x >= 190 && olatuak.aux19.x < 660 && olatuak.aux19.y < 120) olatuak.P10.pos.x = olatuak.aux19.x;
        if (olatuak.aux21.x >= 190 && olatuak.aux21.x < 660 && olatuak.aux21.y < 120) olatuak.P11.pos.x = olatuak.aux21.x;
        if (olatuak.aux23.x >= 190 && olatuak.aux23.x < 660 && olatuak.aux23.y < 120) olatuak.P12.pos.x = olatuak.aux23.x;
        if (olatuak.aux25.x >= 190 && olatuak.aux25.x < 660 && olatuak.aux25.y < 120) olatuak.P13.pos.x = olatuak.aux25.x;
        if (olatuak.aux27.x >= 190 && olatuak.aux27.x < 660 && olatuak.aux27.y < 120) olatuak.P14.pos.x = olatuak.aux27.x;
        if (olatuak.aux29.x >= 190 && olatuak.aux29.x < 660 && olatuak.aux29.y < 120) olatuak.P15.pos.x = olatuak.aux29.x;
        if (olatuak.aux31.x >= 190 && olatuak.aux31.x < 660 && olatuak.aux31.y < 120) olatuak.P16.pos.x = olatuak.aux31.x;
        if (olatuak.aux33.x >= 190 && olatuak.aux33.x < 660 && olatuak.aux33.y < 120) olatuak.P17.pos.x = olatuak.aux33.x;
        if (olatuak.aux35.x >= 190 && olatuak.aux35.x < 660 && olatuak.aux35.y < 120) olatuak.P18.pos.x = olatuak.aux35.x;
        if (olatuak.aux37.x >= 190 && olatuak.aux37.x < 660 && olatuak.aux37.y < 120) olatuak.P19.pos.x = olatuak.aux37.x;
        if (olatuak.aux39.x >= 190 && olatuak.aux39.x < 660 && olatuak.aux39.y < 120) olatuak.P20.pos.x = olatuak.aux39.x;
        if (olatuak.aux41.x >= 190 && olatuak.aux41.x < 660 && olatuak.aux41.y < 120) olatuak.P21.pos.x = olatuak.aux41.x;
        if (olatuak.aux43.x >= 190 && olatuak.aux43.x < 660 && olatuak.aux43.y < 120) olatuak.P22.pos.x = olatuak.aux43.x;
        if (olatuak.aux45.x >= 190 && olatuak.aux45.x < 660 && olatuak.aux45.y < 120) olatuak.P23.pos.x = olatuak.aux45.x;
        if (olatuak.aux47.x >= 190 && olatuak.aux47.x < 660 && olatuak.aux47.y < 120) olatuak.P24.pos.x = olatuak.aux47.x;
        if (olatuak.aux49.x >= 190 && olatuak.aux49.x < 660 && olatuak.aux49.y < 120) olatuak.P25.pos.x = olatuak.aux49.x;
        if (olatuak.aux51.x >= 190 && olatuak.aux51.x < 660 && olatuak.aux51.y < 120) olatuak.P26.pos.x = olatuak.aux51.x;
        if (olatuak.aux53.x >= 190 && olatuak.aux53.x < 660 && olatuak.aux53.y < 120) olatuak.P27.pos.x = olatuak.aux53.x;
        if (olatuak.aux55.x >= 190 && olatuak.aux55.x < 660 && olatuak.aux55.y < 120) olatuak.P28.pos.x = olatuak.aux55.x;
        if (olatuak.aux57.x >= 190 && olatuak.aux57.x < 660 && olatuak.aux57.y < 120) olatuak.P29.pos.x = olatuak.aux57.x;
        if (olatuak.aux59.x >= 190 && olatuak.aux59.x < 660 && olatuak.aux59.y < 120) olatuak.P30.pos.x = olatuak.aux59.x;
        
        if (olatuak.aux.x == 660) olatuak.P1.pos.y = olatuak.aux2.y;
        if (olatuak.aux3.x == 660) olatuak.P2.pos.y = olatuak.aux4.y;
        if (olatuak.aux5.x == 660) olatuak.P3.pos.y = olatuak.aux6.y;
        if (olatuak.aux7.x == 660) olatuak.P4.pos.y = olatuak.aux8.y;
        if (olatuak.aux9.x == 660) olatuak.P5.pos.y = olatuak.aux10.y;
        if (olatuak.aux11.x == 660) olatuak.P6.pos.y = olatuak.aux12.y;
        if (olatuak.aux13.x == 660) olatuak.P7.pos.y = olatuak.aux14.y;
        if (olatuak.aux15.x == 660) olatuak.P8.pos.y = olatuak.aux16.y;
        if (olatuak.aux17.x == 660) olatuak.P9.pos.y = olatuak.aux18.y;
        if (olatuak.aux19.x == 660) olatuak.P10.pos.y = olatuak.aux20.y;
        if (olatuak.aux21.x == 660) olatuak.P11.pos.y = olatuak.aux22.y;
        if (olatuak.aux23.x == 660) olatuak.P12.pos.y = olatuak.aux24.y;
        if (olatuak.aux25.x == 660) olatuak.P13.pos.y = olatuak.aux26.y;
        if (olatuak.aux27.x == 660) olatuak.P14.pos.y = olatuak.aux28.y;
        if (olatuak.aux29.x == 660) olatuak.P15.pos.y = olatuak.aux30.y;
        if (olatuak.aux31.x == 660) olatuak.P16.pos.y = olatuak.aux32.y;
        if (olatuak.aux33.x == 660) olatuak.P17.pos.y = olatuak.aux34.y;
        if (olatuak.aux35.x == 660) olatuak.P18.pos.y = olatuak.aux36.y;
        if (olatuak.aux37.x == 660) olatuak.P19.pos.y = olatuak.aux38.y;
        if (olatuak.aux39.x == 660) olatuak.P20.pos.y = olatuak.aux40.y;
        if (olatuak.aux41.x == 660) olatuak.P21.pos.y = olatuak.aux42.y;
        if (olatuak.aux43.x == 660) olatuak.P22.pos.y = olatuak.aux44.y;
        if (olatuak.aux45.x == 660) olatuak.P23.pos.y = olatuak.aux46.y;
        if (olatuak.aux47.x == 660) olatuak.P24.pos.y = olatuak.aux48.y;
        if (olatuak.aux49.x == 660) olatuak.P25.pos.y = olatuak.aux50.y;
        if (olatuak.aux51.x == 660) olatuak.P26.pos.y = olatuak.aux52.y;
        if (olatuak.aux53.x == 660) olatuak.P27.pos.y = olatuak.aux54.y;
        if (olatuak.aux55.x == 660) olatuak.P28.pos.y = olatuak.aux56.y;
        if (olatuak.aux57.x == 660) olatuak.P29.pos.y = olatuak.aux58.y;
        if (olatuak.aux59.x == 660) olatuak.P30.pos.y = olatuak.aux60.y;
        
        if (olatuak.aux.x >= 660 && olatuak.aux.x < 900 && olatuak.aux.y > 500) olatuak.P1.pos.x = olatuak.aux.x;
        if (olatuak.aux3.x >= 660 && olatuak.aux3.x < 900 && olatuak.aux3.y > 500) olatuak.P2.pos.x = olatuak.aux3.x;
        if (olatuak.aux5.x >= 660 && olatuak.aux5.x < 900 && olatuak.aux5.y > 500) olatuak.P3.pos.x = olatuak.aux5.x;
        if (olatuak.aux7.x >= 660 && olatuak.aux7.x < 900 && olatuak.aux7.y > 500) olatuak.P4.pos.x = olatuak.aux7.x;
        if (olatuak.aux9.x >= 660 && olatuak.aux9.x < 900 && olatuak.aux9.y > 500) olatuak.P5.pos.x = olatuak.aux9.x;
        if (olatuak.aux11.x >= 660 && olatuak.aux11.x < 900 && olatuak.aux11.y > 500) olatuak.P6.pos.x = olatuak.aux11.x;
        if (olatuak.aux13.x >= 660 && olatuak.aux13.x < 900 && olatuak.aux13.y > 500) olatuak.P7.pos.x = olatuak.aux13.x;
        if (olatuak.aux15.x >= 660 && olatuak.aux15.x < 900 && olatuak.aux15.y > 500) olatuak.P8.pos.x = olatuak.aux15.x;
        if (olatuak.aux17.x >= 660 && olatuak.aux17.x < 900 && olatuak.aux17.y > 500) olatuak.P9.pos.x = olatuak.aux17.x;
        if (olatuak.aux19.x >= 660 && olatuak.aux19.x < 900 && olatuak.aux19.y > 500) olatuak.P10.pos.x = olatuak.aux19.x;
        if (olatuak.aux21.x >= 660 && olatuak.aux21.x < 900 && olatuak.aux21.y > 500) olatuak.P11.pos.x = olatuak.aux21.x;
        if (olatuak.aux23.x >= 660 && olatuak.aux23.x < 900 && olatuak.aux23.y > 500) olatuak.P12.pos.x = olatuak.aux23.x;
        if (olatuak.aux25.x >= 660 && olatuak.aux25.x < 900 && olatuak.aux25.y > 500) olatuak.P13.pos.x = olatuak.aux25.x;
        if (olatuak.aux27.x >= 660 && olatuak.aux27.x < 900 && olatuak.aux27.y > 500) olatuak.P14.pos.x = olatuak.aux27.x;
        if (olatuak.aux29.x >= 660 && olatuak.aux29.x < 900 && olatuak.aux29.y > 500) olatuak.P15.pos.x = olatuak.aux29.x;
        if (olatuak.aux31.x >= 660 && olatuak.aux31.x < 900 && olatuak.aux31.y > 500) olatuak.P16.pos.x = olatuak.aux31.x;
        if (olatuak.aux33.x >= 660 && olatuak.aux33.x < 900 && olatuak.aux33.y > 500) olatuak.P17.pos.x = olatuak.aux33.x;
        if (olatuak.aux35.x >= 660 && olatuak.aux35.x < 900 && olatuak.aux35.y > 500) olatuak.P18.pos.x = olatuak.aux35.x;
        if (olatuak.aux37.x >= 660 && olatuak.aux37.x < 900 && olatuak.aux37.y > 500) olatuak.P19.pos.x = olatuak.aux37.x;
        if (olatuak.aux39.x >= 660 && olatuak.aux39.x < 900 && olatuak.aux39.y > 500) olatuak.P20.pos.x = olatuak.aux39.x;
        if (olatuak.aux41.x >= 660 && olatuak.aux41.x < 900 && olatuak.aux41.y > 500) olatuak.P21.pos.x = olatuak.aux41.x;
        if (olatuak.aux43.x >= 660 && olatuak.aux43.x < 900 && olatuak.aux43.y > 500) olatuak.P22.pos.x = olatuak.aux43.x;
        if (olatuak.aux45.x >= 660 && olatuak.aux45.x < 900 && olatuak.aux45.y > 500) olatuak.P23.pos.x = olatuak.aux45.x;
        if (olatuak.aux47.x >= 660 && olatuak.aux47.x < 900 && olatuak.aux47.y > 500) olatuak.P24.pos.x = olatuak.aux47.x;
        if (olatuak.aux49.x >= 660 && olatuak.aux49.x < 900 && olatuak.aux49.y > 500) olatuak.P25.pos.x = olatuak.aux49.x;
        if (olatuak.aux51.x >= 660 && olatuak.aux51.x < 900 && olatuak.aux51.y > 500) olatuak.P26.pos.x = olatuak.aux51.x;
        if (olatuak.aux53.x >= 660 && olatuak.aux53.x < 900 && olatuak.aux53.y > 500) olatuak.P27.pos.x = olatuak.aux53.x;
        if (olatuak.aux55.x >= 660 && olatuak.aux55.x < 900 && olatuak.aux55.y > 500) olatuak.P28.pos.x = olatuak.aux55.x;
        if (olatuak.aux57.x >= 660 && olatuak.aux57.x < 900 && olatuak.aux57.y > 500) olatuak.P29.pos.x = olatuak.aux57.x;
        if (olatuak.aux59.x >= 660 && olatuak.aux59.x < 900 && olatuak.aux59.y > 500) olatuak.P30.pos.x = olatuak.aux59.x;
        
        if (olatuak.aux.x == 900) olatuak.P1.pos.y = olatuak.aux.y;
        if (olatuak.aux3.x == 900) olatuak.P2.pos.y = olatuak.aux3.y;
        if (olatuak.aux5.x == 900) olatuak.P3.pos.y = olatuak.aux5.y;
        if (olatuak.aux7.x == 900) olatuak.P4.pos.y = olatuak.aux7.y;
        if (olatuak.aux9.x == 900) olatuak.P5.pos.y = olatuak.aux9.y;
        if (olatuak.aux11.x == 900) olatuak.P6.pos.y = olatuak.aux11.y;
        if (olatuak.aux13.x == 900) olatuak.P7.pos.y = olatuak.aux13.y;
        if (olatuak.aux15.x == 900) olatuak.P8.pos.y = olatuak.aux15.y;
        if (olatuak.aux17.x == 900) olatuak.P9.pos.y = olatuak.aux17.y;
        if (olatuak.aux19.x == 900) olatuak.P10.pos.y = olatuak.aux19.y;
        if (olatuak.aux21.x == 900) olatuak.P11.pos.y = olatuak.aux21.y;
        if (olatuak.aux23.x == 900) olatuak.P12.pos.y = olatuak.aux23.y;
        if (olatuak.aux25.x == 900) olatuak.P13.pos.y = olatuak.aux25.y;
        if (olatuak.aux27.x == 900) olatuak.P14.pos.y = olatuak.aux27.y;
        if (olatuak.aux29.x == 900) olatuak.P15.pos.y = olatuak.aux29.y;
        if (olatuak.aux31.x == 900) olatuak.P16.pos.y = olatuak.aux31.y;
        if (olatuak.aux33.x == 900) olatuak.P17.pos.y = olatuak.aux33.y;
        if (olatuak.aux35.x == 900) olatuak.P18.pos.y = olatuak.aux35.y;
        if (olatuak.aux37.x == 900) olatuak.P19.pos.y = olatuak.aux37.y;
        if (olatuak.aux39.x == 900) olatuak.P20.pos.y = olatuak.aux39.y;
        if (olatuak.aux41.x == 900) olatuak.P21.pos.y = olatuak.aux41.y;
        if (olatuak.aux43.x == 900) olatuak.P22.pos.y = olatuak.aux43.y;
        if (olatuak.aux45.x == 900) olatuak.P23.pos.y = olatuak.aux45.y;
        if (olatuak.aux47.x == 900) olatuak.P24.pos.y = olatuak.aux47.y;
        if (olatuak.aux49.x == 900) olatuak.P25.pos.y = olatuak.aux49.y;
        if (olatuak.aux51.x == 900) olatuak.P26.pos.y = olatuak.aux51.y;
        if (olatuak.aux53.x == 900) olatuak.P27.pos.y = olatuak.aux53.y;
        if (olatuak.aux55.x == 900) olatuak.P28.pos.y = olatuak.aux55.y;
        if (olatuak.aux57.x == 900) olatuak.P29.pos.y = olatuak.aux57.y;
        if (olatuak.aux59.x == 900) olatuak.P30.pos.y = olatuak.aux59.y;
        
        if (olatuak.aux.x >= 900 && olatuak.aux.x < 1109 && olatuak.aux.y < 300) olatuak.P1.pos.x = olatuak.aux.x;
        if (olatuak.aux3.x >= 900 && olatuak.aux3.x < 1109 && olatuak.aux3.y < 300) olatuak.P2.pos.x = olatuak.aux3.x;
        if (olatuak.aux5.x >= 900 && olatuak.aux5.x < 1109 && olatuak.aux5.y < 300) olatuak.P3.pos.x = olatuak.aux5.x;
        if (olatuak.aux7.x >= 900 && olatuak.aux7.x < 1109 && olatuak.aux7.y < 300) olatuak.P4.pos.x = olatuak.aux7.x;
        if (olatuak.aux9.x >= 900 && olatuak.aux9.x < 1109 && olatuak.aux9.y < 300) olatuak.P5.pos.x = olatuak.aux9.x;
        if (olatuak.aux11.x >= 900 && olatuak.aux11.x < 1109 && olatuak.aux11.y < 300) olatuak.P6.pos.x = olatuak.aux11.x;
        if (olatuak.aux13.x >= 900 && olatuak.aux13.x < 1109 && olatuak.aux13.y < 300) olatuak.P7.pos.x = olatuak.aux13.x;
        if (olatuak.aux15.x >= 900 && olatuak.aux15.x < 1109 && olatuak.aux15.y < 300) olatuak.P8.pos.x = olatuak.aux15.x;
        if (olatuak.aux17.x >= 900 && olatuak.aux17.x < 1109 && olatuak.aux17.y < 300) olatuak.P9.pos.x = olatuak.aux17.x;
        if (olatuak.aux19.x >= 900 && olatuak.aux19.x < 1109 && olatuak.aux19.y < 300) olatuak.P10.pos.x = olatuak.aux19.x;
        if (olatuak.aux21.x >= 900 && olatuak.aux21.x < 1109 && olatuak.aux21.y < 300) olatuak.P11.pos.x = olatuak.aux21.x;
        if (olatuak.aux23.x >= 900 && olatuak.aux23.x < 1109 && olatuak.aux23.y < 300) olatuak.P12.pos.x = olatuak.aux23.x;
        if (olatuak.aux25.x >= 900 && olatuak.aux25.x < 1109 && olatuak.aux25.y < 300) olatuak.P13.pos.x = olatuak.aux25.x;
        if (olatuak.aux27.x >= 900 && olatuak.aux27.x < 1109 && olatuak.aux27.y < 300) olatuak.P14.pos.x = olatuak.aux27.x;
        if (olatuak.aux29.x >= 900 && olatuak.aux29.x < 1109 && olatuak.aux29.y < 300) olatuak.P15.pos.x = olatuak.aux29.x;
        if (olatuak.aux31.x >= 900 && olatuak.aux31.x < 1109 && olatuak.aux31.y < 300) olatuak.P16.pos.x = olatuak.aux31.x;
        if (olatuak.aux33.x >= 900 && olatuak.aux33.x < 1109 && olatuak.aux33.y < 300) olatuak.P17.pos.x = olatuak.aux33.x;
        if (olatuak.aux35.x >= 900 && olatuak.aux35.x < 1109 && olatuak.aux35.y < 300) olatuak.P18.pos.x = olatuak.aux35.x;
        if (olatuak.aux37.x >= 900 && olatuak.aux37.x < 1109 && olatuak.aux37.y < 300) olatuak.P19.pos.x = olatuak.aux37.x;
        if (olatuak.aux39.x >= 900 && olatuak.aux39.x < 1109 && olatuak.aux39.y < 300) olatuak.P20.pos.x = olatuak.aux39.x;
        if (olatuak.aux41.x >= 900 && olatuak.aux41.x < 1109 && olatuak.aux41.y < 300) olatuak.P21.pos.x = olatuak.aux41.x;
        if (olatuak.aux43.x >= 900 && olatuak.aux43.x < 1109 && olatuak.aux43.y < 300) olatuak.P22.pos.x = olatuak.aux43.x;
        if (olatuak.aux45.x >= 900 && olatuak.aux45.x < 1109 && olatuak.aux45.y < 300) olatuak.P23.pos.x = olatuak.aux45.x;
        if (olatuak.aux47.x >= 900 && olatuak.aux47.x < 1109 && olatuak.aux47.y < 300) olatuak.P24.pos.x = olatuak.aux47.x;
        if (olatuak.aux49.x >= 900 && olatuak.aux49.x < 1109 && olatuak.aux49.y < 300) olatuak.P25.pos.x = olatuak.aux49.x;
        if (olatuak.aux51.x >= 900 && olatuak.aux51.x < 1109 && olatuak.aux51.y < 300) olatuak.P26.pos.x = olatuak.aux51.x;
        if (olatuak.aux53.x >= 900 && olatuak.aux53.x < 1109 && olatuak.aux53.y < 300) olatuak.P27.pos.x = olatuak.aux53.x;
        if (olatuak.aux55.x >= 900 && olatuak.aux55.x < 1109 && olatuak.aux55.y < 300) olatuak.P28.pos.x = olatuak.aux55.x;
        if (olatuak.aux57.x >= 900 && olatuak.aux57.x < 1109 && olatuak.aux57.y < 300) olatuak.P29.pos.x = olatuak.aux57.x;
        if (olatuak.aux59.x >= 900 && olatuak.aux59.x < 1109 && olatuak.aux59.y < 300) olatuak.P30.pos.x = olatuak.aux59.x;
        
        for (j = 0; j < 30; j++) {
            olatuak.damage = 0;
            if (olatuak.enemy[j].x == 1107 && j < 10) olatuak.damage += 2;
            else if (olatuak.enemy[j].x == 1107 && j >= 10 && j < 20) olatuak.damage += 4;
            else if (olatuak.enemy[j].x == 1107 && j >= 20) olatuak.damage += 1;
            if (olatuak.damage != 0) lifeTotal -= olatuak.damage;
        }
        
        if (kont1 == 5000 || kont1 == 10000 || kont1 == 13500 || kont1 == 18500 || kont1 == 28500 || kont1 == 38500 || kont1 == 43500 || kont1 == 47000 || kont1 == 57000 || kont1 == 67000 || kont1 == 77000 || kont1 == 87000 || kont1 == 97000 || kont1 == 110000)
        {
            olatuak.P1.pos.x = -30;
            olatuak.P1.pos.y = 440;
            olatuak.P2.pos.x = -60;
            olatuak.P2.pos.y = 440;
            olatuak.P3.pos.x = -90;
            olatuak.P3.pos.y = 440;
            olatuak.P4.pos.x = -120;
            olatuak.P4.pos.y = 440;
            olatuak.P5.pos.x = -150;
            olatuak.P5.pos.y = 440;
            olatuak.P6.pos.x = -180;
            olatuak.P6.pos.y = 440;
            olatuak.P7.pos.x = -210;
            olatuak.P7.pos.y = 440;
            olatuak.P8.pos.x = -240;
            olatuak.P8.pos.y = 440;
            olatuak.P9.pos.x = -270;
            olatuak.P9.pos.y = 440;
            olatuak.P10.pos.x = -300;
            olatuak.P10.pos.y = 440;
            olatuak.P11.pos.x = -330;
            olatuak.P11.pos.y = 440;
            olatuak.P12.pos.x = -360;
            olatuak.P12.pos.y = 440;
            olatuak.P13.pos.x = -390;
            olatuak.P13.pos.y = 440;
            olatuak.P14.pos.x = -420;
            olatuak.P14.pos.y = 440;
            olatuak.P15.pos.x = -450;
            olatuak.P15.pos.y = 440;
            olatuak.P16.pos.x = -480;
            olatuak.P16.pos.y = 440;
            olatuak.P17.pos.x = -510;
            olatuak.P17.pos.y = 440;
            olatuak.P18.pos.x = -540;
            olatuak.P18.pos.y = 440;
            olatuak.P19.pos.x = -570;
            olatuak.P19.pos.y = 440;
            olatuak.P20.pos.x = -600;
            olatuak.P20.pos.y = 440;
            olatuak.P21.pos.x = -630;
            olatuak.P21.pos.y = 440;
            olatuak.P22.pos.x = -660;
            olatuak.P22.pos.y = 440;
            olatuak.P23.pos.x = -690;
            olatuak.P23.pos.y = 440;
            olatuak.P24.pos.x = -720;
            olatuak.P24.pos.y = 440;
            olatuak.P25.pos.x = -750;
            olatuak.P25.pos.y = 440;
            olatuak.P26.pos.x = -780;
            olatuak.P26.pos.y = 440;
            olatuak.P27.pos.x = -810;
            olatuak.P27.pos.y = 440;
            olatuak.P28.pos.x = -840;
            olatuak.P28.pos.y = 440;
            olatuak.P29.pos.x = -870;
            olatuak.P29.pos.y = 440;
            olatuak.P30.pos.x = -900;
            olatuak.P30.pos.y = 440;
        	olatuak.defentsa = 0;
        	olatuak.kont = kont1;
            olatuak.damage = lifeTotal;
        }
        
		structure.action = allTowerSet(structure.active, kont1, structure.change.upgrade, olatuak.enemy, structure.action);
    } while (olatuak.defentsa == 1);
    return olatuak;
}