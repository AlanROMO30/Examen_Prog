#pragma once
#include "CPersona.h"
class CActv :
    public CPersona
{
    
    double m_CalCons;
    double m_CalRecom;
public:
    double CatIMC();
    double calConsumidas();
    double CaLrecomendas();

};

