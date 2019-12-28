#include "graphics.h"
#include "ebentoak.h"
#include "soinua.h"
#include "text.h"
#include "imagen.h"
#include <stdio.h>
#include <windows.h>
#include <math.h>

int hasieratu(void);

int main(int argc, char * str[]) 
{
	int ebentu = 0, irten = 0, mugitu = 0, tmp = 0;
	int tower = 0, time = 0, towerRadius;
	POSIZIOA pos;
	 
	hasieratu();
	pos.x = 10;
	pos.y = SCREEN_HEIGHT * 2 / 3 - 50;
	arkatzKoloreaEzarri(255, 255, 255);
	
	while(irten == 0)
	{
		Sleep(1);
		ebentu = ebentuaJasoGertatuBada();
		tower = ebentu;
		if (tower != TECLA_1 && tower != TECLA_2 && tower != TECLA_3 && tower != TECLA_4) { tower = tmp; }
		tmp = tower;
		
		//Hasieratu eta amaitu
		if (ebentu == TECLA_ESCAPE) irten = 1;
		if (ebentu == TECLA_RETURN && mugitu == 0) mugitu = 1;
		
		//Dorre motak
		towerRadius = towerCreate(SCREEN_WIDTH / 2, SCREEN_HEIGHT * 2 / 3 - 50, tower, time);
		backgroundCreate();
		
		//Bolaren mugimendua
		arkatzKoloreaEzarri(255, 255, 255);
		if (mugitu == 1) {
			zirkuluaMarraztu(pos.x, pos.y + 50, 10);
			pos.x += 1;
			if (pos.x == SCREEN_WIDTH) mugitu = 2;
		}
		if (mugitu == 2) {
			zirkuluaMarraztu(pos.x, pos.y + 50, 10);
			pos.x -= 1;
			if (pos.x == 0) mugitu = 1;
		}

		towerTarget(pos.x, pos.y, SCREEN_WIDTH / 2, SCREEN_HEIGHT * 2 / 3 - 100, towerRadius);
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

int backgroundCreate(void)
{
	textuaIdatzi(10, 20, "Pruebas");
	arkatzKoloreaEzarri(255, 255, 255);
	zirkuluaMarraztu(SCREEN_WIDTH / 2, SCREEN_HEIGHT * 2 / 3 - 50, 5);
	zuzenaMarraztu(0, SCREEN_HEIGHT * 2 / 3, SCREEN_WIDTH, SCREEN_HEIGHT * 2 / 3);
	pantailaBerriztu();

	return 0;
}

int towerCreate(int posX, int posY, int ebentu, int time)
{
	int tower = 0;

	if (ebentu == TECLA_1 || tower == 1) {
		buildArcherTower(posX, posY, time);
		tower = 1;
	}
	if (ebentu == TECLA_2 || tower == 2) {
		buildMageTower(posX, posY, time);
		tower = 2;
	}
	if (ebentu == TECLA_3 || tower == 3) {
		buildBomberTower(posX, posY, time);
		tower = 3;
	}
	if (ebentu == TECLA_4 || tower == 4) {
		buildMiningTower(posX, posY, time);
		tower = 4;
	}
	return 0;
}

int buildArcherTower(int posX, int posY, int time)
{
	arkatzKoloreaEzarri(0, 50, 50);
	zirkuluaMarraztu(posX, posY, 105);
	pantailaBerriztu();
	return 105;
}

int buildMageTower(int posX, int posY, int time)
{
	arkatzKoloreaEzarri(100, 0, 100);
	zirkuluaMarraztu(posX, posY, 75);
	pantailaBerriztu();
	return 75;
}

int buildBomberTower(int posX, int posY, int time)
{
	arkatzKoloreaEzarri(150, 150, 0);
	zirkuluaMarraztu(posX, posY, 150);
	pantailaBerriztu();
	return 150;
}

int buildMiningTower(int posX, int posY, int time)
{
	arkatzKoloreaEzarri(200, 200, 200);
	zirkuluaMarraztu(posX, posY, 20);
	pantailaBerriztu();
	return 20;
}

int towerTarget(int x, int y, int positionX, int positionY, int radius)
{
	POSIZIOA div, tower, enemy;
	tower.x = positionX;
	tower.y = positionY;
	enemy.x = x;
	enemy.y = y;

	//div = projectileTrajectory(tower, enemy);
	if (x <= positionX + radius && x >= positionX - radius && y <= positionY + radius && y >= positionY - radius)
	{
		zuzenaMarraztu(positionX, positionY, x, y);
		if ((positionX + div.x) != x && (positionY + div.y) != y) {
			zirkuluaMarraztu(positionX + div.x, positionY + div.y, 5);
		}
	}
	pantailaBerriztu();

	return 0;
}

/*POSIZIOA projectileTrajectory(POSIZIOA posTower, POSIZIOA posEnemy)
{
	POSIZIOA diferentzia;
	diferentzia.x = 1;
	diferentzia.y = 1;

	return diferentzia;
}*/