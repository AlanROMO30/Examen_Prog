#pragma once
#include "CPersona.h"
class CActv :
    public CPersona
{
    
    double m_CalCons;
    double m_CalRecom;
public:
    char CatIMC();
    double calConsumidas();
    double CaLrecomendas();

};

