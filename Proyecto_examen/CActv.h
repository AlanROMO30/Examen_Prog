#pragma once
#include "CPersona.h"
class CActv :
    public CPersona
{
    int m_pasos;
    double m_CalCons;
    double m_CalRecom;
    double m_calorias;
    int m_actreco;
public:
    CActv(int = 0, double = 0, double = 0, double= 0, int = 0);
    void calConsumidas(double = 0, double = 0, int = 1);
    double getcalorias();
    double CaLrecomendas();
    void ActRecoDes(int=0,int=0);
    int getActRecoDes();

};

