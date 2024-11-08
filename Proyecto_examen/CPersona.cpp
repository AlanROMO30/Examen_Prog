#include "CPersona.h"
#include <iostream>
using namespace std;
CPersona::CPersona(double A, double B, int C, char D,double E)
{
	int m_edad = A;
	double m_peso = B;
	double m_altura = C;
	char m_sexo = D;
	double m_IMC = E;
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
double CPersona::IMC()
{
	if (m_altura > 0) 
	{
		m_IMC = (m_peso / (m_altura * m_altura));
		return m_IMC;
	}
	else {
		cout << "Error: La altura debe ser mayor que cero." << endl;
		return 0;
	}
}

//hi
//hola :)
