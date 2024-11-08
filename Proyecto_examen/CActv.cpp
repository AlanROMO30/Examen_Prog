#include <iostream>
using namespace std;
#include "CActv.h"
CActv::CActv(int p, double Kcons, double Krec)
{
	m_pasos = p;
	m_CalCons = Kcons;
	m_CalRecom = Krec;
}
int CActv::CatIMC()
{
	if (m_IMC < 18.5)
	{
		return 1;
	}else if(m_IMC >= 18.5, m_IMC <= 24.9)
		{
		return 2;
		}
}
double CActv::calConsumidas(int ps)
{
	double factorPeso = (m_peso) * 0.035;
	double factorAltura = (m_altura) * 0.029;
	double factorVelocidad = 4.8 * 0.0015;
	double calorias = (factorAltura + factorPeso + factorVelocidad) * ps;
	return calorias;

}
double CActv:: CaLrecomendas()
{
	return 0;
}


