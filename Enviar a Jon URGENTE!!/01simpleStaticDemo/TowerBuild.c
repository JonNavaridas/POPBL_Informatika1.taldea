#include "TowerFunctionality.h"
#include "graphics.h"
#include "ebentoak.h"
#include "soinua.h"
#include "text.h"
#include "imagen.h"
#include "OurTypes.h"
#include "TowerBuild.h"
#include "hasieratu.h"
#include <stdio.h>
#include <windows.h>

//Funcionamiento de la construccion (la funcion del main)
TOWER_STRUCTURE towerBuild(AREA towerPlace, TOWER_STRUCTURE structure, int money, int time, int ebentu)
{
	POSIZIOA towerPos, enemyPos;
	MENU_PARTS menu;
	//UPGRADE upgrade;
	CHANGE change;
	int on = 1;

	enemyPos.x = 0;
	enemyPos.y = 0;

	change.upgrade.tower1 = 0;
	change.upgrade.tower2 = 0;
	change.upgrade.tower3 = 0;
	change.upgrade.tower4 = 0;
	change.upgrade.tower5 = 0;
	change.upgrade.tower6 = 0;
	change.upgrade.tower7 = 0;
	change.upgrade.tower8 = 0;
	change.upgrade.tower9 = 0;
	change.upgrade.tower10 = 0;

	towerPlace = selectArea();
	towerPos = setArea(towerPlace);
	
    if (towerPlace.place1 == 1 || towerPlace.place2 == 1 || towerPlace.place3 == 1 || towerPlace.place4 == 1 || towerPlace.place5 == 1 || towerPlace.place6 == 1 || towerPlace.place7 == 1 || towerPlace.place8 == 1 || towerPlace.place9 == 1 || towerPlace.place10 == 1) {
		menu = createMenu(towerPlace, money);
		//change = createUpgradeMenu(towerPos, change);
		money -= reduceMoney(menu.tower);
		//money += change.money;
		structure.active = acitvateTower(towerPos, menu.tower, structure.active);
        if (ebentu == TECLA_SPACE) { 
            irudiaKendu(menu.id);
            pantailaBerriztu();
            towerPlace = hasieratuAreak();
        }
	}

	constructTower(structure.active);
	structure.action = allTowerSet(structure.active, towerPos, enemyPos, time, change.upgrade);

	return structure;
}

//Detectar donde ha pulsado y si ha pulsado en algun punto que interese
AREA selectArea(void)
{
	int ebentu = 0;
	AREA towerPlace;
	POSIZIOA sagua;
	sagua.x = 0;
	sagua.y = 0;

	towerPlace = hasieratuAreak();
	ebentu = ebentuaJasoGertatuBada();
	if (ebentu == SAGU_BOTOIA_EZKERRA) {
		sagua = saguarenPosizioa();
		towerPlace = setAreas(sagua.x, sagua.y, towerPlace);
	}
	return towerPlace;
}
//Si ha pulsado en alguna area importante se activa
AREA setAreas(int x, int y, AREA towerPlace)
{
	if (x >= 197 && x <= 237 && y >= 55 && y < 95) towerPlace.place1 = 1;
	else if (x >= 293 && x <= 333 && y >= 55 && y <= 95) towerPlace.place2 = 1;
	else if (x >= 60 && x <= 100 && y >= 390 && y <= 430) towerPlace.place3 = 1;
	else if (x >= 250 && x <= 290 && y >= 246 && y <= 286) towerPlace.place4 = 1;
	else if (x >= 576 && x <= 616 && y >= 246 && y <= 286) towerPlace.place5 = 1;
	else if (x >= 913 && x <= 953 && y >= 242 && y <= 282) towerPlace.place6 = 1;
	else if (x >= 1008 && x <= 1048 && y >= 242 && y <= 282) towerPlace.place7 = 1;
	else if (x >= 155 && x <= 195 && y >= 580 && y < 620) towerPlace.place8 = 1;
	else if (x >= 724 && x <= 764 && y >= 435 && y <= 475) towerPlace.place9 = 1;
	else if (x >= 960 && x <= 1000 && y >= 435 && y <= 475) towerPlace.place10 = 1;

	return towerPlace;
}
//Crea el menu y devuelve un valor de torre si el jugador ha decidico comprar una
MENU_PARTS createMenu(AREA place, int money)
{
	POSIZIOA towerPos, sagua;
	MENU_PARTS menu;
	int ebentu = 0, imgRadius = 100, distanceX = 62, distanceY = 60;

	towerPos = setArea(place);
	menu.id = irudiaKargatu(BUY_MENU);
	irudiaMugitu(menu.id, towerPos.x, towerPos.y);
	irudiakMarraztu();
	pantailaBerriztu();

	ebentu = ebentuaJasoGertatuBada();
	sagua = saguarenPosizioa();

	if (ebentu == TECLA_UP || ebentu == TECLA_DOWN || ebentu == TECLA_LEFT || ebentu == TECLA_RIGHT) {
		//Torre arquero
		if (money >= 40 && ebentu == TECLA_UP) { 
			menu.tower = 1;
			pantailaGarbitu();
		}
		//Torre mago
		else if (money >= 60 && ebentu == TECLA_LEFT) { 
			menu.tower = 2;
			pantailaGarbitu();
		}
		//Torre bombardera
		else if (money >= 100 && ebentu == TECLA_RIGHT) { 
			menu.tower = 3;
			pantailaGarbitu();
		}
		//Mina
		else if (money >= 80 && ebentu == TECLA_DOWN) { 
			menu.tower = 4;
			pantailaGarbitu();
		}
	}
	return menu;
}
//Establecer la posicion de cada torre
POSIZIOA setArea(AREA place)
{
	POSIZIOA pos;
	pos.x = 0;
	pos.y = 0;

	if (place.place1 == 1) { pos.x = 158; pos.y = 14; }
    else if (place.place2 == 1) { pos.x = 248; pos.y = 14; }
    else if (place.place3 == 1) { pos.x = 14; pos.y = 348; }
    else if (place.place4 == 1) { pos.x = 210; pos.y = 206; }
    else if (place.place5 == 1) { pos.x = 538; pos.y = 206; }
    else if (place.place6 == 1) { pos.x = 873; pos.y = 202; }
    else if (place.place7 == 1) { pos.x = 968; pos.y = 202; }
    else if (place.place8 == 1) { pos.x = 112; pos.y = 538; }
    else if (place.place9 == 1) { pos.x = 680; pos.y = 394; }
    else if (place.place10 == 1) { pos.x = 920; pos.y = 395; }

	return pos;
}

