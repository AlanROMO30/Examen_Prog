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
		cout << "Calor�as: Incrementar entre un 15-20%." << endl
			<< "Carbohidratos: 55-60%, enfocarse en carbohidratos complejos." << endl 
			<< "Prote�nas: 1.8 - 2 g/kg para favorecer la ganancia muscular." << endl 
			<< "Grasas: 25-30%, incluir fuentes de grasas saludables." << endl;
		m_actreco = 2;
     }

	else if ((IMC == 1) && (oBJECT == 3))
	{
		cout << "Calor�as : Aumentar ligeramente para alcanzar un peso saludable. " << endl
			<< "Carbohidratos : 50 - 55 %, preferir carbohidratos complejos." << endl
			<< "Prote�nas : 1.5 g / kg para apoyar la ganancia muscular." << endl
			<< "Grasas : 25 - 30 %, grasas saludables." << endl;
		m_actreco = 3;
	}
	else if ((IMC == 1) && (oBJECT == 4))
	{
		cout << "" << endl
			<< "" << endl
			<< "" << endl
			<< "" << endl;
		m_actreco = 4;
	} 
	else if ((IMC == 2) && (oBJECT == 1))
	{
		cout << "Calor�as: Reducir un 10-15% de las calor�as de mantenimiento." << endl
			<< "Carbohidratos: 45-50%, elegir fuentes de bajo �ndice gluc�mico (avena, quinoa)." << endl
			<< "Prote�nas: 1.2 - 1.5 g/kg de peso corporal para mantener masa muscular." << endl
			<< "Grasas: 25-30%, optar por grasas saludables (aguacate, aceite de oliva)." << endl;
		m_actreco = 5;

	}
	else if ((IMC == 2) && (oBJECT == 2))
	{
		cout << "Calor�as: Incremento moderado en funci�n de las demandas deportivas." << endl
			<< "Carbohidratos: 55-60%, especialmente antes y despu�s del entrenamiento." << endl
			<< "Prote�nas: 1.6 - 1.8 g/kg para promover la recuperaci�n muscular." << endl
			<< "Grasas: 20-25%, priorizar grasas insaturadas." << endl;
		m_actreco = 6;
	}
	else if ((IMC == 2) && (oBJECT == 3))
	{
		cout << "Calor�as: Mantener en nivel de mantenimiento." << endl
			<< "Carbohidratos: 45-55%, incluir frutas, verduras y granos enteros." << endl
			<< "Prote�nas: 1.2 - 1.5 g/kg para mantener la masa muscular." << endl
			<< "Grasas: 25-30%, centrarse en grasas insaturadas." << endl;
		m_actreco = 7;
	}
	else if ((IMC == 2) && (oBJECT == 4))
	{
		cout << "" << endl
			<< "" << endl
			<< "" << endl
			<< "" << endl;
		m_actreco = 8;
	}
	else if ((IMC == 3) && (oBJECT == 1))
	{
		cout << "Calor�as: Reducir entre un 15-20%." << endl
			<< "Carbohidratos: 40-45%, enfocarse en alimentos de bajo �ndice gluc�mico." << endl
			<< "Prote�nas: 1.5 - 1.8 g/kg para preservar masa muscular." << endl
			<< "Grasas: 20-25%, evitar grasas saturadas." << endl;
		m_actreco = 9;
	}
	else if ((IMC == 3) && (oBJECT == 2))
	{
		cout << "Calor�as: Mantener el nivel de mantenimiento o ligeramente aumentado." << endl
			<< "Carbohidratos: 50-55%, fuentes de bajo �ndice gluc�mico." << endl
			<< "Prote�nas: 1.8 g/kg para preservar y aumentar la masa muscular." << endl
			<< "Grasas: 20%, evitar grasas saturadas." << endl;
		m_actreco = 10;
	}
	else if ((IMC == 3) && (oBJECT == 3))
	{
		cout << "Calor�as: Mantener o reducir ligeramente." << endl
			<< "Carbohidratos: 40-50%, preferir carbohidratos complejos y vegetales." << endl
			<< "Prote�nas: 1.5 g/kg para mantener y tonificar la masa muscular." << endl
			<< "Grasas: 20-25%, evitar grasas no saludables." << endl;
		m_actreco = 11;
	}
	else if ((IMC == 3) && (oBJECT == 4))
	{
		cout << "" << endl
			<< "" << endl
			<< "" << endl
			<< "" << endl;
		m_actreco = 12;
	}
	else if ((IMC == 4) && (oBJECT == 1))
	{
		cout << "Calor�as: Reducir un 20-25%." << endl
			<< "Carbohidratos: 35-40%, elegir vegetales y granos enteros como fuente principal." << endl
			<< "Prote�nas: 1.8 g/kg para preservar masa muscular." << endl
			<< "Grasas: 20-25%, centrarse en grasas saludables." << endl;
		m_actreco = 13;
	}
	else if ((IMC == 4) && (oBJECT == 2))
	{
		cout << "Calor�as: Mantener o reducir ligeramente." << endl
			<< "Carbohidratos: 45-50%, centrarse en vegetales y granos enteros." << endl
			<< "Prote�nas: 1.8 - 2 g/kg para fomentar el desarrollo muscular." << endl
			<< "Grasas: 20%, preferir grasas saludables." << endl;
		m_actreco = 14;
	}
	else if ((IMC == 4) && (oBJECT == 3))
	{
		cout << "Calor�as: Mantener en nivel de mantenimiento o reducci�n ligera." << endl
			<< "Carbohidratos: 40-45%, enfocarse en vegetales y granos enteros." << endl
			<< "Prote�nas: 1.5 - 1.8 g/kg para preservar la masa muscular." << endl
			<< "Grasas: 20-25%, evitar grasas saturadas." << endl;
		m_actreco = 15;
	}
	else if ((IMC == 4) && (oBJECT == 4))
	{
		cout << "" << endl
			<< "" << endl
			<< "" << endl
			<< "" << endl;
		m_actreco = 15;
	}
	else if ((IMC == 5) && (oBJECT == 1))
	{
		cout << "Calor�as: Reducir un 25-30%." << endl
			<< "Carbohidratos: 35-40%, preferir vegetales y carbohidratos complejos." << endl
			<< "Prote�nas: 1.8 - 2 g/kg de peso para preservar masa muscular." << endl
			<< "Grasas: 20%, evitar grasas saturadas." << endl;
		m_actreco = 16;
	}
	else if ((IMC == 5) && (oBJECT == 2))
	{
		cout << "Calor�as: Mantener en nivel de mantenimiento." << endl
			<< "Carbohidratos: 45%, enfocarse en alimentos con bajo �ndice gluc�mico." << endl
			<< "Prote�nas: 2 g/kg para preservar m�sculo." << endl
			<< "Grasas: 20%, evitar grasas no saludables." << endl;
		m_actreco = 17;
	}
	else if ((IMC == 5) && (oBJECT == 3))
	{
		cout << "Calor�as: Mantener o reducir levemente." << endl
			<< "Carbohidratos: 40%, priorizar vegetales y alimentos integrales." << endl
			<< "Prote�nas: 1.8 g/kg para preservar m�sculo." << endl
			<< "Grasas: 20%, grasas insaturadas." << endl;
		m_actreco = 18;
	}
	else if ((IMC == 5) && (oBJECT == 4))
	{
		cout << "" << endl
			<< "" << endl
			<< "" << endl
			<< "" << endl;
		m_actreco = 19;
	}
	else if ((IMC == 6) && (oBJECT == 1))
	{
		cout << "Calor�as: Reducir un 30-40% bajo supervisi�n m�dica." << endl
			<< "Carbohidratos: 30-35%, enfocarse en vegetales ricos en fibra." << endl
			<< "Prote�nas: 2 g/kg de peso para evitar p�rdida de m�sculo." << endl
			<< "Grasas: 15-20%, priorizar grasas insaturadas." << endl;
		m_actreco = 20;
	}
	else if ((IMC == 6) && (oBJECT == 2))
	{
		cout << "Calor�as: Mantener o reducir levemente bajo supervisi�n." << endl
			<< "Carbohidratos: 40%, elegir carbohidratos de bajo �ndice gluc�mico." << endl
			<< "Prote�nas: 2 g/kg para preservar masa muscular." << endl
			<< "Grasas: 20%, priorizar grasas insaturadas." << endl;
		m_actreco = 21;
	}
	else if ((IMC == 6) && (oBJECT == 3))
	{
		cout << "Calor�as: Mantener o reducir bajo supervisi�n." << endl
			<< "Carbohidratos: 35-40%, enfocarse en vegetales." << endl
			<< "Prote�nas: 2 g/kg para preservar masa muscular." << endl
			<< "Grasas: 15-20%, preferir grasas saludables." << endl;
		m_actreco = 22;
	}
	else if ((IMC == 6) && (oBJECT == 4))
	{
		cout << "" << endl
			<< "" << endl
			<< "" << endl
			<< "" << endl;
		m_actreco = 23;
	}	
	else {
		cout << "Parametros no validos" << endl;
		m_actreco = -1;
	}
}
int CActv::getActRecoDes()
{
	return m_actreco;
}



