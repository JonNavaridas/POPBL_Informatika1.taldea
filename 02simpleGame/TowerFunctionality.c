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
ACTION towerAttack(float towerX, float towerY, int ebentu, float enemyX, float enemyY, int time, int upgrade, int tower, int target, ACTION action)
{
	int radius = 0;

	if (ebentu == 1) {
		radius = (140 * (1 + upgrade / 10));
		if (enemyX > towerX + radius || enemyX < towerX - radius || enemyY > towerY + radius || enemyY < towerY - radius && enemyX >= 0 && enemyX <= SCREEN_WIDTH) { action.target.tower[tower] = -1; }
		if (action.target.tower[tower] != -1) action.damage[target] = archerTowerTarget(enemyX, enemyY, towerX, towerY, radius, time, upgrade);
	}
	if (ebentu == 2) {
		radius = (110 * (1 + upgrade / 10));
		if (enemyX > towerX + radius || enemyX < towerX - radius || enemyY > towerY + radius || enemyY < towerY - radius && enemyX >= 0 && enemyX <= SCREEN_WIDTH) { action.target.tower[tower] = -1; }
		if (action.target.tower[tower] != -1) action = mageTowerTarget(enemyX, enemyY, towerX, towerY, radius, time, upgrade, target);
	}
	if (ebentu == 3) {
		radius = (180 * (1 + upgrade / 10));
		if (enemyX > towerX + radius || enemyX < towerX - radius || enemyY > towerY + radius || enemyY < towerY - radius && enemyX >= 0 && enemyX <= SCREEN_WIDTH) { action.target.tower[tower] = -1; }
		if (action.target.tower[tower] != -1) action = bomberTowerTarget(enemyX, enemyY, towerX, towerY, radius, time, upgrade, target);
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

	if (enemy.x <= tower.x + radius && enemy.x >= tower.x - radius && enemy.y <= tower.y + radius && enemy.y >= tower.y - radius && enemy.x > 0 && enemy.x < SCREEN_WIDTH)
	{
		arkatzKoloreaEzarri(255, 255, 255);
		zuzenaMarraztu(tower.x, tower.y, enemy.x + 15, enemy.y + 30);
		arkatzKoloreaEzarri(255, 0, 0);
		if ((time % 500 >= 450 && time % 500 < 50) || time % 500 == 0) {
			zirkuluaMarraztu(bullet.x + 15, bullet.y + 30, 5);
			if (time % 100 == 0) damage = (1000 * (1 + upgrade / 10));
		}
	}
	pantailaBerriztu();

	return damage;
}

//Ataque de torre de mago
ACTION mageTowerTarget(float x, float y, float positionX, float positionY, int radius, int time, int upgrade, int target)
{
	POSIZIOA tower, enemy;
	ACTION action;
	enemy.x = x;
	enemy.y = y;
	tower.x = positionX;
	tower.y = positionY;
	action = hasieratuAction(0);

	if (enemy.x <= tower.x + radius && enemy.x >= tower.x - radius && enemy.y <= tower.y + radius && enemy.y >= tower.y - radius && enemy.x > 0 && enemy.x < SCREEN_WIDTH - 2)
	{
		arkatzKoloreaEzarri(255, 255, 255);
		zuzenaMarraztu(tower.x, tower.y, enemy.x + 15, enemy.y + 30);
		if ((time % 1000 >= 900 && time % 1000 < 50) || time % 1000 == 0) {
			arkatzKoloreaEzarri(0, 0, 255);
			if (time % 200 == 0) { action.damage[target] = (30 * (1 + upgrade / 10)); action.freeze[target] = 1; }
		}
	}
	pantailaBerriztu();

	return action;
}

//Ataque torre de bombardero
ACTION bomberTowerTarget(float x, float y, float positionX, float positionY, int radius, int time, int upgrade, int target)
{
	POSIZIOA tower, enemy, bullet;
	ACTION action;
	enemy.x = x;
	enemy.y = y;
	bullet.x = enemy.x;
	bullet.y = enemy.y;
	tower.x = positionX;
	tower.y = positionY;
	action = hasieratuAction(0);

	if (enemy.x <= tower.x + radius && enemy.x >= tower.x - radius && enemy.y <= tower.y + radius && enemy.y >= tower.y - radius && enemy.x > 0 && enemy.x < SCREEN_WIDTH - 2)
	{
		arkatzKoloreaEzarri(255, 255, 255);
		zuzenaMarraztu(tower.x, tower.y, enemy.x + 15, enemy.y + 30);
		arkatzKoloreaEzarri(255, 0, 0);

		if ((time % 1500 >= 1400 && time % 1500 < 50) || time % 1500 == 0) {
			zirkuluaMarraztu(bullet.x + 15, bullet.y + 30, 30);
			if (time % 300 == 0) {
				action.damage[target] = (60 * (1 + upgrade / 10));
				action.resource[target] = 30;
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
	if (time % 200 == 0) money = 3 + upgrade;
	return money;
}

//Muerte del enemigo, detectando la vida total
int enemyDeath(int lifeTotal)
{
	int death = 0;
	if (lifeTotal < 0) death = 1;
	return death;
}

OLATUAK stageDamage(OLATUAK olatuak, ACTION action, int enemy)
{
	olatuak.enemyLife[enemy] -= action.damage[enemy];
	olatuak.enemyFreeze[enemy] = action.freeze[enemy];
	if (action.resource[enemy] != 0) olatuak = areaDamage(action.resource[enemy], olatuak, enemy);
	return olatuak;
}

OLATUAK areaDamage(int area, OLATUAK olatuak, int enemy)
{
	int i;
	for (i = 0; i < 30; i++)
	{
		if (i != enemy) {
			if (olatuak.enemy[i].x >= (olatuak.enemy[enemy].x - area) && olatuak.enemy[i].x <= (olatuak.enemy[enemy].x + area) && olatuak.enemy[i].y >= (olatuak.enemy[enemy].y - area) && olatuak.enemy[i].y <= (olatuak.enemy[enemy].y + area)) {
				olatuak.enemyLife[i] -= 60;
			}
		}
	}
	return olatuak;
}