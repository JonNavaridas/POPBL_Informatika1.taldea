#ifndef TOWER_FUNCTIONALITY
#define TOWER_FUNCTIONALITY
#include "OurTypes.h"

//Base del juego (No necesario)
int hasieratu(void);
//Fondo del juego (No necesario)
void backgroundCreate(void);
//Creación de las torres (IMPORTANTE)
ACTION towerCreate(int posX, int posY, int ebentu, int enemyX, int enemyY, int time, float upgrade);
int buildArcherTower(int posX, int posY, float upgrade);
int buildMageTower(int posX, int posY, float upgrade);
int buildBomberTower(int posX, int posY, float upgrade);
int buildMiningTower(int posX, int posY);
//Targeting de las torres (IMPORTANTE)
int archerTowerTarget(int x, int y, int positionX, int positionY, int radius, int time, float upgrade);
ACTION mageTowerTarget(int x, int y, int positionX, int positionY, int radius, int time, float upgrade);
ACTION bomberTowerTarget(int x, int y, int positionX, int positionY, int radius, int time, float upgrade);
int mineRecolection(int time, float upgrade);
//Muerte de enemigo (IMPORTANTE)
int enemyDeath(int lifeTotal);

#endif