#define _CRT_SECURE_NO_WARNINGS
#include "CC_Game.h"
#include "imagen.h"
#include "graphics.h"
#include "ebentoak.h"
#include "soinua.h"
#include "text.h"
#include <stdio.h>
#include <windows.h>
#include "olatuak.h"
#include "hasieratu.h"
#include "TowerBuild.h"
#include "TowerFunctionality.h"

int jokoaAurkeztu(void)
{
	int ebentu = 0, idFONDOINICIO;
	idFONDOINICIO = HASIERA_irudiaBistaratu();

	do
	{
		ebentu = ebentuaJasoGertatuBada();
	} while (ebentu != SAGU_BOTOIA_EZKERRA && ebentu != TECLA_ESCAPE);

	pantailaGarbitu();
	irudiaKendu(idFONDOINICIO);
	pantailaBerriztu();
	return ebentu;
}

void kredituak()
{
	int ebentu = 0, idFONDO;

	idFONDO = irudiaKargatu(CREDITOS);
	irudiaMugitu(idFONDO, 0, 0);
	irudiakMarraztu();
	pantailaBerriztu();

	do
	{
		ebentu = ebentuaJasoGertatuBada();
	} while (ebentu != TECLA_RETURN && ebentu != TECLA_ESCAPE);

	pantailaGarbitu();
	irudiaKendu(idFONDO);
	pantailaBerriztu();
}

void howto()
{
	int ebentu = 0, idFONDO1, idFONDO2, idFONDO3, idFONDO4;

	idFONDO1 = irudiaKargatu(HOWTO_1);
	irudiaMugitu(idFONDO1, 0, 0);
	irudiakMarraztu();
	pantailaBerriztu();

	do
	{
		ebentu = ebentuaJasoGertatuBada();
	} while (ebentu != SAGU_BOTOIA_EZKERRA && ebentu != TECLA_RETURN);

	pantailaGarbitu();
	irudiaKendu(idFONDO1);
	pantailaBerriztu();

	idFONDO2 = irudiaKargatu(HOWTO_2);
	irudiaMugitu(idFONDO2, 0, 0);
	irudiakMarraztu();
	pantailaBerriztu();

	do
	{
		ebentu = ebentuaJasoGertatuBada();
	} while (ebentu != SAGU_BOTOIA_EZKERRA && ebentu != TECLA_RETURN);

	pantailaGarbitu();
	irudiaKendu(idFONDO2);
	pantailaBerriztu();

	idFONDO3 = irudiaKargatu(HOWTO_3);
	irudiaMugitu(idFONDO3, 0, 0);
	irudiakMarraztu();
	pantailaBerriztu();

	do
	{
		ebentu = ebentuaJasoGertatuBada();
	} while (ebentu != SAGU_BOTOIA_EZKERRA && ebentu != TECLA_RETURN);

	pantailaGarbitu();
	irudiaKendu(idFONDO3);
	pantailaBerriztu();

	idFONDO4 = irudiaKargatu(HOWTO_4);
	irudiaMugitu(idFONDO4, 0, 0);
	irudiakMarraztu();
	pantailaBerriztu();

	do
	{
		ebentu = ebentuaJasoGertatuBada();
	} while (ebentu != SAGU_BOTOIA_EZKERRA && ebentu != TECLA_RETURN);

	pantailaGarbitu();
	irudiaKendu(idFONDO4);
	pantailaBerriztu();
}


EGOERA jokatu1(void)
{
	int mugitu = 0, ebentu = 0, defensa = 0;
	int lifeTotal = 2000, idVida = -1, idMoney = -1;
	EGOERA  egoera = JOLASTEN;
	OLATUAK olatuak;
	TOWER_STRUCTURE structure;
	structure = hasieratuEstruktura();
	olatuak = hasieratuOlatuak();

	textuaGaitu();
	audioInit();
	loadTheMusic(JOKOA_SOUND);
	playMusic();

	idVida = irudiaKargatu(HEART);
	irudiaMugitu(idVida, 900, 50);
	idMoney = irudiaKargatu(MONEY);
	irudiaMugitu(idMoney, 900, 80);

	do {
		irudiakMarraztu();
		pantailaBerriztu();

		ebentu = checkEbentu(lifeTotal, structure.money);
		if (ebentu == TECLA_RETURN) olatuak.defentsa = 1;
        if (olatuak.defentsa == 1)
        {
            olatuak = etsaiak(olatuak, ebentu, structure, lifeTotal, structure.money);
            structure.money = olatuak.money;
        }
		lifeTotal = olatuak.damage;

		structure = towerBuild(structure, olatuak.kont, ebentu, olatuak.enemy);
		egoera = JOKOA_egoera(olatuak.kont, lifeTotal);
		if (ebentu == TECLA_ESCAPE) egoera = ATERA;
		if (egoera != JOLASTEN) { etsaiIrudiakKendu(olatuak); }

	} while (egoera == JOLASTEN);

	irudiaKendu(idVida);
	irudiaKendu(idMoney);
	toggleMusic();
	audioTerminate();
	pantailaGarbitu();
	pantailaBerriztu();
	return egoera;
}

