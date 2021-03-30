#pragma once
#include <string>
#include "Prevenire.h"

namespace Extra
{
    class Factori 
    {
    private:
        std::string f1;
        std::string f2;
        std::string f3;
        std::string f4;
        std::string f5;
        std::string f6;
    public:
        friend class Prevenire;
        Factori();
        //virtual void afisare() = 0;
        std::string GetFactor1();
        std::string GetFactor2();
        std::string GetFactor3();
        std::string GetFactor4();
        std::string GetFactor5();
        std::string GetFactor6();
    };
}