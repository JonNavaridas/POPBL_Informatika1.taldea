#ifndef GRAPHICS_H
#define GRAPHICS_H
#include "SDL.h"

#define SCREEN_WIDTH  1109  
#define SCREEN_HEIGHT  680


int sgHasieratu();
void sgItxi();//Sin opciones
void arkatzKoloreaEzarri(int red, int green, int blue);
void puntuaMarraztu(int x, int y);
void zuzenaMarraztu(float x1, float y1, float x2, float y2);
void zirkuluaMarraztu(int x, int y, int r);
void pantailaGarbitu();
void pantailaBerriztu();

int irudiaMarraztu(SDL_Texture* texture, SDL_Rect *pDest);

SDL_Renderer* getRenderer(void);

#endif


