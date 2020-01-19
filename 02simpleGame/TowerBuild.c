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
TOWER_STRUCTURE towerBuild(TOWER_STRUCTURE structure, int time, int ebentu, POSIZIOA enemy[])
{
	int menu = 0, built = 0;
	POSIZIOA towerPos, enemyPos;

	enemyPos.x = 0;
	enemyPos.y = 0;

	if (structure.area.place1 == 1 || structure.area.place2 == 1 || structure.area.place3 == 1 || structure.area.place4 == 1 || structure.area.place5 == 1 || structure.area.place6 == 1 || structure.area.place7 == 1 || structure.area.place8 == 1 || structure.area.place9 == 1 || structure.area.place10 == 1) {
		menu = 1;
	}

	if (ebentu != TECLA_SPACE && ebentu != TECLA_UP && ebentu != TECLA_DOWN && ebentu != TECLA_LEFT && ebentu != TECLA_RIGHT && menu == 0) { structure.area = selectArea(ebentu); }
	towerPos = setArea(structure.area);
	built = checkTowerBuild(structure.area, structure.create);
	
    if (structure.area.place1 == 1 || structure.area.place2 == 1 || structure.area.place3 == 1 || structure.area.place4 == 1 || structure.area.place5 == 1 || structure.area.place6 == 1 || structure.area.place7 == 1 || structure.area.place8 == 1 || structure.area.place9 == 1 || structure.area.place10 == 1) {
		if (built == 0) {
			structure.menu = createMenu(structure.menu, structure.area, structure.money, ebentu, menu);
			structure.money -= reduceMoney(structure.menu.tower, 0);
			structure.active = acitvateTower(towerPos, structure.menu.tower, structure.active, structure.menu.id);
			if (structure.menu.tower != 0) { structure.area = hasieratuAreak(); }
		}
		if (built == 1) {
			structure = createUpgradeMenu(towerPos, structure, ebentu, menu);
			structure = destroyTower(structure);
		}
        if (ebentu == TECLA_SPACE) { 
            irudiaKendu(structure.menu.id);
            pantailaBerriztu();
			structure.area = hasieratuAreak();
        }
	}
	structure.create = constructTower(structure.active, structure.create);

	return structure;
}