ACTIVE acitvateTower(POSIZIOA pos, int tower, ACTIVE active)
{
	if (pos.x == 138 && pos.y == -6) { active.tower1 = tower; }
    else if (pos.x == 228 && pos.y == -6) { active.tower2 = tower; }
    else if (pos.x == -6 && pos.y == 328) { active.tower3 = tower; }
    else if (pos.x == 190 && pos.y == 186) { active.tower4 = tower; }
    else if (pos.x == 518 && pos.y == 186) { active.tower5 = tower; }
    else if (pos.x == 853 && pos.y == 182) { active.tower6 = tower; }
    else if (pos.x == 948 && pos.y == 182) { active.tower7 = tower; }
    else if (pos.x == 92 && pos.y == 518) { active.tower8 = tower; }
    else if (pos.x == 664 && pos.y == 374) { active.tower9 = tower; }
    else if (pos.x == 900 && pos.y == 375) { active.tower10 = tower; }
	return active;
}

void constructTower(ACTIVE activate)
{
	if (activate.tower1 != 0) createTower(activate.tower1, 156, 5);
    else if (activate.tower2 != 0) createTower(activate.tower2, 250, 5);
    else if (activate.tower3 != 0) createTower(activate.tower3, 18, 320);
    else if (activate.tower4 != 0) createTower(activate.tower4, 205, 195);
    else if (activate.tower5 != 0) createTower(activate.tower5, 153, 195);
    else if (activate.tower6 != 0) createTower(activate.tower6, 867, 190);
    else if (activate.tower7 != 0) createTower(activate.tower7, 980, 196);
    else if (activate.tower8 != 0) createTower(activate.tower8, 115, 514);
    else if (activate.tower9 != 0) createTower(activate.tower9, 679, 375);
    else if (activate.tower10 != 0) createTower(activate.tower10, 925, 380);
}

void createTower(int towerType, int x, int y)
{
	if (towerType == 1) createArcherTower(x, y);
    else if (towerType == 2) createMageTower(x, y);
    else if (towerType == 3) createBomberTower(x, y);
    else if (towerType == 4) createMine(x, y);
}

int reduceMoney(int tower)
{
	int reduceMoney = 0;
	if (tower == 1) reduceMoney = 40;
    else if (tower == 2) reduceMoney = 60;
    else if (tower == 3) reduceMoney = 100;
    else if (tower == 4) reduceMoney = 80;
	return reduceMoney;
}

void createArcherTower(int x, int y)
{
	int id = 0;

	id = irudiaKargatu(ARCHER_TOWER);
	irudiaMugitu(id, x, y);
	irudiakMarraztu();
	pantailaBerriztu();
}

void createMageTower(int x, int y)
{
	int id = 0;

	id = irudiaKargatu(MAGE_TOWER);
	irudiaMugitu(id, x, y);
	irudiakMarraztu();
	pantailaBerriztu();
}

void createBomberTower(int x, int y)
{
	int id = 0;

	id = irudiaKargatu(BOMBER_TOWER);
	irudiaMugitu(id, x, y);
	irudiakMarraztu();
	pantailaBerriztu();
}

void createMine(int x, int y)
{
	int id = 0;

	id = irudiaKargatu(MINE);
	irudiaMugitu(id, x, y);
	irudiakMarraztu();
	pantailaBerriztu();
}

