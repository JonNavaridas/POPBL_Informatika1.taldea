#ifndef TOWER_FUNCTIONALITY
#define TOWER_FUNCTIONALITY
#include "OurTypes.h"

//Creación de las torres (IMPORTANTE)
ACTION towerAttack(float posX, float posY, int ebentu, float enemyX, float enemyY, int time, int upgrade, int tower, ACTION target);

//Targeting de las torres (IMPORTANTE)
int archerTowerTarget(float x, float y, float positionX, float positionY, int radius, int time, int upgrade);
ACTION mageTowerTarget(float x, float y, float positionX, float positionY, int radius, int time, int upgrade);
ACTION bomberTowerTarget(float x, float y, float positionX, float positionY, int radius, int time, int upgrade);
int mineRecolection(int time, int upgrade);

//Muerte de enemigo (IMPORTANTE)
int enemyDeath(int lifeTotal);

#endif