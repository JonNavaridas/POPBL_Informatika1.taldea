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
void backgroundCreate(void);
//Creación de las torres
int towerCreate(int posX, int posY, int ebentu);
int buildArcherTower(int posX, int posY);
int buildMageTower(int posX, int posY);
int buildBomberTower(int posX, int posY);
int buildMiningTower(int posX, int posY);
//Targeting de las torres
int towerTarget(int x, int y, int positionX, int positionY, int radius, int time);
POSIZIOA diferentziaPos(POSIZIOA posTower, POSIZIOA posEnemy);


int main(int argc, char * str[]) 
{
	int ebentu = 0, irten = 0, mugitu = 0, tmp = 0;
	int tower = 0, time = 0, towerRadius = 0, towerRadiusTmp = 0;
	POSIZIOA enemyPos,towerPos;
	 
	hasieratu();
	enemyPos.x = 10;
	enemyPos.y = SCREEN_HEIGHT * 2 / 3;
	towerPos.x = SCREEN_WIDTH / 2;
	towerPos.y = SCREEN_HEIGHT * 2 / 3 - 50;
	arkatzKoloreaEzarri(255, 255, 255);
	
	while(irten == 0)
	{
		Sleep(5);
		time++;
		ebentu = ebentuaJasoGertatuBada();
		tower = ebentu;
		if (tower != TECLA_1 && tower != TECLA_2 && tower != TECLA_3 && tower != TECLA_4) { tower = tmp; towerRadiusTmp = 0; }
		tmp = tower;
		
		//Hasieratu eta amaitu
		if (ebentu == TECLA_ESCAPE) irten = 1;
		if (ebentu == TECLA_RETURN && mugitu == 0) mugitu = 1;
		
		//Dorre motak
		towerRadius = towerRadiusTmp;
		if (towerRadius == 0) { towerRadius = towerCreate(towerPos.x, towerPos.y, tower); }
		towerRadiusTmp = towerRadius;
		backgroundCreate();
		
		//Bolaren mugimendua
		arkatzKoloreaEzarri(255, 255, 255);
		if (mugitu == 1) {
			zirkuluaMarraztu(enemyPos.x, enemyPos.y, 10);
			enemyPos.x += 1;
			if (enemyPos.x == SCREEN_WIDTH) mugitu = 2;
		}
		if (mugitu == 2) {
			zirkuluaMarraztu(enemyPos.x, enemyPos.y, 10);
			enemyPos.x -= 1;
			if (enemyPos.x == 0) mugitu = 1;
		}

		if (tower != 0) towerTarget(enemyPos.x, enemyPos.y, towerPos.x, towerPos.y, towerRadius, time);
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

void backgroundCreate(void)
{
	textuaIdatzi(10, 20, "Pruebas");
	arkatzKoloreaEzarri(255, 255, 255);
	zirkuluaMarraztu(SCREEN_WIDTH / 2, SCREEN_HEIGHT * 2 / 3 - 50, 5);
	zuzenaMarraztu(0, SCREEN_HEIGHT * 2 / 3, SCREEN_WIDTH, SCREEN_HEIGHT * 2 / 3);
	pantailaBerriztu();
}

int towerCreate(int posX, int posY, int ebentu)
{
	int tower = 0, radius = 0;

	if (ebentu == TECLA_1 || tower == 1) {
		radius = buildArcherTower(posX, posY);
		tower = 1;
	}
	if (ebentu == TECLA_2 || tower == 2) {
		radius = buildMageTower(posX, posY);
		tower = 2;
	}
	if (ebentu == TECLA_3 || tower == 3) {
		radius = buildBomberTower(posX, posY);
		tower = 3;
	}
	if (ebentu == TECLA_4 || tower == 4) {
		radius = buildMiningTower(posX, posY);
		tower = 4;
	}
	return radius;
}

int buildArcherTower(int posX, int posY)
{
	arkatzKoloreaEzarri(0, 50, 50);
	zirkuluaMarraztu(posX, posY, 105);
	pantailaBerriztu();
	return 105;
}

int buildMageTower(int posX, int posY)
{
	arkatzKoloreaEzarri(100, 0, 100);
	zirkuluaMarraztu(posX, posY, 75);
	pantailaBerriztu();
	return 75;
}

int buildBomberTower(int posX, int posY)
{
	arkatzKoloreaEzarri(150, 150, 0);
	zirkuluaMarraztu(posX, posY, 150);
	pantailaBerriztu();
	return 150;
}

int buildMiningTower(int posX, int posY)
{
	arkatzKoloreaEzarri(200, 200, 200);
	zirkuluaMarraztu(posX, posY, 20);
	pantailaBerriztu();
	return 20;
}

int towerTarget(int x, int y, int positionX, int positionY, int radius, int time)
{
	POSIZIOA dif, tower, enemy, bullet;
	tower.x = positionX;
	tower.y = positionY;
	enemy.x = x;
	enemy.y = y;
	bullet.x = tower.x;
	bullet.y = tower.y;

	if (enemy.x <= tower.x + radius && enemy.x >= tower.x - radius && enemy.y <= tower.y + radius && enemy.y >= tower.y - radius)
	{
		zuzenaMarraztu(positionX, positionY, x, y);
		arkatzKoloreaEzarri(0, 0, 0);
		dif = diferentziaPos(tower, enemy);
		bullet.x += dif.x;
		bullet.y += dif.y;
		zirkuluaMarraztu(bullet.x, bullet.y, 2);
	}
	pantailaBerriztu();

	return 0;
}

POSIZIOA diferentziaPos(POSIZIOA posTower, POSIZIOA posEnemy)
{
	POSIZIOA diferentzia;
	diferentzia.x = posTower.x - posEnemy.x;
	diferentzia.y = posTower.y - posEnemy.y;
	return diferentzia;
}