ACTION allTowerSet(ACTIVE active, POSIZIOA pos, POSIZIOA enemy, int time, UPGRADE upgrade)
{
	ACTION action, totalAction;
	action = hasieratuAction();
	totalAction = hasieratuAction();

	if (active.tower1 != 0) action = towerAttack(pos.x, pos.y, active.tower1, enemy.x, enemy.y, time, upgrade.tower1);
	totalAction = batuAction(action, totalAction);
	if (active.tower2 != 0) action = towerAttack(pos.x, pos.y, active.tower2, enemy.x, enemy.y, time, upgrade.tower2);
	totalAction = batuAction(action, totalAction);
	if (active.tower3 != 0) action = towerAttack(pos.x, pos.y, active.tower3, enemy.x, enemy.y, time, upgrade.tower3);
	totalAction = batuAction(action, totalAction);
	if (active.tower4 != 0) action = towerAttack(pos.x, pos.y, active.tower4, enemy.x, enemy.y, time, upgrade.tower4);
	totalAction = batuAction(action, totalAction);
	if (active.tower5 != 0) action = towerAttack(pos.x, pos.y, active.tower5, enemy.x, enemy.y, time, upgrade.tower5);
	totalAction = batuAction(action, totalAction);
	if (active.tower6 != 0) action = towerAttack(pos.x, pos.y, active.tower6, enemy.x, enemy.y, time, upgrade.tower6);
	totalAction = batuAction(action, totalAction);
	if (active.tower7 != 0) action = towerAttack(pos.x, pos.y, active.tower7, enemy.x, enemy.y, time, upgrade.tower7);
	totalAction = batuAction(action, totalAction);
	if (active.tower8 != 0) action = towerAttack(pos.x, pos.y, active.tower8, enemy.x, enemy.y, time, upgrade.tower8);
	totalAction = batuAction(action, totalAction);
	if (active.tower9 != 0) action = towerAttack(pos.x, pos.y, active.tower9, enemy.x, enemy.y, time, upgrade.tower9);
	totalAction = batuAction(action, totalAction);
	if (active.tower10 != 0) action = towerAttack(pos.x, pos.y, active.tower10, enemy.x, enemy.y, time, upgrade.tower10);
	totalAction = batuAction(action, totalAction);

	return totalAction;
}

ACTION batuAction(ACTION action, ACTION totalAction)
{
	totalAction.damage += action.damage;
	if (totalAction.freeze < 2) totalAction.freeze += action.freeze;
	if (totalAction.resource == 0) totalAction.resource = action.resource;
	totalAction.money += action.money;

	return totalAction;
}

CHANGE createUpgradeMenu(POSIZIOA towerPos, CHANGE changer)
{
	POSIZIOA sagua;
	int towerId = 0, posible = 0;
	int ebentu = 0, imgRadius = 0, distance = 0;
	posible = towerUpgradeCheck(towerPos, changer.upgrade);

	towerId = irudiaKargatu(UPGRADE_SELL_MENU);
	irudiaMugitu(towerId, towerPos.x, towerPos.y);
	irudiakMarraztu();

	ebentu = ebentuaJasoGertatuBada();
	sagua = saguarenPosizioa();
	
	if (ebentu == SAGU_BOTOIA_EZKERRA) {
		//Eliminar
		if ((sagua.x < (towerPos.x + distance) + imgRadius) && (sagua.x > (towerPos.x + distance) - imgRadius) && (sagua.y < (towerPos.y + imgRadius)) && (sagua.y > (towerPos.y - imgRadius))) { changer.terminate = 1; }
		//Mejorar
        else if (posible == 1 && (sagua.x < (towerPos.x - distance) + imgRadius) && (sagua.x > (towerPos.x - distance) - imgRadius) && (sagua.y < (towerPos.y + imgRadius)) && (sagua.y > (towerPos.y - imgRadius))) {  }
	}
	return changer;
}

int towerUpgradeCheck(POSIZIOA pos, UPGRADE upgrade)
{
	int posible = 0;

	if (pos.x == 0 && pos.y == 0 && upgrade.tower1 < 2) { posible = 1; }
    else if (pos.x == 0 && pos.y == 0 && upgrade.tower2 < 2) { posible = 1; }
    else if (pos.x == 0 && pos.y == 0 && upgrade.tower3 < 2) { posible = 1; }
    else if (pos.x == 0 && pos.y == 0 && upgrade.tower4 < 2) { posible = 1; }
    else if (pos.x == 0 && pos.y == 0 && upgrade.tower5 < 2) { posible = 1; }
    else if (pos.x == 0 && pos.y == 0 && upgrade.tower6 < 2) { posible = 1; }
    else if (pos.x == 0 && pos.y == 0 && upgrade.tower7 < 2) { posible = 1; }
    else if (pos.x == 0 && pos.y == 0 && upgrade.tower8 < 2) { posible = 1; }
    else if (pos.x == 0 && pos.y == 0 && upgrade.tower9 < 2) { posible = 1; }
    else if (pos.x == 0 && pos.y == 0 && upgrade.tower10 < 2) { posible = 1; }

	return posible;
}