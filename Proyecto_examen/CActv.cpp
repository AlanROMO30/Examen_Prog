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

// Función para clasificar IMC
int CActv::CatIMC() {
    if (m_IMC < 18.5) {
        cout << "IMC BAJO";
        return 1;
    }
    else if (m_IMC <= 24.9) {
        cout << "IMC NORMAL";
        return 2;
    }
    else if (m_IMC <= 29.9) {
        return 3;
    }
    else if (m_IMC <= 34.9) {
        return 4;
    }
    else if (m_IMC <= 39.9) {
        return 5;
    }
    else if (m_IMC >= 40) {
        return 6;
    }
    return -1;
}
void CActv::calConsumidas(double peso, double altura, int ps) 
{
    double factorPeso = peso * 0.035;
    double factorAltura = altura * 0.029;
    double factorVelocidad = 4.8 * 0.0015;
    m_calorias = (factorAltura + factorPeso + factorVelocidad) * ps; 
}
double CActv::getcalorias()
{
    return m_calorias;
}
double CActv::CaLrecomendas() 
{
	return 0;
}


