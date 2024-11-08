#pragma once
#include "CPersona.h"
class CActv:
    public CPersona
{
    int m_pasos;
    double m_CalCons;
    double m_CalRecom;
public:
    CActv(int = 0, double = 0, double = 0);
    int CatIMC();
    double calConsumidas(int = 1);
    double CaLrecomendas();

};

