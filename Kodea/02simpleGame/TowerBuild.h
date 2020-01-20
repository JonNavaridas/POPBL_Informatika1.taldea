#ifndef TOWER_BUILD
#define TOWER_BUILD
#include "OurTypes.h"

// Nagusia
TOWER_STRUCTURE towerBuild(TOWER_STRUCTURE structure, int time, int ebentu, POSIZIOA enemy[]);

// Klikatu den area aurkitu
AREA selectArea(int ebentu);
AREA setAreas(int x, int y, AREA towerPlace);
POSIZIOA setArea(AREA place);

// Menu desberdinak sortu
MENU_PARTS createMenu(MENU_PARTS menu, AREA place, int money, int ebentu, int on);
TOWER_STRUCTURE createUpgradeMenu(POSIZIOA towerPos, TOWER_STRUCTURE structure, int ebentu, int on);

// Diruaren aldakuntzak
int reduceMoney(int tower, int upgrade);
int reduceMoneyUpgrade(int tower, UPGRADE towerUpgrade);
int returnMoney(ACTIVE active, TERMINATE terminate);
int checkTowerType(int tower);

// Dorrerik dagoen bilatu
int checkTowerBuild(AREA area, CREATE created);

// Dorreak sortu
ACTIVE acitvateTower(POSIZIOA pos, int tower, ACTIVE active, int id);
ACTION allTowerSet(ACTIVE active, int time, UPGRADE upgrade, POSIZIOA enemy[], ACTION action);
int createTower(int towerType, int x, int y);
int createArcherTower(int x, int y);
int createMageTower(int x, int y);
int createBomberTower(int x, int y);
int createMine(int x, int y);

// Akzio desberdinak
ACTION batuAction(ACTION action, ACTION totalAction, int i, int tower);
CREATE constructTower(ACTIVE activate, CREATE created);

// Hobekuntzak
int towerUpgradeCheck(POSIZIOA pos, UPGRADE upgrade, TOWER_STRUCTURE structure);
TOWER_STRUCTURE upgradeTower(int posible, TOWER_STRUCTURE structure);

// Dorreak kendu
TERMINATE terminateTower(AREA area);
TOWER_STRUCTURE destroyTower(TOWER_STRUCTURE structure);

#endif