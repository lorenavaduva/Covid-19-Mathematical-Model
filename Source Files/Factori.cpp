#include "../Header Files/Factori.h"
#include <iostream>
#include <string.h>
#include <cstring>

Extra::Factori::Factori()
{
    f1 = "Sistemul imunitar";
    f2 = "Distantarea sociala";
    f3 = "Modul de transmitere";
    f4 = "Umiditatea aerului";
    f5 = "Psihologia umana";
    f6 = "Purtarea mastii";
}


std::string Extra::Factori::GetFactor1()
{
    return this->f1;
}
std::string Extra::Factori::GetFactor2()
{
    return this->f2;
}
std::string Extra::Factori::GetFactor3()
{
    return this->f3;
}
std::string Extra::Factori::GetFactor4()
{
    return this->f4;
}
std::string Extra::Factori::GetFactor5()
{
    return this->f5;
}
std::string Extra::Factori::GetFactor6()
{
    return this->f6;
}
