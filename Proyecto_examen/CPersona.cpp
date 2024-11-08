#include "CPersona.h"
#include <iostream>
using namespace std;
#include <cmath>
CPersona::CPersona(double , double , int , char )
{
	int m_edad = 0;
	double m_peso = 0;
	double m_altura = 0;
	char m_sexo = 0;
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
	if (m_altura > 0) {
		return static_cast<float>(m_peso / pow(m_altura, 2));
	}
	else {
		cout << "Error: La altura debe ser mayor que cero." << endl;
		return 0;
	}
}
//hi
//hola :)
