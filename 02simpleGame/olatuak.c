#include "CC_Game.h"
#include "imagen.h"
#include "graphics.h"
#include "ebentoak.h"
#include "hasieratu.h"
#include "TowerBuild.h"
#include "text.h"
#include "soinua.h"
#include "TowerFunctionality.h"
#include <stdio.h>
#include <windows.h>

//Olatuetan irudiak mugitzen dituzten funtzioak (Olatua1 - Olatua14)

void Olatua1(JOKO_ELEMENTUA P1, JOKO_ELEMENTUA P2, JOKO_ELEMENTUA P3, JOKO_ELEMENTUA P4, JOKO_ELEMENTUA P5, JOKO_ELEMENTUA P6, int enemy[])
{
    // Etsaia hilda ez badago --> irudia mugitu
	if (enemy[0] == 0) irudiaMugitu(P1.id, P1.pos.x, P1.pos.y);
	if (enemy[1] == 0) irudiaMugitu(P2.id, P2.pos.x, P2.pos.y);
	if (enemy[2] == 0) irudiaMugitu(P3.id, P3.pos.x, P3.pos.y);
	if (enemy[3] == 0) irudiaMugitu(P4.id, P4.pos.x, P4.pos.y);
	if (enemy[4] == 0) irudiaMugitu(P5.id, P5.pos.x, P5.pos.y);
	if (enemy[5] == 0) irudiaMugitu(P6.id, P6.pos.x, P6.pos.y);
	pantailaBerriztu();
}

void Olatua2(JOKO_ELEMENTUA P1, JOKO_ELEMENTUA P2, JOKO_ELEMENTUA P3, JOKO_ELEMENTUA P4, JOKO_ELEMENTUA P5, JOKO_ELEMENTUA P6, JOKO_ELEMENTUA P7, JOKO_ELEMENTUA P8, JOKO_ELEMENTUA P9, JOKO_ELEMENTUA P10, int enemy[])
{
	if (enemy[0] == 0) irudiaMugitu(P1.id, P1.pos.x, P1.pos.y);
	if (enemy[1] == 0) irudiaMugitu(P2.id, P2.pos.x, P2.pos.y);
	if (enemy[2] == 0) irudiaMugitu(P3.id, P3.pos.x, P3.pos.y);
	if (enemy[3] == 0) irudiaMugitu(P4.id, P4.pos.x, P4.pos.y);
	if (enemy[4] == 0) irudiaMugitu(P5.id, P5.pos.x, P5.pos.y);
	if (enemy[5] == 0) irudiaMugitu(P6.id, P6.pos.x, P6.pos.y);
	if (enemy[6] == 0) irudiaMugitu(P7.id, P7.pos.x, P7.pos.y);
	if (enemy[7] == 0) irudiaMugitu(P8.id, P8.pos.x, P8.pos.y);
	if (enemy[8] == 0) irudiaMugitu(P9.id, P9.pos.x, P9.pos.y);
	if (enemy[9] == 0) irudiaMugitu(P10.id, P10.pos.x, P10.pos.y);
	pantailaBerriztu();
}

void Olatua3(JOKO_ELEMENTUA P21, JOKO_ELEMENTUA P22, JOKO_ELEMENTUA P23, JOKO_ELEMENTUA P24, JOKO_ELEMENTUA P25, JOKO_ELEMENTUA P26, int enemy[])
{
	if (enemy[20] == 0) irudiaMugitu(P21.id, P21.pos.x, P21.pos.y);
	if (enemy[21] == 0) irudiaMugitu(P22.id, P22.pos.x, P22.pos.y);
	if (enemy[22] == 0) irudiaMugitu(P23.id, P23.pos.x, P23.pos.y);
	if (enemy[23] == 0) irudiaMugitu(P24.id, P24.pos.x, P24.pos.y);
	if (enemy[24] == 0) irudiaMugitu(P25.id, P25.pos.x, P25.pos.y);
	if (enemy[25] == 0) irudiaMugitu(P26.id, P26.pos.x, P26.pos.y);
	pantailaBerriztu();
}

void Olatua4(JOKO_ELEMENTUA P1, JOKO_ELEMENTUA P2, JOKO_ELEMENTUA P3, JOKO_ELEMENTUA P4, JOKO_ELEMENTUA P21, JOKO_ELEMENTUA P22, JOKO_ELEMENTUA P23, JOKO_ELEMENTUA P24, int enemy[])
{
	if (enemy[0] == 0) irudiaMugitu(P1.id, P1.pos.x, P1.pos.y);
	if (enemy[1] == 0) irudiaMugitu(P2.id, P2.pos.x, P2.pos.y);
	if (enemy[2] == 0) irudiaMugitu(P3.id, P3.pos.x, P3.pos.y);
	if (enemy[3] == 0) irudiaMugitu(P4.id, P4.pos.x, P4.pos.y);
	if (enemy[20] == 0) irudiaMugitu(P21.id, P21.pos.x, P21.pos.y);
	if (enemy[21] == 0) irudiaMugitu(P22.id, P22.pos.x, P22.pos.y);
	if (enemy[22] == 0) irudiaMugitu(P23.id, P23.pos.x, P23.pos.y);
	if (enemy[23] == 0) irudiaMugitu(P24.id, P24.pos.x, P24.pos.y);
	pantailaBerriztu();
}

void Olatua5(JOKO_ELEMENTUA P11, JOKO_ELEMENTUA P12, int enemy[])
{
	if (enemy[10] == 0) irudiaMugitu(P11.id, P11.pos.x, P11.pos.y);
	if (enemy[11] == 0) irudiaMugitu(P12.id, P12.pos.x, P12.pos.y);
	pantailaBerriztu();
}

void Olatua6(JOKO_ELEMENTUA P1, JOKO_ELEMENTUA P2, JOKO_ELEMENTUA P3, JOKO_ELEMENTUA P4, JOKO_ELEMENTUA P5, JOKO_ELEMENTUA P11, JOKO_ELEMENTUA P12, int enemy[])
{
	if (enemy[0] == 0) irudiaMugitu(P1.id, P1.pos.x, P1.pos.y);
	if (enemy[1] == 0) irudiaMugitu(P2.id, P2.pos.x, P2.pos.y);
	if (enemy[2] == 0) irudiaMugitu(P3.id, P3.pos.x, P3.pos.y);
	if (enemy[3] == 0) irudiaMugitu(P4.id, P4.pos.x, P4.pos.y);
	if (enemy[4] == 0) irudiaMugitu(P5.id, P5.pos.x, P5.pos.y);
	if (enemy[10] == 0) irudiaMugitu(P11.id, P11.pos.x, P11.pos.y);
	if (enemy[11] == 0) irudiaMugitu(P12.id, P12.pos.x, P12.pos.y);
	pantailaBerriztu();
}

void Olatua7(JOKO_ELEMENTUA P21, JOKO_ELEMENTUA P22, JOKO_ELEMENTUA P23, JOKO_ELEMENTUA P24, JOKO_ELEMENTUA P25, JOKO_ELEMENTUA P26, JOKO_ELEMENTUA P6, JOKO_ELEMENTUA P1, JOKO_ELEMENTUA P2, JOKO_ELEMENTUA P3, JOKO_ELEMENTUA P4, JOKO_ELEMENTUA P5, JOKO_ELEMENTUA P11, JOKO_ELEMENTUA P12, int enemy[])
{
	if (enemy[0] == 0) irudiaMugitu(P1.id, P1.pos.x, P1.pos.y);
	if (enemy[1] == 0) irudiaMugitu(P2.id, P2.pos.x, P2.pos.y);
	if (enemy[2] == 0) irudiaMugitu(P3.id, P3.pos.x, P3.pos.y);
	if (enemy[3] == 0) irudiaMugitu(P4.id, P4.pos.x, P4.pos.y);
	if (enemy[4] == 0) irudiaMugitu(P5.id, P5.pos.x, P5.pos.y);
	if (enemy[5] == 0) irudiaMugitu(P6.id, P6.pos.x, P6.pos.y);
	if (enemy[20] == 0) irudiaMugitu(P21.id, P21.pos.x, P21.pos.y);
	if (enemy[21] == 0) irudiaMugitu(P22.id, P22.pos.x, P22.pos.y);
	if (enemy[22] == 0) irudiaMugitu(P23.id, P23.pos.x, P23.pos.y);
	if (enemy[23] == 0) irudiaMugitu(P24.id, P24.pos.x, P24.pos.y);
	if (enemy[24] == 0) irudiaMugitu(P25.id, P25.pos.x, P25.pos.y);
	if (enemy[25] == 0) irudiaMugitu(P26.id, P26.pos.x, P26.pos.y);
	pantailaBerriztu();
}

