#include "CPersona.h"
#include <iostream>
using namespace std;
CPersona::CPersona(double A, double B, int C, char D,double E, int F)
{
	 m_edad = C;
	 m_peso = B;
	 m_altura = A;
	 m_sexo = D;
	 m_IMC = E;
     m_calcIMC = F;
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
void CPersona::setCIMC()
{
    if ((m_IMC < 18.5)&&(m_sexo== 'M' ))
	{
		cout <<  "BAJO";
        m_calcIMC = 1;
    }
    else if (m_IMC <= 24.9) && (m_sexo == 'M') {
		cout << " NORMAL";
        m_calcIMC = 2;
    }
    else if (m_IMC <= 29.9) && (m_sexo == 'M') {
		cout << " SOBREPESO ";
        m_calcIMC = 3;
    }
    else if (m_IMC <= 34.9) && (m_sexo == 'M') {
		cout << " OBESIDAD I ";
        m_calcIMC = 4;
    }
    else if (m_IMC <= 39.9) && (m_sexo == 'M') {
		cout << " OBESIDAD II ";
		m_calcIMC = 5;
    }
    else if (m_IMC >= 40) && (m_sexo == 'M') {
		cout << " OBESIDAD III ";
		m_calcIMC = 6;
    }
    else {
        m_calcIMC = -1; 
    }
  }

int CPersona::setnumIMC()
{
	if ((m_IMC < 18.5) && (m_sexo == 'M'))
	{
		cout << "BAJO";
		m_calcIMC = 1;
	}
	else if (m_IMC <= 24.9) && (m_sexo == 'M') {
		cout << " NORMAL";
		m_calcIMC = 2;
	}
	else if (m_IMC <= 29.9) && (m_sexo == 'M') {
		cout << " SOBREPESO ";
		m_calcIMC = 3;
	}
	else if (m_IMC <= 34.9) && (m_sexo == 'M') {
		cout << " OBESIDAD I ";
		m_calcIMC = 4;
	}
	else if (m_IMC <= 39.9) && (m_sexo == 'M') {
		cout << " OBESIDAD II ";
		m_calcIMC = 5;
	}
	else if (m_IMC >= 40) && (m_sexo == 'M') {
		cout << " OBESIDAD III ";
		m_calcIMC = 6;
	}
	else if ((m_IMC < 18.5) && (m_sexo == 'F'))
	{
		cout << "BAJO";
		m_calcIMC = 1;
	}
	else if (m_IMC <= 24.9) && (m_sexo == 'F') {
		cout << " NORMAL";
		m_calcIMC = 2;
	}
	else if (m_IMC <= 29.9) && (m_sexo == 'F') {
		cout << " SOBREPESO ";
		m_calcIMC = 3;
	}
	else if (m_IMC <= 34.9) && (m_sexo == 'F') {
		cout << " OBESIDAD I ";
		m_calcIMC = 4;
	}
	else if (m_IMC <= 39.9) && (m_sexo == 'F') {
		cout << " OBESIDAD II ";
		m_calcIMC = 5;
	}
	else if (m_IMC >= 40) && (m_sexo == 'F') {
		cout << " OBESIDAD III ";
		m_calcIMC = 6;
	}
	else 
	{
		m_calcIMC = -1;
	}
}

int CPersona::getCIMC() 
{
	return m_calcIMC;
}