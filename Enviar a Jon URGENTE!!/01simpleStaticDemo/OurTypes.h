#ifndef OURTYPES_H
#define OURTYPES_H

#include "ebentoak.h"

typedef enum { JOLASTEN, GALDU, IRABAZI } EGOERA;
typedef enum { IRUDIA, MARGOA, TESTUA } MOTA;

typedef struct JOKO_DE
{
	POSIZIOA pos;
	int id;
	MOTA mota;
} JOKO_ELEMENTUA;

typedef struct MENU_PARTS_DE
{
	int tower;
	int id;
} MENU_PARTS;

typedef struct ACTION_DE
{
	int damage;
	int freeze;
	int resource;
	int money;
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

typedef struct CHANGE_DE
{
	UPGRADE upgrade;
	int terminate;
	int money;
} CHANGE;

typedef struct TOWER_STRUCTURE_DE
{
	ACTION action;
	ACTIVE active;
	UPGRADE upgrade;
} TOWER_STRUCTURE;

#endif