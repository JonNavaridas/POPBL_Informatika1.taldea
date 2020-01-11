#ifndef IMAGEN_H
#define IMAGEN_H

#define MAX_IMG 100
#define BACKGROUND "Imagenes/Mapas/Mapa_Nivel_1.bmp"
#define BUY_MENU "Imagenes/Menu/MenuCompra.bmp"
#define UPGRADE_SELL_MENU "Imagenes/Menu/MenuMejora.bmp"
#define ARCHER_TOWER "Imagenes/Torres/ArcherTower.bmp"
#define MAGE_TOWER "Imagenes/Torres/MageTower.bmp"
#define BOMBER_TOWER "Imagenes/Torres/BomberTower.bmp"
#define MINE "Imagenes/Torres/Mine.bmp"

int  irudiaKargatu(char *fileName);
void  irudiaMugitu(int numImg, int x, int y);
void irudiakMarraztu(void);
void irudiaKendu(int id);

#endif
