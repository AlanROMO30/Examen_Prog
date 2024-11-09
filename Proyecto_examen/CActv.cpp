#include <iostream>
using namespace std;
#include "CActv.h"

// Constructor
CActv::CActv(int p, double Kcons, double Krec, double k, int r) 
{
    m_pasos = p;
    m_CalCons = Kcons;
    m_CalRecom = Krec;
    m_calorias = k;
	m_actreco;
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
void CActv::ActRecoDes(int IMC, int oBJECT)
{
    if ((IMC == 1) && (oBJECT == 1))
    {
        cout << "No se recomienda, debido que puede afectar tu salud";
		m_actreco = 1;
    }
    else if ((IMC == 1) && (oBJECT == 2))
     {
        cout << "";
		m_actreco = 2;
     }

	else if ((IMC == 1) && (oBJECT == 3))
	{
		cout << "";
		m_actreco = 3;
	}
	else if ((IMC == 1) && (oBJECT == 4))
	{
		cout << "";
		m_actreco = 4;
	} 
	else if ((IMC == 2) && (oBJECT == 1))
	{
		cout << "No se recomienda, debido que puede afectar tu salud";
		m_actreco = 5;

	}
	else if ((IMC == 2) && (oBJECT == 2))
	{
		cout << "";
		m_actreco = 6;
	}
	else if ((IMC == 2) && (oBJECT == 3))
	{
		cout << "";
		m_actreco = 7;
	}
	else if ((IMC == 2) && (oBJECT == 4))
	{
		cout << "";
		m_actreco = 8;
	}
	else if ((IMC == 3) && (oBJECT == 1))
	{
		cout << "";
		m_actreco = 9;
	}
	else if ((IMC == 3) && (oBJECT == 2))
	{
		cout << "";
		m_actreco = 10;
	}
	else if ((IMC == 3) && (oBJECT == 3))
	{
		cout << "";
		m_actreco = 11;
	}
	else if ((IMC == 3) && (oBJECT == 4))
	{
		cout << "";
		m_actreco = 12;
	}
	else if ((IMC == 4) && (oBJECT == 1))
	{
		cout << "No se recomienda, debido que puede afectar tu salud";
		m_actreco = 13;
	}
	else if ((IMC == 4) && (oBJECT == 2))
	{
		cout << "";
		m_actreco = 14;
	}
	else if ((IMC == 4) && (oBJECT == 3))
	{
		cout << "";
		m_actreco = 15;
	}
	else if ((IMC == 4) && (oBJECT == 4))
	{
		cout << "";
		m_actreco = 15;
	}
	else if ((IMC == 5) && (oBJECT == 1))
	{
		cout << "";
		m_actreco = 16;
	}
	else if ((IMC == 5) && (oBJECT == 2))
	{
		cout << "";
		m_actreco = 17;
	}
	else if ((IMC == 5) && (oBJECT == 3))
	{
		cout << "";
		m_actreco = 18;
	}
	else if ((IMC == 5) && (oBJECT == 4))
	{
		cout << "";
		m_actreco = 19;
	}
	else if ((IMC == 6) && (oBJECT == 1))
	{
		cout << "";
		m_actreco = 20;
	}
	else if ((IMC == 6) && (oBJECT == 2))
	{
		cout << "";
		m_actreco = 21;
	}
	else if ((IMC == 6) && (oBJECT == 3))
	{
		cout << "";
		m_actreco = 22;
	}
	else if ((IMC == 6) && (oBJECT == 4))
	{
		cout << "";
		m_actreco = 23;
	}	
}
int CActv::getActRecoDes()
{
	return m_actreco;
}



