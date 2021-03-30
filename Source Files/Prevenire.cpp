#include "..\Header Files\Prevenire.h"
#include "..\Header Files\Factori.h"
#include <iostream>
#include <string.h>
#include <cstring>




std::string Extra::Prevenire::AfisareMasti(Factori object)
{
    std::string auxiliar = object.f6;
    auxiliar += "\n\nEfectul pozitiv al purtarii mastii, ilustrat in plotul alaturat este evident. Astfel, aceasta fiind un factor esential in preventia raspandirii si mai acceantuate a acestui virus respirator.";
    return auxiliar;
}
std::string Extra::Prevenire::AfisareDistantare(Factori object)
{
    std::string auxiliar = object.f2;
    auxiliar += "\n\nÎn vederea împiedicarii raspândirii virusului, daca se aplica distantarea sociala curba cazurilor de îmbolnavire cu Covid-19 se întinde pe o perioada mai lunga de timp, însa daca numarul cazurilor nu se reduce, chiar si cu aceasta distantare se poate ajunge la o valoare a lor inimiaginabila.";
    return auxiliar;
}
int Extra::Prevenire::GetGeneralCurve()
{
    int dimensiune = 20;
    y[0] = 0;y[1] = 2.13;y[2] = 3.27; y[3] = 4.83;y[4] = 5.25;y[5] = 6.34;y[6] = 7.66;y[7] = 12.48;y[8] = 14.05;
    y[9] = 15.46;
    y[10] = 16.74;
    y[11] = 17.59;
    y[12] = 17.73;
    y[13] = 16.17;
    y[14] = 14.18;
    y[15] = 12;
    y[16] = 8;
    y[17] = 6.39;
    y[18] = 3.7;
    y[19] = 2.27;

    x[0] = 0;
    x[1] = 1.32;
    x[2] = 2.03;
    x[3] = 2.99;
    x[4] = 3.22;
    x[5] = 3.47;
    x[6] = 3.83;
    x[7] = 4.3;
    x[8] = 4.66;
    x[9] = 5;
    x[10] = 5.5;
    x[11] = 6.22;
    x[12] = 7.17;
    x[13] = 8.13;
    x[14] = 8.7; 
    x[15] = 8.96;
    x[16] = 9.56;
    x[17] = 9.8;
    x[18] = 10.87;
    x[19] = 11.83;

    return dimensiune;
}
int Extra::Prevenire::GetDistancingCurve()
{
    int dimensiune=20;
    y[0] = 0.5;
    y[1] = 0.73;
    y[2] = 0.82;
    y[4] = 1.06;
    y[5] = 1.43;
    y[6] = 1.75;
    y[7] = 2.11;
    y[8] = 2.53;
    y[9] = 2.9;
    y[10] = 3.13;
    y[11] = 2.71;
    y[12] = 2.44;
    y[13] = 1.7;
    y[14] = 1.23;
    y[15] = 1.12;
    y[16] = 0.87;
    y[17] = 0.63;
    y[18] = 0.56;
    y[19] = 0.29;


    x[0] = 3.4;
    x[1] = 4.91;
    x[2] = 5.81;
    x[4] = 6.73;
    x[5] = 8.14;
    x[6] = 8.92;
    x[7] = 10.47;
    x[8] = 11.25;
    x[9] = 12.6;
    x[10] = 14.48;
    x[11] = 16.83;
    x[12] = 17.45;
    x[13] = 18.56;
    x[14] = 20.53;
    x[15] = 21.98;
    x[16] = 23.14;
    x[17] = 23.86;
    x[18] = 14.62;
    x[19] = 25.22;

    return dimensiune;
}
int Extra::Prevenire::GetMaskCurve()
{
    int dimensiune = 20;
    x[0] = 0;
    x[1] = 0.23;
    x[2] = 4.3;
    x[3] = 3.9;
    x[4] = 6.5;
    x[5] = 7.17;
    x[6] = 9.8;
    x[7] = 10.5;
    x[8] = 13.38;
    x[9] = 13.86;
    x[10] = 14.46;
    x[11] = 16.53;
    x[12] = 17.58;
    x[13] = 18.5;
    x[14] = 19.24;
    x[15] = 19.96;
    x[16] = 20;
    x[17] = 21;
    x[18] = 22;
    x[19] = 23;
   
    y[0] = 0;
    y[1] = 0.14;
    y[2] = 2.27;
    y[3] = 1.9;
    y[4] = 3.7;
    y[5] = 4.82;
    y[6] = 6.24;
    y[7] = 6.67;
    y[8] = 7.23;
    y[9] = 7.38;
    y[10] = 7.38;
    y[11] = 6.81;
    y[12] = 6.1;
    y[13] = 4.97;
    y[14] = 3.69;
    y[15] = 2.85;
    y[16] = 0.23;
    y[17] = 0.23;
    y[18]= 0.23;
    y[19] = 0.23;


    return dimensiune;


} 