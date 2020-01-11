#ifndef TOWER_BUILD
#define TOWER_BUILD
#include "OurTypes.h"

//Principal
TOWER_STRUCTURE towerBuild(AREA towerPlace, TOWER_STRUCTURE structure, int money, int time, int ebentu);
//Detectar en que area se esta clicando
AREA selectArea(void);
AREA setAreas(int x, int y, AREA towerPlace);
POSIZIOA setArea(AREA place);
//Crear el menu
MENU_PARTS createMenu(AREA place, int money);
CHANGE createUpgradeMenu(POSIZIOA towerPos, CHANGE changer);
//Reducir dinero
int reduceMoney(int tower);
//Crear las torres
ACTIVE acitvateTower(POSIZIOA pos, int tower, ACTIVE active);
ACTION allTowerSet(ACTIVE active, POSIZIOA pos, POSIZIOA enemy, int time, UPGRADE upgrade);
void createTower(int towerType, int x, int y);
void createArcherTower(int x, int y);
void createMageTower(int x, int y);
void createBomberTower(int x, int y);
void createMine(int x, int y);
//Aciones
ACTION batuAction(ACTION action, ACTION totalAction);
void constructTower(ACTIVE activate);
//Mejora
int towerUpgradeCheck(POSIZIOA pos, UPGRADE upgrade);

#endif