#ifndef HASIERATU
#define HASIERATU
#include "OurTypes.h"

#define JOKOA_SOUND ".\\sound\\pol-battle-march-long.wav"
#define JOKOA_SOUND_WIN ".\\sound\\win.wav"
#define JOKOA_SOUND_LOOSE ".\\sound\\fail.wav"
#define JOKOA_PLAYER_IMAGE "img/enemigo/PEPINO.bmp"
#define JOKOA_PLAYER_IMAGE2 "img/enemigo/PEPINACO.bmp"
#define JOKOA_PLAYER_IMAGE3 "img/enemigo/PEPINILLO.bmp"
#define MIRA "img/Torres/mira.bmp"

#define MUSICA_MENU ".\\sound\\inicio.wav"
#define FONDO_INCIO ".\\img\\Pantallas\\inicio.bmp"
#define CREDITOS ".\\img\\Pantallas\\creditos.bmp"
#define IMG_IRABAZI "img/Pantallas/win.bmp"
#define IMG_GALDU "img/Pantallas/gameover.bmp"
#define HOWTO_1 ".\\img\\Pantallas\\howto1.bmp"
#define HOWTO_2 ".\\img\\Pantallas\\howto2.bmp"
#define HOWTO_3 ".\\img\\Pantallas\\howto3.bmp"
#define HOWTO_4 ".\\img\\Pantallas\\howto4.bmp"
#define HEART "img/Iconos/Corazon.bmp"
#define MONEY "img/Iconos/wiskas.bmp"

#define BACKGROUND_IMAGE "img/Mapas/Mapa_Nivel_1.bmp"
#define BUY_MENU "img/Menu/MenuCompra.bmp"
#define UPGRADE_SELL_MENU "img/Menu/MenuMejora.bmp"
#define ARCHER_TOWER "img/Torres/ArcherTower.bmp"
#define MAGE_TOWER "img/Torres/MageTower.bmp"
#define BOMBER_TOWER "img/Torres/BomberTower.bmp"
#define MINE "img/Torres/Mine.bmp"

//Iniciar cosas distintas
AREA hasieratuAreak(void);
ACTIVE hasieratuActive(void);
ACTION hasieratuAction(void);
CREATE hasieratuCreate(void);
int hasieratuBizitzak(int i);
UPGRADE hasieratuUpgrade(void);
OLATUAK hasieratuOlatuak();
//int liveCheckAction(OLATUAK olatuak, int i);
TERMINATE hasieratuTerminate(void);
TOWER_STRUCTURE hasieratuEstruktura(void);
POSIZIOA hasieratuEnemyPos(OLATUAK olatuak, int i);
void etsaiIrudiakKendu(OLATUAK olatuak);
OLATUAK hasieratuOlatuakId(void);
int checkEbentu(int lifeTotal, int money);

#endif