#pragma once

namespace Predictie1
{
    class Predictie_cazuri 
    {
    public:
        double luna;
        double luna_final;
        int perechi;
        double x[11];
        double y[11];
        double valoare_reala;

        Predictie_cazuri();
        void pred();
        double afisare();
        double GetRealValue();
        double Acuratete();
    };
}

