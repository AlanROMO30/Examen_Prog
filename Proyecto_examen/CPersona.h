#pragma once
class CPersona
{

	double m_altura;
	double m_peso;
	int m_edad;
	char m_sexo;
	double m_IMC;

public :
	CPersona(double = 0 , double = 0,int = 0, char = 0,double =0);

	void setEdad(int);
	void setPeso(double);
	void setAltura(double);
	void setSexo(char);
	void setIMC();
	int getEdad();
	double getPeso();
	double getAltura();
	char getSexo();
	double IMC();

};

