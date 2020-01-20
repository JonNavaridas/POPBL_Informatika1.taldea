#ifndef HASIERATU
#define HASIERATU
#include "OurTypes.h"

// Jokoaren soinuak
#define JOKOA_SOUND ".\\sound\\pol-battle-march-long.wav"
#define JOKOA_SOUND_WIN ".\\sound\\win.wav"
#define JOKOA_SOUND_LOOSE ".\\sound\\fail.wav"
#define MUSICA_MENU ".\\sound\\inicio.wav"

// Jokoaren irudiak
#define JOKOA_PLAYER_IMAGE "img/enemigo/PEPINO.bmp"
#define JOKOA_PLAYER_IMAGE2 "img/enemigo/PEPINACO.bmp"
#define JOKOA_PLAYER_IMAGE3 "img/enemigo/PEPINILLO.bmp"
// Pantailen irudiak
#define BACKGROUND_IMAGE "img/Mapas/Mapa_Nivel_1.bmp"
#define FONDO_INCIO ".\\img\\Pantallas\\inicio.bmp"
#define CREDITOS ".\\img\\Pantallas\\creditos.bmp"
#define IMG_IRABAZI "img/Pantallas/win.bmp"
#define LOAD "img/Pantallas/logo.bmp"
#define IMG_GALDU "img/Pantallas/gameover.bmp"
#define HOWTO_1 ".\\img\\Pantallas\\howto1.bmp"
#define HOWTO_2 ".\\img\\Pantallas\\howto2.bmp"
#define HOWTO_3 ".\\img\\Pantallas\\howto3.bmp"
#define HOWTO_4 ".\\img\\Pantallas\\howto4.bmp"
// Ikonoen irudiak
#define HEART "img/Iconos/Corazon.bmp"
#define MONEY "img/Iconos/wiskas.bmp"
// Menu desberdinen irudiak
#define BUY_MENU "img/Menu/MenuCompra.bmp"
#define UPGRADE_SELL_MENU "img/Menu/MenuMejora.bmp"
// Dorreen irudiak
#define ARCHER_TOWER "img/Torres/ArcherTower.bmp"
#define MAGE_TOWER "img/Torres/MageTower.bmp"
#define BOMBER_TOWER "img/Torres/BomberTower.bmp"
#define MINE "img/Torres/Mine.bmp"

// Hainbat estruktura hasieratu
AREA hasieratuAreak(void);
ACTIVE hasieratuActive(void);
ACTION hasieratuAction(int onTarget, int onFrozen);
CREATE hasieratuCreate(void);
int hasieratuBizitzak(int i);
UPGRADE hasieratuUpgrade(void);
OLATUAK hasieratuOlatuak(void);
TERMINATE hasieratuTerminate(void);
TOWER_STRUCTURE hasieratuEstruktura(void);
POSIZIOA hasieratuEnemyPos(OLATUAK olatuak, int i);
OLATUAK hasieratuOlatuakId(void);

// Ebentuak bilatu
int checkEbentu(int lifeTotal, int money);

// Etsaien irudiak kendu
void etsaiIrudiakKendu(OLATUAK olatuak);

#endif