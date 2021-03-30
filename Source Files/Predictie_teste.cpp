#include "..\Header Files\Predictie_teste.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ios>

Predictie1::Predictie_teste::Predictie_teste()
{
    valoare_reala = 681459;
    y[0] = 0;
    y[1] = 24654;
    y[2] = 150720;
    y[3] = 263763;
    y[4] = 270975;
    y[5] = 492495;
    y[6] = 600345;
    y[7] = 616745;
    y[8] = 823057;
    y[9] = 864819;
    y[10] = 668454;
}

double Predictie1::Predictie_teste::afisare()
{
    return this->luna_final;
}