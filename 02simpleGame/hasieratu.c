#include "TowerFunctionality.h"
#include "graphics.h"
#include "ebentoak.h"
#include "soinua.h"
#include "text.h"
#include "imagen.h"
#include "OurTypes.h"
#include "hasieratu.h"
#include "TowerBuild.h"
#include "CC_Game.h"
#include <stdio.h>
#include <windows.h>

//Poner las areas a cero
AREA hasieratuAreak(void)
{
    AREA area;
    area.place1 = 0;
    area.place2 = 0;
    area.place3 = 0;
    area.place4 = 0;
    area.place5 = 0;
    area.place6 = 0;
    area.place7 = 0;
    area.place8 = 0;
    area.place9 = 0;
    area.place10 = 0;
    return area;
}
//Poner activo a cero
ACTIVE hasieratuActive(void)
{
    ACTIVE active;
    active.tower1 = 0;
    active.tower2 = 0;
    active.tower3 = 0;
    active.tower4 = 0;
    active.tower5 = 0;
    active.tower6 = 0;
    active.tower7 = 0;
    active.tower8 = 0;
    active.tower9 = 0;
    active.tower10 = 0;
    return active;
}
//Poner las mejoras a cero
UPGRADE hasieratuUpgrade(void)
{
    UPGRADE upgrade;
    upgrade.tower1 = 0;
    upgrade.tower2 = 0;
    upgrade.tower3 = 0;
    upgrade.tower4 = 0;
    upgrade.tower5 = 0;
    upgrade.tower6 = 0;
    upgrade.tower7 = 0;
    upgrade.tower8 = 0;
    upgrade.tower9 = 0;
    upgrade.tower10 = 0;
    return upgrade;
}

FROZEN hasieratuFrozen(void)
{
	FROZEN frozen;
	frozen.stop = 0;
	frozen.kont = 0;
	return frozen;
}

//Hasieratu dorreen akzioak
ACTION hasieratuAction(int onTarget, int onFrozen)
{
	int i;
	ACTION action;
	action.money = 0;
    action.id = -1;
	for (i = 0; i < 30; i++) {
		action.damage[i] = 0;
		action.freeze[i] = 0;
		action.resource[i] = 0;
		if (onFrozen == 1) action.frozen[i] = hasieratuFrozen();
		if (i >= 1 && i <= 10 && onTarget == 1) action.target.tower[i] = -1; 
	}
	return action;
}

//Hasieratu dorreen sorkuntza
CREATE hasieratuCreate(void)
{
	CREATE create;
	create.tower1 = -1;
	create.tower2 = -1;
	create.tower3 = -1;
	create.tower4 = -1;
	create.tower5 = -1;
	create.tower6 = -1;
	create.tower7 = -1;
	create.tower8 = -1;
	create.tower9 = -1;
	create.tower10 = -1;
	return create;
}

TERMINATE hasieratuTerminate(void)
{
	TERMINATE terminate;
	terminate.tower1 = 0;
	terminate.tower2 = 0;
	terminate.tower3 = 0;
	terminate.tower4 = 0;
	terminate.tower5 = 0;
	terminate.tower6 = 0;
	terminate.tower7 = 0;
	terminate.tower8 = 0;
	terminate.tower9 = 0;
	terminate.tower10 = 0;
	return terminate;
}

//Hasieratu dorreen funtzionalitatea
TOWER_STRUCTURE hasieratuEstruktura(void)
{
	TOWER_STRUCTURE estruktura;
	estruktura.action = hasieratuAction(1, 1);
	estruktura.active = hasieratuActive();
	estruktura.change.upgrade = hasieratuUpgrade();
	estruktura.change.terminate = hasieratuTerminate();
	estruktura.create = hasieratuCreate();
	estruktura.area = hasieratuAreak();
	estruktura.menu.id = -1;
    estruktura.money = 80;
	return estruktura;
}

