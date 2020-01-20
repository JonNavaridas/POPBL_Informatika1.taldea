
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
    //Hasierako menuaren argazkia jarri
	int ebentu = 0, idFONDOINICIO;
	idFONDOINICIO = HASIERA_irudiaBistaratu();
   // Ebentu baten zain egon
	do
	{
		ebentu = ebentuaJasoGertatuBada();
	} while (ebentu != SAGU_BOTOIA_EZKERRA && ebentu != TECLA_ESCAPE);
    //Hasierako menuaren irudia kendu
	pantailaGarbitu();
	irudiaKendu(idFONDOINICIO);
	pantailaBerriztu();
	return ebentu;
}

void kredituak()
{
	int ebentu = 0, idFONDO;
    //kredituen menuaren argazkia jarri
	idFONDO = irudiaKargatu(CREDITOS);
	irudiaMugitu(idFONDO, 0, 0);
	irudiakMarraztu();
	pantailaBerriztu();
    //ebentu baten zain egon
	do
	{
		ebentu = ebentuaJasoGertatuBada();
	} while (ebentu != TECLA_RETURN && ebentu != TECLA_ESCAPE);
    //Kredituen irudia kendu
	pantailaGarbitu();
	irudiaKendu(idFONDO);
	pantailaBerriztu();
}

