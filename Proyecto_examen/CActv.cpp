#include <iostream>
using namespace std;
#include "CActv.h"

// Constructor
CActv::CActv(int p, double Kcons, double Krec, double k) 
{
    m_pasos = p;
    m_CalCons = Kcons;
    m_CalRecom = Krec;
    m_calorias = k;
}













void CActv::calConsumidas(double peso, double altura, int ps) 
{
    double dis = (ps * altura * 0.45) / 1000 ;
    double cal = (0.0215 * 4.8 * 4.8 - 0.1765 * 4.8 + 0.8710) * peso;
    m_calorias = dis * cal; 
}
double CActv::getcalorias()
{
    return m_calorias;
}
double CActv::CaLrecomendas() 
{
	return 0;
}


