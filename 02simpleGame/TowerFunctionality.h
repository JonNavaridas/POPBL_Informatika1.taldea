#ifndef TOWER_FUNCTIONALITY
#define TOWER_FUNCTIONALITY
#include "OurTypes.h"

//Creación de las torres
ACTION towerAttack(float towerX, float towerY, int ebentu, float enemyX, float enemyY, int time, int upgrade, int tower, int target, ACTION action);

//Targeting de las torres
int archerTowerTarget(float x, float y, float positionX, float positionY, int radius, int time, int upgrade);
ACTION mageTowerTarget(float x, float y, float positionX, float positionY, int radius, int time, int upgrade, int target);
ACTION bomberTowerTarget(float x, float y, float positionX, float positionY, int radius, int time, int upgrade, int target);
int mineRecolection(int time, int upgrade); 
OLATUAK stageDamage(OLATUAK olatuak, ACTION action, int enemy);
OLATUAK areaDamage(int area, OLATUAK olatuak, int enemy);

//Muerte de enemigo
int enemyDeath(int lifeTotal);

#endif