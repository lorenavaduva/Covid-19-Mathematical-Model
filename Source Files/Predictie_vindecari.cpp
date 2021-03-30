#include "..\Header Files\Predictie_vindecari.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ios>

Predictie1::Predictie_vindecari::Predictie_vindecari()
{
    valoare_reala = 122802;
    y[0] = 0;
    y[1] = 220;
    y[2] = 3797;
    y[3] = 9239;
    y[4] = 5794;
    y[5] = 7957;
    y[6] = 10862;
    y[7] = 64877;
    y[8] = 69767;
    y[9] = 180675;
    y[10] = 200868;
}

double Predictie1::Predictie_vindecari::afisare()
{
    return this->luna;
}