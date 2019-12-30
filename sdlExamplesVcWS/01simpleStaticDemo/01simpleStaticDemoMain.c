#include "graphics.h"
#include "ebentoak.h"
#include "soinua.h"
#include "text.h"
#include "imagen.h"
#include <stdio.h>
#include <windows.h>
#include <math.h>

//Base del juego
int hasieratu(void);
//Fondo del juego
void backgroundCreate(void);
//Creación de las torres
int towerCreate(int posX, int posY, int ebentu, int enemyX, int enemyY, int time);
int buildArcherTower(int posX, int posY);
int buildMageTower(int posX, int posY);
int buildBomberTower(int posX, int posY);
int buildMiningTower(int posX, int posY);
//Targeting de las torres
int archerTowerTarget(int x, int y, int positionX, int positionY, int radius, int time);
//Muerte de enemigo
int enemyDeath(int lifeTotal);


int main(int argc, char * str[]) 
{
	int ebentu = 0, irten = 0, mugitu = 0, tmp = 0, changer = 0, action = 0, lifeTotal = 100;
	int tower = 0, time = 0, towerRadius = 0, towerRadiusTmp = 0;
	POSIZIOA enemyPos,towerPos;
	
	//Hasierako beharrezko putuak ezarri
	hasieratu();
	enemyPos.x = 10;
	enemyPos.y = SCREEN_HEIGHT * 2 / 3;
	towerPos.x = SCREEN_WIDTH / 2;
	towerPos.y = SCREEN_HEIGHT * 2 / 3 - 50;
	arkatzKoloreaEzarri(255, 255, 255);
	
	while(irten == 0)
	{
		Sleep(2);
		//Denbora kontagailua
		if (time > 1000) { time = 0; }
		time++;

		//Dorre mota ezarri eta programa dorre mota hau gogoratu
		ebentu = ebentuaJasoGertatuBada();
		tower = ebentu;
		if (tower != TECLA_1 && tower != TECLA_2 && tower != TECLA_3 && tower != TECLA_4) { tower = tmp; }
		tmp = tower;
		
		//Hasieratu, berriztu eta amaitu
		if (ebentu == TECLA_ESCAPE) irten = 1;
		if (ebentu == TECLA_RETURN && mugitu == 0) mugitu = 1;
		if (ebentu == TECLA_r) lifeTotal = 200;
		
		//Dorre motak eta haien akzioak
		action = towerCreate(towerPos.x, towerPos.y, tower, enemyPos.x, enemyPos.y, time);
		
		//Bolaren mugimendua
		arkatzKoloreaEzarri(255, 255, 255);
		if (mugitu == 1 && !enemyDeath(lifeTotal)) { //Eskuineko mugimendua
			zirkuluaMarraztu(enemyPos.x, enemyPos.y, 10);
			enemyPos.x += 1;
			if (enemyPos.x == SCREEN_WIDTH) mugitu = 2;
		}
		if (mugitu == 2 && !enemyDeath(lifeTotal)) { //Ezkerreko mugimendua
			zirkuluaMarraztu(enemyPos.x, enemyPos.y, 10);
			enemyPos.x -= 1;
			if (enemyPos.x == 0) mugitu = 1;
		}
		//Etsaia hasierako puntura bidali
		if (enemyDeath(lifeTotal)) { enemyPos.x = 0; enemyPos.y = towerPos.y + 50; }

		if (tower != 0 && !enemyDeath(lifeTotal)) { //Etsaiaren bizitza murriztu
			lifeTotal -= action;
		}
		backgroundCreate();

		pantailaBerriztu();
		pantailaGarbitu();
	}
	return 0;
}

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

void backgroundCreate(void) //Jokoaren atzealdea sortu
{
	textuaIdatzi(10, 20, "Pruebas");
	arkatzKoloreaEzarri(255, 255, 255);
	zirkuluaMarraztu(SCREEN_WIDTH / 2, SCREEN_HEIGHT * 2 / 3 - 50, 5);
	zuzenaMarraztu(0, SCREEN_HEIGHT * 2 / 3, SCREEN_WIDTH, SCREEN_HEIGHT * 2 / 3);
	pantailaBerriztu();
}

int towerCreate(int posX, int posY, int ebentu, int enemyX, int enemyY, int time) //Dorreak sortu
{
	int tower = 0, radius = 0, action = 0;

	if (ebentu == TECLA_1) {
		radius = buildArcherTower(posX, posY);
		action = archerTowerTarget(enemyX, enemyY, posX, posY, radius, time);
	}
	if (ebentu == TECLA_2) {
		radius = buildMageTower(posX, posY);
	}
	if (ebentu == TECLA_3) {
		radius = buildBomberTower(posX, posY);
	}
	if (ebentu == TECLA_4) {
		radius = buildMiningTower(posX, posY);
	}
	return action;
}

int buildArcherTower(int posX, int posY) //Torre de arquero
{
	arkatzKoloreaEzarri(0, 50, 50);
	zirkuluaMarraztu(posX, posY, 105);
	pantailaBerriztu();
	return 105;
}

int archerTowerTarget(int x, int y, int positionX, int positionY, int radius, int time) //Ataque de torre de arquero
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

		zuzenaMarraztu(positionX, positionY, x, y);
		arkatzKoloreaEzarri(255, 0, 0);
		if ((time % 150 >= 145 && time % 150 < 150) || (time % 150 > 0 && time % 150 <= 5) || time % 150 == 0) {
			zirkuluaMarraztu(bullet.x, bullet.y, 4);
			if (time % 150 == 0) damage = 100;
		}
	}
	pantailaBerriztu();

	return damage;
}

int buildMageTower(int posX, int posY) //Torre de mago
{
	arkatzKoloreaEzarri(100, 0, 100);
	zirkuluaMarraztu(posX, posY, 75);
	pantailaBerriztu();
	return 75;
}

int buildBomberTower(int posX, int posY) //Torre de bombardero
{
	arkatzKoloreaEzarri(150, 150, 0);
	zirkuluaMarraztu(posX, posY, 150);
	pantailaBerriztu();
	return 150;
}

int buildMiningTower(int posX, int posY) //Mina de recursos
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