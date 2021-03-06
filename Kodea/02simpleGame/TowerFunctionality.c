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

// Dorreak sortu
ACTION towerAttack(float towerX, float towerY, int ebentu, float enemyX, float enemyY, int time, int upgrade, int tower, int target, ACTION action)
{
	int radius = 0;

	if (ebentu == 1) { // Archer tower
		radius = (140 * (1 + upgrade / 10));
		if (enemyX > towerX + radius || enemyX < towerX - radius || enemyY > towerY + radius || enemyY < towerY - radius && enemyX >= 0 && enemyX <= SCREEN_WIDTH) { action.target.tower[tower] = -1; }
		if (action.target.tower[tower] != -1) action.damage[target] = archerTowerTarget(enemyX, enemyY, towerX, towerY, radius, time, upgrade);
	}
	if (ebentu == 2) { // Mage tower
		radius = (110 * (1 + upgrade / 10));
		if (enemyX > towerX + radius || enemyX < towerX - radius || enemyY > towerY + radius || enemyY < towerY - radius && enemyX >= 0 && enemyX <= SCREEN_WIDTH) { action.target.tower[tower] = -1; }
		if (action.target.tower[tower] != -1) action = mageTowerTarget(enemyX, enemyY, towerX, towerY, radius, time, upgrade, target, action);
	}
	if (ebentu == 3) { // Bomber tower
		radius = (180 * (1 + upgrade / 10));
		if (enemyX > towerX + radius || enemyX < towerX - radius || enemyY > towerY + radius || enemyY < towerY - radius && enemyX >= 0 && enemyX <= SCREEN_WIDTH) { action.target.tower[tower] = -1; }
		if (action.target.tower[tower] != -1) action = bomberTowerTarget(enemyX, enemyY, towerX, towerY, radius, time, upgrade, target, action);
	}
	if (ebentu == 4) { // Mine
		action.money = mineRecolection(time, upgrade);
	}
	return action;
}

// Archer tower-en erasoa
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
	{// Etsaia dorrearen eremu barruan
		arkatzKoloreaEzarri(255, 255, 255);
		zuzenaMarraztu(tower.x, tower.y, enemy.x + 15, enemy.y + 30);
		arkatzKoloreaEzarri(255, 0, 0);
		if ((time % 500 >= 300 && time % 500 < 500) || time % 500 == 0) {
			zirkuluaMarraztu(bullet.x + 15, bullet.y + 30, 5);
			if (time % 500 == 0) { damage = (100 * (1 + upgrade / 10));
			}
		}
	}
	pantailaBerriztu();

	return damage;
}

// Mage tower-en erasoa
ACTION mageTowerTarget(float x, float y, float positionX, float positionY, int radius, int time, int upgrade, int target, ACTION action)
{
	POSIZIOA tower, enemy;
	enemy.x = x;
	enemy.y = y;
	tower.x = positionX;
	tower.y = positionY;

	if (enemy.x <= tower.x + radius && enemy.x >= tower.x - radius && enemy.y <= tower.y + radius && enemy.y >= tower.y - radius && enemy.x > 0 && enemy.x < SCREEN_WIDTH - 2)
	{// Etsaia dorrearen eremu barruan
		arkatzKoloreaEzarri(255, 255, 255);
		if ((time % 1000 >= 700 && time % 1000 < 1000) || time % 1000 == 0) {
			arkatzKoloreaEzarri(0, 0, 255);
			if (time % 1000 == 0) { 
				action.damage[target] = (30 * (1 + upgrade / 10)); action.freeze[target] = 1; }
		}
		zuzenaMarraztu(tower.x, tower.y, enemy.x + 15, enemy.y + 30);
	}
	pantailaBerriztu();

	return action;
}

// Bomber tower-en erasoa
ACTION bomberTowerTarget(float x, float y, float positionX, float positionY, int radius, int time, int upgrade, int target, ACTION action)
{
	POSIZIOA tower, enemy, bullet;
	enemy.x = x;
	enemy.y = y;
	bullet.x = enemy.x;
	bullet.y = enemy.y;
	tower.x = positionX;
	tower.y = positionY;

	if (enemy.x <= tower.x + radius && enemy.x >= tower.x - radius && enemy.y <= tower.y + radius && enemy.y >= tower.y - radius && enemy.x > 0 && enemy.x < SCREEN_WIDTH - 2)
	{// Etsaia dorrearen eremu barruan
		arkatzKoloreaEzarri(255, 255, 255);
		zuzenaMarraztu(tower.x, tower.y, enemy.x + 15, enemy.y + 30);
		arkatzKoloreaEzarri(255, 0, 0);

		if ((time % 1500 >= 1200 && time % 1500 < 1500) || time % 1500 == 0) {
			zirkuluaMarraztu(bullet.x + 15, bullet.y + 30, 30);
			if (time % 1500 == 0) {
				action.damage[target] = (60 * (1 + upgrade / 10));
				action.resource[target] = 30;
			}
		}
	}
	pantailaBerriztu();

	return action;
}

// Mine dorrearen rekolekzioa
int mineRecolection(int time, int upgrade)
{
	int money = 0;
	if (time % 2000 == 0) money = 3 + upgrade; // Diru kantitate bat lortu
	return money;
}

// Etsaia bizirik dagoen detektatu
int enemyDeath(int lifeTotal)
{
	int death = 0;
	if (lifeTotal <= 0) death = 1;
	return death;
}
// Dorreen erasoak etsaiei aplikatu
OLATUAK stageDamage(OLATUAK olatuak, ACTION action, int enemy)
{
	olatuak.enemyLife[enemy] -= action.damage[enemy];
	olatuak.enemyFreeze[enemy] = action.freeze[enemy];
	if (action.resource[enemy] != 0) olatuak = areaDamage(action.resource[enemy], olatuak, enemy);
	return olatuak;
}
// Eremu batean eraso
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
// Etsaia gelditu
FROZEN freeze(FROZEN frozen)
{
	frozen.stop = 1;
	frozen.kont++;
	if (frozen.kont == 500) { 
		frozen.stop = 0; frozen.kont = 0; }
	return frozen;
}