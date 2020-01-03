#include "TowerFunctionality.h"
#include "graphics.h"
#include "ebentoak.h"
#include "soinua.h"
#include "text.h"
#include "imagen.h"
#include "OurTypes.h"
#include <stdio.h>
#include <windows.h>

int main(int argc, char * str[]) 
{
	int ebentu = 0, irten = 0, mugitu = 0, tmp = 0, changer = 0, lifeTotal = 100, stop = 0;
	int tower = 0, time = 0, towerRadius = 0, towerRadiusTmp = 0, timer = 0;
	float upgrade = 0;
	POSIZIOA enemyPos,towerPos;
	ACTION action;
	
	//Hasierako beharrezko putuak ezarri
	hasieratu();
	enemyPos.x = 10;
	enemyPos.y = SCREEN_HEIGHT * 2 / 3;
	towerPos.x = SCREEN_WIDTH / 2;
	towerPos.y = SCREEN_HEIGHT * 2 / 3 - 50;
	arkatzKoloreaEzarri(255, 255, 255);
	
	while (irten == 0)
	{
		Sleep(32);
		//Denbora kontagailua (Importante, pero no es algo propio)
		if (time == 1000) { time = 0; }
		time++;

		//Dorre mota ezarri eta programa dorre mota hau gogoratu (Necesario, pero no propio)
		ebentu = ebentuaJasoGertatuBada();
		tower = ebentu;
		if (tower != TECLA_1 && tower != TECLA_2 && tower != TECLA_3 && tower != TECLA_4) { tower = tmp; }
		if (tower != tmp) upgrade = 0;
		tmp = tower;

		//Hasieratu, berriztu eta amaitu (No necesario)
		if (ebentu == TECLA_ESCAPE) irten = 1;
		if (ebentu == TECLA_RETURN && mugitu == 0) mugitu = 1;
		if (ebentu == TECLA_r) lifeTotal = 200;
		if (ebentu == TECLA_u && upgrade < 2) upgrade++;

		//Dorre motak eta haien akzioak (IMPORTANTE)
		action = towerCreate(towerPos.x, towerPos.y, tower, enemyPos.x, enemyPos.y, time, upgrade);

		//Congelar al enemigo
		if (action.freeze == 1) stop = 1;
		if (stop == 1) {
			timer++;
			if (timer == 100 + (20 * upgrade)) { stop = 0; timer = 0; }
		}
		//Daño en area
		if (tower == TECLA_3 && enemyPos.x <= enemyPos.x + action.resource && enemyPos.x > enemyPos.x - action.resource && enemyPos.y < enemyPos.y + action.resource && enemyPos.y > enemyPos.y - action.resource)
		{//El enemyPos del primer if sera el enemigo que la torre este targeteando
			if (enemyPos.x != enemyPos.x && enemyPos.y != enemyPos.y) lifeTotal -= action.damage;
		}//El segundo if sirve para que la torre no haga el doble del daño al que esta targeteando

		//Bolaren mugimendua (No necesario, solo la parte de freeze)
		arkatzKoloreaEzarri(255, 255, 255);
		if (mugitu == 1 && !enemyDeath(lifeTotal)) { //Eskuineko mugimendua
			zirkuluaMarraztu(enemyPos.x, enemyPos.y, 10);
			if (stop == 0) enemyPos.x += 2;
			if (enemyPos.x >= SCREEN_WIDTH) mugitu = 2;
		}
		if (mugitu == 2 && !enemyDeath(lifeTotal)) { //Ezkerreko mugimendua
			zirkuluaMarraztu(enemyPos.x, enemyPos.y, 10);
			if (stop == 0) enemyPos.x -= 2;
			if (enemyPos.x <= 0) mugitu = 1;
		}
		//Etsaia hasierako puntura bidali (No necesario)
		if (enemyDeath(lifeTotal)) { enemyPos.x = 1; enemyPos.y = towerPos.y + 50; }

		//Etsaiaren bizitza murriztu (IMPORTANTE, pero hay que implementarlo dentro de los enemigos)
		if (tower != 0 && !enemyDeath(lifeTotal)) {
			lifeTotal -= action.damage;
		}
		backgroundCreate();

		pantailaBerriztu();
		pantailaGarbitu();
	}
	return 0;
}