void howto()
{// Irudi guztiak berdin funtzionatzen dute
	int ebentu = 0, idFONDO1, idFONDO2, idFONDO3, idFONDO4;
    // "How-to" pantailaren lehenengo irudia jarri
	idFONDO1 = irudiaKargatu(HOWTO_1);
	irudiaMugitu(idFONDO1, 0, 0);
	irudiakMarraztu();
	pantailaBerriztu();
    //Ebentu baten zain egon
	do
	{
		ebentu = ebentuaJasoGertatuBada();
	} while (ebentu != SAGU_BOTOIA_EZKERRA && ebentu != TECLA_RETURN);
    // lehenengo irudia kendu
	pantailaGarbitu();
	irudiaKendu(idFONDO1);
	pantailaBerriztu();
    // bigarren irudia jarri
	idFONDO2 = irudiaKargatu(HOWTO_2);
	irudiaMugitu(idFONDO2, 0, 0);
	irudiakMarraztu();
	pantailaBerriztu();
    //ebentu baten zain egon
	do
	{
		ebentu = ebentuaJasoGertatuBada();
	} while (ebentu != SAGU_BOTOIA_EZKERRA && ebentu != TECLA_RETURN);
    //bigarren irudia kendu
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
	int lifeTotal = 20, idVida = -1, idMoney = -1;
	EGOERA  egoera = JOLASTEN;
	OLATUAK olatuak;
	TOWER_STRUCTURE structure;
    //Estrukturak hasieratu
	structure = hasieratuEstruktura();
	olatuak = hasieratuOlatuak();
    // Textua gaitu eta musika jarri
	textuaGaitu();
	audioInit();
	loadTheMusic(JOKOA_SOUND);
	playMusic();
    // Kontagailuen irudiak kokatu
	idVida = irudiaKargatu(HEART);
	irudiaMugitu(idVida, 900, 50);
	idMoney = irudiaKargatu(MONEY);
	irudiaMugitu(idMoney, 900, 80);

	do {
		irudiakMarraztu();
		pantailaBerriztu();
        // ebentu baten zain egon eta kontagailuak jarri
		ebentu = checkEbentu(lifeTotal, structure.money);
        // Return sakatzerakoan olatua hasi
		if (ebentu == TECLA_RETURN) olatuak.defentsa = 1;
		if (olatuak.defentsa == 1) { 
            //olatuen funtizioa
			olatuak = etsaiak(olatuak, ebentu, structure, lifeTotal);
            //Funtziotik bueltatutako datuak beste estrukturan
			structure.money = olatuak.money;
			lifeTotal = olatuak.damage;
		}
        //Dorreak sortzeko funtzioa
		structure = towerBuild(structure, olatuak.kont, ebentu, olatuak.enemy);
        //Irabazi edo galdu den egiaztatzeko funtzioa
		egoera = JOKOA_egoera(olatuak.kont, lifeTotal);
		if (ebentu == TECLA_ESCAPE) egoera = ATERA;
		if (egoera != JOLASTEN) { etsaiIrudiakKendu(olatuak); }

	} while (egoera == JOLASTEN);
    //Irudiak eta musika kendu
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
    // Olatuak amaitu badira --> irabazi
	if (kont1 == 140000) {
		ret = IRABAZI;
	}
	//Jokalariaren bizitza 0 baino txikiagoa ala berdina bada-- > galdu
	else if (lifeTotal <= 0) {
		ret = GALDU;
	}
	return ret;
}
//Pepino normalen irudia sortu
int JOKOA_jokalariaIrudiaSortu(int pepinoId)
{
	pepinoId = irudiaKargatu(JOKOA_PLAYER_IMAGE);
	irudiaMugitu(pepinoId, -70000, 650);
	pantailaGarbitu();
	irudiakMarraztu();
	pantailaBerriztu();
	return pepinoId;
}
//Pepino handiaren irudia sortu
int JOKOA_jokalaria2IrudiaSortu(int pepinacoId)
{
	pepinacoId = irudiaKargatu(JOKOA_PLAYER_IMAGE2);
	irudiaMugitu(pepinacoId, -20000, 650);
	pantailaGarbitu();
	irudiakMarraztu();
	pantailaBerriztu();
	return pepinacoId;
}
//Pepino azkarraren irudia sortu
int JOKOA_jokalaria3IrudiaSortu(int rapinilloId)
{
	rapinilloId = irudiaKargatu(JOKOA_PLAYER_IMAGE3);
	irudiaMugitu(rapinilloId, -10000, 670);
	pantailaGarbitu();
	irudiakMarraztu();
	pantailaBerriztu();
	return rapinilloId;
}
// Auxiliarren gehiketa egiten duten funtzioak (Pepino normala)
POSIZIOA ERREALITATE_FISIKOA_mugimendua(POSIZIOA posizioa, int stop) {
	if (stop != 1) {
		posizioa.y = posizioa.y - 0.25;
		posizioa.x = posizioa.x + 0.25;
	}
	return posizioa;
}
// Auxiliarren gehiketa egiten duten funtzioak (Pepino normala)
POSIZIOA ERREALITATE_FISIKOA2_mugimendua(POSIZIOA posizioa, int stop) {
	if (stop != 1) {
		posizioa.y = posizioa.y + 0.25;
		posizioa.x = posizioa.x;
	}
	return posizioa;
}
// Auxiliarren gehiketa egiten duten funtzioak (Pepino azkarra)
POSIZIOA ERREALITATE_FISIKOA3_mugimendua(POSIZIOA posizioa, int stop) {
	if (stop != 1) {
		posizioa.y = posizioa.y - 0.5;
		posizioa.x = posizioa.x + 0.5;
	}
	return posizioa;
}
// Auxiliarren gehiketa egiten duten funtzioak (Pepino azkarra)
POSIZIOA ERREALITATE_FISIKOA4_mugimendua(POSIZIOA posizioa, int stop) {
	if (stop != 1) {
		posizioa.y = posizioa.y + 0.5;
		posizioa.x = posizioa.x;
	}
	return posizioa;
}
// Auxiliarren gehiketa egiten duten funtzioak (Pepino handia)
POSIZIOA ERREALITATE_FISIKOA5_mugimendua(POSIZIOA posizioa, int stop) {
	if (stop != 1) {
		posizioa.y = posizioa.y - 0.125;
		posizioa.x = posizioa.x + 0.125;
	}
	return posizioa;
}
// Auxiliarren gehiketa egiten duten funtzioak (Pepino handia)
POSIZIOA ERREALITATE_FISIKOA6_mugimendua(POSIZIOA posizioa, int stop) {
	if (stop != 1) {
		posizioa.y = posizioa.y + 0.125;
		posizioa.x = posizioa.x;
	}
	return posizioa;
}
//Joko amaieran egin beharrekoa egiten duen funtzioa: Irudiak eta musika jarri.
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
    // Ebentu baten zain egon
	do
	{
		ebentu = ebentuaJasoGertatuBada();
	} while (ebentu != TECLA_RETURN && ebentu != TECLA_ESCAPE && egoera != ATERA);
	soundsUnload();
	irudiaKendu(id);
}
// Hasierako menuaren irudia bistaratzen duen funtzioa
int HASIERA_irudiaBistaratu()
{
	int id = -1;
	id = irudiaKargatu(FONDO_INCIO);
	irudiaMugitu(id, 0, 0);
	irudiakMarraztu();
	pantailaBerriztu();
	return id;
}
//Maparen irudia bistaratzen duen funtzioa
int FONDOA_irudiaBistaratu() {
	int fondo = -1;
	fondo = irudiaKargatu(BACKGROUND_IMAGE);
	irudiaMugitu(fondo, 0, 0);
	pantailaGarbitu();
	irudiakMarraztu();
	pantailaBerriztu();
	return fondo;
}
//Kontagailuaren funtzioa
void kontagailua(int kont, int Posx, int Posy)
{
	int i = kont;
	char str1[50];
    // "INT" aldagaia karaktere-kate batean sartu
	sprintf(str1, "%d", i);
    // Textua pantailaratu
	textuaIdatzi(Posx, Posy, str1);
}