OLATUAK hasieratuOlatuak(void)
{
	OLATUAK olatuak;

    olatuak = hasieratuOlatuakId();
    olatuak.P1.pos.x = -10;
    olatuak.P1.pos.y = 440;
    olatuak.P2.pos.x = -40;
    olatuak.P2.pos.y = 440;
    olatuak.P3.pos.x = -70;
    olatuak.P3.pos.y = 440;
    olatuak.P4.pos.x = -100;
    olatuak.P4.pos.y = 440;
    olatuak.P5.pos.x = -130;
    olatuak.P5.pos.y = 440;
    olatuak.P6.pos.x = -160;
    olatuak.P6.pos.y = 440;
    olatuak.P7.pos.x = -190;
    olatuak.P7.pos.y = 440;
    olatuak.P8.pos.x = -220;
    olatuak.P8.pos.y = 440;
    olatuak.P9.pos.x = -250;
    olatuak.P9.pos.y = 440;
    olatuak.P10.pos.x = -280;
    olatuak.P10.pos.y = 440;
    olatuak.P11.pos.x = -310;
    olatuak.P11.pos.y = 440;
    olatuak.P12.pos.x = -340;
    olatuak.P12.pos.y = 440;
    olatuak.P13.pos.x = -370;
    olatuak.P13.pos.y = 440;
    olatuak.P14.pos.x = -400;
    olatuak.P14.pos.y = 440;
    olatuak.P15.pos.x = -430;
    olatuak.P15.pos.y = 440;
    olatuak.P16.pos.x = -460;
    olatuak.P16.pos.y = 440;
    olatuak.P17.pos.x = -490;
    olatuak.P17.pos.y = 440;
    olatuak.P18.pos.x = -520;
    olatuak.P18.pos.y = 440;
    olatuak.P19.pos.x = -550;
    olatuak.P19.pos.y = 440;
    olatuak.P20.pos.x = -580;
    olatuak.P20.pos.y = 440;
    olatuak.P21.pos.x = -610;
    olatuak.P21.pos.y = 440;
    olatuak.P22.pos.x = -640;
    olatuak.P22.pos.y = 440;
    olatuak.P23.pos.x = -670;
    olatuak.P23.pos.y = 440;
    olatuak.P24.pos.x = -540;
    olatuak.P24.pos.y = 440;
    olatuak.P25.pos.x = -730;
    olatuak.P25.pos.y = 440;
    olatuak.P26.pos.x = -760;
    olatuak.P26.pos.y = 440;
    olatuak.P27.pos.x = -790;
    olatuak.P27.pos.y = 440;
    olatuak.P28.pos.x = -820;
    olatuak.P28.pos.y = 440;
    olatuak.P29.pos.x = -850;
    olatuak.P29.pos.y = 440;
    olatuak.P30.pos.x = -880;
    olatuak.P30.pos.y = 440;

    olatuak.fondoa2.pos.x = 0;
    olatuak.fondoa2.pos.y = 0;

    olatuak.fondoa2.id = FONDOA_irudiaBistaratu();
    olatuak.P1.id = JOKOA_jokalariaIrudiaSortu(olatuak.P1.id);
    olatuak.P2.id = JOKOA_jokalariaIrudiaSortu(olatuak.P2.id);
    olatuak.P3.id = JOKOA_jokalariaIrudiaSortu(olatuak.P3.id);
    olatuak.P4.id = JOKOA_jokalariaIrudiaSortu(olatuak.P4.id);
    olatuak.P5.id = JOKOA_jokalariaIrudiaSortu(olatuak.P5.id);
    olatuak.P6.id = JOKOA_jokalariaIrudiaSortu(olatuak.P6.id);
    olatuak.P7.id = JOKOA_jokalariaIrudiaSortu(olatuak.P7.id);
    olatuak.P8.id = JOKOA_jokalariaIrudiaSortu(olatuak.P8.id);
    olatuak.P9.id = JOKOA_jokalariaIrudiaSortu(olatuak.P9.id);
    olatuak.P10.id = JOKOA_jokalariaIrudiaSortu(olatuak.P10.id);
    olatuak.P11.id = JOKOA_jokalaria2IrudiaSortu(olatuak.P11.id);
    olatuak.P12.id = JOKOA_jokalaria2IrudiaSortu(olatuak.P12.id);
    olatuak.P13.id = JOKOA_jokalaria2IrudiaSortu(olatuak.P13.id);
    olatuak.P14.id = JOKOA_jokalaria2IrudiaSortu(olatuak.P14.id);
    olatuak.P15.id = JOKOA_jokalaria2IrudiaSortu(olatuak.P15.id);
    olatuak.P16.id = JOKOA_jokalaria2IrudiaSortu(olatuak.P16.id);
    olatuak.P17.id = JOKOA_jokalaria2IrudiaSortu(olatuak.P17.id);
    olatuak.P18.id = JOKOA_jokalaria2IrudiaSortu(olatuak.P18.id);
    olatuak.P19.id = JOKOA_jokalaria2IrudiaSortu(olatuak.P19.id);
    olatuak.P20.id = JOKOA_jokalaria2IrudiaSortu(olatuak.P20.id);
    olatuak.P21.id = JOKOA_jokalaria3IrudiaSortu(olatuak.P21.id);
    olatuak.P22.id = JOKOA_jokalaria3IrudiaSortu(olatuak.P22.id);
    olatuak.P23.id = JOKOA_jokalaria3IrudiaSortu(olatuak.P23.id);
    olatuak.P24.id = JOKOA_jokalaria3IrudiaSortu(olatuak.P24.id);
    olatuak.P25.id = JOKOA_jokalaria3IrudiaSortu(olatuak.P25.id);
    olatuak.P26.id = JOKOA_jokalaria3IrudiaSortu(olatuak.P26.id);
    olatuak.P27.id = JOKOA_jokalaria3IrudiaSortu(olatuak.P27.id);
    olatuak.P28.id = JOKOA_jokalaria3IrudiaSortu(olatuak.P28.id);
    olatuak.P29.id = JOKOA_jokalaria3IrudiaSortu(olatuak.P29.id);
    olatuak.P30.id = JOKOA_jokalaria3IrudiaSortu(olatuak.P30.id);

	olatuak.defentsa = 0;
	olatuak.kont = 0;
    olatuak.damage = 20;
	return olatuak;
}

