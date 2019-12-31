#ifndef TOWER_FUNCTIONALITY
#define TOWER_FUNCTIONALITY
#include "OurTypes.h"

//Base del juego (No necesario)
int hasieratu(void);
//Fondo del juego (No necesario)
void backgroundCreate(void);
//Creación de las torres (IMPORTANTE)
ACTION towerCreate(int posX, int posY, int ebentu, int enemyX, int enemyY, int time, int upgrade);
int buildArcherTower(int posX, int posY, int upgrade);
int buildMageTower(int posX, int posY, int upgrade);
int buildBomberTower(int posX, int posY, int upgrade);
int buildMiningTower(int posX, int posY, int upgrade);
//Targeting de las torres (IMPORTANTE)
int archerTowerTarget(int x, int y, int positionX, int positionY, int radius, int time, int upgrade);
ACTION mageTowerTarget(int x, int y, int positionX, int positionY, int radius, int time, int upgrade);
int bomberTowerTarget(int x, int y, int positionX, int positionY, int radius, int time, int upgrade);
//Muerte de enemigo (IMPORTANTE)
int enemyDeath(int lifeTotal);

#endif