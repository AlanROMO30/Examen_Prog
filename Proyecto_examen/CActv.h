#pragma once
#include "CPersona.h"
class CActv :
    public CPersona
{
    int m_pasos;
    double m_CalCons;
    double m_CalRecom;
    double m_calorias;
public:
    CActv(int = 0, double = 0, double = 0, double= 0);
    int CatIMC(CPersona);
    void calConsumidas(double = 0, double = 0, int = 1);
    double getcalorias();
    double CaLrecomendas();

};

