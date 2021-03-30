#include "..\Header Files\Predictie_cazuri.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ios>

Predictie1::Predictie_cazuri::Predictie_cazuri(){
    this->perechi = 11;
    for(int i = 0; i < this->perechi; i++){
        x[i] = i;
    }
    this->valoare_reala = 103175;
    y[0] = 3; y[1] = 2242; y[2] = 9995; y[3] = 7015; y[4] = 7715; y[5] = 23916; y[6] = 36654; y[7] = 40032; y[8] = 113767; y[9] = 234023; y[10] = 156901;
}

void Predictie1::Predictie_cazuri::pred(){
    int i,j,k,n;
    std::cout.precision(0);
    std::cout.setf(std::ios::fixed);
    n = 2;
    double suma[5];
    for (i=0;i<2*n+1;i++)
    {
        suma[i]=0;
        for (j=0;j<this->perechi;j++)
            suma[i]=suma[i]+pow(x[j],i);
    }
    double m[3][4],a[3];            
    for (i=0;i<=n;i++)
        for (j=0;j<=n;j++)
            m[i][j]=suma[i+j];
    double Y[3];
    for (i=0;i<n+1;i++)
    {    
        Y[i]=0;
        for (j=0;j<this->perechi;j++)
        Y[i]=Y[i]+pow(x[j],i)*y[j];
    }
    for (i=0;i<=n;i++)
        m[i][n+1]=Y[i];
    n=n+1;            
    for (i=0;i<n;i++)
        for (k=i+1;k<n;k++)
            if (m[i][i]<m[k][i])
                for (j=0;j<=n;j++)
                {
                    double auxiliar=m[i][j];
                    m[i][j]=m[k][j];
                    m[k][j]=auxiliar;
                }
     
    for (i=0;i<n-1;i++)
        for (k=i+1;k<n;k++)
            {
                double c=m[k][i]/m[i][i];
                for (j=0;j<=n;j++)
                    m[k][j]=m[k][j]-c*m[i][j];
            }
    for (i=n-1;i>=0;i--)
    {
        a[i]=m[i][n];
        for (j=0;j<n;j++)
            if (j!=i)
                a[i]=a[i]-m[i][j]*a[j];
        a[i]=a[i]/m[i][i];
    }
    this->luna = a[0];
    double produs =1;
    for(int i=1;i<3;i++){
        produs = a[i] * pow(this->perechi,i);
        this->luna = this->luna + produs;
    }

    this->luna_final = this->luna;
    if (true)
    {
        this->luna_final = this->luna - ((this->luna * 40) / 100);
    }

}

double Predictie1::Predictie_cazuri::afisare(){
    //std::cout << "\nPredictia noastra pentru luna ianuarie 2021 este de " << this->luna << " cazuri de covid-19.\n"<< std::endl;

    return this->luna_final;
}

double Predictie1::Predictie_cazuri::GetRealValue()
{
    return this->valoare_reala;
}

double  Predictie1::Predictie_cazuri::Acuratete()
{
    double eroare;

    eroare = abs((this->valoare_reala - this->luna_final) / (this->valoare_reala));

    return 100-eroare*100;

}