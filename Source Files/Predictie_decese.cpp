#include "..\Header Files\Predictie_decese.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ios>

Predictie1::Predictie_decese::Predictie_decese()
{
     valoare_reala = 2621;
     y[0] = 0; 
     y[1] = 82; 
     y[2] = 635;
     y[3] = 549; 
     y[4] = 385;
     y[5] = 692;
     y[6] = 1278;
     y[7] = 1204; 
     y[8] = 2143;
     y[9] = 4363;
     y[10] = 4436;
}

double Predictie1::Predictie_decese::afisare()
{
    return this->luna_final;
}
