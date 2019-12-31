#include "TowerFunctionality.h"
#include "graphics.h"
#include "ebentoak.h"
#include "soinua.h"
#include "text.h"
#include "imagen.h"
#include "OurTypes.h"
#include <stdio.h>
#include <windows.h>

int hasieratu(void)
{
	if (sgHasieratu() == -1)
	{
		fprintf(stderr, "Unable to set 640x480 video: %s\n", SDL_GetError());
		return 0;
	}
	textuaGaitu();
	pantailaGarbitu();
	return 0;
}
//Jokoaren atzealdea sortu
void backgroundCreate(void)
{
	textuaIdatzi(10, 20, "Pruebas");
	arkatzKoloreaEzarri(255, 255, 255);
	zirkuluaMarraztu(SCREEN_WIDTH / 2, SCREEN_HEIGHT * 2 / 3 - 50, 5);
	zuzenaMarraztu(0, SCREEN_HEIGHT * 2 / 3, SCREEN_WIDTH, SCREEN_HEIGHT * 2 / 3);
	pantailaBerriztu();
}
//Dorreak sortu
ACTION towerCreate(int towerX, int towerY, int ebentu, int enemyX, int enemyY, int time, int upgrade)
{
	int tower = 0, radius = 0;
	ACTION action;
	action.damage = 0;
	action.freeze = 0;
	action.resource = 0;

	if (ebentu == TECLA_1) {
		radius = buildArcherTower(towerX, towerY, upgrade);
		action.damage = archerTowerTarget(enemyX, enemyY, towerX, towerY, radius, time, upgrade);
	}
	if (ebentu == TECLA_2) {
		radius = buildMageTower(towerX, towerY, upgrade);
		action = mageTowerTarget(enemyX, enemyY, towerX, towerY, radius, time, upgrade);
	}
	if (ebentu == TECLA_3) {
		radius = buildBomberTower(towerX, towerY, upgrade);
		action.damage = bomberTowerTarget(enemyX, enemyY, towerX, towerY, radius, time, upgrade);
	}
	if (ebentu == TECLA_4) {
		radius = buildMiningTower(towerX, towerY, upgrade);
	}
	return action;
}
//Torre de arquero
int buildArcherTower(int posX, int posY, int upgrade)
{
	int radius = 105;
	arkatzKoloreaEzarri(0, 50, 50);
	zirkuluaMarraztu(posX, posY, radius);
	pantailaBerriztu();
	return radius;
}
//Ataque de torre de arquero
int archerTowerTarget(int x, int y, int positionX, int positionY, int radius, int time, int upgrade)
{
	POSIZIOA tower, enemy, bullet;
	int damage = 0;
	enemy.x = x;
	enemy.y = y;
	bullet.x = enemy.x;
	bullet.y = enemy.y;
	tower.x = positionX;
	tower.y = positionY;

	if (enemy.x <= tower.x + radius && enemy.x >= tower.x - radius && enemy.y <= tower.y + radius && enemy.y >= tower.y - radius)
	{
		arkatzKoloreaEzarri(255, 255, 255);
		zuzenaMarraztu(tower.x, tower.y, enemy.x, enemy.y);
		arkatzKoloreaEzarri(255, 0, 0);
		if ((time % 100 >= 90 && time % 100 < 100) || (time % 100 > 0 && time % 100 <= 10) || time % 100 == 0) {
			zirkuluaMarraztu(bullet.x, bullet.y, 4);
			if (time % 100 == 0) damage = 100;
		}
	}
	pantailaBerriztu();

	return damage;
}
//Torre de mago
int buildMageTower(int posX, int posY, int upgrade)
{
	int radius = 75;
	arkatzKoloreaEzarri(100, 0, 100);
	zirkuluaMarraztu(posX, posY, radius);
	pantailaBerriztu();
	return radius;
}
//Ataque de torre de mago
ACTION mageTowerTarget(int x, int y, int positionX, int positionY, int radius, int time, int upgrade)
{
	POSIZIOA tower, enemy;
	ACTION action;
	enemy.x = x;
	enemy.y = y;
	tower.x = positionX;
	tower.y = positionY;
	action.damage = 0;
	action.freeze = 0;
	action.resource = 0;

	if (enemy.x <= tower.x + radius && enemy.x >= tower.x - radius && enemy.y <= tower.y + radius && enemy.y >= tower.y - radius)
	{
		if ((time % 200 >= 180 && time % 200 < 200) || (time % 200 > 0 && time % 200 <= 20) || time % 200 == 0) {
			arkatzKoloreaEzarri(0, 0, 255);
			if (time % 200 == 0) { action.damage = 30; action.freeze = 1; }
		}
		else arkatzKoloreaEzarri(255, 255, 255);
		zuzenaMarraztu(tower.x, tower.y, enemy.x, enemy.y);
	}
	pantailaBerriztu();

	return action;
}
//Torre de bombardero
int buildBomberTower(int posX, int posY, int upgrade)
{
	int radius = 150;
	arkatzKoloreaEzarri(150, 150, 0);
	zirkuluaMarraztu(posX, posY, radius);
	pantailaBerriztu();
	return radius;
}
//Ataque torre de bombardero
int bomberTowerTarget(int x, int y, int positionX, int positionY, int radius, int time, int upgrade)
{
	POSIZIOA tower, enemy, bullet;
	int damage = 0;
	enemy.x = x;
	enemy.y = y;
	bullet.x = enemy.x;
	bullet.y = enemy.y;
	tower.x = positionX;
	tower.y = positionY;

	if (enemy.x <= tower.x + radius && enemy.x >= tower.x - radius && enemy.y <= tower.y + radius && enemy.y >= tower.y - radius)
	{
		arkatzKoloreaEzarri(255, 255, 255);
		zuzenaMarraztu(tower.x, tower.y, enemy.x, enemy.y);
		arkatzKoloreaEzarri(255, 0, 0);
		if ((time % 300 >= 280 && time % 300 < 300) || (time % 300 > 0 && time % 400 <= 20) || time % 300 == 0) {
			zirkuluaMarraztu(bullet.x, bullet.y, 20);
			if (time % 300 == 0) damage = 60;
		}//Falta ponerle daño en area
	}
	pantailaBerriztu();

	return damage;
}

int buildMiningTower(int posX, int posY, int upgrade) //Mina de recursos
{
	arkatzKoloreaEzarri(200, 200, 200);
	zirkuluaMarraztu(posX, posY, 20);
	pantailaBerriztu();
	return 20;
}

int enemyDeath(int lifeTotal)
{
	int death = 0;
	if (lifeTotal < 0) death = 1;
	return death;
}