void Olatua8(JOKO_ELEMENTUA P21, JOKO_ELEMENTUA P22, JOKO_ELEMENTUA P23, JOKO_ELEMENTUA P24, JOKO_ELEMENTUA P25, JOKO_ELEMENTUA P26, JOKO_ELEMENTUA P27, JOKO_ELEMENTUA P28, JOKO_ELEMENTUA P29, JOKO_ELEMENTUA P30, int enemy[])
{
	if (enemy[20] == 0) irudiaMugitu(P21.id, P21.pos.x, P21.pos.y);
	if (enemy[21] == 0) irudiaMugitu(P22.id, P22.pos.x, P22.pos.y);
	if (enemy[22] == 0) irudiaMugitu(P23.id, P23.pos.x, P23.pos.y);
	if (enemy[23] == 0) irudiaMugitu(P24.id, P24.pos.x, P24.pos.y);
	if (enemy[24] == 0) irudiaMugitu(P25.id, P25.pos.x, P25.pos.y);
	if (enemy[25] == 0) irudiaMugitu(P26.id, P26.pos.x, P26.pos.y);
	if (enemy[26] == 0) irudiaMugitu(P27.id, P27.pos.x, P27.pos.y);
	if (enemy[27] == 0) irudiaMugitu(P28.id, P28.pos.x, P28.pos.y);
	if (enemy[28] == 0) irudiaMugitu(P29.id, P29.pos.x, P29.pos.y);
	if (enemy[29] == 0) irudiaMugitu(P30.id, P30.pos.x, P30.pos.y);
	pantailaBerriztu();
}

void Olatua9(JOKO_ELEMENTUA P11, JOKO_ELEMENTUA P12, JOKO_ELEMENTUA P13, JOKO_ELEMENTUA P14, int enemy[])
{
	if (enemy[10] == 0) irudiaMugitu(P11.id, P11.pos.x, P11.pos.y);
	if (enemy[11] == 0) irudiaMugitu(P12.id, P12.pos.x, P12.pos.y);
	if (enemy[12] == 0) irudiaMugitu(P13.id, P13.pos.x, P13.pos.y);
	if (enemy[13] == 0) irudiaMugitu(P14.id, P14.pos.x, P14.pos.y);
	pantailaBerriztu();
}


void Olatua10(JOKO_ELEMENTUA P21, JOKO_ELEMENTUA P22, JOKO_ELEMENTUA P23, JOKO_ELEMENTUA P24, JOKO_ELEMENTUA P25, JOKO_ELEMENTUA P26, JOKO_ELEMENTUA P1, JOKO_ELEMENTUA P2, JOKO_ELEMENTUA P3, JOKO_ELEMENTUA P4, JOKO_ELEMENTUA P5, JOKO_ELEMENTUA P6, JOKO_ELEMENTUA P11, JOKO_ELEMENTUA P12, JOKO_ELEMENTUA P13, JOKO_ELEMENTUA P14, int enemy[])
{
	if (enemy[0] == 0) irudiaMugitu(P1.id, P1.pos.x, P1.pos.y);
	if (enemy[1] == 0) irudiaMugitu(P2.id, P2.pos.x, P2.pos.y);
	if (enemy[2] == 0) irudiaMugitu(P3.id, P3.pos.x, P3.pos.y);
	if (enemy[3] == 0) irudiaMugitu(P4.id, P4.pos.x, P4.pos.y);
	if (enemy[4] == 0) irudiaMugitu(P5.id, P5.pos.x, P5.pos.y);
	if (enemy[5] == 0) irudiaMugitu(P6.id, P6.pos.x, P6.pos.y);
	if (enemy[10] == 0) irudiaMugitu(P11.id, P11.pos.x, P11.pos.y);
	if (enemy[11] == 0) irudiaMugitu(P12.id, P12.pos.x, P12.pos.y);
	if (enemy[12] == 0) irudiaMugitu(P13.id, P13.pos.x, P13.pos.y);
	if (enemy[20] == 0) irudiaMugitu(P21.id, P21.pos.x, P21.pos.y);
	if (enemy[21] == 0) irudiaMugitu(P22.id, P22.pos.x, P22.pos.y);
	if (enemy[22] == 0) irudiaMugitu(P23.id, P23.pos.x, P23.pos.y);
	if (enemy[23] == 0) irudiaMugitu(P24.id, P24.pos.x, P24.pos.y);
	if (enemy[24] == 0) irudiaMugitu(P25.id, P25.pos.x, P25.pos.y);
	if (enemy[25] == 0) irudiaMugitu(P26.id, P26.pos.x, P26.pos.y);
	pantailaBerriztu();
}

void Olatua11(JOKO_ELEMENTUA P21, JOKO_ELEMENTUA P22, JOKO_ELEMENTUA P23, JOKO_ELEMENTUA P24, JOKO_ELEMENTUA P25, JOKO_ELEMENTUA P26, JOKO_ELEMENTUA P27, JOKO_ELEMENTUA P28, JOKO_ELEMENTUA P29, JOKO_ELEMENTUA P30, JOKO_ELEMENTUA P11, JOKO_ELEMENTUA P12, JOKO_ELEMENTUA P13, JOKO_ELEMENTUA P14, int enemy[])
{
	if (enemy[10] == 0) irudiaMugitu(P11.id, P11.pos.x, P11.pos.y);
	if (enemy[11] == 0) irudiaMugitu(P12.id, P12.pos.x, P12.pos.y);
	if (enemy[12] == 0) irudiaMugitu(P13.id, P13.pos.x, P13.pos.y);
	if (enemy[13] == 0) irudiaMugitu(P14.id, P14.pos.x, P14.pos.y);
	if (enemy[20] == 0) irudiaMugitu(P21.id, P21.pos.x, P21.pos.y);
	if (enemy[21] == 0) irudiaMugitu(P22.id, P22.pos.x, P22.pos.y);
	if (enemy[22] == 0) irudiaMugitu(P23.id, P23.pos.x, P23.pos.y);
	if (enemy[23] == 0) irudiaMugitu(P24.id, P24.pos.x, P24.pos.y);
	if (enemy[24] == 0) irudiaMugitu(P25.id, P25.pos.x, P25.pos.y);
	if (enemy[25] == 0) irudiaMugitu(P26.id, P26.pos.x, P26.pos.y);
	if (enemy[26] == 0) irudiaMugitu(P27.id, P27.pos.x, P27.pos.y);
	if (enemy[27] == 0) irudiaMugitu(P28.id, P28.pos.x, P28.pos.y);
	if (enemy[28] == 0) irudiaMugitu(P29.id, P29.pos.x, P29.pos.y);
	if (enemy[29] == 0) irudiaMugitu(P30.id, P30.pos.x, P30.pos.y);
	pantailaBerriztu();
}

