#include <iostream>
using namespace std;
#include "CActv.h"
char CActv::CatIMC()
{
	if (m_IMC < 18.5)
	{
		return 1;
	}else if(m_IMC >= 18.5 && m_IMC <= 24.9)
		{
		return 2;
	}
	else if (m_IMC >= 25 && m_IMC <= 29.9)
	{
		return 3;
	}
	else if (m_IMC >= 30 && m_IMC <= 34.9)
	{
		return 4;
	}
	else if (m_IMC >= 35 && m_IMC <= 39.9)
	{
		return 5;
	}
	else if (m_IMC >= 40)
	{
		return 6;
		}
}
double CActv::calConsumidas()
{

}
double CActv:: CaLrecomendas()
{

}


