#include "TowerFunctionality.h"
#include "graphics.h"
#include "ebentoak.h"
#include "soinua.h"
#include "text.h"
#include "imagen.h"
#include "OurTypes.h"
#include "hasieratu.h"
#include "TowerBuild.h"
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
//Hasieratu dorreen akzioak
ACTION hasieratuAction(void)
{
	ACTION action;
	action.damage = 0;
	action.freeze = 0;
	action.resource = 0;
	action.money = 0;
	return action;
}
//Hasieratu dorreen funtzionalitatea
TOWER_STRUCTURE hasieratuEstruktura(void)
{
	TOWER_STRUCTURE estruktura;
	estruktura.action = hasieratuAction();
	estruktura.active = hasieratuActive();
	estruktura.upgrade = hasieratuUpgrade();
	return estruktura;
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
ACTION towerAttack(int towerX, int towerY, int ebentu, int enemyX, int enemyY, int time, int upgrade)
{
	ACTION action;
	int radius;
	action = hasieratuAction();

	if (ebentu == 1) {
		radius = (110 * (1 + upgrade / 10));
		action.damage = archerTowerTarget(enemyX, enemyY, towerX, towerY, radius, time, upgrade);
	}
	if (ebentu == 2) {
		radius = (80 * (1 + upgrade / 10));
		action = mageTowerTarget(enemyX, enemyY, towerX, towerY, radius, time, upgrade);
	}
	if (ebentu == 3) {
		radius = (150 * (1 + upgrade / 10));
		action = bomberTowerTarget(enemyX, enemyY, towerX, towerY, radius, time, upgrade);
	}
	if (ebentu == 4) {
		action.money = mineRecolection(time, upgrade);
	}
	return action;
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
		if ((time % 50 >= 30 && time % 50 < 50) || time % 50 == 0) {
			zirkuluaMarraztu(bullet.x, bullet.y, 5);
			if (time % 50 == 0) damage = (100 * (1 + upgrade / 10));
		}
	}
	pantailaBerriztu();

	return damage;
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
	action = hasieratuAction();

	if (enemy.x <= tower.x + radius && enemy.x >= tower.x - radius && enemy.y <= tower.y + radius && enemy.y >= tower.y - radius)
	{
		if ((time % 100 >= 80 && time % 100 < 100) || time % 100 == 0) {
			arkatzKoloreaEzarri(0, 0, 255);
			if (time % 100 == 0) { action.damage = (30 * (1 + upgrade / 10)); action.freeze = 1; }
		}
		else arkatzKoloreaEzarri(255, 255, 255);
		zuzenaMarraztu(tower.x, tower.y, enemy.x, enemy.y);
	}
	pantailaBerriztu();

	return action;
}

//Ataque torre de bombardero
ACTION bomberTowerTarget(int x, int y, int positionX, int positionY, int radius, int time, int upgrade)
{
	POSIZIOA tower, enemy, bullet;
	ACTION action;
	enemy.x = x;
	enemy.y = y;
	bullet.x = enemy.x;
	bullet.y = enemy.y;
	tower.x = positionX;
	tower.y = positionY;
	action = hasieratuAction();

	if (enemy.x <= tower.x + radius && enemy.x >= tower.x - radius && enemy.y <= tower.y + radius && enemy.y >= tower.y - radius)
	{
		arkatzKoloreaEzarri(255, 255, 255);
		zuzenaMarraztu(tower.x, tower.y, enemy.x, enemy.y);
		arkatzKoloreaEzarri(255, 0, 0);
		if ((time % 150 >= 130 && time % 150 < 150) || time % 150 == 0) {
			action.resource = 30;
			zirkuluaMarraztu(bullet.x, bullet.y, action.resource);
			if (time % 150 == 0) action.damage = (60 * (1 + upgrade / 10));
		}
	}
	pantailaBerriztu();

	return action;
}

//Recolección de la mina
int mineRecolection(int time, int upgrade)
{
	int money = 0;
	if (time % 100 == 0) money = 3 + upgrade;
	return money;
}

//Muerte del enemigo, detectando la vida total
int enemyDeath(int lifeTotal)
{
	int death = 0;
	if (lifeTotal < 0) death = 1;
	return death;
}