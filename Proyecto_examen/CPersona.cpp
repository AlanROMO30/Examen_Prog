#include "CPersona.h"
#include <iostream>
using namespace std;
CPersona::CPersona(double A, double B, int C, char D,double E)
{
	 m_edad = A;
	 m_peso = B;
	 m_altura = C;
	 m_sexo = D;
	 m_IMC = E;
}


void CPersona::setEdad(int ed)
{
	m_edad = ed;
}
void CPersona::setPeso(double pes)
{
	m_peso = pes;
}
void CPersona::setAltura(double alt)
{
	m_altura = alt;
}
void CPersona::setSexo(char sex)
{
	m_sexo = sex;
}
int CPersona::getEdad()
{
	return m_edad;
}
double CPersona::getPeso()
{
	return m_peso;
}
double CPersona::getAltura()
{
	return m_altura;
}
char CPersona::getSexo()
{
	return m_sexo;
}
void CPersona::setIMC()
{
	if (m_altura > 0) 
	{
		m_IMC = (m_peso / (m_altura * m_altura));
		
	}
	else {
		cout << "Error: La altura debe ser mayor que cero." << endl;
		m_IMC = 0;
	}
}
double CPersona::IMC()
{
	return m_IMC;
}

