#include <iostream>
using namespace std;
#include "CActv.h"
int CActv::CatIMC()
{
	if (m_IMC < 18.5 )
	{
		cout << "IMC BAJO";
		return 1;

	}else if( m_IMC <= 24.9)
		{
		cout << "IMC NORMAL";
		return 2;
	}
	else if (m_IMC <= 29.9)
	{
		return 3;
	}
	else if ( m_IMC <= 34.9)
	{
		return 4;
	}
	else if (m_IMC <= 39.9)
	{
		return 5;
	}
	else if (m_IMC >= 40)
	{
		return 6;
		}
	return -1;
}