void Olatua12(JOKO_ELEMENTUA P21, JOKO_ELEMENTUA P22, JOKO_ELEMENTUA P23, JOKO_ELEMENTUA P24, JOKO_ELEMENTUA P25, JOKO_ELEMENTUA P26, JOKO_ELEMENTUA P27, JOKO_ELEMENTUA P28, JOKO_ELEMENTUA P29, JOKO_ELEMENTUA P30, JOKO_ELEMENTUA P11, JOKO_ELEMENTUA P12, JOKO_ELEMENTUA P1, JOKO_ELEMENTUA P2, JOKO_ELEMENTUA P3, JOKO_ELEMENTUA P4, JOKO_ELEMENTUA P5, JOKO_ELEMENTUA P6, JOKO_ELEMENTUA P7, JOKO_ELEMENTUA P8, JOKO_ELEMENTUA P9, JOKO_ELEMENTUA P10, int enemy[])
{
	if (enemy[0] == 0) irudiaMugitu(P1.id, P1.pos.x, P1.pos.y);
	if (enemy[1] == 0) irudiaMugitu(P2.id, P2.pos.x, P2.pos.y);
	if (enemy[2] == 0) irudiaMugitu(P3.id, P3.pos.x, P3.pos.y);
	if (enemy[3] == 0) irudiaMugitu(P4.id, P4.pos.x, P4.pos.y);
	if (enemy[4] == 0) irudiaMugitu(P5.id, P5.pos.x, P5.pos.y);
	if (enemy[5] == 0) irudiaMugitu(P6.id, P6.pos.x, P6.pos.y);
	if (enemy[6] == 0) irudiaMugitu(P7.id, P7.pos.x, P7.pos.y);
	if (enemy[7] == 0) irudiaMugitu(P8.id, P8.pos.x, P8.pos.y);
	if (enemy[8] == 0) irudiaMugitu(P9.id, P9.pos.x, P9.pos.y);
	if (enemy[10] == 0) irudiaMugitu(P11.id, P11.pos.x, P11.pos.y);
	if (enemy[11] == 0) irudiaMugitu(P12.id, P12.pos.x, P12.pos.y);
	if (enemy[9] == 0) irudiaMugitu(P10.id, P10.pos.x, P10.pos.y);
	if (enemy[20] == 0) irudiaMugitu(P21.id, P21.pos.x, P21.pos.y);
	if (enemy[21] == 0) irudiaMugitu(P22.id, P22.pos.x, P22.pos.y);
	if (enemy[22] == 0) irudiaMugitu(P23.id, P23.pos.x, P23.pos.y);
	if (enemy[23] == 0) irudiaMugitu(P24.id, P24.pos.x, P24.pos.y);
	if (enemy[24] == 0) irudiaMugitu(P25.id, P25.pos.x, P25.pos.y);
	if (enemy[25] == 0) irudiaMugitu(P26.id, P26.pos.x, P26.pos.y);
	if (enemy[26] == 0) irudiaMugitu(P27.id, P27.pos.x, P27.pos.y);
	if (enemy[27] == 0) irudiaMugitu(P28.id, P28.pos.x, P28.pos.y);
	if (enemy[28] == 0) irudiaMugitu(P29.id, P29.pos.x, P29.pos.y);
	if (enemy[29] == 0) irudiaMugitu(P30.id, P30.pos.x, P30.pos.y);
	pantailaBerriztu();
}

void Olatua13(JOKO_ELEMENTUA P21, JOKO_ELEMENTUA P22, JOKO_ELEMENTUA P23, JOKO_ELEMENTUA P15, JOKO_ELEMENTUA P16, JOKO_ELEMENTUA P24, JOKO_ELEMENTUA P25, JOKO_ELEMENTUA P26, JOKO_ELEMENTUA P27, JOKO_ELEMENTUA P28, JOKO_ELEMENTUA P29, JOKO_ELEMENTUA P30, JOKO_ELEMENTUA P11, JOKO_ELEMENTUA P12, JOKO_ELEMENTUA P13, JOKO_ELEMENTUA P14, JOKO_ELEMENTUA P1, JOKO_ELEMENTUA P2, JOKO_ELEMENTUA P3, JOKO_ELEMENTUA P4, JOKO_ELEMENTUA P5, JOKO_ELEMENTUA P6, JOKO_ELEMENTUA P7, JOKO_ELEMENTUA P8, JOKO_ELEMENTUA P9, JOKO_ELEMENTUA P10, int enemy[])
{
	if (enemy[0] == 0) irudiaMugitu(P1.id, P1.pos.x, P1.pos.y);
	if (enemy[1] == 0) irudiaMugitu(P2.id, P2.pos.x, P2.pos.y);
	if (enemy[2] == 0) irudiaMugitu(P3.id, P3.pos.x, P3.pos.y);
	if (enemy[3] == 0) irudiaMugitu(P4.id, P4.pos.x, P4.pos.y);
	if (enemy[4] == 0) irudiaMugitu(P5.id, P5.pos.x, P5.pos.y);
	if (enemy[5] == 0) irudiaMugitu(P6.id, P6.pos.x, P6.pos.y);
	if (enemy[6] == 0) irudiaMugitu(P7.id, P7.pos.x, P7.pos.y);
	if (enemy[7] == 0) irudiaMugitu(P8.id, P8.pos.x, P8.pos.y);
	if (enemy[8] == 0) irudiaMugitu(P9.id, P9.pos.x, P9.pos.y);
	if (enemy[10] == 0) irudiaMugitu(P11.id, P11.pos.x, P11.pos.y);
	if (enemy[11] == 0) irudiaMugitu(P12.id, P12.pos.x, P12.pos.y);
	if (enemy[12] == 0) irudiaMugitu(P13.id, P13.pos.x, P13.pos.y);
	if (enemy[13] == 0) irudiaMugitu(P14.id, P14.pos.x, P14.pos.y);
	if (enemy[14] == 0) irudiaMugitu(P15.id, P15.pos.x, P15.pos.y);
	if (enemy[15] == 0) irudiaMugitu(P16.id, P16.pos.x, P16.pos.y);
	if (enemy[9] == 0) irudiaMugitu(P10.id, P10.pos.x, P10.pos.y);
	if (enemy[20] == 0) irudiaMugitu(P21.id, P21.pos.x, P21.pos.y);
	if (enemy[21] == 0) irudiaMugitu(P22.id, P22.pos.x, P22.pos.y);
	if (enemy[22] == 0) irudiaMugitu(P23.id, P23.pos.x, P23.pos.y);
	if (enemy[23] == 0) irudiaMugitu(P24.id, P24.pos.x, P24.pos.y);
	pantailaBerriztu();
}

