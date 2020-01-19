#ifndef OURTYPES_H
#define OURTYPES_H

#include "ebentoak.h"

typedef enum { JOLASTEN, GALDU, IRABAZI, ATERA } EGOERA;

typedef struct JOKO_DE
{
	POSIZIOA pos;
	int id;
} JOKO_ELEMENTUA;

typedef struct MENU_PARTS_DE
{
	int tower;
	int id;
} MENU_PARTS;

typedef struct TARGET_DE
{
	int tower[11];
} TARGET;

typedef struct ACTION_DE
{
	int damage[30];
	int freeze[30];
	int resource[30];
	TARGET target;
	int money;
	int id;
} ACTION;

typedef struct AREA_DE
{
	int place1, place2, place3, place4, place5, place6, place7, place8, place9, place10;
}AREA;

typedef struct ACTIVE_DE
{
	int tower1, tower2, tower3, tower4, tower5, tower6, tower7, tower8, tower9, tower10;
} ACTIVE;

typedef struct UPGRADE_DE
{
	int tower1, tower2, tower3, tower4, tower5, tower6, tower7, tower8, tower9, tower10;
} UPGRADE;

typedef struct TERMINATE_DE
{
	int tower1, tower2, tower3, tower4, tower5, tower6, tower7, tower8, tower9, tower10;
} TERMINATE;

typedef struct CHANGE_DE
{
	UPGRADE upgrade;
	TERMINATE terminate;
} CHANGE;

typedef struct CREATE_DE
{
	int tower1, tower2, tower3, tower4, tower5, tower6, tower7, tower8, tower9, tower10;
} CREATE;

typedef struct TOWER_STRUCTURE_DE
{
	AREA area;
	ACTION action;
	ACTIVE active;
	CREATE create;
	CHANGE change;
	MENU_PARTS menu;
	int money;
} TOWER_STRUCTURE;

typedef struct OLATUAK_DE
{
	JOKO_ELEMENTUA P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, fondoa2;
	POSIZIOA aux, aux2, aux3, aux4, aux5, aux6, aux7, aux8, aux9, aux10, aux11, aux12, aux13, aux14, aux15, aux16, aux17, aux18, aux19, aux20, aux21, aux22, aux23, aux24, aux25, aux26, aux27, aux28, aux29, aux30, aux31, aux32, aux33, aux34, aux35, aux36, aux37, aux38, aux39, aux40, aux41, aux42, aux43, aux44, aux45, aux46, aux47, aux48, aux49, aux50, aux51, aux52, aux53, aux54, aux55, aux56, aux57, aux58, aux59, aux60;
	int defentsa, kont, damage, money;
	POSIZIOA enemy[30];
	int enemyLife[30];
	int enemyFreeze[30];
	int enemyDeath[30];
} OLATUAK;

#endif