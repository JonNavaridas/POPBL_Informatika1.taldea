#ifndef FUNTZIOA_H
#define FUNTZIOA_H
#include "torre.h"
#include "graphics.h"
#include "ebentoak.h"
#include "soinua.h"
#include "text.h"
#include "imagen.h"

void funtzioa();
int funtzioa1(int dirua, struct Torres *torres, struct Irudia *irudia);
int funtzioa2(int torres, int dirua, int irudia, int b[]);
int comprar(int dirua, int b[]);
int mejorar(int torre, int dirua);
int vender(int torre, int dirua, int irudia);

void ponerimagen(int b[], int torre);
void borrarimagen(int id);

#endif