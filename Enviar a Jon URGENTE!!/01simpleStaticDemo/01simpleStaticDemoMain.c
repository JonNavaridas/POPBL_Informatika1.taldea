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

int main(int argc, char* str[])
{
	int ebentu = 0, irten = 0, mugitu = 0, money = 10000, changer = 0, lifeTotal = 100, stop = 0;
	int tower = 0, time = 0, towerRadius = 0, towerRadiusTmp = 0, timer = 0, on = 0, id = 0, id2 = 0;
	POSIZIOA enemyPos, towerPos;
	TOWER_STRUCTURE structure;
	ACTION action;
	AREA towerPlace;

	//Hasierako beharrezko putuak ezarri
	hasieratu();
	enemyPos.x = 10;
	enemyPos.y = SCREEN_HEIGHT * 2 / 3;
	towerPos.x = SCREEN_WIDTH / 2;
	towerPos.y = SCREEN_HEIGHT * 2 / 3 - 50;
	towerPlace = hasieratuAreak();
	structure = hasieratuEstruktura();
	arkatzKoloreaEzarri(255, 255, 255);
	
	id = irudiaKargatu(BACKGROUND);
	irudiaMugitu(id, 0, 0);

	while (irten == 0)
	{
        irudiakMarraztu();
		//Denbora kontagailua (Importante, pero no es algo propio)
		if (time == 1000) { time = 0; }
		time++;

		//Hasieratu, berriztu eta amaitu (No necesario)
		ebentu = checkEbentu();
		if (ebentu == TECLA_ESCAPE) {
			irten = 1;
		}

		structure = towerBuild(towerPlace, structure, money, time, ebentu);
		//Congelar al enemigo
		//if (action.freeze == 1) stop = 1;
		if (stop == 1) {
			timer++;
			if (timer == 25 + (20 * structure.upgrade.tower1)) { stop = 0; timer = 0; }
		}
		//Daño en area
		if (tower == TECLA_3 && enemyPos.x <= enemyPos.x + action.resource && enemyPos.x > enemyPos.x - action.resource && enemyPos.y < enemyPos.y + action.resource && enemyPos.y > enemyPos.y - action.resource)
		{//El enemyPos del primer if sera el enemigo que la torre este targeteando
			if (enemyPos.x != enemyPos.x && enemyPos.y != enemyPos.y) lifeTotal -= action.damage;
		}//El segundo if sirve para que la torre no haga el doble del daño al que esta targeteando

		//Etsaiaren bizitza murriztu (IMPORTANTE, pero hay que implementarlo dentro de los enemigos)
		if (tower != 0 && !enemyDeath(lifeTotal)) {
			lifeTotal -= action.damage;
		}
		pantailaBerriztu();
        pantailaGarbitu();
    }
	return 0;
}