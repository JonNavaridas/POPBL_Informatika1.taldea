#include "TowerFunctionality.h"
#include "graphics.h"
#include "ebentoak.h"
#include "soinua.h"
#include "text.h"
#include "imagen.h"
#include "OurTypes.h"
#include "TowerBuild.h"
#include <stdio.h>
#include <windows.h>

//Poner las areas a cero
AREA hasieratuAreak(void)
{
    AREA area;
    area.place1 = 0;
    area.place2 = 0;
    area.place3 = 0;
    area.place4 = 0;
    area.place5 = 0;
    area.place6 = 0;
    area.place7 = 0;
    area.place8 = 0;
    area.place9 = 0;
    area.place10 = 0;
    return area;
}
//Poner activo a cero
ACTIVE hasieratuActive(void)
{
    ACTIVE active;
    active.tower1 = 0;
    active.tower2 = 0;
    active.tower3 = 0;
    active.tower4 = 0;
    active.tower5 = 0;
    active.tower6 = 0;
    active.tower7 = 0;
    active.tower8 = 0;
    active.tower9 = 0;
    active.tower10 = 0;
    return active;
}
//Poner las mejoras a cero
UPGRADE hasieratuUpgrade(void)
{
    UPGRADE upgrade;
    upgrade.tower1 = 0;
    upgrade.tower2 = 0;
    upgrade.tower3 = 0;
    upgrade.tower4 = 0;
    upgrade.tower5 = 0;
    upgrade.tower6 = 0;
    upgrade.tower7 = 0;
    upgrade.tower8 = 0;
    upgrade.tower9 = 0;
    upgrade.tower10 = 0;
    return upgrade;
}

int checkEbentu(void)
{
    int ebentu = 0;
    do
    {
        ebentu = ebentuaJasoGertatuBada();
    } while (ebentu == 0);
}