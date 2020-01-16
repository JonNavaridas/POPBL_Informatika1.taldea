#ifndef TOWER_BUILD
#define TOWER_BUILD
#include "OurTypes.h"

//Principal
TOWER_STRUCTURE towerBuild(TOWER_STRUCTURE structure, int time, int ebentu, POSIZIOA enemy[]);

//Detectar en que area se esta clicando
AREA selectArea(int ebentu);
AREA setAreas(int x, int y, AREA towerPlace);
POSIZIOA setArea(AREA place);

//Crear el menu
MENU_PARTS createMenu(MENU_PARTS menu, AREA place, int money, int ebentu, int on);
TOWER_STRUCTURE createUpgradeMenu(POSIZIOA towerPos, TOWER_STRUCTURE structure, int ebentu, int on);

//Cambio del dinero
int reduceMoney(int tower);
int returnMoney(ACTIVE active, TERMINATE terminate);
int checkTowerType(int tower);

//Mirar si la torre esta creada
int checkTowerBuild(AREA area, CREATE created);

//Crear las torres
ACTIVE acitvateTower(POSIZIOA pos, int tower, ACTIVE active, int id);
ACTION allTowerSet(ACTIVE active, int time, UPGRADE upgrade, POSIZIOA enemy[], ACTION action);
int createTower(int towerType, int x, int y);
int createArcherTower(int x, int y);
int createMageTower(int x, int y);
int createBomberTower(int x, int y);
int createMine(int x, int y);

//Aciones
ACTION batuAction(ACTION action, ACTION totalAction);
CREATE constructTower(ACTIVE activate, CREATE created);

//Mejora
int towerUpgradeCheck(POSIZIOA pos, UPGRADE upgrade);
TOWER_STRUCTURE upgradeTower(int posible, TOWER_STRUCTURE structure);

//Destruir torre
TERMINATE terminateTower(AREA area);
TOWER_STRUCTURE destroyTower(TOWER_STRUCTURE structure);

#endif