EGOERA JOKOA_egoera(int kont1, int lifeTotal) {
	EGOERA  ret = JOLASTEN;

	if (kont1 == 140000) {
		ret = IRABAZI;
	}
	else if (lifeTotal <= 0) {
		ret = GALDU;
	}
	return ret;
}

int JOKOA_jokalariaIrudiaSortu(int pepinoId)
{
	pepinoId = irudiaKargatu(JOKOA_PLAYER_IMAGE);
	irudiaMugitu(pepinoId, -70000, 650);
	pantailaGarbitu();
	irudiakMarraztu();
	pantailaBerriztu();
	return pepinoId;
}

int JOKOA_jokalaria2IrudiaSortu(int pepinacoId)
{
	pepinacoId = irudiaKargatu(JOKOA_PLAYER_IMAGE2);
	irudiaMugitu(pepinacoId, -20000, 650);
	pantailaGarbitu();
	irudiakMarraztu();
	pantailaBerriztu();
	return pepinacoId;
}

int JOKOA_jokalaria3IrudiaSortu(int rapinilloId)
{
	rapinilloId = irudiaKargatu(JOKOA_PLAYER_IMAGE3);
	irudiaMugitu(rapinilloId, -10000, 670);
	pantailaGarbitu();
	irudiakMarraztu();
	pantailaBerriztu();
	return rapinilloId;
}

POSIZIOA ERREALITATE_FISIKOA_mugimendua(POSIZIOA posizioa) {
	posizioa.y = posizioa.y - 0.25;
	posizioa.x = posizioa.x + 0.25;
	return posizioa;
}

POSIZIOA ERREALITATE_FISIKOA2_mugimendua(POSIZIOA posizioa) {
	posizioa.y = posizioa.y + 0.25;
	posizioa.x = posizioa.x;
	return posizioa;
}


POSIZIOA ERREALITATE_FISIKOA3_mugimendua(POSIZIOA posizioa) {
	posizioa.y = posizioa.y - 0.5;
	posizioa.x = posizioa.x + 0.5;
	return posizioa;
}

POSIZIOA ERREALITATE_FISIKOA4_mugimendua(POSIZIOA posizioa) {
	posizioa.y = posizioa.y + 0.5;
	posizioa.x = posizioa.x;
	return posizioa;
}

POSIZIOA ERREALITATE_FISIKOA5_mugimendua(POSIZIOA posizioa) {
	posizioa.y = posizioa.y - 0.125;
	posizioa.x = posizioa.x + 0.125;
	return posizioa;
}

POSIZIOA ERREALITATE_FISIKOA6_mugimendua(POSIZIOA posizioa) {
	posizioa.y = posizioa.y + 0.125;
	posizioa.x = posizioa.x;
	return posizioa;
}

void  jokoAmaierakoa1(EGOERA egoera)
{
	int ebentu = 0, id = -1;
	int idAudioGame;

	if (egoera == IRABAZI)
	{
		idAudioGame = loadSound(JOKOA_SOUND_WIN);
		playSound(idAudioGame);
		id = irudiaKargatu(IMG_IRABAZI);
		irudiaMugitu(id, 0, 0);
		pantailaGarbitu();
		irudiakMarraztu();
		pantailaBerriztu();
	}
	else if (egoera == GALDU)
	{
		idAudioGame = loadSound(JOKOA_SOUND_LOOSE);
		playSound(idAudioGame);
		id = irudiaKargatu(IMG_GALDU);
		irudiaMugitu(id, 0, 0);
		pantailaGarbitu();
		irudiakMarraztu();
		pantailaBerriztu();
	}
	do
	{
		ebentu = ebentuaJasoGertatuBada();
	} while (ebentu != TECLA_RETURN && ebentu != TECLA_ESCAPE && egoera != ATERA);
	soundsUnload();
	irudiaKendu(id);
}

int HASIERA_irudiaBistaratu()
{
	int id = -1;
	id = irudiaKargatu(FONDO_INCIO);
	irudiaMugitu(id, 0, 0);
	irudiakMarraztu();
	pantailaBerriztu();
	return id;
}

int FONDOA_irudiaBistaratu() {
	int fondo = -1;
	fondo = irudiaKargatu(BACKGROUND_IMAGE);
	irudiaMugitu(fondo, 0, 0);
	pantailaGarbitu();
	irudiakMarraztu();
	pantailaBerriztu();
	return fondo;
}

void kontagailua(int kont, int Posx, int Posy)
{
	int i = kont;
	char str1[50];
	sprintf(str1, "%d", i);
	textuaIdatzi(Posx, Posy, str1);
}

POSIZIOA inicializarAuxiliares(void)
{
	POSIZIOA aux;

	aux.x = 0;
	aux.y = 0;

	return aux;
}