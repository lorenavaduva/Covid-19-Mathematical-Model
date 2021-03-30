#pragma once
#include "Factori.h"
#include <string>



namespace Extra
{   
    class Factori;

    class Prevenire 
    {
    public:
        //Pentru a putea plota in interfata graficele care ne ilustreaza curba virusului in general
        // versusu atunci cand se introduce distantarea sociala, sau masca de protectie
        // vom avea doi vectori x, y care ne vor retine coordonatele pentru datele respective.
        double x[21];
        double y[21];

    public:

        //metode prin care umplem cei doi vectori cu coordonatele curbei afectarii vrusului fara metode de preventie
        // metoda returneaza si numarul de puncte pe care le voi plota
        int GetGeneralCurve();
      
        //curba atunci cand introducem distantarea
        int GetDistancingCurve();

        //curba atunci cand introducem purtarea mastii
        int GetMaskCurve();
   
        std::string AfisareMasti(Factori object);
        std::string AfisareDistantare(Factori object);
        //void print(  Factori object );
    };

}

