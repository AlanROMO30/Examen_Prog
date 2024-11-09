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
int CActv::CatIMC(CPersona) {
    if (IMC() < 18.5) {
        cout << "IMC BAJO";
        return 1;
    }
    else if (IMC() <= 24.9) {
        cout << "IMC NORMAL";
        return 2;
    }
    else if (IMC() <= 29.9) {
        cout << "IMC SOBREPESO";
        return 3;
    }
    else if (IMC() <= 34.9) {
        cout << "IMC OBESIDAD I";
        return 4;
    }
    else if (IMC() <= 39.9) {
        cout << "IMC OBESIDAD II";
        return 5;
    }
    else if (IMC() >= 40) {
        cout << "IMC OBESIDAD III";
        return 6;
    }

    return -1;
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