POSIZIOA hasieratuEnemyPos(OLATUAK olatuak, int i)
{
	POSIZIOA enemy;
	enemy.x = 0;
	enemy.y = 0;
	if (i == 0) { enemy.x = olatuak.P1.pos.x; enemy.y = olatuak.P1.pos.y; }
	else if (i == 1) { enemy.x = olatuak.P2.pos.x; enemy.y = olatuak.P2.pos.y; }
	else if (i == 2) { enemy.x = olatuak.P3.pos.x; enemy.y = olatuak.P3.pos.y; }
	else if (i == 3) { enemy.x = olatuak.P4.pos.x; enemy.y = olatuak.P4.pos.y; }
	else if (i == 4) { enemy.x = olatuak.P5.pos.x; enemy.y = olatuak.P5.pos.y; }
	else if (i == 5) { enemy.x = olatuak.P6.pos.x; enemy.y = olatuak.P6.pos.y; }
	else if (i == 6) { enemy.x = olatuak.P7.pos.x; enemy.y = olatuak.P7.pos.y; }
	else if (i == 7) { enemy.x = olatuak.P8.pos.x; enemy.y = olatuak.P8.pos.y; }
	else if (i == 8) { enemy.x = olatuak.P9.pos.x; enemy.y = olatuak.P9.pos.y; }
	else if (i == 9) { enemy.x = olatuak.P10.pos.x; enemy.y = olatuak.P10.pos.y ; }
	else if (i == 10) { enemy.x = olatuak.P11.pos.x; enemy.y = olatuak.P11.pos.y; }
	else if (i == 11) { enemy.x = olatuak.P12.pos.x; enemy.y = olatuak.P12.pos.y; }
	else if (i == 12) { enemy.x = olatuak.P13.pos.x; enemy.y = olatuak.P13.pos.y; }
	else if (i == 13) { enemy.x = olatuak.P14.pos.x; enemy.y = olatuak.P14.pos.y; }
	else if (i == 14) { enemy.x = olatuak.P15.pos.x; enemy.y = olatuak.P15.pos.y; }
	else if (i == 15) { enemy.x = olatuak.P16.pos.x; enemy.y = olatuak.P16.pos.y; }
	else if (i == 16) { enemy.x = olatuak.P17.pos.x; enemy.y = olatuak.P17.pos.y; }
	else if (i == 17) { enemy.x = olatuak.P18.pos.x; enemy.y = olatuak.P18.pos.y; }
	else if (i == 18) { enemy.x = olatuak.P19.pos.x; enemy.y = olatuak.P19.pos.y; }
	else if (i == 19) { enemy.x = olatuak.P20.pos.x; enemy.y = olatuak.P20.pos.y; }
	else if (i == 20) { enemy.x = olatuak.P21.pos.x; enemy.y = olatuak.P21.pos.y; }
	else if (i == 21) { enemy.x = olatuak.P22.pos.x; enemy.y = olatuak.P22.pos.y; }
	else if (i == 22) { enemy.x = olatuak.P23.pos.x; enemy.y = olatuak.P23.pos.y; }
	else if (i == 23) { enemy.x = olatuak.P24.pos.x; enemy.y = olatuak.P24.pos.y; }
	else if (i == 24) { enemy.x = olatuak.P25.pos.x; enemy.y = olatuak.P25.pos.y; }
	else if (i == 25) { enemy.x = olatuak.P26.pos.x; enemy.y = olatuak.P26.pos.y; }
	else if (i == 26) { enemy.x = olatuak.P27.pos.x; enemy.y = olatuak.P27.pos.y; }
	else if (i == 27) { enemy.x = olatuak.P28.pos.x; enemy.y = olatuak.P28.pos.y; }
	else if (i == 28) { enemy.x = olatuak.P29.pos.x; enemy.y = olatuak.P29.pos.y; }
	else if (i == 29) { enemy.x = olatuak.P30.pos.x; enemy.y = olatuak.P30.pos.y; }
	return enemy;
}