//Detectar donde ha pulsado y si ha pulsado en algun punto que interese
AREA selectArea(int ebentu)
{
	AREA towerPlace;
	POSIZIOA sagua;
	sagua.x = 0;
	sagua.y = 0;

	towerPlace = hasieratuAreak();
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
MENU_PARTS createMenu(MENU_PARTS menu, AREA place, int money, int ebentu, int on)
{
	POSIZIOA towerPos;
	menu.tower = 0;

	if (on != 1) {
		towerPos = setArea(place);
		menu.id = irudiaKargatu(BUY_MENU);
		irudiaMugitu(menu.id, towerPos.x, towerPos.y);
		irudiakMarraztu();
		pantailaBerriztu();
	}

	if (ebentu == TECLA_UP || ebentu == TECLA_DOWN || ebentu == TECLA_LEFT || ebentu == TECLA_RIGHT) {
		//Torre arquero
		if (money >= 40 && ebentu == TECLA_UP) { menu.tower = 1; }
		//Torre mago
		else if (money >= 60 && ebentu == TECLA_LEFT) { menu.tower = 2; }
		//Torre bombardera
		else if (money >= 100 && ebentu == TECLA_RIGHT) { menu.tower = 3; }
		//Mina
		else if (money >= 80 && ebentu == TECLA_DOWN) { menu.tower = 4; }
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

ACTIVE acitvateTower(POSIZIOA pos, int tower, ACTIVE active, int id)
{
	if (pos.x == 158 && pos.y == 14) { active.tower1 = tower; }
	else if (pos.x == 248 && pos.y == 14) { active.tower2 = tower; }
    else if (pos.x == 14 && pos.y == 348) { active.tower3 = tower; }
    else if (pos.x == 210 && pos.y == 206) { active.tower4 = tower; }
    else if (pos.x == 538 && pos.y == 206) { active.tower5 = tower; }
    else if (pos.x == 873 && pos.y == 202) { active.tower6 = tower; }
    else if (pos.x == 968 && pos.y == 202) { active.tower7 = tower; }
    else if (pos.x == 112 && pos.y == 538) { active.tower8 = tower; }
    else if (pos.x == 680 && pos.y == 394) { active.tower9 = tower; }
    else if (pos.x == 920 && pos.y == 395) { active.tower10 = tower; }
	if (tower != 0) { irudiaKendu(id); }
	pantailaBerriztu();
	return active;
}

CREATE constructTower(ACTIVE activate, CREATE created)
{
	if (activate.tower1 != 0 && created.tower1 == -1) created.tower1 = createTower(activate.tower1, 156, 5);
    if (activate.tower2 != 0 && created.tower2 == -1) created.tower2 = createTower(activate.tower2, 250, 5);
    if (activate.tower3 != 0 && created.tower3 == -1) created.tower3 = createTower(activate.tower3, 18, 320);
    if (activate.tower4 != 0 && created.tower4 == -1) created.tower4 = createTower(activate.tower4, 205, 195);
    if (activate.tower5 != 0 && created.tower5 == -1) created.tower5 = createTower(activate.tower5, 533, 195);
    if (activate.tower6 != 0 && created.tower6 == -1) created.tower6 = createTower(activate.tower6, 867, 190);
    if (activate.tower7 != 0 && created.tower7 == -1) created.tower7 = createTower(activate.tower7, 970, 190);
    if (activate.tower8 != 0 && created.tower8 == -1) created.tower8 = createTower(activate.tower8, 115, 514);
    if (activate.tower9 != 0 && created.tower9 == -1) created.tower9 = createTower(activate.tower9, 679, 375);
    if (activate.tower10 != 0 && created.tower10 == -1) created.tower10 = createTower(activate.tower10, 925, 380);
	return created;
}

int createTower(int towerType, int x, int y)
{
	int created = 0;
	if (towerType == 1) created = createArcherTower(x, y);
    else if (towerType == 2) created = createMageTower(x, y);
    else if (towerType == 3) created = createBomberTower(x, y);
    else if (towerType == 4) created = createMine(x, y);
	return created;
}

int reduceMoney(int tower, int upgrade)
{
	int reduceMoney = 0;
	if (tower == 1) reduceMoney = 40 + (8 * upgrade);
    else if (tower == 2) reduceMoney = 60 + (12 * upgrade);
    else if (tower == 3) reduceMoney = 100 + (20 * upgrade);
    else if (tower == 4) reduceMoney = 80 + (16 * upgrade);
	return reduceMoney;
}

int createArcherTower(int x, int y)
{
	int id = -1;
	id = irudiaKargatu(ARCHER_TOWER);
	irudiaMugitu(id, x, y);
	irudiakMarraztu();
	pantailaBerriztu();
	return id;
}

int createMageTower(int x, int y)
{
	int id = -1;
	id = irudiaKargatu(MAGE_TOWER);
	irudiaMugitu(id, x, y);
	irudiakMarraztu();
	pantailaBerriztu();
	return id;
}

int createBomberTower(int x, int y)
{
	int id = -1;
	id = irudiaKargatu(BOMBER_TOWER);
	irudiaMugitu(id, x, y);
	irudiakMarraztu();
	pantailaBerriztu();
	return id;
}

int createMine(int x, int y)
{
	int id = -1;
	id = irudiaKargatu(MINE);
	irudiaMugitu(id, x, y);
	irudiakMarraztu();
	pantailaBerriztu();
	return id;
}

int checkTowerBuild(AREA area, CREATE created)
{
	int on = 0;
	if (area.place1 != 0 && created.tower1 != -1) on = 1;
	else if (area.place2 != 0 && created.tower2 != -1) on = 1;
	else if (area.place3 != 0 && created.tower3 != -1) on = 1;
	else if (area.place4 != 0 && created.tower4 != -1) on = 1;
	else if (area.place5 != 0 && created.tower5 != -1) on = 1;
	else if (area.place6 != 0 && created.tower6 != -1) on = 1;
	else if (area.place7 != 0 && created.tower7 != -1) on = 1;
	else if (area.place8 != 0 && created.tower8 != -1) on = 1;
	else if (area.place9 != 0 && created.tower9 != -1) on = 1;
	else if (area.place10 != 0 && created.tower10 != -1) on = 1;
	return on;
}

ACTION allTowerSet(ACTIVE active, int time, UPGRADE upgrade, POSIZIOA enemy[], ACTION action)
{
	int i, j;
	ACTION totalAction;
	totalAction = hasieratuAction(1, 1);
	for (i = 0; i < 30; i++) totalAction.frozen[i] = action.frozen[i];

	for (i = 0; i < 30; i++) {
		for (j = 1; j <= 10; j++) { if (action.target.tower[j] == -1) action.target.tower[j] = i; }
		if (active.tower1 != 0 && i == action.target.tower[1]) {
			action.target.tower[1] = i;
			action = towerAttack(223, 25, active.tower1, enemy[i].x, enemy[i].y, time, upgrade.tower1, 1, i, action);
			totalAction = batuAction(action, totalAction, i, active.tower1);
		}
		if (active.tower2 != 0 && i == action.target.tower[2]) {
			action.target.tower[2] = i;
			action = towerAttack(313, 25, active.tower2, enemy[i].x, enemy[i].y, time, upgrade.tower2, 2, i, action);
			totalAction = batuAction(action, totalAction, i, active.tower2);
		}
		if (active.tower3 != 0 && i == action.target.tower[3]) {
			action.target.tower[3] = i;
			action = towerAttack(76, 337, active.tower3, enemy[i].x, enemy[i].y, time, upgrade.tower3, 3, i, action);
			totalAction = batuAction(action, totalAction, i, active.tower3);
		}
		if (active.tower4 != 0 && i == action.target.tower[4]) {
			action.target.tower[4] = i;
			action = towerAttack(266, 215, active.tower4, enemy[i].x, enemy[i].y, time, upgrade.tower4, 4, i, action);
			totalAction = batuAction(action, totalAction, i, active.tower4);
		}
		if (active.tower5 != 0 && i == action.target.tower[5]) {
			action.target.tower[5] = i;
			action = towerAttack(593, 217, active.tower5, enemy[i].x, enemy[i].y, time, upgrade.tower5, 5, i, action);
			totalAction = batuAction(action, totalAction, i, active.tower5);
		}
		if (active.tower6 != 0 && i == action.target.tower[6]) {
			action.target.tower[6] = i;
			action = towerAttack(925, 205, active.tower6, enemy[i].x, enemy[i].y, time, upgrade.tower6, 6, i, action);
			totalAction = batuAction(action, totalAction, i, active.tower6);
		}
		if (active.tower7 != 0 && i == action.target.tower[7]) {
			action.target.tower[7] = i;
			action = towerAttack(1030, 205, active.tower7, enemy[i].x, enemy[i].y, time, upgrade.tower7, 7, i, action);
			totalAction = batuAction(action, totalAction, i, active.tower7);
		}
		if (active.tower8 != 0 && i == action.target.tower[8]) {
			action.target.tower[8] = i;
			action = towerAttack(170, 525, active.tower8, enemy[i].x, enemy[i].y, time, upgrade.tower8, 8, i, action);
			totalAction = batuAction(action, totalAction, i, active.tower8);
		}
		if (active.tower9 != 0 && i == action.target.tower[9]) {
			action.target.tower[9] = i;
			action = towerAttack(735, 390, active.tower9, enemy[i].x, enemy[i].y, time, upgrade.tower9, 9, i, action);
			totalAction = batuAction(action, totalAction, i, active.tower9);
		}
		if (active.tower10 != 0 && i == action.target.tower[10]) {
			action.target.tower[10] = i;
			action = towerAttack(980, 395, active.tower10, enemy[i].x, enemy[i].y, time, upgrade.tower10, 10, i, action);
			totalAction = batuAction(action, totalAction, i, active.tower10);
		}
	}
	return totalAction;
}

ACTION batuAction(ACTION action, ACTION totalAction, int i, int tower)
{
	totalAction.damage[i] += action.damage[i];
	if (totalAction.freeze[i] != 1) totalAction.freeze[i] += action.freeze[i];
	if (totalAction.resource[i] == 0) totalAction.resource[i] = action.resource[i];
	if (tower == 4) totalAction.money += action.money;

	return totalAction;
}

TOWER_STRUCTURE createUpgradeMenu(POSIZIOA towerPos, TOWER_STRUCTURE structure, int ebentu, int on)
{
	int posible = 0;
	posible = towerUpgradeCheck(towerPos, structure.change.upgrade, structure);

	if (on == 0) {
		structure.menu.id = irudiaKargatu(UPGRADE_SELL_MENU);
		irudiaMugitu(structure.menu.id, towerPos.x, towerPos.y);
		irudiakMarraztu();
		pantailaBerriztu();
	}
	if (on == 1 && (ebentu == TECLA_LEFT || ebentu == TECLA_RIGHT)) {
		irudiaKendu(structure.menu.id);
	}

	if (ebentu == TECLA_LEFT || ebentu == TECLA_RIGHT) {
		if (ebentu == TECLA_LEFT) {  //Eliminar
			structure.change.terminate = terminateTower(structure.area); 
			structure.money += returnMoney(structure.active, structure.change.terminate);
		}
		if (posible != 0 && ebentu == TECLA_RIGHT) { //Mejorar
			structure = upgradeTower(posible, structure, structure.menu.tower);
			structure.money -= reduceMoneyUpgrade(structure.menu.tower, structure.change.upgrade);
		}
		if (posible == 0) structure.area = hasieratuAreak();
	}
	return structure;
}

int towerUpgradeCheck(POSIZIOA pos, UPGRADE upgrade, TOWER_STRUCTURE structure)
{
	int posible = 0;

	if (pos.x == 158 && pos.y == 14 && upgrade.tower1 < 2 && reduceMoney(structure.menu.tower, structure.change.upgrade.tower1) <= structure.money) { posible = 1; }
    else if (pos.x == 248 && pos.y == 14 && upgrade.tower2 < 2 && reduceMoney(structure.menu.tower, structure.change.upgrade.tower2) <= structure.money) { posible = 2; }
    else if (pos.x == 14 && pos.y == 348 && upgrade.tower3 < 2 && reduceMoney(structure.menu.tower, structure.change.upgrade.tower3) <= structure.money) { posible = 3; }
    else if (pos.x == 210 && pos.y == 206 && upgrade.tower4 < 2 && reduceMoney(structure.menu.tower, structure.change.upgrade.tower4) <= structure.money) { posible = 4; }
    else if (pos.x == 538 && pos.y == 206 && upgrade.tower5 < 2 && reduceMoney(structure.menu.tower, structure.change.upgrade.tower5) <= structure.money) { posible = 5; }
    else if (pos.x == 873 && pos.y == 202 && upgrade.tower6 < 2 && reduceMoney(structure.menu.tower, structure.change.upgrade.tower6) <= structure.money) { posible = 6; }
    else if (pos.x == 968 && pos.y == 202 && upgrade.tower7 < 2 && reduceMoney(structure.menu.tower, structure.change.upgrade.tower7) <= structure.money) { posible = 7; }
    else if (pos.x == 112 && pos.y == 538 && upgrade.tower8 < 2 && reduceMoney(structure.menu.tower, structure.change.upgrade.tower8) <= structure.money) { posible = 8; }
    else if (pos.x == 680 && pos.y == 394 && upgrade.tower9 < 2 && reduceMoney(structure.menu.tower, structure.change.upgrade.tower9) <= structure.money) { posible = 9; }
    else if (pos.x == 920 && pos.y == 395 && upgrade.tower10 < 2 && reduceMoney(structure.menu.tower, structure.change.upgrade.tower10) <= structure.money) { posible = 10; }

	return posible;
}

TOWER_STRUCTURE upgradeTower(int posible, TOWER_STRUCTURE structure)
{
	int on = 0;
	if (posible == 1) { structure.change.upgrade.tower1++; on = 1; }
	else if (posible == 2) { structure.change.upgrade.tower2++; on = 1; }
	else if (posible == 3) { structure.change.upgrade.tower3++; on = 1; }
	else if (posible == 4) { structure.change.upgrade.tower4++; on = 1; }
	else if (posible == 5) { structure.change.upgrade.tower5++; on = 1; }
	else if (posible == 6) { structure.change.upgrade.tower6++; on = 1; }
	else if (posible == 7) { structure.change.upgrade.tower7++; on = 1; }
	else if (posible == 8) { structure.change.upgrade.tower8++; on = 1; }
	else if (posible == 9) { structure.change.upgrade.tower9++; on = 1; }
	else if (posible == 10) { structure.change.upgrade.tower10++;  on = 1; }
	if (on == 1) { structure.area = hasieratuAreak(); }
	return structure;
}

int reduceMoneyUpgrade(int tower, UPGRADE towerUpgrade)
{
	int money = 0;
	if (towerUpgrade.tower1 != 0) money = reduceMoney(tower, towerUpgrade.tower1);
	else if (towerUpgrade.tower2 != 0) money = reduceMoney(tower, towerUpgrade.tower2);
	else if (towerUpgrade.tower3 != 0) money = reduceMoney(tower, towerUpgrade.tower3);
	else if (towerUpgrade.tower4 != 0) money = reduceMoney(tower, towerUpgrade.tower4);
	else if (towerUpgrade.tower5 != 0) money = reduceMoney(tower, towerUpgrade.tower5);
	else if (towerUpgrade.tower6 != 0) money = reduceMoney(tower, towerUpgrade.tower6);
	else if (towerUpgrade.tower7 != 0) money = reduceMoney(tower, towerUpgrade.tower7);
	else if (towerUpgrade.tower8 != 0) money = reduceMoney(tower, towerUpgrade.tower8);
	else if (towerUpgrade.tower9 != 0) money = reduceMoney(tower, towerUpgrade.tower9);
	else if (towerUpgrade.tower10 != 0) money = reduceMoney(tower, towerUpgrade.tower10);
	return money;
}

TERMINATE terminateTower(AREA area)
{
	TERMINATE terminate;
	terminate = hasieratuTerminate();
	if (area.place1 == 1) terminate.tower1 = 1;
	else if (area.place2 == 1) terminate.tower2 = 1;
	else if (area.place3 == 1) terminate.tower3 = 1;
	else if (area.place4 == 1) terminate.tower4 = 1;
	else if (area.place5 == 1) terminate.tower5 = 1;
	else if (area.place6 == 1) terminate.tower6 = 1;
	else if (area.place7 == 1) terminate.tower7 = 1;
	else if (area.place8 == 1) terminate.tower8 = 1;
	else if (area.place9 == 1) terminate.tower9 = 1;
	else if (area.place10 == 1) terminate.tower10 = 1;
	return terminate;
}

TOWER_STRUCTURE destroyTower(TOWER_STRUCTURE structure)
{
	int on = 0;
	if (structure.change.terminate.tower1 != 0) { structure.active.tower1 = 0; irudiaKendu(structure.create.tower1); structure.create.tower1 = -1; on = 1; }
	if (structure.change.terminate.tower2 != 0) { structure.active.tower2 = 0; irudiaKendu(structure.create.tower2); structure.create.tower2 = -1; on = 1;}
	if (structure.change.terminate.tower3 != 0) { structure.active.tower3 = 0; irudiaKendu(structure.create.tower3); structure.create.tower3 = -1; on = 1; }
	if (structure.change.terminate.tower4 != 0) { structure.active.tower4 = 0; irudiaKendu(structure.create.tower4); structure.create.tower4 = -1; on = 1; }
	if (structure.change.terminate.tower5 != 0) { structure.active.tower5 = 0; irudiaKendu(structure.create.tower5); structure.create.tower5 = -1; on = 1; }
	if (structure.change.terminate.tower6 != 0) { structure.active.tower6 = 0; irudiaKendu(structure.create.tower6); structure.create.tower6 = -1; on = 1; }
	if (structure.change.terminate.tower7 != 0) { structure.active.tower7 = 0; irudiaKendu(structure.create.tower7); structure.create.tower7 = -1; on = 1; }
	if (structure.change.terminate.tower8 != 0) { structure.active.tower8 = 0; irudiaKendu(structure.create.tower8); structure.create.tower8 = -1; on = 1; }
	if (structure.change.terminate.tower9 != 0) { structure.active.tower9 = 0; irudiaKendu(structure.create.tower9); structure.create.tower9 = -1; on = 1;}
	if (structure.change.terminate.tower10 != 0) { structure.active.tower10 = 0; irudiaKendu(structure.create.tower10); structure.create.tower10 = -1; on = 1; }
	if (on == 1) { structure.area = hasieratuAreak(); structure.change.terminate = hasieratuTerminate(); pantailaBerriztu(); }
	return structure;
}

int returnMoney(ACTIVE active, TERMINATE terminate)
{
	int money = 0;
	if (terminate.tower1 != 0) money = checkTowerType(active.tower1);
	else if (terminate.tower2 != 0) money = checkTowerType(active.tower2);
	else if (terminate.tower3 != 0) money = checkTowerType(active.tower3);
	else if (terminate.tower4 != 0) money = checkTowerType(active.tower4);
	else if (terminate.tower5 != 0) money = checkTowerType(active.tower5);
	else if (terminate.tower6 != 0) money = checkTowerType(active.tower6);
	else if (terminate.tower7 != 0) money = checkTowerType(active.tower7);
	else if (terminate.tower8 != 0) money = checkTowerType(active.tower8);
	else if (terminate.tower9 != 0) money = checkTowerType(active.tower9);
	else if (terminate.tower10 != 0) money = checkTowerType(active.tower10);
	return money;
}

int checkTowerType(int tower)
{
	int money = 0;
	if (tower == 1) money = 20;
	else if (tower == 2) money = 30;
	else if (tower == 3) money = 50;
	else if (tower == 4) money = 40;
	return money;
}