void Olatua14(JOKO_ELEMENTUA P15, JOKO_ELEMENTUA P16, JOKO_ELEMENTUA P17, JOKO_ELEMENTUA P18, JOKO_ELEMENTUA P19, JOKO_ELEMENTUA P20, JOKO_ELEMENTUA P21, JOKO_ELEMENTUA P22, JOKO_ELEMENTUA P23, JOKO_ELEMENTUA P24, JOKO_ELEMENTUA P25, JOKO_ELEMENTUA P26, JOKO_ELEMENTUA P27, JOKO_ELEMENTUA P28, JOKO_ELEMENTUA P29, JOKO_ELEMENTUA P30, JOKO_ELEMENTUA P11, JOKO_ELEMENTUA P12, JOKO_ELEMENTUA P13, JOKO_ELEMENTUA P14, JOKO_ELEMENTUA P1, JOKO_ELEMENTUA P2, JOKO_ELEMENTUA P3, JOKO_ELEMENTUA P4, JOKO_ELEMENTUA P5, JOKO_ELEMENTUA P6, JOKO_ELEMENTUA P7, JOKO_ELEMENTUA P8, JOKO_ELEMENTUA P9, JOKO_ELEMENTUA P10, int enemy[])
{
	if (enemy[0] == 0) irudiaMugitu(P1.id, P1.pos.x, P1.pos.y);
	if (enemy[1] == 0) irudiaMugitu(P2.id, P2.pos.x, P2.pos.y);
	if (enemy[2] == 0) irudiaMugitu(P3.id, P3.pos.x, P3.pos.y);
	if (enemy[3] == 0) irudiaMugitu(P4.id, P4.pos.x, P4.pos.y);
	if (enemy[4] == 0) irudiaMugitu(P5.id, P5.pos.x, P5.pos.y);
	if (enemy[5] == 0) irudiaMugitu(P6.id, P6.pos.x, P6.pos.y);
	if (enemy[6] == 0) irudiaMugitu(P7.id, P7.pos.x, P7.pos.y);
	if (enemy[7] == 0) irudiaMugitu(P8.id, P8.pos.x, P8.pos.y);
	if (enemy[8] == 0) irudiaMugitu(P9.id, P9.pos.x, P9.pos.y);
	if (enemy[10] == 0) irudiaMugitu(P11.id, P11.pos.x, P11.pos.y);
	if (enemy[11] == 0) irudiaMugitu(P12.id, P12.pos.x, P12.pos.y);
	if (enemy[12] == 0) irudiaMugitu(P13.id, P13.pos.x, P13.pos.y);
	if (enemy[13] == 0) irudiaMugitu(P14.id, P14.pos.x, P14.pos.y);
	if (enemy[14] == 0) irudiaMugitu(P15.id, P15.pos.x, P15.pos.y);
	if (enemy[15] == 0) irudiaMugitu(P16.id, P16.pos.x, P16.pos.y);
	if (enemy[16] == 0) irudiaMugitu(P17.id, P17.pos.x, P17.pos.y);
	if (enemy[17] == 0) irudiaMugitu(P18.id, P18.pos.x, P18.pos.y);
	if (enemy[18] == 0) irudiaMugitu(P19.id, P19.pos.x, P19.pos.y);
	if (enemy[19] == 0) irudiaMugitu(P20.id, P20.pos.x, P20.pos.y);
	if (enemy[9] == 0) irudiaMugitu(P10.id, P10.pos.x, P10.pos.y);
	if (enemy[20] == 0) irudiaMugitu(P21.id, P21.pos.x, P21.pos.y);
	if (enemy[21] == 0) irudiaMugitu(P22.id, P22.pos.x, P22.pos.y);
	if (enemy[22] == 0) irudiaMugitu(P23.id, P23.pos.x, P23.pos.y);
	if (enemy[23] == 0) irudiaMugitu(P24.id, P24.pos.x, P24.pos.y);
	if (enemy[24] == 0) irudiaMugitu(P25.id, P25.pos.x, P25.pos.y);
	if (enemy[25] == 0) irudiaMugitu(P26.id, P26.pos.x, P26.pos.y);
	if (enemy[26] == 0) irudiaMugitu(P27.id, P27.pos.x, P27.pos.y);
	if (enemy[27] == 0) irudiaMugitu(P28.id, P28.pos.x, P28.pos.y);
	if (enemy[28] == 0) irudiaMugitu(P29.id, P29.pos.x, P29.pos.y);
	if (enemy[29] == 0) irudiaMugitu(P30.id, P30.pos.x, P30.pos.y);
	pantailaBerriztu();
}

//Etsaiak hiltzen badira, funtzio honek pantailatik kanpo bidaltzen ditu, targetingaren posizioa aldatuz eta irudia posizio horretara mugituz.

