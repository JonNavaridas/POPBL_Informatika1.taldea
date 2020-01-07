#ifndef FUNTZIOA_H
#define FUNTZIOA_H
#include "torre.h"
#include "graphics.h"
#include "ebentoak.h"
#include "soinua.h"
#include "text.h"
#include "imagen.h"

int torre(int a);
int torre1(int torre, int a, int b, int c, int id);
int comprar(int a, int b, int c, int id);
int mejorar(int torre, int a, int id, int b, int c);
int vender(int torre, int a, int id, int b, int c);

int imagen(int id, int b, int c, int torre, int borrar);

#endif