int hasieratuBizitzak(int i)
{
	int enemy;
	if (i < 10) enemy = 120;
	else if (i >= 10 && i < 20) enemy = 100;
	else if (i >= 20) enemy = 80;
	return enemy;
}

OLATUAK hasieratuOlatuakId(void)
{
    OLATUAK olatuak;
    olatuak.P1.id = -1;
    olatuak.P2.id = -1;
    olatuak.P3.id = -1;
    olatuak.P4.id = -1;
    olatuak.P5.id = -1;
    olatuak.P6.id = -1;
    olatuak.P7.id = -1;
    olatuak.P8.id = -1;
    olatuak.P9.id = -1;
    olatuak.P10.id = -1;
    olatuak.P11.id = -1;
    olatuak.P12.id = -1;
    olatuak.P13.id = -1;
    olatuak.P14.id = -1;
    olatuak.P15.id = -1;
    olatuak.P16.id = -1;
    olatuak.P17.id = -1;
    olatuak.P18.id = -1;
    olatuak.P19.id = -1;
    olatuak.P20.id = -1;
    olatuak.P21.id = -1;
    olatuak.P22.id = -1;
    olatuak.P23.id = -1;
    olatuak.P24.id = -1;
    olatuak.P25.id = -1;
    olatuak.P26.id = -1;
    olatuak.P27.id = -1;
    olatuak.P28.id = -1;
    olatuak.P29.id = -1;
    olatuak.P30.id = -1;
    return olatuak;
}

void etsaiIrudiakKendu(OLATUAK olatuak)
{
    irudiaKendu(olatuak.P1.id);
    irudiaKendu(olatuak.P2.id);
    irudiaKendu(olatuak.P3.id);
    irudiaKendu(olatuak.P4.id);
    irudiaKendu(olatuak.P5.id);
    irudiaKendu(olatuak.P6.id);
    irudiaKendu(olatuak.P7.id);
    irudiaKendu(olatuak.P8.id);
    irudiaKendu(olatuak.P9.id);
    irudiaKendu(olatuak.P10.id);
    irudiaKendu(olatuak.P11.id);
    irudiaKendu(olatuak.P12.id);
    irudiaKendu(olatuak.P13.id);
    irudiaKendu(olatuak.P14.id);
    irudiaKendu(olatuak.P15.id);
    irudiaKendu(olatuak.P16.id);
    irudiaKendu(olatuak.P17.id);
    irudiaKendu(olatuak.P18.id);
    irudiaKendu(olatuak.P19.id);
    irudiaKendu(olatuak.P20.id);
    irudiaKendu(olatuak.P21.id);
    irudiaKendu(olatuak.P22.id);
    irudiaKendu(olatuak.P23.id);
    irudiaKendu(olatuak.P24.id);
    irudiaKendu(olatuak.P25.id);
    irudiaKendu(olatuak.P26.id);
    irudiaKendu(olatuak.P27.id);
    irudiaKendu(olatuak.P28.id);
    irudiaKendu(olatuak.P29.id);
    irudiaKendu(olatuak.P30.id);
}

int checkEbentu(int lifeTotal, int money)
{
    int ebentu = 0;
    do
    {
        ebentu = ebentuaJasoGertatuBada();

        arkatzKoloreaEzarri(0, 0, 0);
        kontagailua(lifeTotal, 950, 55);
        kontagailua(money, 950, 90);
        pantailaBerriztu();
    } while (ebentu == 0 || ebentu == SAGU_MUGIMENDUA);
	return ebentu;
}