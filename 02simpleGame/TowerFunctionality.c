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

//Dorreak sortu
ACTION towerAttack(float towerX, float towerY, int ebentu, float enemyX, float enemyY, int time, int upgrade)
{
	ACTION action;
	int radius = 0;
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
int archerTowerTarget(float x, float y, float positionX, float positionY, int radius, int time, int upgrade)
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
		zuzenaMarraztu(tower.x, tower.y, enemy.x + 15, enemy.y + 30);
		arkatzKoloreaEzarri(255, 0, 0);
		if ((time % 50 >= 30 && time % 50 < 50) || time % 50 == 0) {
			zirkuluaMarraztu(bullet.x + 15, bullet.y + 30, 5);
			if (time % 50 == 0) damage = (100 * (1 + upgrade / 10));
		}
	}
	pantailaBerriztu();

	return damage;
}

//Ataque de torre de mago
ACTION mageTowerTarget(float x, float y, float positionX, float positionY, int radius, int time, int upgrade)
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
		zuzenaMarraztu(tower.x, tower.y, enemy.x + 15, enemy.y + 30);
	}
	pantailaBerriztu();

	return action;
}

//Ataque torre de bombardero
ACTION bomberTowerTarget(float x, float y, float positionX, float positionY, int radius, int time, int upgrade)
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
		if ((time % 150 >= 100 && time % 150 < 150) || time % 150 == 0) {
			action.id = irudiaKargatu(MIRA);
			irudiaMugitu(action.id, enemy.x - 15, enemy.y);
			irudiakMarraztu();
			irudiaKendu(action.id);
			if (time % 150 == 0) {
				action.damage = (60 * (1 + upgrade / 10));
				action.resource = 30;
			}
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