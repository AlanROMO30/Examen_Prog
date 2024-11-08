#pragma once
class CPersona
{
private:
	double m_altura;
	double m_peso;
	int m_edad;
	char m_sexo;
public :
	CPersona(double = 0 , double = 0,int = 0, char = 0);

	void setEdad(int);
	void setPeso(double);
	void setAltura(double);
	void setSexo(char);
	int getEdad();
	double getPeso();
	double getAltura();
	char getSexo();
	double IMC();

};