POSIZIOA restartPosition(POSIZIOA enemy, int kont, JOKO_ELEMENTUA id1, JOKO_ELEMENTUA id2, JOKO_ELEMENTUA id3, JOKO_ELEMENTUA id4, JOKO_ELEMENTUA id5, JOKO_ELEMENTUA id6, JOKO_ELEMENTUA id7, JOKO_ELEMENTUA id8, JOKO_ELEMENTUA id9, JOKO_ELEMENTUA id10, JOKO_ELEMENTUA id11, JOKO_ELEMENTUA id12, JOKO_ELEMENTUA id13, JOKO_ELEMENTUA id14, JOKO_ELEMENTUA id15, JOKO_ELEMENTUA id16, JOKO_ELEMENTUA id17, JOKO_ELEMENTUA id18, JOKO_ELEMENTUA id19, JOKO_ELEMENTUA id20, JOKO_ELEMENTUA id21, JOKO_ELEMENTUA id22, JOKO_ELEMENTUA id23, JOKO_ELEMENTUA id24, JOKO_ELEMENTUA id25, JOKO_ELEMENTUA id26, JOKO_ELEMENTUA id27, JOKO_ELEMENTUA id28, JOKO_ELEMENTUA id29, JOKO_ELEMENTUA id30)
{
	if (kont == 0) { enemy.x = SCREEN_WIDTH + 1; enemy.y = 440; irudiaMugitu(id1.id, enemy.x, enemy.y); }
	if (kont == 1) { enemy.x = SCREEN_WIDTH + 1; enemy.y = 440; irudiaMugitu(id2.id, enemy.x, enemy.y); }
	if (kont == 2) { enemy.x = SCREEN_WIDTH + 1; enemy.y = 440; irudiaMugitu(id3.id, enemy.x, enemy.y); }
	if (kont == 3) { enemy.x = SCREEN_WIDTH + 1; enemy.y = 440; irudiaMugitu(id4.id, enemy.x, enemy.y); }
	if (kont == 4) { enemy.x = SCREEN_WIDTH + 1; enemy.y = 440; irudiaMugitu(id5.id, enemy.x, enemy.y); }
	if (kont == 5) { enemy.x = SCREEN_WIDTH + 1; enemy.y = 440; irudiaMugitu(id6.id, enemy.x, enemy.y); }
	if (kont == 6) { enemy.x = SCREEN_WIDTH + 1; enemy.y = 440; irudiaMugitu(id7.id, enemy.x, enemy.y); }
	if (kont == 7) { enemy.x = SCREEN_WIDTH + 1; enemy.y = 440; irudiaMugitu(id8.id, enemy.x, enemy.y); }
	if (kont == 8) { enemy.x = SCREEN_WIDTH + 1; enemy.y = 440; irudiaMugitu(id9.id, enemy.x, enemy.y); }
	if (kont == 9) { enemy.x = SCREEN_WIDTH + 1; enemy.y = 440; irudiaMugitu(id10.id, enemy.x, enemy.y); }
	if (kont == 10) { enemy.x = SCREEN_WIDTH + 1; enemy.y = 440; irudiaMugitu(id11.id, enemy.x, enemy.y); }
	if (kont == 11) { enemy.x = SCREEN_WIDTH + 1; enemy.y = 440; irudiaMugitu(id12.id, enemy.x, enemy.y); }
	if (kont == 12) { enemy.x = SCREEN_WIDTH + 1; enemy.y = 440; irudiaMugitu(id13.id, enemy.x, enemy.y); }
	if (kont == 13) { enemy.x = SCREEN_WIDTH + 1; enemy.y = 440; irudiaMugitu(id14.id, enemy.x, enemy.y); }
	if (kont == 14) { enemy.x = SCREEN_WIDTH + 1; enemy.y = 440; irudiaMugitu(id15.id, enemy.x, enemy.y); }
	if (kont == 15) { enemy.x = SCREEN_WIDTH + 1; enemy.y = 440; irudiaMugitu(id16.id, enemy.x, enemy.y); }
	if (kont == 16) { enemy.x = SCREEN_WIDTH + 1; enemy.y = 440; irudiaMugitu(id17.id, enemy.x, enemy.y); }
	if (kont == 17) { enemy.x = SCREEN_WIDTH + 1; enemy.y = 440; irudiaMugitu(id18.id, enemy.x, enemy.y); }
	if (kont == 18) { enemy.x = SCREEN_WIDTH + 1; enemy.y = 440; irudiaMugitu(id19.id, enemy.x, enemy.y); }
	if (kont == 19) { enemy.x = SCREEN_WIDTH + 1; enemy.y = 440; irudiaMugitu(id20.id, enemy.x, enemy.y); }
	if (kont == 20) { enemy.x = SCREEN_WIDTH + 1; enemy.y = 440; irudiaMugitu(id21.id, enemy.x, enemy.y); }
	if (kont == 21) { enemy.x = SCREEN_WIDTH + 1; enemy.y = 440; irudiaMugitu(id22.id, enemy.x, enemy.y); }
	if (kont == 22) { enemy.x = SCREEN_WIDTH + 1; enemy.y = 440; irudiaMugitu(id23.id, enemy.x, enemy.y); }
	if (kont == 23) { enemy.x = SCREEN_WIDTH + 1; enemy.y = 440; irudiaMugitu(id24.id, enemy.x, enemy.y); }
	if (kont == 24) { enemy.x = SCREEN_WIDTH + 1; enemy.y = 440; irudiaMugitu(id25.id, enemy.x, enemy.y); }
	if (kont == 25) { enemy.x = SCREEN_WIDTH + 1; enemy.y = 440; irudiaMugitu(id26.id, enemy.x, enemy.y); }
	if (kont == 26) { enemy.x = SCREEN_WIDTH + 1; enemy.y = 440; irudiaMugitu(id27.id, enemy.x, enemy.y); }
	if (kont == 27) { enemy.x = SCREEN_WIDTH + 1; enemy.y = 440; irudiaMugitu(id28.id, enemy.x, enemy.y); }
	if (kont == 28) { enemy.x = SCREEN_WIDTH + 1; enemy.y = 440; irudiaMugitu(id29.id, enemy.x, enemy.y); }
	if (kont == 29) { enemy.x = SCREEN_WIDTH + 1; enemy.y = 440; irudiaMugitu(id30.id, enemy.x, enemy.y); }
	pantailaBerriztu();
	return enemy;
}
// Etsai bat hizten bada irabazten den dirua kalkulatzen duen funtzioa.
int giveMoney(int enemy)
{
	int money = 0;
	if (enemy < 10) money = 10;
	if (enemy >= 10 && enemy < 20) money = 40;
	if (enemy >= 20) money = 5;
	return money;
}
// Olatuen funtzio nagusia
OLATUAK etsaiak(OLATUAK olatuak, int ebentu, TOWER_STRUCTURE structure, int lifeTotal)
{
	int timeLeft1 = 10000, timeLeft2 = 10000, timeLeft3 = 7000, timeLeft4 = 10000, timeLeft5 = 20000, timeLeft6 = 20000, timeLeft7 = 20000, timeLeft8 = 7000, timeLeft9 = 20000, timeLeft10 = 20000, timeLeft11 = 20000, timeLeft12 = 20000, timeLeft13 = 20000, timeLeft14 = 20000;
	int kont1 = 0, i = 0, j;
	EGOERA  egoera = JOLASTEN;

    //Estrukturak eta kontagailua hasieratu

	kont1 = olatuak.kont;
	structure.action = hasieratuAction(1, 1);
	olatuak.money = structure.money;

	do {
		kont1++;

		for (i = 0; i < 30; i++) {
            //Etsaiak bizirik badaude, targetingaren eta etsaiaren posizioa berdindu.
			if (olatuak.enemyDeath[i] == 0 && kont1 > 1) olatuak.enemy[i] = hasieratuEnemyPos(olatuak, i);
            //Olatu berri bat hasi behar bada, etsaien bizitzak eta izoztuta dauden eta hilda dauden adierazten duten bektoreak hasieratu.
			if (kont1 == 2 || kont1 == 10001 || kont1 == 20001 || kont1 == 27001 || kont1 == 37001 || kont1 == 57001 || kont1 == 77001 || kont1 == 97001 || kont1 == 104001 || kont1 == 124001 || kont1 == 144001 || kont1 == 164001 || kont1 == 184001 || kont1 == 204001 || kont1 == 224001) {
				olatuak.enemyLife[i] = hasieratuBizitzak(i);
				olatuak.enemyFreeze[i] = 0;
				olatuak.enemyDeath[i] = 0;
			}
		}
 //Lehenengo olatua
		if (kont1 <= 10000 && kont1 > 1) {
            // Geratzen den denboraren kontagailua
			kontagailua(timeLeft1 / 100, 970, 25);

			Olatua1(olatuak.P1, olatuak.P2, olatuak.P3, olatuak.P4, olatuak.P5, olatuak.P6, olatuak.enemyDeath);
            //Lehenengo bihurgunera iritsi arte, aurrera mugitu
			if (olatuak.aux.x < 190) olatuak.P1.pos.x = olatuak.aux.x;
			if (olatuak.aux3.x < 190) olatuak.P2.pos.x = olatuak.aux3.x;
			if (olatuak.aux5.x < 190) olatuak.P3.pos.x = olatuak.aux5.x;
			if (olatuak.aux7.x < 190) olatuak.P4.pos.x = olatuak.aux7.x;
			if (olatuak.aux9.x < 190) olatuak.P5.pos.x = olatuak.aux9.x;
			if (olatuak.aux11.x < 190) olatuak.P6.pos.x = olatuak.aux11.x;
			timeLeft1--;
		}

		else if (kont1 > 10000 && kont1 <= 20000) {
			kontagailua(timeLeft2 / 100, 970, 25);
			Olatua2(olatuak.P1, olatuak.P2, olatuak.P3, olatuak.P4, olatuak.P5, olatuak.P6, olatuak.P7, olatuak.P8, olatuak.P9, olatuak.P10, olatuak.enemyDeath);
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
			timeLeft2--;
		}

		else if (kont1 > 20000 && kont1 <= 27000) {
			kontagailua(timeLeft3 / 100, 970, 25);
			Olatua3(olatuak.P21, olatuak.P22, olatuak.P23, olatuak.P24, olatuak.P25, olatuak.P26, olatuak.enemyDeath);
			if (olatuak.aux41.x < 190) olatuak.P21.pos.x = olatuak.aux41.x;
			if (olatuak.aux43.x < 190) olatuak.P22.pos.x = olatuak.aux43.x;
			if (olatuak.aux45.x < 190) olatuak.P23.pos.x = olatuak.aux45.x;
			if (olatuak.aux47.x < 190) olatuak.P24.pos.x = olatuak.aux47.x;
			if (olatuak.aux49.x < 190) olatuak.P25.pos.x = olatuak.aux49.x;
			if (olatuak.aux51.x < 190) olatuak.P26.pos.x = olatuak.aux51.x;
			timeLeft3--;
		}

		else if (kont1 > 27000 && kont1 <= 37000) {
			kontagailua(timeLeft4 / 100, 970, 25);
			Olatua4(olatuak.P21, olatuak.P22, olatuak.P23, olatuak.P24, olatuak.P1, olatuak.P2, olatuak.P3, olatuak.P4, olatuak.enemyDeath);
			if (olatuak.aux.x < 190) olatuak.P1.pos.x = olatuak.aux.x;
			if (olatuak.aux3.x < 190) olatuak.P2.pos.x = olatuak.aux3.x;
			if (olatuak.aux5.x < 190) olatuak.P3.pos.x = olatuak.aux5.x;
			if (olatuak.aux7.x < 190) olatuak.P4.pos.x = olatuak.aux7.x;
			if (olatuak.aux41.x < 190) olatuak.P21.pos.x = olatuak.aux41.x;
			if (olatuak.aux43.x < 190) olatuak.P22.pos.x = olatuak.aux43.x;
			if (olatuak.aux45.x < 190) olatuak.P23.pos.x = olatuak.aux45.x;
			if (olatuak.aux47.x < 190) olatuak.P24.pos.x = olatuak.aux47.x;
			timeLeft4--;
		}

		else if (kont1 > 37000 && kont1 <= 57000) {
			kontagailua(timeLeft5 / 100, 970, 25);
			Olatua5(olatuak.P11, olatuak.P12, olatuak.enemyDeath);
			if (olatuak.aux21.x < 190) olatuak.P11.pos.x = olatuak.aux21.x;
			if (olatuak.aux23.x < 190) olatuak.P12.pos.x = olatuak.aux23.x;
			timeLeft5--;
		}

		else if (kont1 > 57000 && kont1 <= 77000) {
			kontagailua(timeLeft6 / 100, 970, 25);
			Olatua6(olatuak.P1, olatuak.P2, olatuak.P3, olatuak.P4, olatuak.P5, olatuak.P11, olatuak.P12, olatuak.enemyDeath);
			if (olatuak.aux.x < 190) olatuak.P1.pos.x = olatuak.aux.x;
			if (olatuak.aux3.x < 190) olatuak.P2.pos.x = olatuak.aux3.x;
			if (olatuak.aux5.x < 190) olatuak.P3.pos.x = olatuak.aux5.x;
			if (olatuak.aux7.x < 190) olatuak.P4.pos.x = olatuak.aux7.x;
			if (olatuak.aux9.x < 190) olatuak.P5.pos.x = olatuak.aux9.x;
			if (olatuak.aux21.x < 190) olatuak.P11.pos.x = olatuak.aux21.x;
			if (olatuak.aux23.x < 190) olatuak.P12.pos.x = olatuak.aux23.x;
			timeLeft6--;
		}

		else if (kont1 > 77000 && kont1 <= 97000) {
			kontagailua(timeLeft7 / 100, 970, 25);
			Olatua7(olatuak.P1, olatuak.P2, olatuak.P3, olatuak.P4, olatuak.P5, olatuak.P6, olatuak.P27, olatuak.P28, olatuak.P21, olatuak.P22, olatuak.P23, olatuak.P24, olatuak.P25, olatuak.P26, olatuak.enemyDeath);
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
			timeLeft7--;
		}

		else if (kont1 > 97000 && kont1 <= 104000) {
			kontagailua(timeLeft8 / 100, 970, 25);
			Olatua8(olatuak.P21, olatuak.P22, olatuak.P23, olatuak.P24, olatuak.P25, olatuak.P26, olatuak.P27, olatuak.P28, olatuak.P29, olatuak.P30, olatuak.enemyDeath);
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
			timeLeft8--;
		}

		else if (kont1 > 104000 && kont1 <= 124000) {
			kontagailua(timeLeft9 / 100, 970, 25);
			Olatua9(olatuak.P11, olatuak.P12, olatuak.P13, olatuak.P14, olatuak.enemyDeath);
			if (olatuak.aux21.x < 190) olatuak.P11.pos.x = olatuak.aux21.x;
			if (olatuak.aux23.x < 190) olatuak.P12.pos.x = olatuak.aux23.x;
			if (olatuak.aux25.x < 190) olatuak.P13.pos.x = olatuak.aux25.x;
			if (olatuak.aux27.x < 190) olatuak.P14.pos.x = olatuak.aux27.x;
			timeLeft9--;
		}

		else if (kont1 > 124000 && kont1 <= 144000) {
			kontagailua(timeLeft10 / 100, 970, 25);
			Olatua10(olatuak.P1, olatuak.P2, olatuak.P3, olatuak.P4, olatuak.P5, olatuak.P6, olatuak.P11, olatuak.P12, olatuak.P13, olatuak.P14, olatuak.P21, olatuak.P22, olatuak.P23, olatuak.P24, olatuak.P25, olatuak.P26, olatuak.enemyDeath);
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
			timeLeft10--;
		}

		else if (kont1 > 144000 && kont1 <= 164000) {
			kontagailua(timeLeft11 / 100, 970, 25);
			Olatua11(olatuak.P21, olatuak.P22, olatuak.P23, olatuak.P24, olatuak.P25, olatuak.P26, olatuak.P27, olatuak.P28, olatuak.P29, olatuak.P30, olatuak.P11, olatuak.P12, olatuak.P13, olatuak.P14, olatuak.enemyDeath);
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
			timeLeft11--;
		}

		else if (kont1 > 164000 && kont1 <= 184000) {
			kontagailua(timeLeft12 / 100, 970, 25);
			Olatua12(olatuak.P21, olatuak.P22, olatuak.P23, olatuak.P24, olatuak.P25, olatuak.P26, olatuak.P27, olatuak.P28, olatuak.P29, olatuak.P30, olatuak.P11, olatuak.P12, olatuak.P1, olatuak.P2, olatuak.P3, olatuak.P4, olatuak.P5, olatuak.P6, olatuak.P7, olatuak.P8, olatuak.P9, olatuak.P10, olatuak.enemyDeath);
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
			timeLeft12--;
		}

		else if (kont1 > 184000 && kont1 <= 204000) {
			kontagailua(timeLeft13 / 100, 970, 25);
			Olatua13(olatuak.P21, olatuak.P22, olatuak.P23, olatuak.P24, olatuak.P25, olatuak.P26, olatuak.P27, olatuak.P28, olatuak.P29, olatuak.P30, olatuak.P11, olatuak.P12, olatuak.P13, olatuak.P14, olatuak.P15, olatuak.P16, olatuak.P1, olatuak.P2, olatuak.P3, olatuak.P4, olatuak.P5, olatuak.P6, olatuak.P7, olatuak.P8, olatuak.P9, olatuak.P10, olatuak.enemyDeath);
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
			timeLeft13--;
		}

		else if (kont1 > 204000 && kont1 < 224000) {
			kontagailua(timeLeft14 / 100, 970, 25);
			Olatua14(olatuak.P21, olatuak.P22, olatuak.P23, olatuak.P24, olatuak.P25, olatuak.P26, olatuak.P27, olatuak.P28, olatuak.P29, olatuak.P30, olatuak.P11, olatuak.P12, olatuak.P13, olatuak.P14, olatuak.P15, olatuak.P16, olatuak.P17, olatuak.P18, olatuak.P19, olatuak.P20, olatuak.P1, olatuak.P2, olatuak.P3, olatuak.P4, olatuak.P5, olatuak.P6, olatuak.P7, olatuak.P8, olatuak.P9, olatuak.P10, olatuak.enemyDeath);
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
			timeLeft14--;
		}
		irudiakMarraztu();
        //Kontagailuak
		textuaIdatzi(900, 25, "Time Left");
		kontagailua(lifeTotal, 950, 55);
		kontagailua(olatuak.money, 950, 90);
		pantailaBerriztu();
        //Auxiliarren gehiketa egin
		olatuak.aux = ERREALITATE_FISIKOA_mugimendua(olatuak.P1.pos, structure.action.frozen[0].stop);
		olatuak.aux2 = ERREALITATE_FISIKOA2_mugimendua(olatuak.P1.pos, structure.action.frozen[0].stop);
		olatuak.aux3 = ERREALITATE_FISIKOA_mugimendua(olatuak.P2.pos, structure.action.frozen[1].stop);
		olatuak.aux4 = ERREALITATE_FISIKOA2_mugimendua(olatuak.P2.pos, structure.action.frozen[1].stop);
		olatuak.aux5 = ERREALITATE_FISIKOA_mugimendua(olatuak.P3.pos, structure.action.frozen[2].stop);
		olatuak.aux6 = ERREALITATE_FISIKOA2_mugimendua(olatuak.P3.pos, structure.action.frozen[2].stop);
		olatuak.aux7 = ERREALITATE_FISIKOA_mugimendua(olatuak.P4.pos, structure.action.frozen[3].stop);
		olatuak.aux8 = ERREALITATE_FISIKOA2_mugimendua(olatuak.P4.pos, structure.action.frozen[3].stop);
		olatuak.aux9 = ERREALITATE_FISIKOA_mugimendua(olatuak.P5.pos, structure.action.frozen[4].stop);
		olatuak.aux10 = ERREALITATE_FISIKOA2_mugimendua(olatuak.P5.pos, structure.action.frozen[4].stop);
		olatuak.aux11 = ERREALITATE_FISIKOA_mugimendua(olatuak.P6.pos, structure.action.frozen[5].stop);
		olatuak.aux12 = ERREALITATE_FISIKOA2_mugimendua(olatuak.P6.pos, structure.action.frozen[5].stop);
		olatuak.aux13 = ERREALITATE_FISIKOA_mugimendua(olatuak.P7.pos, structure.action.frozen[6].stop);
		olatuak.aux14 = ERREALITATE_FISIKOA2_mugimendua(olatuak.P7.pos, structure.action.frozen[6].stop);
		olatuak.aux15 = ERREALITATE_FISIKOA_mugimendua(olatuak.P8.pos, structure.action.frozen[7].stop);
		olatuak.aux16 = ERREALITATE_FISIKOA2_mugimendua(olatuak.P8.pos, structure.action.frozen[7].stop);
		olatuak.aux17 = ERREALITATE_FISIKOA_mugimendua(olatuak.P9.pos, structure.action.frozen[8].stop);
		olatuak.aux18 = ERREALITATE_FISIKOA2_mugimendua(olatuak.P9.pos, structure.action.frozen[8].stop);
		olatuak.aux19 = ERREALITATE_FISIKOA_mugimendua(olatuak.P10.pos, structure.action.frozen[9].stop);
		olatuak.aux20 = ERREALITATE_FISIKOA2_mugimendua(olatuak.P10.pos, structure.action.frozen[9].stop);
		olatuak.aux21 = ERREALITATE_FISIKOA5_mugimendua(olatuak.P11.pos, structure.action.frozen[10].stop);
		olatuak.aux22 = ERREALITATE_FISIKOA6_mugimendua(olatuak.P11.pos, structure.action.frozen[10].stop);
		olatuak.aux23 = ERREALITATE_FISIKOA5_mugimendua(olatuak.P12.pos, structure.action.frozen[11].stop);
		olatuak.aux24 = ERREALITATE_FISIKOA6_mugimendua(olatuak.P12.pos, structure.action.frozen[11].stop);
		olatuak.aux25 = ERREALITATE_FISIKOA5_mugimendua(olatuak.P13.pos, structure.action.frozen[12].stop);
		olatuak.aux26 = ERREALITATE_FISIKOA6_mugimendua(olatuak.P13.pos, structure.action.frozen[12].stop);
		olatuak.aux27 = ERREALITATE_FISIKOA5_mugimendua(olatuak.P14.pos, structure.action.frozen[13].stop);
		olatuak.aux28 = ERREALITATE_FISIKOA6_mugimendua(olatuak.P14.pos, structure.action.frozen[13].stop);
		olatuak.aux29 = ERREALITATE_FISIKOA5_mugimendua(olatuak.P15.pos, structure.action.frozen[14].stop);
		olatuak.aux30 = ERREALITATE_FISIKOA6_mugimendua(olatuak.P15.pos, structure.action.frozen[14].stop);
		olatuak.aux31 = ERREALITATE_FISIKOA5_mugimendua(olatuak.P16.pos, structure.action.frozen[15].stop);
		olatuak.aux32 = ERREALITATE_FISIKOA6_mugimendua(olatuak.P16.pos, structure.action.frozen[15].stop);
		olatuak.aux33 = ERREALITATE_FISIKOA5_mugimendua(olatuak.P17.pos, structure.action.frozen[16].stop);
		olatuak.aux34 = ERREALITATE_FISIKOA6_mugimendua(olatuak.P17.pos, structure.action.frozen[16].stop);
		olatuak.aux35 = ERREALITATE_FISIKOA5_mugimendua(olatuak.P18.pos, structure.action.frozen[17].stop);
		olatuak.aux36 = ERREALITATE_FISIKOA6_mugimendua(olatuak.P18.pos, structure.action.frozen[17].stop);
		olatuak.aux37 = ERREALITATE_FISIKOA5_mugimendua(olatuak.P19.pos, structure.action.frozen[18].stop);
		olatuak.aux38 = ERREALITATE_FISIKOA6_mugimendua(olatuak.P19.pos, structure.action.frozen[18].stop);
		olatuak.aux39 = ERREALITATE_FISIKOA5_mugimendua(olatuak.P20.pos, structure.action.frozen[19].stop);
		olatuak.aux40 = ERREALITATE_FISIKOA6_mugimendua(olatuak.P20.pos, structure.action.frozen[19].stop);
		olatuak.aux41 = ERREALITATE_FISIKOA3_mugimendua(olatuak.P21.pos, structure.action.frozen[20].stop);
		olatuak.aux42 = ERREALITATE_FISIKOA4_mugimendua(olatuak.P21.pos, structure.action.frozen[20].stop);
		olatuak.aux43 = ERREALITATE_FISIKOA3_mugimendua(olatuak.P22.pos, structure.action.frozen[21].stop);
		olatuak.aux44 = ERREALITATE_FISIKOA4_mugimendua(olatuak.P22.pos, structure.action.frozen[21].stop);
		olatuak.aux45 = ERREALITATE_FISIKOA3_mugimendua(olatuak.P23.pos, structure.action.frozen[22].stop);
		olatuak.aux46 = ERREALITATE_FISIKOA4_mugimendua(olatuak.P23.pos, structure.action.frozen[22].stop);
		olatuak.aux47 = ERREALITATE_FISIKOA3_mugimendua(olatuak.P24.pos, structure.action.frozen[23].stop);
		olatuak.aux48 = ERREALITATE_FISIKOA4_mugimendua(olatuak.P24.pos, structure.action.frozen[23].stop);
		olatuak.aux49 = ERREALITATE_FISIKOA3_mugimendua(olatuak.P25.pos, structure.action.frozen[24].stop);
		olatuak.aux50 = ERREALITATE_FISIKOA4_mugimendua(olatuak.P25.pos, structure.action.frozen[24].stop);
		olatuak.aux51 = ERREALITATE_FISIKOA3_mugimendua(olatuak.P26.pos, structure.action.frozen[25].stop);
		olatuak.aux52 = ERREALITATE_FISIKOA4_mugimendua(olatuak.P26.pos, structure.action.frozen[25].stop);
		olatuak.aux53 = ERREALITATE_FISIKOA3_mugimendua(olatuak.P27.pos, structure.action.frozen[26].stop);
		olatuak.aux54 = ERREALITATE_FISIKOA4_mugimendua(olatuak.P27.pos, structure.action.frozen[26].stop);
		olatuak.aux55 = ERREALITATE_FISIKOA3_mugimendua(olatuak.P28.pos, structure.action.frozen[27].stop);
		olatuak.aux56 = ERREALITATE_FISIKOA4_mugimendua(olatuak.P28.pos, structure.action.frozen[27].stop);
		olatuak.aux57 = ERREALITATE_FISIKOA3_mugimendua(olatuak.P29.pos, structure.action.frozen[28].stop);
		olatuak.aux58 = ERREALITATE_FISIKOA4_mugimendua(olatuak.P29.pos, structure.action.frozen[28].stop);
		olatuak.aux59 = ERREALITATE_FISIKOA3_mugimendua(olatuak.P30.pos, structure.action.frozen[29].stop);
		olatuak.aux60 = ERREALITATE_FISIKOA4_mugimendua(olatuak.P30.pos, structure.action.frozen[29].stop);
        // Gainontzeko bihurguneak
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
           // Jokalariaren amaierako bizitza kalkulatu (kenketa egin)
		for (j = 0; j < 30; j++) {
			olatuak.damage = 0;
			if (olatuak.enemy[j].x == 1107 && j < 10) olatuak.damage += 2;
			else if (olatuak.enemy[j].x == 1107 && j >= 10 && j < 20) olatuak.damage += 4;
			else if (olatuak.enemy[j].x == 1107 && j >= 20) olatuak.damage += 1;
			if (olatuak.damage != 0) lifeTotal -= olatuak.damage;
		}
        //Dorreen funtzioa
		structure.action = allTowerSet(structure.active, kont1, structure.change.upgrade, olatuak.enemy, structure.action);
        //Dorrek egindako mina "aplikatu" (kenketa egin) eta etsaiak hiltzerakoak irabazitako dirua gehitu
		for (i = 0; i < 30; i++) {
			olatuak = stageDamage(olatuak, structure.action, i);
			if (olatuak.enemyFreeze[i] != 0 || structure.action.frozen[i].stop == 1) structure.action.frozen[i] = freeze(structure.action.frozen[i]);
			if (olatuak.enemyDeath[i] == 0 && kont1 != 1) olatuak.enemyDeath[i] = enemyDeath(olatuak.enemyLife[i]);
			if (olatuak.enemyDeath[i] == 1) { //hilda badago
                //pantailatik kanpo bidali
				olatuak.enemy[i] = restartPosition(olatuak.enemy[i], i, olatuak.P1, olatuak.P2, olatuak.P3, olatuak.P4, olatuak.P5, olatuak.P6, olatuak.P7, olatuak.P8, olatuak.P9, olatuak.P10, olatuak.P11, olatuak.P12, olatuak.P13, olatuak.P14, olatuak.P15, olatuak.P16, olatuak.P17, olatuak.P18, olatuak.P19, olatuak.P20, olatuak.P21, olatuak.P22, olatuak.P23, olatuak.P24, olatuak.P25, olatuak.P26, olatuak.P27, olatuak.P28, olatuak.P29, olatuak.P30);
                //Dirua gehitu
				olatuak.money += giveMoney(i);
				structure.action.damage[i] = 0;
                //Etsaia hilda dagoela adierazten duen aldagaiari 1 balioa eman
				olatuak.enemyDeath[i]++;
			}
		}
        //Diru totala estruktura batetik bestera pasa
		olatuak.money += structure.action.money;
        //Olatua amaitu bada, etsaiak hasierako posiziora bidali
		if (lifeTotal <= 0 || kont1 == 10000 || kont1 == 20000 || kont1 == 27000 || kont1 == 37000 || kont1 == 57000 || kont1 == 77000 || kont1 == 97000 || kont1 == 104000 || kont1 == 124000 || kont1 == 144000 || kont1 == 164000 || kont1 == 184000 || kont1 == 204000 || kont1 == 224000)
		{ 
			olatuak.P1.pos.x = -30;
			olatuak.P1.pos.y = 440;
			irudiaMugitu(olatuak.P1.id, olatuak.P2.pos.x, olatuak.P1.pos.y);
			olatuak.P2.pos.x = -60;
			olatuak.P2.pos.y = 440;
			irudiaMugitu(olatuak.P2.id, olatuak.P2.pos.x, olatuak.P2.pos.y);
			olatuak.P3.pos.x = -90;
			olatuak.P3.pos.y = 440;
			irudiaMugitu(olatuak.P3.id, olatuak.P3.pos.x, olatuak.P3.pos.y);
			olatuak.P4.pos.x = -120;
			olatuak.P4.pos.y = 440;
			irudiaMugitu(olatuak.P4.id, olatuak.P4.pos.x, olatuak.P4.pos.y);
			olatuak.P5.pos.x = -150;
			olatuak.P5.pos.y = 440;
			irudiaMugitu(olatuak.P5.id, olatuak.P5.pos.x, olatuak.P5.pos.y);
			olatuak.P6.pos.x = -180;
			olatuak.P6.pos.y = 440;
			irudiaMugitu(olatuak.P6.id, olatuak.P6.pos.x, olatuak.P6.pos.y);
			olatuak.P7.pos.x = -210;
			olatuak.P7.pos.y = 440;
			irudiaMugitu(olatuak.P7.id, olatuak.P7.pos.x, olatuak.P7.pos.y);
			olatuak.P8.pos.x = -240;
			olatuak.P8.pos.y = 440;
			irudiaMugitu(olatuak.P8.id, olatuak.P8.pos.x, olatuak.P8.pos.y);
			olatuak.P9.pos.x = -270;
			olatuak.P9.pos.y = 440;
			irudiaMugitu(olatuak.P9.id, olatuak.P9.pos.x, olatuak.P9.pos.y);
			olatuak.P10.pos.x = -300;
			olatuak.P10.pos.y = 440;
			irudiaMugitu(olatuak.P10.id, olatuak.P10.pos.x, olatuak.P10.pos.y);
			olatuak.P11.pos.x = -330;
			olatuak.P11.pos.y = 440;
			irudiaMugitu(olatuak.P11.id, olatuak.P11.pos.x, olatuak.P11.pos.y);
			olatuak.P12.pos.x = -360;
			olatuak.P12.pos.y = 440;
			irudiaMugitu(olatuak.P12.id, olatuak.P12.pos.x, olatuak.P12.pos.y);
			olatuak.P13.pos.x = -390;
			olatuak.P13.pos.y = 440;
			irudiaMugitu(olatuak.P13.id, olatuak.P13.pos.x, olatuak.P13.pos.y);
			olatuak.P14.pos.x = -420;
			olatuak.P14.pos.y = 440;
			irudiaMugitu(olatuak.P14.id, olatuak.P14.pos.x, olatuak.P14.pos.y);
			olatuak.P15.pos.x = -450;
			olatuak.P15.pos.y = 440;
			irudiaMugitu(olatuak.P15.id, olatuak.P15.pos.x, olatuak.P15.pos.y);
			olatuak.P16.pos.x = -480;
			olatuak.P16.pos.y = 440;
			irudiaMugitu(olatuak.P16.id, olatuak.P16.pos.x, olatuak.P16.pos.y);
			olatuak.P17.pos.x = -510;
			olatuak.P17.pos.y = 440;
			irudiaMugitu(olatuak.P17.id, olatuak.P17.pos.x, olatuak.P17.pos.y);
			olatuak.P18.pos.x = -540;
			olatuak.P18.pos.y = 440;
			irudiaMugitu(olatuak.P18.id, olatuak.P18.pos.x, olatuak.P18.pos.y);
			olatuak.P19.pos.x = -570;
			olatuak.P19.pos.y = 440;
			irudiaMugitu(olatuak.P19.id, olatuak.P19.pos.x, olatuak.P19.pos.y);
			olatuak.P20.pos.x = -600;
			olatuak.P20.pos.y = 440;
			irudiaMugitu(olatuak.P20.id, olatuak.P20.pos.x, olatuak.P20.pos.y);
			olatuak.P21.pos.x = -630;
			olatuak.P21.pos.y = 440;
			irudiaMugitu(olatuak.P21.id, olatuak.P21.pos.x, olatuak.P21.pos.y);
			olatuak.P22.pos.x = -660;
			olatuak.P22.pos.y = 440;
			irudiaMugitu(olatuak.P22.id, olatuak.P22.pos.x, olatuak.P22.pos.y);
			olatuak.P23.pos.x = -690;
			olatuak.P23.pos.y = 440;
			irudiaMugitu(olatuak.P23.id, olatuak.P23.pos.x, olatuak.P23.pos.y);
			olatuak.P24.pos.x = -720;
			olatuak.P24.pos.y = 440;
			irudiaMugitu(olatuak.P24.id, olatuak.P24.pos.x, olatuak.P24.pos.y);
			olatuak.P25.pos.x = -750;
			olatuak.P25.pos.y = 440;
			irudiaMugitu(olatuak.P25.id, olatuak.P25.pos.x, olatuak.P25.pos.y);
			olatuak.P26.pos.x = -780;
			olatuak.P26.pos.y = 440;
			irudiaMugitu(olatuak.P26.id, olatuak.P26.pos.x, olatuak.P26.pos.y);
			olatuak.P27.pos.x = -810;
			olatuak.P27.pos.y = 440;
			irudiaMugitu(olatuak.P27.id, olatuak.P27.pos.x, olatuak.P27.pos.y);
			olatuak.P28.pos.x = -840;
			olatuak.P28.pos.y = 440;
			irudiaMugitu(olatuak.P28.id, olatuak.P28.pos.x, olatuak.P28.pos.y);
			olatuak.P29.pos.x = -870;
			olatuak.P29.pos.y = 440;
			irudiaMugitu(olatuak.P29.id, olatuak.P29.pos.x, olatuak.P29.pos.y);
			olatuak.P30.pos.x = -900;
			olatuak.P30.pos.y = 440;
			irudiaMugitu(olatuak.P30.id, olatuak.P30.pos.x, olatuak.P30.pos.y);
			pantailaBerriztu();
            //olatua amaitu
			olatuak.defentsa = 0;
            //kontagailua eta jokalariaren bizitza "olatuak" estrukturara pasa
			olatuak.kont = kont1;
			olatuak.damage = lifeTotal;
		}
	} while (olatuak.defentsa == 1 && lifeTotal > 0);
	return olatuak;
}