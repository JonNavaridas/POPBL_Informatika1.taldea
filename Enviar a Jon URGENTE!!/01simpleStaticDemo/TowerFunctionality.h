#ifndef TOWER_FUNCTIONALITY
#define TOWER_FUNCTIONALITY
#include "OurTypes.h"

//Base del juego (No necesario)
int hasieratu(void);
ACTION hasieratuAction(void);
TOWER_STRUCTURE hasieratuEstruktura(void);
//Fondo del juego (No necesario)
void backgroundCreate(void);
//Creación de las torres (IMPORTANTE)
ACTION towerAttack(int posX, int posY, int ebentu, int enemyX, int enemyY, int time, int upgrade);
//Targeting de las torres (IMPORTANTE)
int archerTowerTarget(int x, int y, int positionX, int positionY, int radius, int time, int upgrade);
ACTION mageTowerTarget(int x, int y, int positionX, int positionY, int radius, int time, int upgrade);
ACTION bomberTowerTarget(int x, int y, int positionX, int positionY, int radius, int time, int upgrade);
int mineRecolection(int time, int upgrade);
//Muerte de enemigo (IMPORTANTE)
int enemyDeath(int lifeTotal);

#endif